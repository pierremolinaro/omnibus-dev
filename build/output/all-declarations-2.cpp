#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-2.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Class for element of '@staticListValueListAST' list                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_staticListValueListAST : public cCollectionElement {
  public : GALGAS_staticListValueListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_staticListValueListAST (const GALGAS_extendStaticListElementListAST & in_mExpressions
                                                      COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_staticListValueListAST (const GALGAS_staticListValueListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_staticListValueListAST::cCollectionElement_staticListValueListAST (const GALGAS_extendStaticListElementListAST & in_mExpressions
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExpressions) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_staticListValueListAST::cCollectionElement_staticListValueListAST (const GALGAS_staticListValueListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mExpressions) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_staticListValueListAST::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_staticListValueListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_staticListValueListAST (mObject.mProperty_mExpressions COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_staticListValueListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExpressions" ":" ;
  mObject.mProperty_mExpressions.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_staticListValueListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_staticListValueListAST * operand = (cCollectionElement_staticListValueListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_staticListValueListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListValueListAST::GALGAS_staticListValueListAST (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListValueListAST::GALGAS_staticListValueListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListValueListAST GALGAS_staticListValueListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_staticListValueListAST  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListValueListAST GALGAS_staticListValueListAST::constructor_listWithValue (const GALGAS_extendStaticListElementListAST & inOperand0
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_staticListValueListAST result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_staticListValueListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_staticListValueListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_staticListValueListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_extendStaticListElementListAST & in_mExpressions
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_staticListValueListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_staticListValueListAST (in_mExpressions COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_staticListValueListAST::addAssign_operation (const GALGAS_extendStaticListElementListAST & inOperand0
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_staticListValueListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_staticListValueListAST::setter_append (GALGAS_staticListValueListAST_2D_element inElement,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_staticListValueListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_staticListValueListAST::setter_insertAtIndex (const GALGAS_extendStaticListElementListAST inOperand0,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_staticListValueListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_staticListValueListAST::setter_removeAtIndex (GALGAS_extendStaticListElementListAST & outOperand0,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_staticListValueListAST * p = (cCollectionElement_staticListValueListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
      outOperand0 = p->mObject.mProperty_mExpressions ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_staticListValueListAST::setter_popFirst (GALGAS_extendStaticListElementListAST & outOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListValueListAST * p = (cCollectionElement_staticListValueListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
    outOperand0 = p->mObject.mProperty_mExpressions ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_staticListValueListAST::setter_popLast (GALGAS_extendStaticListElementListAST & outOperand0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListValueListAST * p = (cCollectionElement_staticListValueListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
    outOperand0 = p->mObject.mProperty_mExpressions ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_staticListValueListAST::method_first (GALGAS_extendStaticListElementListAST & outOperand0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListValueListAST * p = (cCollectionElement_staticListValueListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
    outOperand0 = p->mObject.mProperty_mExpressions ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_staticListValueListAST::method_last (GALGAS_extendStaticListElementListAST & outOperand0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListValueListAST * p = (cCollectionElement_staticListValueListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
    outOperand0 = p->mObject.mProperty_mExpressions ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListValueListAST GALGAS_staticListValueListAST::add_operation (const GALGAS_staticListValueListAST & inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_staticListValueListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListValueListAST GALGAS_staticListValueListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_staticListValueListAST result = GALGAS_staticListValueListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListValueListAST GALGAS_staticListValueListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_staticListValueListAST result = GALGAS_staticListValueListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListValueListAST GALGAS_staticListValueListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_staticListValueListAST result = GALGAS_staticListValueListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_staticListValueListAST::plusAssign_operation (const GALGAS_staticListValueListAST inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extendStaticListElementListAST GALGAS_staticListValueListAST::getter_mExpressionsAtIndex (const GALGAS_uint & inIndex,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListValueListAST * p = (cCollectionElement_staticListValueListAST *) attributes.ptr () ;
  GALGAS_extendStaticListElementListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
    result = p->mObject.mProperty_mExpressions ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_staticListValueListAST::cEnumerator_staticListValueListAST (const GALGAS_staticListValueListAST & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListValueListAST_2D_element cEnumerator_staticListValueListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_staticListValueListAST * p = (const cCollectionElement_staticListValueListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extendStaticListElementListAST cEnumerator_staticListValueListAST::current_mExpressions (LOCATION_ARGS) const {
  const cCollectionElement_staticListValueListAST * p = (const cCollectionElement_staticListValueListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
  return p->mObject.mProperty_mExpressions ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @staticListValueListAST type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticListValueListAST ("staticListValueListAST",
                                               NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_staticListValueListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListValueListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_staticListValueListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticListValueListAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListValueListAST GALGAS_staticListValueListAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_staticListValueListAST result ;
  const GALGAS_staticListValueListAST * p = (const GALGAS_staticListValueListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_staticListValueListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListValueListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Class for element of '@extendStaticListElementListAST' list                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_extendStaticListElementListAST : public cCollectionElement {
  public : GALGAS_extendStaticListElementListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_extendStaticListElementListAST (const GALGAS_extendStaticListExpressionAST & in_mExpression,
                                                              const GALGAS_location & in_mEndOfExpression
                                                              COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_extendStaticListElementListAST (const GALGAS_extendStaticListElementListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_extendStaticListElementListAST::cCollectionElement_extendStaticListElementListAST (const GALGAS_extendStaticListExpressionAST & in_mExpression,
                                                                                                      const GALGAS_location & in_mEndOfExpression
                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExpression, in_mEndOfExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_extendStaticListElementListAST::cCollectionElement_extendStaticListElementListAST (const GALGAS_extendStaticListElementListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mExpression, inElement.mProperty_mEndOfExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_extendStaticListElementListAST::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_extendStaticListElementListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_extendStaticListElementListAST (mObject.mProperty_mExpression, mObject.mProperty_mEndOfExpression COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_extendStaticListElementListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExpression" ":" ;
  mObject.mProperty_mExpression.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfExpression" ":" ;
  mObject.mProperty_mEndOfExpression.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_extendStaticListElementListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_extendStaticListElementListAST * operand = (cCollectionElement_extendStaticListElementListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_extendStaticListElementListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extendStaticListElementListAST::GALGAS_extendStaticListElementListAST (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extendStaticListElementListAST::GALGAS_extendStaticListElementListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extendStaticListElementListAST GALGAS_extendStaticListElementListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_extendStaticListElementListAST  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extendStaticListElementListAST GALGAS_extendStaticListElementListAST::constructor_listWithValue (const GALGAS_extendStaticListExpressionAST & inOperand0,
                                                                                                        const GALGAS_location & inOperand1
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_extendStaticListElementListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_extendStaticListElementListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_extendStaticListElementListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extendStaticListElementListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                       const GALGAS_extendStaticListExpressionAST & in_mExpression,
                                                                       const GALGAS_location & in_mEndOfExpression
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_extendStaticListElementListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_extendStaticListElementListAST (in_mExpression,
                                                                    in_mEndOfExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extendStaticListElementListAST::addAssign_operation (const GALGAS_extendStaticListExpressionAST & inOperand0,
                                                                 const GALGAS_location & inOperand1
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_extendStaticListElementListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extendStaticListElementListAST::setter_append (GALGAS_extendStaticListElementListAST_2D_element inElement,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_extendStaticListElementListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extendStaticListElementListAST::setter_insertAtIndex (const GALGAS_extendStaticListExpressionAST inOperand0,
                                                                  const GALGAS_location inOperand1,
                                                                  const GALGAS_uint inInsertionIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_extendStaticListElementListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extendStaticListElementListAST::setter_removeAtIndex (GALGAS_extendStaticListExpressionAST & outOperand0,
                                                                  GALGAS_location & outOperand1,
                                                                  const GALGAS_uint inRemoveIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_extendStaticListElementListAST * p = (cCollectionElement_extendStaticListElementListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_extendStaticListElementListAST) ;
      outOperand0 = p->mObject.mProperty_mExpression ;
      outOperand1 = p->mObject.mProperty_mEndOfExpression ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extendStaticListElementListAST::setter_popFirst (GALGAS_extendStaticListExpressionAST & outOperand0,
                                                             GALGAS_location & outOperand1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_extendStaticListElementListAST * p = (cCollectionElement_extendStaticListElementListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_extendStaticListElementListAST) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
    outOperand1 = p->mObject.mProperty_mEndOfExpression ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extendStaticListElementListAST::setter_popLast (GALGAS_extendStaticListExpressionAST & outOperand0,
                                                            GALGAS_location & outOperand1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_extendStaticListElementListAST * p = (cCollectionElement_extendStaticListElementListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_extendStaticListElementListAST) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
    outOperand1 = p->mObject.mProperty_mEndOfExpression ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extendStaticListElementListAST::method_first (GALGAS_extendStaticListExpressionAST & outOperand0,
                                                          GALGAS_location & outOperand1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_extendStaticListElementListAST * p = (cCollectionElement_extendStaticListElementListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_extendStaticListElementListAST) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
    outOperand1 = p->mObject.mProperty_mEndOfExpression ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extendStaticListElementListAST::method_last (GALGAS_extendStaticListExpressionAST & outOperand0,
                                                         GALGAS_location & outOperand1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_extendStaticListElementListAST * p = (cCollectionElement_extendStaticListElementListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_extendStaticListElementListAST) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
    outOperand1 = p->mObject.mProperty_mEndOfExpression ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extendStaticListElementListAST GALGAS_extendStaticListElementListAST::add_operation (const GALGAS_extendStaticListElementListAST & inOperand,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_extendStaticListElementListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extendStaticListElementListAST GALGAS_extendStaticListElementListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_extendStaticListElementListAST result = GALGAS_extendStaticListElementListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extendStaticListElementListAST GALGAS_extendStaticListElementListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_extendStaticListElementListAST result = GALGAS_extendStaticListElementListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extendStaticListElementListAST GALGAS_extendStaticListElementListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_extendStaticListElementListAST result = GALGAS_extendStaticListElementListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extendStaticListElementListAST::plusAssign_operation (const GALGAS_extendStaticListElementListAST inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extendStaticListExpressionAST GALGAS_extendStaticListElementListAST::getter_mExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_extendStaticListElementListAST * p = (cCollectionElement_extendStaticListElementListAST *) attributes.ptr () ;
  GALGAS_extendStaticListExpressionAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_extendStaticListElementListAST) ;
    result = p->mObject.mProperty_mExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_extendStaticListElementListAST::getter_mEndOfExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_extendStaticListElementListAST * p = (cCollectionElement_extendStaticListElementListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_extendStaticListElementListAST) ;
    result = p->mObject.mProperty_mEndOfExpression ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_extendStaticListElementListAST::cEnumerator_extendStaticListElementListAST (const GALGAS_extendStaticListElementListAST & inEnumeratedObject,
                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extendStaticListElementListAST_2D_element cEnumerator_extendStaticListElementListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_extendStaticListElementListAST * p = (const cCollectionElement_extendStaticListElementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_extendStaticListElementListAST) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extendStaticListExpressionAST cEnumerator_extendStaticListElementListAST::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_extendStaticListElementListAST * p = (const cCollectionElement_extendStaticListElementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_extendStaticListElementListAST) ;
  return p->mObject.mProperty_mExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cEnumerator_extendStaticListElementListAST::current_mEndOfExpression (LOCATION_ARGS) const {
  const cCollectionElement_extendStaticListElementListAST * p = (const cCollectionElement_extendStaticListElementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_extendStaticListElementListAST) ;
  return p->mObject.mProperty_mEndOfExpression ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @extendStaticListElementListAST type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extendStaticListElementListAST ("extendStaticListElementListAST",
                                                       NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_extendStaticListElementListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendStaticListElementListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_extendStaticListElementListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extendStaticListElementListAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extendStaticListElementListAST GALGAS_extendStaticListElementListAST::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_extendStaticListElementListAST result ;
  const GALGAS_extendStaticListElementListAST * p = (const GALGAS_extendStaticListElementListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extendStaticListElementListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendStaticListElementListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_extendStaticListExpressionAST_expression::cEnumAssociatedValues_extendStaticListExpressionAST_expression (const GALGAS_expressionAST & inAssociatedValue0
                                                                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_extendStaticListExpressionAST_expression::description (C_String & ioString,
                                                                                  const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_extendStaticListExpressionAST_expression::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_extendStaticListExpressionAST_expression * ptr = dynamic_cast<const cEnumAssociatedValues_extendStaticListExpressionAST_expression *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_extendStaticListExpressionAST_function::cEnumAssociatedValues_extendStaticListExpressionAST_function (const GALGAS_lstring & inAssociatedValue0,
                                                                                                                            const GALGAS_routineFormalArgumentListAST & inAssociatedValue1
                                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_extendStaticListExpressionAST_function::description (C_String & ioString,
                                                                                const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_extendStaticListExpressionAST_function::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_extendStaticListExpressionAST_function * ptr = dynamic_cast<const cEnumAssociatedValues_extendStaticListExpressionAST_function *> (inOperand) ;
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

GALGAS_extendStaticListExpressionAST::GALGAS_extendStaticListExpressionAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extendStaticListExpressionAST GALGAS_extendStaticListExpressionAST::constructor_expression (const GALGAS_expressionAST & inAssociatedValue0
                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_extendStaticListExpressionAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_expression ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_extendStaticListExpressionAST_expression (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extendStaticListExpressionAST GALGAS_extendStaticListExpressionAST::constructor_function (const GALGAS_lstring & inAssociatedValue0,
                                                                                                 const GALGAS_routineFormalArgumentListAST & inAssociatedValue1
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_extendStaticListExpressionAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_function ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_extendStaticListExpressionAST_function (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extendStaticListExpressionAST::method_expression (GALGAS_expressionAST & outAssociatedValue0,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_expression) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @extendStaticListExpressionAST expression invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_extendStaticListExpressionAST_expression * ptr = (const cEnumAssociatedValues_extendStaticListExpressionAST_expression *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extendStaticListExpressionAST::method_function (GALGAS_lstring & outAssociatedValue0,
                                                            GALGAS_routineFormalArgumentListAST & outAssociatedValue1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_function) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @extendStaticListExpressionAST function invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_extendStaticListExpressionAST_function * ptr = (const cEnumAssociatedValues_extendStaticListExpressionAST_function *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_extendStaticListExpressionAST [3] = {
  "(not built)",
  "expression",
  "function"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_extendStaticListExpressionAST::getter_isExpression (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_expression == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_extendStaticListExpressionAST::getter_isFunction (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_function == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extendStaticListExpressionAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<enum @extendStaticListExpressionAST: " << gEnumNameArrayFor_extendStaticListExpressionAST [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_extendStaticListExpressionAST::objectCompare (const GALGAS_extendStaticListExpressionAST & inOperand) const {
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
//                                         @extendStaticListExpressionAST type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extendStaticListExpressionAST ("extendStaticListExpressionAST",
                                                      NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_extendStaticListExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendStaticListExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_extendStaticListExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extendStaticListExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extendStaticListExpressionAST GALGAS_extendStaticListExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_extendStaticListExpressionAST result ;
  const GALGAS_extendStaticListExpressionAST * p = (const GALGAS_extendStaticListExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extendStaticListExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendStaticListExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Class for element of '@extendStaticArrayDeclarationAST' list                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_extendStaticArrayDeclarationAST : public cCollectionElement {
  public : GALGAS_extendStaticArrayDeclarationAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_extendStaticArrayDeclarationAST (const GALGAS_lstring & in_mStaticListName,
                                                               const GALGAS_extendStaticListElementListAST & in_mExpressions
                                                               COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_extendStaticArrayDeclarationAST (const GALGAS_extendStaticArrayDeclarationAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_extendStaticArrayDeclarationAST::cCollectionElement_extendStaticArrayDeclarationAST (const GALGAS_lstring & in_mStaticListName,
                                                                                                        const GALGAS_extendStaticListElementListAST & in_mExpressions
                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mStaticListName, in_mExpressions) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_extendStaticArrayDeclarationAST::cCollectionElement_extendStaticArrayDeclarationAST (const GALGAS_extendStaticArrayDeclarationAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mStaticListName, inElement.mProperty_mExpressions) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_extendStaticArrayDeclarationAST::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_extendStaticArrayDeclarationAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_extendStaticArrayDeclarationAST (mObject.mProperty_mStaticListName, mObject.mProperty_mExpressions COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_extendStaticArrayDeclarationAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStaticListName" ":" ;
  mObject.mProperty_mStaticListName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExpressions" ":" ;
  mObject.mProperty_mExpressions.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_extendStaticArrayDeclarationAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_extendStaticArrayDeclarationAST * operand = (cCollectionElement_extendStaticArrayDeclarationAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_extendStaticArrayDeclarationAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extendStaticArrayDeclarationAST::GALGAS_extendStaticArrayDeclarationAST (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extendStaticArrayDeclarationAST::GALGAS_extendStaticArrayDeclarationAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extendStaticArrayDeclarationAST GALGAS_extendStaticArrayDeclarationAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_extendStaticArrayDeclarationAST  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extendStaticArrayDeclarationAST GALGAS_extendStaticArrayDeclarationAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_extendStaticListElementListAST & inOperand1
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_extendStaticArrayDeclarationAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_extendStaticArrayDeclarationAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_extendStaticArrayDeclarationAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extendStaticArrayDeclarationAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                        const GALGAS_lstring & in_mStaticListName,
                                                                        const GALGAS_extendStaticListElementListAST & in_mExpressions
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_extendStaticArrayDeclarationAST * p = NULL ;
  macroMyNew (p, cCollectionElement_extendStaticArrayDeclarationAST (in_mStaticListName,
                                                                     in_mExpressions COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extendStaticArrayDeclarationAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_extendStaticListElementListAST & inOperand1
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_extendStaticArrayDeclarationAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extendStaticArrayDeclarationAST::setter_append (GALGAS_extendStaticArrayDeclarationAST_2D_element inElement,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_extendStaticArrayDeclarationAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extendStaticArrayDeclarationAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                   const GALGAS_extendStaticListElementListAST inOperand1,
                                                                   const GALGAS_uint inInsertionIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_extendStaticArrayDeclarationAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extendStaticArrayDeclarationAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                   GALGAS_extendStaticListElementListAST & outOperand1,
                                                                   const GALGAS_uint inRemoveIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_extendStaticArrayDeclarationAST * p = (cCollectionElement_extendStaticArrayDeclarationAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_extendStaticArrayDeclarationAST) ;
      outOperand0 = p->mObject.mProperty_mStaticListName ;
      outOperand1 = p->mObject.mProperty_mExpressions ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extendStaticArrayDeclarationAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                              GALGAS_extendStaticListElementListAST & outOperand1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_extendStaticArrayDeclarationAST * p = (cCollectionElement_extendStaticArrayDeclarationAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_extendStaticArrayDeclarationAST) ;
    outOperand0 = p->mObject.mProperty_mStaticListName ;
    outOperand1 = p->mObject.mProperty_mExpressions ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extendStaticArrayDeclarationAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                             GALGAS_extendStaticListElementListAST & outOperand1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_extendStaticArrayDeclarationAST * p = (cCollectionElement_extendStaticArrayDeclarationAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_extendStaticArrayDeclarationAST) ;
    outOperand0 = p->mObject.mProperty_mStaticListName ;
    outOperand1 = p->mObject.mProperty_mExpressions ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extendStaticArrayDeclarationAST::method_first (GALGAS_lstring & outOperand0,
                                                           GALGAS_extendStaticListElementListAST & outOperand1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_extendStaticArrayDeclarationAST * p = (cCollectionElement_extendStaticArrayDeclarationAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_extendStaticArrayDeclarationAST) ;
    outOperand0 = p->mObject.mProperty_mStaticListName ;
    outOperand1 = p->mObject.mProperty_mExpressions ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extendStaticArrayDeclarationAST::method_last (GALGAS_lstring & outOperand0,
                                                          GALGAS_extendStaticListElementListAST & outOperand1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_extendStaticArrayDeclarationAST * p = (cCollectionElement_extendStaticArrayDeclarationAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_extendStaticArrayDeclarationAST) ;
    outOperand0 = p->mObject.mProperty_mStaticListName ;
    outOperand1 = p->mObject.mProperty_mExpressions ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extendStaticArrayDeclarationAST GALGAS_extendStaticArrayDeclarationAST::add_operation (const GALGAS_extendStaticArrayDeclarationAST & inOperand,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_extendStaticArrayDeclarationAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extendStaticArrayDeclarationAST GALGAS_extendStaticArrayDeclarationAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_extendStaticArrayDeclarationAST result = GALGAS_extendStaticArrayDeclarationAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extendStaticArrayDeclarationAST GALGAS_extendStaticArrayDeclarationAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_extendStaticArrayDeclarationAST result = GALGAS_extendStaticArrayDeclarationAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extendStaticArrayDeclarationAST GALGAS_extendStaticArrayDeclarationAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_extendStaticArrayDeclarationAST result = GALGAS_extendStaticArrayDeclarationAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extendStaticArrayDeclarationAST::plusAssign_operation (const GALGAS_extendStaticArrayDeclarationAST inOperand,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_extendStaticArrayDeclarationAST::getter_mStaticListNameAtIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_extendStaticArrayDeclarationAST * p = (cCollectionElement_extendStaticArrayDeclarationAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_extendStaticArrayDeclarationAST) ;
    result = p->mObject.mProperty_mStaticListName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extendStaticListElementListAST GALGAS_extendStaticArrayDeclarationAST::getter_mExpressionsAtIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_extendStaticArrayDeclarationAST * p = (cCollectionElement_extendStaticArrayDeclarationAST *) attributes.ptr () ;
  GALGAS_extendStaticListElementListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_extendStaticArrayDeclarationAST) ;
    result = p->mObject.mProperty_mExpressions ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_extendStaticArrayDeclarationAST::cEnumerator_extendStaticArrayDeclarationAST (const GALGAS_extendStaticArrayDeclarationAST & inEnumeratedObject,
                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extendStaticArrayDeclarationAST_2D_element cEnumerator_extendStaticArrayDeclarationAST::current (LOCATION_ARGS) const {
  const cCollectionElement_extendStaticArrayDeclarationAST * p = (const cCollectionElement_extendStaticArrayDeclarationAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_extendStaticArrayDeclarationAST) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_extendStaticArrayDeclarationAST::current_mStaticListName (LOCATION_ARGS) const {
  const cCollectionElement_extendStaticArrayDeclarationAST * p = (const cCollectionElement_extendStaticArrayDeclarationAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_extendStaticArrayDeclarationAST) ;
  return p->mObject.mProperty_mStaticListName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extendStaticListElementListAST cEnumerator_extendStaticArrayDeclarationAST::current_mExpressions (LOCATION_ARGS) const {
  const cCollectionElement_extendStaticArrayDeclarationAST * p = (const cCollectionElement_extendStaticArrayDeclarationAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_extendStaticArrayDeclarationAST) ;
  return p->mObject.mProperty_mExpressions ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @extendStaticArrayDeclarationAST type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extendStaticArrayDeclarationAST ("extendStaticArrayDeclarationAST",
                                                        NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_extendStaticArrayDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendStaticArrayDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_extendStaticArrayDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extendStaticArrayDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extendStaticArrayDeclarationAST GALGAS_extendStaticArrayDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_extendStaticArrayDeclarationAST result ;
  const GALGAS_extendStaticArrayDeclarationAST * p = (const GALGAS_extendStaticArrayDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extendStaticArrayDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendStaticArrayDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_staticlistMap::cMapElement_staticlistMap (const GALGAS_lstring & inKey,
                                                      const GALGAS_propertyList & in_mStaticListPropertyList
                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mStaticListPropertyList (in_mStaticListPropertyList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_staticlistMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mStaticListPropertyList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_staticlistMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_staticlistMap (mProperty_lkey, mProperty_mStaticListPropertyList COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_staticlistMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStaticListPropertyList" ":" ;
  mProperty_mStaticListPropertyList.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_staticlistMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_staticlistMap * operand = (cMapElement_staticlistMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mStaticListPropertyList.objectCompare (operand->mProperty_mStaticListPropertyList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticlistMap::GALGAS_staticlistMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticlistMap::GALGAS_staticlistMap (const GALGAS_staticlistMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticlistMap & GALGAS_staticlistMap::operator = (const GALGAS_staticlistMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticlistMap GALGAS_staticlistMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_staticlistMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticlistMap GALGAS_staticlistMap::constructor_mapWithMapToOverride (const GALGAS_staticlistMap & inMapToOverride
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_staticlistMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticlistMap GALGAS_staticlistMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_staticlistMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_staticlistMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                const GALGAS_propertyList & inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_staticlistMap * p = NULL ;
  macroMyNew (p, cMapElement_staticlistMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@staticlistMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_staticlistMap::setter_insertKey (GALGAS_lstring inKey,
                                             GALGAS_propertyList inArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_staticlistMap * p = NULL ;
  macroMyNew (p, cMapElement_staticlistMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "static list '%K' is already defined" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyList GALGAS_staticlistMap::getter_mStaticListPropertyListForKey (const GALGAS_string & inKey,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_staticlistMap * p = (const cMapElement_staticlistMap *) attributes ;
  GALGAS_propertyList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_staticlistMap) ;
    result = p->mProperty_mStaticListPropertyList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_staticlistMap::setter_setMStaticListPropertyListForKey (GALGAS_propertyList inAttributeValue,
                                                                    GALGAS_string inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_staticlistMap * p = (cMapElement_staticlistMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_staticlistMap) ;
    p->mProperty_mStaticListPropertyList = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_staticlistMap * GALGAS_staticlistMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                     const GALGAS_string & inKey
                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_staticlistMap * result = (cMapElement_staticlistMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_staticlistMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_staticlistMap::cEnumerator_staticlistMap (const GALGAS_staticlistMap & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticlistMap_2D_element cEnumerator_staticlistMap::current (LOCATION_ARGS) const {
  const cMapElement_staticlistMap * p = (const cMapElement_staticlistMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_staticlistMap) ;
  return GALGAS_staticlistMap_2D_element (p->mProperty_lkey, p->mProperty_mStaticListPropertyList) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_staticlistMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyList cEnumerator_staticlistMap::current_mStaticListPropertyList (LOCATION_ARGS) const {
  const cMapElement_staticlistMap * p = (const cMapElement_staticlistMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_staticlistMap) ;
  return p->mProperty_mStaticListPropertyList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                 @staticlistMap type                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticlistMap ("staticlistMap",
                                      NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_staticlistMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticlistMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_staticlistMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticlistMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticlistMap GALGAS_staticlistMap::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_staticlistMap result ;
  const GALGAS_staticlistMap * p = (const GALGAS_staticlistMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_staticlistMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticlistMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_staticListInitializationMap::cMapElement_staticListInitializationMap (const GALGAS_lstring & inKey,
                                                                                  const GALGAS_stringlist & in_mInitializationList
                                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mInitializationList (in_mInitializationList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_staticListInitializationMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInitializationList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_staticListInitializationMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_staticListInitializationMap (mProperty_lkey, mProperty_mInitializationList COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_staticListInitializationMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInitializationList" ":" ;
  mProperty_mInitializationList.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_staticListInitializationMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_staticListInitializationMap * operand = (cMapElement_staticListInitializationMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mInitializationList.objectCompare (operand->mProperty_mInitializationList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListInitializationMap::GALGAS_staticListInitializationMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListInitializationMap::GALGAS_staticListInitializationMap (const GALGAS_staticListInitializationMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListInitializationMap & GALGAS_staticListInitializationMap::operator = (const GALGAS_staticListInitializationMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListInitializationMap GALGAS_staticListInitializationMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_staticListInitializationMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListInitializationMap GALGAS_staticListInitializationMap::constructor_mapWithMapToOverride (const GALGAS_staticListInitializationMap & inMapToOverride
                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_staticListInitializationMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListInitializationMap GALGAS_staticListInitializationMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_staticListInitializationMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_staticListInitializationMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                              const GALGAS_stringlist & inArgument0,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cMapElement_staticListInitializationMap * p = NULL ;
  macroMyNew (p, cMapElement_staticListInitializationMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@staticListInitializationMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_staticListInitializationMap::setter_insertKey (GALGAS_lstring inKey,
                                                           GALGAS_stringlist inArgument0,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cMapElement_staticListInitializationMap * p = NULL ;
  macroMyNew (p, cMapElement_staticListInitializationMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "static list '%K' is already defined" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringlist GALGAS_staticListInitializationMap::getter_mInitializationListForKey (const GALGAS_string & inKey,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_staticListInitializationMap * p = (const cMapElement_staticListInitializationMap *) attributes ;
  GALGAS_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_staticListInitializationMap) ;
    result = p->mProperty_mInitializationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_staticListInitializationMap::setter_setMInitializationListForKey (GALGAS_stringlist inAttributeValue,
                                                                              GALGAS_string inKey,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_staticListInitializationMap * p = (cMapElement_staticListInitializationMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_staticListInitializationMap) ;
    p->mProperty_mInitializationList = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_staticListInitializationMap * GALGAS_staticListInitializationMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                 const GALGAS_string & inKey
                                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_staticListInitializationMap * result = (cMapElement_staticListInitializationMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_staticListInitializationMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_staticListInitializationMap::cEnumerator_staticListInitializationMap (const GALGAS_staticListInitializationMap & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListInitializationMap_2D_element cEnumerator_staticListInitializationMap::current (LOCATION_ARGS) const {
  const cMapElement_staticListInitializationMap * p = (const cMapElement_staticListInitializationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_staticListInitializationMap) ;
  return GALGAS_staticListInitializationMap_2D_element (p->mProperty_lkey, p->mProperty_mInitializationList) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_staticListInitializationMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringlist cEnumerator_staticListInitializationMap::current_mInitializationList (LOCATION_ARGS) const {
  const cMapElement_staticListInitializationMap * p = (const cMapElement_staticListInitializationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_staticListInitializationMap) ;
  return p->mProperty_mInitializationList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @staticListInitializationMap type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticListInitializationMap ("staticListInitializationMap",
                                                    NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_staticListInitializationMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListInitializationMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_staticListInitializationMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticListInitializationMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListInitializationMap GALGAS_staticListInitializationMap::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_staticListInitializationMap result ;
  const GALGAS_staticListInitializationMap * p = (const GALGAS_staticListInitializationMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_staticListInitializationMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListInitializationMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_staticListInvokedFunctionSetMap::cMapElement_staticListInvokedFunctionSetMap (const GALGAS_lstring & inKey,
                                                                                          const GALGAS_stringset & in_mInvokedFunctionSet
                                                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mInvokedFunctionSet (in_mInvokedFunctionSet) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_staticListInvokedFunctionSetMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInvokedFunctionSet.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_staticListInvokedFunctionSetMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_staticListInvokedFunctionSetMap (mProperty_lkey, mProperty_mInvokedFunctionSet COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_staticListInvokedFunctionSetMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInvokedFunctionSet" ":" ;
  mProperty_mInvokedFunctionSet.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_staticListInvokedFunctionSetMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_staticListInvokedFunctionSetMap * operand = (cMapElement_staticListInvokedFunctionSetMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mInvokedFunctionSet.objectCompare (operand->mProperty_mInvokedFunctionSet) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListInvokedFunctionSetMap::GALGAS_staticListInvokedFunctionSetMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListInvokedFunctionSetMap::GALGAS_staticListInvokedFunctionSetMap (const GALGAS_staticListInvokedFunctionSetMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListInvokedFunctionSetMap & GALGAS_staticListInvokedFunctionSetMap::operator = (const GALGAS_staticListInvokedFunctionSetMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListInvokedFunctionSetMap GALGAS_staticListInvokedFunctionSetMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_staticListInvokedFunctionSetMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListInvokedFunctionSetMap GALGAS_staticListInvokedFunctionSetMap::constructor_mapWithMapToOverride (const GALGAS_staticListInvokedFunctionSetMap & inMapToOverride
                                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_staticListInvokedFunctionSetMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListInvokedFunctionSetMap GALGAS_staticListInvokedFunctionSetMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_staticListInvokedFunctionSetMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_staticListInvokedFunctionSetMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                                  const GALGAS_stringset & inArgument0,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cMapElement_staticListInvokedFunctionSetMap * p = NULL ;
  macroMyNew (p, cMapElement_staticListInvokedFunctionSetMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@staticListInvokedFunctionSetMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_staticListInvokedFunctionSetMap::setter_insertKey (GALGAS_lstring inKey,
                                                               GALGAS_stringset inArgument0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cMapElement_staticListInvokedFunctionSetMap * p = NULL ;
  macroMyNew (p, cMapElement_staticListInvokedFunctionSetMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "INTERNAL ERROR" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_staticListInvokedFunctionSetMap_searchKey = "INTERNAL ERROR" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_staticListInvokedFunctionSetMap::method_searchKey (GALGAS_lstring inKey,
                                                               GALGAS_stringset & outArgument0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cMapElement_staticListInvokedFunctionSetMap * p = (const cMapElement_staticListInvokedFunctionSetMap *) performSearch (inKey,
                                                                                                                               inCompiler,
                                                                                                                               kSearchErrorMessage_staticListInvokedFunctionSetMap_searchKey
                                                                                                                               COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_staticListInvokedFunctionSetMap) ;
    outArgument0 = p->mProperty_mInvokedFunctionSet ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringset GALGAS_staticListInvokedFunctionSetMap::getter_mInvokedFunctionSetForKey (const GALGAS_string & inKey,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_staticListInvokedFunctionSetMap * p = (const cMapElement_staticListInvokedFunctionSetMap *) attributes ;
  GALGAS_stringset result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_staticListInvokedFunctionSetMap) ;
    result = p->mProperty_mInvokedFunctionSet ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_staticListInvokedFunctionSetMap::setter_setMInvokedFunctionSetForKey (GALGAS_stringset inAttributeValue,
                                                                                  GALGAS_string inKey,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_staticListInvokedFunctionSetMap * p = (cMapElement_staticListInvokedFunctionSetMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_staticListInvokedFunctionSetMap) ;
    p->mProperty_mInvokedFunctionSet = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_staticListInvokedFunctionSetMap * GALGAS_staticListInvokedFunctionSetMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                         const GALGAS_string & inKey
                                                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_staticListInvokedFunctionSetMap * result = (cMapElement_staticListInvokedFunctionSetMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_staticListInvokedFunctionSetMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_staticListInvokedFunctionSetMap::cEnumerator_staticListInvokedFunctionSetMap (const GALGAS_staticListInvokedFunctionSetMap & inEnumeratedObject,
                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListInvokedFunctionSetMap_2D_element cEnumerator_staticListInvokedFunctionSetMap::current (LOCATION_ARGS) const {
  const cMapElement_staticListInvokedFunctionSetMap * p = (const cMapElement_staticListInvokedFunctionSetMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_staticListInvokedFunctionSetMap) ;
  return GALGAS_staticListInvokedFunctionSetMap_2D_element (p->mProperty_lkey, p->mProperty_mInvokedFunctionSet) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_staticListInvokedFunctionSetMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringset cEnumerator_staticListInvokedFunctionSetMap::current_mInvokedFunctionSet (LOCATION_ARGS) const {
  const cMapElement_staticListInvokedFunctionSetMap * p = (const cMapElement_staticListInvokedFunctionSetMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_staticListInvokedFunctionSetMap) ;
  return p->mProperty_mInvokedFunctionSet ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @staticListInvokedFunctionSetMap type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticListInvokedFunctionSetMap ("staticListInvokedFunctionSetMap",
                                                        NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_staticListInvokedFunctionSetMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListInvokedFunctionSetMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_staticListInvokedFunctionSetMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticListInvokedFunctionSetMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListInvokedFunctionSetMap GALGAS_staticListInvokedFunctionSetMap::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_staticListInvokedFunctionSetMap result ;
  const GALGAS_staticListInvokedFunctionSetMap * p = (const GALGAS_staticListInvokedFunctionSetMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_staticListInvokedFunctionSetMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListInvokedFunctionSetMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Extension method '@staticListInitializationMap generateLLVMForStaticLists'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_generateLLVMForStaticLists (const GALGAS_staticListInitializationMap inObject,
                                                 const GALGAS_staticListInvokedFunctionSetMap constinArgument_inUsefulStaticArrayMap,
                                                 GALGAS_string & ioArgument_ioLLVMcode,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_first_23137 = GALGAS_bool (true) ;
  const GALGAS_staticListInitializationMap temp_0 = inObject ;
  cEnumerator_staticListInitializationMap enumerator_23173 (temp_0, kENUMERATION_UP) ;
  while (enumerator_23173.hasCurrentObject ()) {
    const enumGalgasBool test_1 = constinArgument_inUsefulStaticArrayMap.getter_hasKey (enumerator_23173.current_lkey (HERE).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 543)) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 543)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const enumGalgasBool test_2 = var_first_23137.boolEnum () ;
      if (kBoolTrue == test_2) {
        var_first_23137 = GALGAS_bool (false) ;
        ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Static Arraies"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 546)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 546)) ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForGlobalVariable (enumerator_23173.current_lkey (HERE).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 548)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 548)).add_operation (GALGAS_string (" = private unnamed_addr constant ["), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 548)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 548)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(enumerator_23173.current_mInitializationList (HERE).getter_length (SOURCE_FILE ("declaration-static-list.galgas", 549)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 549)).add_operation (GALGAS_string (" x %"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 549)).add_operation (function_llvmNameForStaticListElementType (enumerator_23173.current_lkey (HERE).getter_string (HERE).getter_nowhere (SOURCE_FILE ("declaration-static-list.galgas", 549)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 549)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 549)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 549)).add_operation (GALGAS_string ("] [\n"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 549)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 549)) ;
      cEnumerator_stringlist enumerator_23576 (enumerator_23173.current_mInitializationList (HERE), kENUMERATION_UP) ;
      while (enumerator_23576.hasCurrentObject ()) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (function_llvmNameForStaticListElementType (enumerator_23173.current_lkey (HERE).getter_string (HERE).getter_nowhere (SOURCE_FILE ("declaration-static-list.galgas", 552)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 552)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 552)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 552)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 552)).add_operation (enumerator_23576.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 552)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 552)) ;
        if (enumerator_23576.hasNextObject ()) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 554)) ;
        }
        enumerator_23576.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"
        "]\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 556)) ;
    }
    enumerator_23173.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Class for element of '@taskListAST' list                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_taskListAST : public cCollectionElement {
  public : GALGAS_taskListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_taskListAST (const GALGAS_lstring & in_mTaskName,
                                           const GALGAS_lstringlist & in_mLowerPriorityTaskList,
                                           const GALGAS_lbigint & in_mStackSize,
                                           const GALGAS_structurePropertyListAST & in_mVarList,
                                           const GALGAS_functionDeclarationListAST & in_mTaskFunctionList,
                                           const GALGAS_taskSetupListAST & in_mTaskSetupListAST,
                                           const GALGAS_taskSetupListAST & in_mTaskActivateListAST,
                                           const GALGAS_taskSetupListAST & in_mTaskDeactivateListAST,
                                           const GALGAS_syncInstructionBranchListAST & in_mGuardedCommandList,
                                           const GALGAS_location & in_mEndOfTaskDeclaration,
                                           const GALGAS_bool & in_mActivate
                                           COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_taskListAST (const GALGAS_taskListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_taskListAST::cCollectionElement_taskListAST (const GALGAS_lstring & in_mTaskName,
                                                                const GALGAS_lstringlist & in_mLowerPriorityTaskList,
                                                                const GALGAS_lbigint & in_mStackSize,
                                                                const GALGAS_structurePropertyListAST & in_mVarList,
                                                                const GALGAS_functionDeclarationListAST & in_mTaskFunctionList,
                                                                const GALGAS_taskSetupListAST & in_mTaskSetupListAST,
                                                                const GALGAS_taskSetupListAST & in_mTaskActivateListAST,
                                                                const GALGAS_taskSetupListAST & in_mTaskDeactivateListAST,
                                                                const GALGAS_syncInstructionBranchListAST & in_mGuardedCommandList,
                                                                const GALGAS_location & in_mEndOfTaskDeclaration,
                                                                const GALGAS_bool & in_mActivate
                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTaskName, in_mLowerPriorityTaskList, in_mStackSize, in_mVarList, in_mTaskFunctionList, in_mTaskSetupListAST, in_mTaskActivateListAST, in_mTaskDeactivateListAST, in_mGuardedCommandList, in_mEndOfTaskDeclaration, in_mActivate) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_taskListAST::cCollectionElement_taskListAST (const GALGAS_taskListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTaskName, inElement.mProperty_mLowerPriorityTaskList, inElement.mProperty_mStackSize, inElement.mProperty_mVarList, inElement.mProperty_mTaskFunctionList, inElement.mProperty_mTaskSetupListAST, inElement.mProperty_mTaskActivateListAST, inElement.mProperty_mTaskDeactivateListAST, inElement.mProperty_mGuardedCommandList, inElement.mProperty_mEndOfTaskDeclaration, inElement.mProperty_mActivate) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_taskListAST::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_taskListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_taskListAST (mObject.mProperty_mTaskName, mObject.mProperty_mLowerPriorityTaskList, mObject.mProperty_mStackSize, mObject.mProperty_mVarList, mObject.mProperty_mTaskFunctionList, mObject.mProperty_mTaskSetupListAST, mObject.mProperty_mTaskActivateListAST, mObject.mProperty_mTaskDeactivateListAST, mObject.mProperty_mGuardedCommandList, mObject.mProperty_mEndOfTaskDeclaration, mObject.mProperty_mActivate COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_taskListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskName" ":" ;
  mObject.mProperty_mTaskName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLowerPriorityTaskList" ":" ;
  mObject.mProperty_mLowerPriorityTaskList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStackSize" ":" ;
  mObject.mProperty_mStackSize.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mVarList" ":" ;
  mObject.mProperty_mVarList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskFunctionList" ":" ;
  mObject.mProperty_mTaskFunctionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskSetupListAST" ":" ;
  mObject.mProperty_mTaskSetupListAST.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskActivateListAST" ":" ;
  mObject.mProperty_mTaskActivateListAST.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskDeactivateListAST" ":" ;
  mObject.mProperty_mTaskDeactivateListAST.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGuardedCommandList" ":" ;
  mObject.mProperty_mGuardedCommandList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfTaskDeclaration" ":" ;
  mObject.mProperty_mEndOfTaskDeclaration.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActivate" ":" ;
  mObject.mProperty_mActivate.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_taskListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_taskListAST * operand = (cCollectionElement_taskListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_taskListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskListAST::GALGAS_taskListAST (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskListAST::GALGAS_taskListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskListAST GALGAS_taskListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_taskListAST  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskListAST GALGAS_taskListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_lstringlist & inOperand1,
                                                                  const GALGAS_lbigint & inOperand2,
                                                                  const GALGAS_structurePropertyListAST & inOperand3,
                                                                  const GALGAS_functionDeclarationListAST & inOperand4,
                                                                  const GALGAS_taskSetupListAST & inOperand5,
                                                                  const GALGAS_taskSetupListAST & inOperand6,
                                                                  const GALGAS_taskSetupListAST & inOperand7,
                                                                  const GALGAS_syncInstructionBranchListAST & inOperand8,
                                                                  const GALGAS_location & inOperand9,
                                                                  const GALGAS_bool & inOperand10
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_taskListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
    result = GALGAS_taskListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_taskListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                    const GALGAS_lstring & in_mTaskName,
                                                    const GALGAS_lstringlist & in_mLowerPriorityTaskList,
                                                    const GALGAS_lbigint & in_mStackSize,
                                                    const GALGAS_structurePropertyListAST & in_mVarList,
                                                    const GALGAS_functionDeclarationListAST & in_mTaskFunctionList,
                                                    const GALGAS_taskSetupListAST & in_mTaskSetupListAST,
                                                    const GALGAS_taskSetupListAST & in_mTaskActivateListAST,
                                                    const GALGAS_taskSetupListAST & in_mTaskDeactivateListAST,
                                                    const GALGAS_syncInstructionBranchListAST & in_mGuardedCommandList,
                                                    const GALGAS_location & in_mEndOfTaskDeclaration,
                                                    const GALGAS_bool & in_mActivate
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_taskListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_taskListAST (in_mTaskName,
                                                 in_mLowerPriorityTaskList,
                                                 in_mStackSize,
                                                 in_mVarList,
                                                 in_mTaskFunctionList,
                                                 in_mTaskSetupListAST,
                                                 in_mTaskActivateListAST,
                                                 in_mTaskDeactivateListAST,
                                                 in_mGuardedCommandList,
                                                 in_mEndOfTaskDeclaration,
                                                 in_mActivate COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                              const GALGAS_lstringlist & inOperand1,
                                              const GALGAS_lbigint & inOperand2,
                                              const GALGAS_structurePropertyListAST & inOperand3,
                                              const GALGAS_functionDeclarationListAST & inOperand4,
                                              const GALGAS_taskSetupListAST & inOperand5,
                                              const GALGAS_taskSetupListAST & inOperand6,
                                              const GALGAS_taskSetupListAST & inOperand7,
                                              const GALGAS_syncInstructionBranchListAST & inOperand8,
                                              const GALGAS_location & inOperand9,
                                              const GALGAS_bool & inOperand10
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_taskListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskListAST::setter_append (GALGAS_taskListAST_2D_element inElement,
                                        C_Compiler * /* inCompiler */
                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_taskListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                               const GALGAS_lstringlist inOperand1,
                                               const GALGAS_lbigint inOperand2,
                                               const GALGAS_structurePropertyListAST inOperand3,
                                               const GALGAS_functionDeclarationListAST inOperand4,
                                               const GALGAS_taskSetupListAST inOperand5,
                                               const GALGAS_taskSetupListAST inOperand6,
                                               const GALGAS_taskSetupListAST inOperand7,
                                               const GALGAS_syncInstructionBranchListAST inOperand8,
                                               const GALGAS_location inOperand9,
                                               const GALGAS_bool inOperand10,
                                               const GALGAS_uint inInsertionIndex,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_taskListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                               GALGAS_lstringlist & outOperand1,
                                               GALGAS_lbigint & outOperand2,
                                               GALGAS_structurePropertyListAST & outOperand3,
                                               GALGAS_functionDeclarationListAST & outOperand4,
                                               GALGAS_taskSetupListAST & outOperand5,
                                               GALGAS_taskSetupListAST & outOperand6,
                                               GALGAS_taskSetupListAST & outOperand7,
                                               GALGAS_syncInstructionBranchListAST & outOperand8,
                                               GALGAS_location & outOperand9,
                                               GALGAS_bool & outOperand10,
                                               const GALGAS_uint inRemoveIndex,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
      outOperand6.drop () ;
      outOperand7.drop () ;
      outOperand8.drop () ;
      outOperand9.drop () ;
      outOperand10.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_taskListAST) ;
      outOperand0 = p->mObject.mProperty_mTaskName ;
      outOperand1 = p->mObject.mProperty_mLowerPriorityTaskList ;
      outOperand2 = p->mObject.mProperty_mStackSize ;
      outOperand3 = p->mObject.mProperty_mVarList ;
      outOperand4 = p->mObject.mProperty_mTaskFunctionList ;
      outOperand5 = p->mObject.mProperty_mTaskSetupListAST ;
      outOperand6 = p->mObject.mProperty_mTaskActivateListAST ;
      outOperand7 = p->mObject.mProperty_mTaskDeactivateListAST ;
      outOperand8 = p->mObject.mProperty_mGuardedCommandList ;
      outOperand9 = p->mObject.mProperty_mEndOfTaskDeclaration ;
      outOperand10 = p->mObject.mProperty_mActivate ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                          GALGAS_lstringlist & outOperand1,
                                          GALGAS_lbigint & outOperand2,
                                          GALGAS_structurePropertyListAST & outOperand3,
                                          GALGAS_functionDeclarationListAST & outOperand4,
                                          GALGAS_taskSetupListAST & outOperand5,
                                          GALGAS_taskSetupListAST & outOperand6,
                                          GALGAS_taskSetupListAST & outOperand7,
                                          GALGAS_syncInstructionBranchListAST & outOperand8,
                                          GALGAS_location & outOperand9,
                                          GALGAS_bool & outOperand10,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mLowerPriorityTaskList ;
    outOperand2 = p->mObject.mProperty_mStackSize ;
    outOperand3 = p->mObject.mProperty_mVarList ;
    outOperand4 = p->mObject.mProperty_mTaskFunctionList ;
    outOperand5 = p->mObject.mProperty_mTaskSetupListAST ;
    outOperand6 = p->mObject.mProperty_mTaskActivateListAST ;
    outOperand7 = p->mObject.mProperty_mTaskDeactivateListAST ;
    outOperand8 = p->mObject.mProperty_mGuardedCommandList ;
    outOperand9 = p->mObject.mProperty_mEndOfTaskDeclaration ;
    outOperand10 = p->mObject.mProperty_mActivate ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                         GALGAS_lstringlist & outOperand1,
                                         GALGAS_lbigint & outOperand2,
                                         GALGAS_structurePropertyListAST & outOperand3,
                                         GALGAS_functionDeclarationListAST & outOperand4,
                                         GALGAS_taskSetupListAST & outOperand5,
                                         GALGAS_taskSetupListAST & outOperand6,
                                         GALGAS_taskSetupListAST & outOperand7,
                                         GALGAS_syncInstructionBranchListAST & outOperand8,
                                         GALGAS_location & outOperand9,
                                         GALGAS_bool & outOperand10,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mLowerPriorityTaskList ;
    outOperand2 = p->mObject.mProperty_mStackSize ;
    outOperand3 = p->mObject.mProperty_mVarList ;
    outOperand4 = p->mObject.mProperty_mTaskFunctionList ;
    outOperand5 = p->mObject.mProperty_mTaskSetupListAST ;
    outOperand6 = p->mObject.mProperty_mTaskActivateListAST ;
    outOperand7 = p->mObject.mProperty_mTaskDeactivateListAST ;
    outOperand8 = p->mObject.mProperty_mGuardedCommandList ;
    outOperand9 = p->mObject.mProperty_mEndOfTaskDeclaration ;
    outOperand10 = p->mObject.mProperty_mActivate ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskListAST::method_first (GALGAS_lstring & outOperand0,
                                       GALGAS_lstringlist & outOperand1,
                                       GALGAS_lbigint & outOperand2,
                                       GALGAS_structurePropertyListAST & outOperand3,
                                       GALGAS_functionDeclarationListAST & outOperand4,
                                       GALGAS_taskSetupListAST & outOperand5,
                                       GALGAS_taskSetupListAST & outOperand6,
                                       GALGAS_taskSetupListAST & outOperand7,
                                       GALGAS_syncInstructionBranchListAST & outOperand8,
                                       GALGAS_location & outOperand9,
                                       GALGAS_bool & outOperand10,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mLowerPriorityTaskList ;
    outOperand2 = p->mObject.mProperty_mStackSize ;
    outOperand3 = p->mObject.mProperty_mVarList ;
    outOperand4 = p->mObject.mProperty_mTaskFunctionList ;
    outOperand5 = p->mObject.mProperty_mTaskSetupListAST ;
    outOperand6 = p->mObject.mProperty_mTaskActivateListAST ;
    outOperand7 = p->mObject.mProperty_mTaskDeactivateListAST ;
    outOperand8 = p->mObject.mProperty_mGuardedCommandList ;
    outOperand9 = p->mObject.mProperty_mEndOfTaskDeclaration ;
    outOperand10 = p->mObject.mProperty_mActivate ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskListAST::method_last (GALGAS_lstring & outOperand0,
                                      GALGAS_lstringlist & outOperand1,
                                      GALGAS_lbigint & outOperand2,
                                      GALGAS_structurePropertyListAST & outOperand3,
                                      GALGAS_functionDeclarationListAST & outOperand4,
                                      GALGAS_taskSetupListAST & outOperand5,
                                      GALGAS_taskSetupListAST & outOperand6,
                                      GALGAS_taskSetupListAST & outOperand7,
                                      GALGAS_syncInstructionBranchListAST & outOperand8,
                                      GALGAS_location & outOperand9,
                                      GALGAS_bool & outOperand10,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mLowerPriorityTaskList ;
    outOperand2 = p->mObject.mProperty_mStackSize ;
    outOperand3 = p->mObject.mProperty_mVarList ;
    outOperand4 = p->mObject.mProperty_mTaskFunctionList ;
    outOperand5 = p->mObject.mProperty_mTaskSetupListAST ;
    outOperand6 = p->mObject.mProperty_mTaskActivateListAST ;
    outOperand7 = p->mObject.mProperty_mTaskDeactivateListAST ;
    outOperand8 = p->mObject.mProperty_mGuardedCommandList ;
    outOperand9 = p->mObject.mProperty_mEndOfTaskDeclaration ;
    outOperand10 = p->mObject.mProperty_mActivate ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskListAST GALGAS_taskListAST::add_operation (const GALGAS_taskListAST & inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_taskListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskListAST GALGAS_taskListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_taskListAST result = GALGAS_taskListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskListAST GALGAS_taskListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_taskListAST result = GALGAS_taskListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskListAST GALGAS_taskListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_taskListAST result = GALGAS_taskListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskListAST::plusAssign_operation (const GALGAS_taskListAST inOperand,
                                               C_Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_taskListAST::getter_mTaskNameAtIndex (const GALGAS_uint & inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    result = p->mObject.mProperty_mTaskName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_taskListAST::getter_mLowerPriorityTaskListAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    result = p->mObject.mProperty_mLowerPriorityTaskList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lbigint GALGAS_taskListAST::getter_mStackSizeAtIndex (const GALGAS_uint & inIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  GALGAS_lbigint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    result = p->mObject.mProperty_mStackSize ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structurePropertyListAST GALGAS_taskListAST::getter_mVarListAtIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  GALGAS_structurePropertyListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    result = p->mObject.mProperty_mVarList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionDeclarationListAST GALGAS_taskListAST::getter_mTaskFunctionListAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  GALGAS_functionDeclarationListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    result = p->mObject.mProperty_mTaskFunctionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskSetupListAST GALGAS_taskListAST::getter_mTaskSetupListASTAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  GALGAS_taskSetupListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    result = p->mObject.mProperty_mTaskSetupListAST ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskSetupListAST GALGAS_taskListAST::getter_mTaskActivateListASTAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  GALGAS_taskSetupListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    result = p->mObject.mProperty_mTaskActivateListAST ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskSetupListAST GALGAS_taskListAST::getter_mTaskDeactivateListASTAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  GALGAS_taskSetupListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    result = p->mObject.mProperty_mTaskDeactivateListAST ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_syncInstructionBranchListAST GALGAS_taskListAST::getter_mGuardedCommandListAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  GALGAS_syncInstructionBranchListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    result = p->mObject.mProperty_mGuardedCommandList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_taskListAST::getter_mEndOfTaskDeclarationAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    result = p->mObject.mProperty_mEndOfTaskDeclaration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_taskListAST::getter_mActivateAtIndex (const GALGAS_uint & inIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    result = p->mObject.mProperty_mActivate ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_taskListAST::cEnumerator_taskListAST (const GALGAS_taskListAST & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskListAST_2D_element cEnumerator_taskListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_taskListAST * p = (const cCollectionElement_taskListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskListAST) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_taskListAST::current_mTaskName (LOCATION_ARGS) const {
  const cCollectionElement_taskListAST * p = (const cCollectionElement_taskListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskListAST) ;
  return p->mObject.mProperty_mTaskName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cEnumerator_taskListAST::current_mLowerPriorityTaskList (LOCATION_ARGS) const {
  const cCollectionElement_taskListAST * p = (const cCollectionElement_taskListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskListAST) ;
  return p->mObject.mProperty_mLowerPriorityTaskList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lbigint cEnumerator_taskListAST::current_mStackSize (LOCATION_ARGS) const {
  const cCollectionElement_taskListAST * p = (const cCollectionElement_taskListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskListAST) ;
  return p->mObject.mProperty_mStackSize ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structurePropertyListAST cEnumerator_taskListAST::current_mVarList (LOCATION_ARGS) const {
  const cCollectionElement_taskListAST * p = (const cCollectionElement_taskListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskListAST) ;
  return p->mObject.mProperty_mVarList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionDeclarationListAST cEnumerator_taskListAST::current_mTaskFunctionList (LOCATION_ARGS) const {
  const cCollectionElement_taskListAST * p = (const cCollectionElement_taskListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskListAST) ;
  return p->mObject.mProperty_mTaskFunctionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskSetupListAST cEnumerator_taskListAST::current_mTaskSetupListAST (LOCATION_ARGS) const {
  const cCollectionElement_taskListAST * p = (const cCollectionElement_taskListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskListAST) ;
  return p->mObject.mProperty_mTaskSetupListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskSetupListAST cEnumerator_taskListAST::current_mTaskActivateListAST (LOCATION_ARGS) const {
  const cCollectionElement_taskListAST * p = (const cCollectionElement_taskListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskListAST) ;
  return p->mObject.mProperty_mTaskActivateListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskSetupListAST cEnumerator_taskListAST::current_mTaskDeactivateListAST (LOCATION_ARGS) const {
  const cCollectionElement_taskListAST * p = (const cCollectionElement_taskListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskListAST) ;
  return p->mObject.mProperty_mTaskDeactivateListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_syncInstructionBranchListAST cEnumerator_taskListAST::current_mGuardedCommandList (LOCATION_ARGS) const {
  const cCollectionElement_taskListAST * p = (const cCollectionElement_taskListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskListAST) ;
  return p->mObject.mProperty_mGuardedCommandList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cEnumerator_taskListAST::current_mEndOfTaskDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_taskListAST * p = (const cCollectionElement_taskListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskListAST) ;
  return p->mObject.mProperty_mEndOfTaskDeclaration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_taskListAST::current_mActivate (LOCATION_ARGS) const {
  const cCollectionElement_taskListAST * p = (const cCollectionElement_taskListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskListAST) ;
  return p->mObject.mProperty_mActivate ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                  @taskListAST type                                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_taskListAST ("taskListAST",
                                    NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_taskListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_taskListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskListAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskListAST GALGAS_taskListAST::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_taskListAST result ;
  const GALGAS_taskListAST * p = (const GALGAS_taskListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_taskListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Class for element of '@taskSetupListAST' list                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_taskSetupListAST : public cCollectionElement {
  public : GALGAS_taskSetupListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_taskSetupListAST (const GALGAS_lstring & in_mName,
                                                const GALGAS_lstringlist & in_mDependanceList,
                                                const GALGAS_instructionListAST & in_mTaskSetupInstructionList,
                                                const GALGAS_location & in_mEndOfTaskSetupDeclaration
                                                COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_taskSetupListAST (const GALGAS_taskSetupListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_taskSetupListAST::cCollectionElement_taskSetupListAST (const GALGAS_lstring & in_mName,
                                                                          const GALGAS_lstringlist & in_mDependanceList,
                                                                          const GALGAS_instructionListAST & in_mTaskSetupInstructionList,
                                                                          const GALGAS_location & in_mEndOfTaskSetupDeclaration
                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mName, in_mDependanceList, in_mTaskSetupInstructionList, in_mEndOfTaskSetupDeclaration) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_taskSetupListAST::cCollectionElement_taskSetupListAST (const GALGAS_taskSetupListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mName, inElement.mProperty_mDependanceList, inElement.mProperty_mTaskSetupInstructionList, inElement.mProperty_mEndOfTaskSetupDeclaration) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_taskSetupListAST::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_taskSetupListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_taskSetupListAST (mObject.mProperty_mName, mObject.mProperty_mDependanceList, mObject.mProperty_mTaskSetupInstructionList, mObject.mProperty_mEndOfTaskSetupDeclaration COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_taskSetupListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mName" ":" ;
  mObject.mProperty_mName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDependanceList" ":" ;
  mObject.mProperty_mDependanceList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskSetupInstructionList" ":" ;
  mObject.mProperty_mTaskSetupInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfTaskSetupDeclaration" ":" ;
  mObject.mProperty_mEndOfTaskSetupDeclaration.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_taskSetupListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_taskSetupListAST * operand = (cCollectionElement_taskSetupListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_taskSetupListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskSetupListAST::GALGAS_taskSetupListAST (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskSetupListAST::GALGAS_taskSetupListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskSetupListAST GALGAS_taskSetupListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_taskSetupListAST  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskSetupListAST GALGAS_taskSetupListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_lstringlist & inOperand1,
                                                                            const GALGAS_instructionListAST & inOperand2,
                                                                            const GALGAS_location & inOperand3
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_taskSetupListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_taskSetupListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_taskSetupListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskSetupListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                         const GALGAS_lstring & in_mName,
                                                         const GALGAS_lstringlist & in_mDependanceList,
                                                         const GALGAS_instructionListAST & in_mTaskSetupInstructionList,
                                                         const GALGAS_location & in_mEndOfTaskSetupDeclaration
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_taskSetupListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_taskSetupListAST (in_mName,
                                                      in_mDependanceList,
                                                      in_mTaskSetupInstructionList,
                                                      in_mEndOfTaskSetupDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskSetupListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                   const GALGAS_lstringlist & inOperand1,
                                                   const GALGAS_instructionListAST & inOperand2,
                                                   const GALGAS_location & inOperand3
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_taskSetupListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskSetupListAST::setter_append (GALGAS_taskSetupListAST_2D_element inElement,
                                             C_Compiler * /* inCompiler */
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_taskSetupListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskSetupListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                    const GALGAS_lstringlist inOperand1,
                                                    const GALGAS_instructionListAST inOperand2,
                                                    const GALGAS_location inOperand3,
                                                    const GALGAS_uint inInsertionIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_taskSetupListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskSetupListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstringlist & outOperand1,
                                                    GALGAS_instructionListAST & outOperand2,
                                                    GALGAS_location & outOperand3,
                                                    const GALGAS_uint inRemoveIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_taskSetupListAST * p = (cCollectionElement_taskSetupListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
      outOperand0 = p->mObject.mProperty_mName ;
      outOperand1 = p->mObject.mProperty_mDependanceList ;
      outOperand2 = p->mObject.mProperty_mTaskSetupInstructionList ;
      outOperand3 = p->mObject.mProperty_mEndOfTaskSetupDeclaration ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskSetupListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                               GALGAS_lstringlist & outOperand1,
                                               GALGAS_instructionListAST & outOperand2,
                                               GALGAS_location & outOperand3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskSetupListAST * p = (cCollectionElement_taskSetupListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mDependanceList ;
    outOperand2 = p->mObject.mProperty_mTaskSetupInstructionList ;
    outOperand3 = p->mObject.mProperty_mEndOfTaskSetupDeclaration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskSetupListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                              GALGAS_lstringlist & outOperand1,
                                              GALGAS_instructionListAST & outOperand2,
                                              GALGAS_location & outOperand3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskSetupListAST * p = (cCollectionElement_taskSetupListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mDependanceList ;
    outOperand2 = p->mObject.mProperty_mTaskSetupInstructionList ;
    outOperand3 = p->mObject.mProperty_mEndOfTaskSetupDeclaration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskSetupListAST::method_first (GALGAS_lstring & outOperand0,
                                            GALGAS_lstringlist & outOperand1,
                                            GALGAS_instructionListAST & outOperand2,
                                            GALGAS_location & outOperand3,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskSetupListAST * p = (cCollectionElement_taskSetupListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mDependanceList ;
    outOperand2 = p->mObject.mProperty_mTaskSetupInstructionList ;
    outOperand3 = p->mObject.mProperty_mEndOfTaskSetupDeclaration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskSetupListAST::method_last (GALGAS_lstring & outOperand0,
                                           GALGAS_lstringlist & outOperand1,
                                           GALGAS_instructionListAST & outOperand2,
                                           GALGAS_location & outOperand3,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskSetupListAST * p = (cCollectionElement_taskSetupListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mDependanceList ;
    outOperand2 = p->mObject.mProperty_mTaskSetupInstructionList ;
    outOperand3 = p->mObject.mProperty_mEndOfTaskSetupDeclaration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskSetupListAST GALGAS_taskSetupListAST::add_operation (const GALGAS_taskSetupListAST & inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_taskSetupListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskSetupListAST GALGAS_taskSetupListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_taskSetupListAST result = GALGAS_taskSetupListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskSetupListAST GALGAS_taskSetupListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_taskSetupListAST result = GALGAS_taskSetupListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskSetupListAST GALGAS_taskSetupListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_taskSetupListAST result = GALGAS_taskSetupListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskSetupListAST::plusAssign_operation (const GALGAS_taskSetupListAST inOperand,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_taskSetupListAST::getter_mNameAtIndex (const GALGAS_uint & inIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskSetupListAST * p = (cCollectionElement_taskSetupListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
    result = p->mObject.mProperty_mName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_taskSetupListAST::getter_mDependanceListAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskSetupListAST * p = (cCollectionElement_taskSetupListAST *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
    result = p->mObject.mProperty_mDependanceList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListAST GALGAS_taskSetupListAST::getter_mTaskSetupInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskSetupListAST * p = (cCollectionElement_taskSetupListAST *) attributes.ptr () ;
  GALGAS_instructionListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
    result = p->mObject.mProperty_mTaskSetupInstructionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_taskSetupListAST::getter_mEndOfTaskSetupDeclarationAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskSetupListAST * p = (cCollectionElement_taskSetupListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
    result = p->mObject.mProperty_mEndOfTaskSetupDeclaration ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_taskSetupListAST::cEnumerator_taskSetupListAST (const GALGAS_taskSetupListAST & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskSetupListAST_2D_element cEnumerator_taskSetupListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_taskSetupListAST * p = (const cCollectionElement_taskSetupListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_taskSetupListAST::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_taskSetupListAST * p = (const cCollectionElement_taskSetupListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
  return p->mObject.mProperty_mName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cEnumerator_taskSetupListAST::current_mDependanceList (LOCATION_ARGS) const {
  const cCollectionElement_taskSetupListAST * p = (const cCollectionElement_taskSetupListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
  return p->mObject.mProperty_mDependanceList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListAST cEnumerator_taskSetupListAST::current_mTaskSetupInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_taskSetupListAST * p = (const cCollectionElement_taskSetupListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
  return p->mObject.mProperty_mTaskSetupInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cEnumerator_taskSetupListAST::current_mEndOfTaskSetupDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_taskSetupListAST * p = (const cCollectionElement_taskSetupListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
  return p->mObject.mProperty_mEndOfTaskSetupDeclaration ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @taskSetupListAST type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_taskSetupListAST ("taskSetupListAST",
                                         NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_taskSetupListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskSetupListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_taskSetupListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskSetupListAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskSetupListAST GALGAS_taskSetupListAST::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_taskSetupListAST result ;
  const GALGAS_taskSetupListAST * p = (const GALGAS_taskSetupListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_taskSetupListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskSetupListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Class for element of '@syncInstructionBranchListAST' list                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_syncInstructionBranchListAST : public cCollectionElement {
  public : GALGAS_syncInstructionBranchListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_syncInstructionBranchListAST (const GALGAS_guardedCommandAST & in_mGuardedCommand,
                                                            const GALGAS_instructionListAST & in_mInstructionList,
                                                            const GALGAS_location & in_mEndOfBranch
                                                            COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_syncInstructionBranchListAST (const GALGAS_syncInstructionBranchListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_syncInstructionBranchListAST::cCollectionElement_syncInstructionBranchListAST (const GALGAS_guardedCommandAST & in_mGuardedCommand,
                                                                                                  const GALGAS_instructionListAST & in_mInstructionList,
                                                                                                  const GALGAS_location & in_mEndOfBranch
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mGuardedCommand, in_mInstructionList, in_mEndOfBranch) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_syncInstructionBranchListAST::cCollectionElement_syncInstructionBranchListAST (const GALGAS_syncInstructionBranchListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mGuardedCommand, inElement.mProperty_mInstructionList, inElement.mProperty_mEndOfBranch) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_syncInstructionBranchListAST::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_syncInstructionBranchListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_syncInstructionBranchListAST (mObject.mProperty_mGuardedCommand, mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfBranch COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_syncInstructionBranchListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGuardedCommand" ":" ;
  mObject.mProperty_mGuardedCommand.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionList" ":" ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfBranch" ":" ;
  mObject.mProperty_mEndOfBranch.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_syncInstructionBranchListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_syncInstructionBranchListAST * operand = (cCollectionElement_syncInstructionBranchListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_syncInstructionBranchListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_syncInstructionBranchListAST::GALGAS_syncInstructionBranchListAST (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_syncInstructionBranchListAST::GALGAS_syncInstructionBranchListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_syncInstructionBranchListAST GALGAS_syncInstructionBranchListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_syncInstructionBranchListAST  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_syncInstructionBranchListAST GALGAS_syncInstructionBranchListAST::constructor_listWithValue (const GALGAS_guardedCommandAST & inOperand0,
                                                                                                    const GALGAS_instructionListAST & inOperand1,
                                                                                                    const GALGAS_location & inOperand2
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_syncInstructionBranchListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_syncInstructionBranchListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_syncInstructionBranchListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_syncInstructionBranchListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                     const GALGAS_guardedCommandAST & in_mGuardedCommand,
                                                                     const GALGAS_instructionListAST & in_mInstructionList,
                                                                     const GALGAS_location & in_mEndOfBranch
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_syncInstructionBranchListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_syncInstructionBranchListAST (in_mGuardedCommand,
                                                                  in_mInstructionList,
                                                                  in_mEndOfBranch COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_syncInstructionBranchListAST::addAssign_operation (const GALGAS_guardedCommandAST & inOperand0,
                                                               const GALGAS_instructionListAST & inOperand1,
                                                               const GALGAS_location & inOperand2
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_syncInstructionBranchListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_syncInstructionBranchListAST::setter_append (GALGAS_syncInstructionBranchListAST_2D_element inElement,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_syncInstructionBranchListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_syncInstructionBranchListAST::setter_insertAtIndex (const GALGAS_guardedCommandAST inOperand0,
                                                                const GALGAS_instructionListAST inOperand1,
                                                                const GALGAS_location inOperand2,
                                                                const GALGAS_uint inInsertionIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_syncInstructionBranchListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_syncInstructionBranchListAST::setter_removeAtIndex (GALGAS_guardedCommandAST & outOperand0,
                                                                GALGAS_instructionListAST & outOperand1,
                                                                GALGAS_location & outOperand2,
                                                                const GALGAS_uint inRemoveIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_syncInstructionBranchListAST * p = (cCollectionElement_syncInstructionBranchListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
      outOperand0 = p->mObject.mProperty_mGuardedCommand ;
      outOperand1 = p->mObject.mProperty_mInstructionList ;
      outOperand2 = p->mObject.mProperty_mEndOfBranch ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_syncInstructionBranchListAST::setter_popFirst (GALGAS_guardedCommandAST & outOperand0,
                                                           GALGAS_instructionListAST & outOperand1,
                                                           GALGAS_location & outOperand2,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListAST * p = (cCollectionElement_syncInstructionBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
    outOperand0 = p->mObject.mProperty_mGuardedCommand ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfBranch ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_syncInstructionBranchListAST::setter_popLast (GALGAS_guardedCommandAST & outOperand0,
                                                          GALGAS_instructionListAST & outOperand1,
                                                          GALGAS_location & outOperand2,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListAST * p = (cCollectionElement_syncInstructionBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
    outOperand0 = p->mObject.mProperty_mGuardedCommand ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfBranch ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_syncInstructionBranchListAST::method_first (GALGAS_guardedCommandAST & outOperand0,
                                                        GALGAS_instructionListAST & outOperand1,
                                                        GALGAS_location & outOperand2,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListAST * p = (cCollectionElement_syncInstructionBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
    outOperand0 = p->mObject.mProperty_mGuardedCommand ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfBranch ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_syncInstructionBranchListAST::method_last (GALGAS_guardedCommandAST & outOperand0,
                                                       GALGAS_instructionListAST & outOperand1,
                                                       GALGAS_location & outOperand2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListAST * p = (cCollectionElement_syncInstructionBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
    outOperand0 = p->mObject.mProperty_mGuardedCommand ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfBranch ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_syncInstructionBranchListAST GALGAS_syncInstructionBranchListAST::add_operation (const GALGAS_syncInstructionBranchListAST & inOperand,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_syncInstructionBranchListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_syncInstructionBranchListAST GALGAS_syncInstructionBranchListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_syncInstructionBranchListAST result = GALGAS_syncInstructionBranchListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_syncInstructionBranchListAST GALGAS_syncInstructionBranchListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_syncInstructionBranchListAST result = GALGAS_syncInstructionBranchListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_syncInstructionBranchListAST GALGAS_syncInstructionBranchListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_syncInstructionBranchListAST result = GALGAS_syncInstructionBranchListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_syncInstructionBranchListAST::plusAssign_operation (const GALGAS_syncInstructionBranchListAST inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardedCommandAST GALGAS_syncInstructionBranchListAST::getter_mGuardedCommandAtIndex (const GALGAS_uint & inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListAST * p = (cCollectionElement_syncInstructionBranchListAST *) attributes.ptr () ;
  GALGAS_guardedCommandAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
    result = p->mObject.mProperty_mGuardedCommand ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListAST GALGAS_syncInstructionBranchListAST::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListAST * p = (cCollectionElement_syncInstructionBranchListAST *) attributes.ptr () ;
  GALGAS_instructionListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_syncInstructionBranchListAST::getter_mEndOfBranchAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListAST * p = (cCollectionElement_syncInstructionBranchListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
    result = p->mObject.mProperty_mEndOfBranch ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_syncInstructionBranchListAST::cEnumerator_syncInstructionBranchListAST (const GALGAS_syncInstructionBranchListAST & inEnumeratedObject,
                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_syncInstructionBranchListAST_2D_element cEnumerator_syncInstructionBranchListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_syncInstructionBranchListAST * p = (const cCollectionElement_syncInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardedCommandAST cEnumerator_syncInstructionBranchListAST::current_mGuardedCommand (LOCATION_ARGS) const {
  const cCollectionElement_syncInstructionBranchListAST * p = (const cCollectionElement_syncInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
  return p->mObject.mProperty_mGuardedCommand ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListAST cEnumerator_syncInstructionBranchListAST::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_syncInstructionBranchListAST * p = (const cCollectionElement_syncInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
  return p->mObject.mProperty_mInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cEnumerator_syncInstructionBranchListAST::current_mEndOfBranch (LOCATION_ARGS) const {
  const cCollectionElement_syncInstructionBranchListAST * p = (const cCollectionElement_syncInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
  return p->mObject.mProperty_mEndOfBranch ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @syncInstructionBranchListAST type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syncInstructionBranchListAST ("syncInstructionBranchListAST",
                                                     NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_syncInstructionBranchListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionBranchListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_syncInstructionBranchListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syncInstructionBranchListAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_syncInstructionBranchListAST GALGAS_syncInstructionBranchListAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_syncInstructionBranchListAST result ;
  const GALGAS_syncInstructionBranchListAST * p = (const GALGAS_syncInstructionBranchListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syncInstructionBranchListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syncInstructionBranchListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Class for element of '@taskSetupSortedListAST' list                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_taskSetupSortedListAST : public cCollectionElement {
  public : GALGAS_taskSetupSortedListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_taskSetupSortedListAST (const GALGAS_instructionListAST & in_mTaskSetupInstructionList,
                                                      const GALGAS_location & in_mEndOfTaskSetupDeclaration,
                                                      const GALGAS_luint & in_mPriority
                                                      COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_taskSetupSortedListAST (const GALGAS_taskSetupSortedListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_taskSetupSortedListAST::cCollectionElement_taskSetupSortedListAST (const GALGAS_instructionListAST & in_mTaskSetupInstructionList,
                                                                                      const GALGAS_location & in_mEndOfTaskSetupDeclaration,
                                                                                      const GALGAS_luint & in_mPriority
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTaskSetupInstructionList, in_mEndOfTaskSetupDeclaration, in_mPriority) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_taskSetupSortedListAST::cCollectionElement_taskSetupSortedListAST (const GALGAS_taskSetupSortedListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTaskSetupInstructionList, inElement.mProperty_mEndOfTaskSetupDeclaration, inElement.mProperty_mPriority) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_taskSetupSortedListAST::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_taskSetupSortedListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_taskSetupSortedListAST (mObject.mProperty_mTaskSetupInstructionList, mObject.mProperty_mEndOfTaskSetupDeclaration, mObject.mProperty_mPriority COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_taskSetupSortedListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskSetupInstructionList" ":" ;
  mObject.mProperty_mTaskSetupInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfTaskSetupDeclaration" ":" ;
  mObject.mProperty_mEndOfTaskSetupDeclaration.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPriority" ":" ;
  mObject.mProperty_mPriority.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_taskSetupSortedListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_taskSetupSortedListAST * operand = (cCollectionElement_taskSetupSortedListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_taskSetupSortedListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskSetupSortedListAST::GALGAS_taskSetupSortedListAST (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskSetupSortedListAST::GALGAS_taskSetupSortedListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskSetupSortedListAST GALGAS_taskSetupSortedListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_taskSetupSortedListAST  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskSetupSortedListAST GALGAS_taskSetupSortedListAST::constructor_listWithValue (const GALGAS_instructionListAST & inOperand0,
                                                                                        const GALGAS_location & inOperand1,
                                                                                        const GALGAS_luint & inOperand2
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_taskSetupSortedListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_taskSetupSortedListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_taskSetupSortedListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskSetupSortedListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_instructionListAST & in_mTaskSetupInstructionList,
                                                               const GALGAS_location & in_mEndOfTaskSetupDeclaration,
                                                               const GALGAS_luint & in_mPriority
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_taskSetupSortedListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_taskSetupSortedListAST (in_mTaskSetupInstructionList,
                                                            in_mEndOfTaskSetupDeclaration,
                                                            in_mPriority COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskSetupSortedListAST::addAssign_operation (const GALGAS_instructionListAST & inOperand0,
                                                         const GALGAS_location & inOperand1,
                                                         const GALGAS_luint & inOperand2
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_taskSetupSortedListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskSetupSortedListAST::setter_append (GALGAS_taskSetupSortedListAST_2D_element inElement,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_taskSetupSortedListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskSetupSortedListAST::setter_insertAtIndex (const GALGAS_instructionListAST inOperand0,
                                                          const GALGAS_location inOperand1,
                                                          const GALGAS_luint inOperand2,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_taskSetupSortedListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskSetupSortedListAST::setter_removeAtIndex (GALGAS_instructionListAST & outOperand0,
                                                          GALGAS_location & outOperand1,
                                                          GALGAS_luint & outOperand2,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_taskSetupSortedListAST * p = (cCollectionElement_taskSetupSortedListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_taskSetupSortedListAST) ;
      outOperand0 = p->mObject.mProperty_mTaskSetupInstructionList ;
      outOperand1 = p->mObject.mProperty_mEndOfTaskSetupDeclaration ;
      outOperand2 = p->mObject.mProperty_mPriority ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskSetupSortedListAST::setter_popFirst (GALGAS_instructionListAST & outOperand0,
                                                     GALGAS_location & outOperand1,
                                                     GALGAS_luint & outOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskSetupSortedListAST * p = (cCollectionElement_taskSetupSortedListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_taskSetupSortedListAST) ;
    outOperand0 = p->mObject.mProperty_mTaskSetupInstructionList ;
    outOperand1 = p->mObject.mProperty_mEndOfTaskSetupDeclaration ;
    outOperand2 = p->mObject.mProperty_mPriority ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskSetupSortedListAST::setter_popLast (GALGAS_instructionListAST & outOperand0,
                                                    GALGAS_location & outOperand1,
                                                    GALGAS_luint & outOperand2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskSetupSortedListAST * p = (cCollectionElement_taskSetupSortedListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_taskSetupSortedListAST) ;
    outOperand0 = p->mObject.mProperty_mTaskSetupInstructionList ;
    outOperand1 = p->mObject.mProperty_mEndOfTaskSetupDeclaration ;
    outOperand2 = p->mObject.mProperty_mPriority ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskSetupSortedListAST::method_first (GALGAS_instructionListAST & outOperand0,
                                                  GALGAS_location & outOperand1,
                                                  GALGAS_luint & outOperand2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskSetupSortedListAST * p = (cCollectionElement_taskSetupSortedListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_taskSetupSortedListAST) ;
    outOperand0 = p->mObject.mProperty_mTaskSetupInstructionList ;
    outOperand1 = p->mObject.mProperty_mEndOfTaskSetupDeclaration ;
    outOperand2 = p->mObject.mProperty_mPriority ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskSetupSortedListAST::method_last (GALGAS_instructionListAST & outOperand0,
                                                 GALGAS_location & outOperand1,
                                                 GALGAS_luint & outOperand2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskSetupSortedListAST * p = (cCollectionElement_taskSetupSortedListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_taskSetupSortedListAST) ;
    outOperand0 = p->mObject.mProperty_mTaskSetupInstructionList ;
    outOperand1 = p->mObject.mProperty_mEndOfTaskSetupDeclaration ;
    outOperand2 = p->mObject.mProperty_mPriority ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskSetupSortedListAST GALGAS_taskSetupSortedListAST::add_operation (const GALGAS_taskSetupSortedListAST & inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_taskSetupSortedListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskSetupSortedListAST GALGAS_taskSetupSortedListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_taskSetupSortedListAST result = GALGAS_taskSetupSortedListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskSetupSortedListAST GALGAS_taskSetupSortedListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_taskSetupSortedListAST result = GALGAS_taskSetupSortedListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskSetupSortedListAST GALGAS_taskSetupSortedListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_taskSetupSortedListAST result = GALGAS_taskSetupSortedListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskSetupSortedListAST::plusAssign_operation (const GALGAS_taskSetupSortedListAST inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListAST GALGAS_taskSetupSortedListAST::getter_mTaskSetupInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskSetupSortedListAST * p = (cCollectionElement_taskSetupSortedListAST *) attributes.ptr () ;
  GALGAS_instructionListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskSetupSortedListAST) ;
    result = p->mObject.mProperty_mTaskSetupInstructionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_taskSetupSortedListAST::getter_mEndOfTaskSetupDeclarationAtIndex (const GALGAS_uint & inIndex,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskSetupSortedListAST * p = (cCollectionElement_taskSetupSortedListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskSetupSortedListAST) ;
    result = p->mObject.mProperty_mEndOfTaskSetupDeclaration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_luint GALGAS_taskSetupSortedListAST::getter_mPriorityAtIndex (const GALGAS_uint & inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskSetupSortedListAST * p = (cCollectionElement_taskSetupSortedListAST *) attributes.ptr () ;
  GALGAS_luint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskSetupSortedListAST) ;
    result = p->mObject.mProperty_mPriority ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_taskSetupSortedListAST::cEnumerator_taskSetupSortedListAST (const GALGAS_taskSetupSortedListAST & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskSetupSortedListAST_2D_element cEnumerator_taskSetupSortedListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_taskSetupSortedListAST * p = (const cCollectionElement_taskSetupSortedListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskSetupSortedListAST) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListAST cEnumerator_taskSetupSortedListAST::current_mTaskSetupInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_taskSetupSortedListAST * p = (const cCollectionElement_taskSetupSortedListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskSetupSortedListAST) ;
  return p->mObject.mProperty_mTaskSetupInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cEnumerator_taskSetupSortedListAST::current_mEndOfTaskSetupDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_taskSetupSortedListAST * p = (const cCollectionElement_taskSetupSortedListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskSetupSortedListAST) ;
  return p->mObject.mProperty_mEndOfTaskSetupDeclaration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_luint cEnumerator_taskSetupSortedListAST::current_mPriority (LOCATION_ARGS) const {
  const cCollectionElement_taskSetupSortedListAST * p = (const cCollectionElement_taskSetupSortedListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskSetupSortedListAST) ;
  return p->mObject.mProperty_mPriority ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @taskSetupSortedListAST type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_taskSetupSortedListAST ("taskSetupSortedListAST",
                                               NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_taskSetupSortedListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskSetupSortedListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_taskSetupSortedListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskSetupSortedListAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskSetupSortedListAST GALGAS_taskSetupSortedListAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_taskSetupSortedListAST result ;
  const GALGAS_taskSetupSortedListAST * p = (const GALGAS_taskSetupSortedListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_taskSetupSortedListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskSetupSortedListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Extension method '@taskListAST noteTypesInPrecedenceGraph'                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_noteTypesInPrecedenceGraph (const GALGAS_taskListAST inObject,
                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_taskListAST temp_0 = inObject ;
  cEnumerator_taskListAST enumerator_5589 (temp_0, kENUMERATION_UP) ;
  while (enumerator_5589.hasCurrentObject ()) {
    cEnumerator_structurePropertyListAST enumerator_5621 (enumerator_5589.current_mVarList (HERE), kENUMERATION_UP) ;
    while (enumerator_5621.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_5621.current (HERE).getter_mPropertyTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        {
        ioArgument_ioGraph.setter_noteNode (enumerator_5621.current (HERE).getter_mPropertyTypeName (HERE) COMMA_SOURCE_FILE ("task-declaration.galgas", 162)) ;
        }
      }
      switch (enumerator_5621.current (HERE).getter_mInitialisation (HERE).enumValue ()) {
      case GALGAS_structurePropertyInitOptionalExpressionAST::kNotBuilt:
        break ;
      case GALGAS_structurePropertyInitOptionalExpressionAST::kEnum_noExpression:
        {
        }
        break ;
      case GALGAS_structurePropertyInitOptionalExpressionAST::kEnum_expression:
        {
          const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression * extractPtr_5900 = (const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression *) (enumerator_5621.current (HERE).getter_mInitialisation (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_exp = extractPtr_5900->mAssociatedValue0 ;
          callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_exp.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 167)) ;
        }
        break ;
      }
      enumerator_5621.gotoNextObject () ;
    }
    cEnumerator_taskSetupListAST enumerator_5953 (enumerator_5589.current_mTaskSetupListAST (HERE), kENUMERATION_UP) ;
    while (enumerator_5953.hasCurrentObject ()) {
      extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_5953.current (HERE).getter_mTaskSetupInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 171)) ;
      enumerator_5953.gotoNextObject () ;
    }
    cEnumerator_functionDeclarationListAST enumerator_6094 (enumerator_5589.current_mTaskFunctionList (HERE), kENUMERATION_UP) ;
    while (enumerator_6094.hasCurrentObject ()) {
      extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_6094.current (HERE).getter_mFunctionInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 174)) ;
      enumerator_6094.gotoNextObject () ;
    }
    cEnumerator_syncInstructionBranchListAST enumerator_6245 (enumerator_5589.current_mGuardedCommandList (HERE), kENUMERATION_UP) ;
    while (enumerator_6245.hasCurrentObject ()) {
      extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_6245.current (HERE).getter_mInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 177)) ;
      enumerator_6245.gotoNextObject () ;
    }
    enumerator_5589.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_taskMap::cMapElement_taskMap (const GALGAS_lstring & inKey,
                                          const GALGAS_PLMType & in_mTaskType
                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mTaskType (in_mTaskType) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_taskMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mTaskType.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_taskMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_taskMap (mProperty_lkey, mProperty_mTaskType COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_taskMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskType" ":" ;
  mProperty_mTaskType.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_taskMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_taskMap * operand = (cMapElement_taskMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mTaskType.objectCompare (operand->mProperty_mTaskType) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskMap::GALGAS_taskMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskMap::GALGAS_taskMap (const GALGAS_taskMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskMap & GALGAS_taskMap::operator = (const GALGAS_taskMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskMap GALGAS_taskMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_taskMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskMap GALGAS_taskMap::constructor_mapWithMapToOverride (const GALGAS_taskMap & inMapToOverride
                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_taskMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskMap GALGAS_taskMap::getter_overriddenMap (C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_taskMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskMap::addAssign_operation (const GALGAS_lstring & inKey,
                                          const GALGAS_PLMType & inArgument0,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cMapElement_taskMap * p = NULL ;
  macroMyNew (p, cMapElement_taskMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@taskMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskMap::setter_insertKey (GALGAS_lstring inKey,
                                       GALGAS_PLMType inArgument0,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  cMapElement_taskMap * p = NULL ;
  macroMyNew (p, cMapElement_taskMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' task is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_taskMap_searchKey = "there is no '%K' task" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskMap::method_searchKey (GALGAS_lstring inKey,
                                       GALGAS_PLMType & outArgument0,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  const cMapElement_taskMap * p = (const cMapElement_taskMap *) performSearch (inKey,
                                                                               inCompiler,
                                                                               kSearchErrorMessage_taskMap_searchKey
                                                                               COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_taskMap) ;
    outArgument0 = p->mProperty_mTaskType ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_taskMap::getter_mTaskTypeForKey (const GALGAS_string & inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMap * p = (const cMapElement_taskMap *) attributes ;
  GALGAS_PLMType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMap) ;
    result = p->mProperty_mTaskType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskMap::setter_setMTaskTypeForKey (GALGAS_PLMType inAttributeValue,
                                                GALGAS_string inKey,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_taskMap * p = (cMapElement_taskMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMap) ;
    p->mProperty_mTaskType = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_taskMap * GALGAS_taskMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                         const GALGAS_string & inKey
                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_taskMap * result = (cMapElement_taskMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_taskMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_taskMap::cEnumerator_taskMap (const GALGAS_taskMap & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskMap_2D_element cEnumerator_taskMap::current (LOCATION_ARGS) const {
  const cMapElement_taskMap * p = (const cMapElement_taskMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMap) ;
  return GALGAS_taskMap_2D_element (p->mProperty_lkey, p->mProperty_mTaskType) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_taskMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType cEnumerator_taskMap::current_mTaskType (LOCATION_ARGS) const {
  const cMapElement_taskMap * p = (const cMapElement_taskMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMap) ;
  return p->mProperty_mTaskType ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                    @taskMap type                                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_taskMap ("taskMap",
                                NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_taskMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_taskMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskMap GALGAS_taskMap::extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_taskMap result ;
  const GALGAS_taskMap * p = (const GALGAS_taskMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_taskMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Extension method '@taskListAST enterInContext'                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_enterInContext (const GALGAS_taskListAST inObject,
                                     GALGAS_semanticContext & ioArgument_ioContext,
                                     GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                     GALGAS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                     GALGAS_subprogramInvocationGraph & ioArgument_ioSubprogramInvocationGraph,
                                     GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                     GALGAS_globalVariableIRList & ioArgument_ioGlobalVariableIRList,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_taskListAST temp_0 = inObject ;
  GALGAS_taskListAST var_taskList_7468 = temp_0 ;
  GALGAS_taskListAST var_sortedTaskList_7505 = GALGAS_taskListAST::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 204)) ;
  GALGAS_stringset var_handledTaskSet_7538 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("task-declaration.galgas", 205)) ;
  GALGAS_bool var_continue_7558 = GALGAS_bool (true) ;
  if (var_taskList_7468.getter_length (SOURCE_FILE ("task-declaration.galgas", 207)).isValid ()) {
    uint32_t variant_7572 = var_taskList_7468.getter_length (SOURCE_FILE ("task-declaration.galgas", 207)).uintValue () ;
    bool loop_7572 = true ;
    while (loop_7572) {
      GALGAS_bool test_1 = var_continue_7558 ;
      if (kBoolTrue == test_1.boolEnum ()) {
        test_1 = GALGAS_bool (kIsStrictSup, var_taskList_7468.getter_length (SOURCE_FILE ("task-declaration.galgas", 207)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      }
      loop_7572 = test_1.isValid () ;
      if (loop_7572) {
        loop_7572 = test_1.boolValue () ;
      }
      if (loop_7572 && (0 == variant_7572)) {
        loop_7572 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("task-declaration.galgas", 207)) ;
      }
      if (loop_7572) {
        variant_7572 -- ;
        var_continue_7558 = GALGAS_bool (false) ;
        GALGAS_taskListAST var_candidateTaskList_7693 = GALGAS_taskListAST::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 209)) ;
        GALGAS_uint var_idx_7710 = GALGAS_uint ((uint32_t) 0U) ;
        cEnumerator_taskListAST enumerator_7739 (var_taskList_7468, kENUMERATION_UP) ;
        while (enumerator_7739.hasCurrentObject ()) {
          GALGAS_bool var_allPrecedenceDefined_7773 = GALGAS_bool (true) ;
          cEnumerator_lstringlist enumerator_7838 (enumerator_7739.current (HERE).getter_mLowerPriorityTaskList (HERE), kENUMERATION_UP) ;
          bool bool_2 = var_allPrecedenceDefined_7773.isValidAndTrue () ;
          if (enumerator_7838.hasCurrentObject () && bool_2) {
            while (enumerator_7838.hasCurrentObject () && bool_2) {
              var_allPrecedenceDefined_7773 = var_handledTaskSet_7538.getter_hasKey (enumerator_7838.current_mValue (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("task-declaration.galgas", 214)) ;
              enumerator_7838.gotoNextObject () ;
              if (enumerator_7838.hasCurrentObject ()) {
                bool_2 = var_allPrecedenceDefined_7773.isValidAndTrue () ;
              }
            }
          }
          const enumGalgasBool test_3 = var_allPrecedenceDefined_7773.boolEnum () ;
          if (kBoolTrue == test_3) {
            var_candidateTaskList_7693.addAssign_operation (enumerator_7739.current (HERE).getter_mTaskName (HERE), enumerator_7739.current (HERE).getter_mLowerPriorityTaskList (HERE), enumerator_7739.current (HERE).getter_mStackSize (HERE), enumerator_7739.current (HERE).getter_mVarList (HERE), enumerator_7739.current (HERE).getter_mTaskFunctionList (HERE), enumerator_7739.current (HERE).getter_mTaskSetupListAST (HERE), enumerator_7739.current (HERE).getter_mTaskActivateListAST (HERE), enumerator_7739.current (HERE).getter_mTaskDeactivateListAST (HERE), enumerator_7739.current (HERE).getter_mGuardedCommandList (HERE), enumerator_7739.current (HERE).getter_mEndOfTaskDeclaration (HERE), enumerator_7739.current (HERE).getter_mActivate (HERE)  COMMA_SOURCE_FILE ("task-declaration.galgas", 217)) ;
            var_continue_7558 = GALGAS_bool (true) ;
            {
            GALGAS_lstring joker_8441_11 ; // Joker input parameter
            GALGAS_lstringlist joker_8441_10 ; // Joker input parameter
            GALGAS_lbigint joker_8441_9 ; // Joker input parameter
            GALGAS_structurePropertyListAST joker_8441_8 ; // Joker input parameter
            GALGAS_functionDeclarationListAST joker_8441_7 ; // Joker input parameter
            GALGAS_taskSetupListAST joker_8441_6 ; // Joker input parameter
            GALGAS_taskSetupListAST joker_8441_5 ; // Joker input parameter
            GALGAS_taskSetupListAST joker_8441_4 ; // Joker input parameter
            GALGAS_syncInstructionBranchListAST joker_8441_3 ; // Joker input parameter
            GALGAS_location joker_8441_2 ; // Joker input parameter
            GALGAS_bool joker_8441_1 ; // Joker input parameter
            var_taskList_7468.setter_removeAtIndex (joker_8441_11, joker_8441_10, joker_8441_9, joker_8441_8, joker_8441_7, joker_8441_6, joker_8441_5, joker_8441_4, joker_8441_3, joker_8441_2, joker_8441_1, var_idx_7710, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 230)) ;
            }
          }else if (kBoolFalse == test_3) {
            var_idx_7710 = var_idx_7710.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 232)) ;
          }
          enumerator_7739.gotoNextObject () ;
        }
        GALGAS_bool test_4 = GALGAS_bool (gOption_plm_5F_options_taskStrictPriorityOrder.getter_value ()) ;
        if (kBoolTrue == test_4.boolEnum ()) {
          test_4 = GALGAS_bool (kIsStrictSup, var_candidateTaskList_7693.getter_length (SOURCE_FILE ("task-declaration.galgas", 235)).objectCompare (GALGAS_uint ((uint32_t) 1U))) ;
        }
        const enumGalgasBool test_5 = test_4.boolEnum () ;
        if (kBoolTrue == test_5) {
          cEnumerator_taskListAST enumerator_8636 (var_candidateTaskList_7693, kENUMERATION_UP) ;
          while (enumerator_8636.hasCurrentObject ()) {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (enumerator_8636.current (HERE).getter_mTaskName (HERE).getter_location (SOURCE_FILE ("task-declaration.galgas", 237)), GALGAS_string ("this task does not respect a strict priority order"), fixItArray6  COMMA_SOURCE_FILE ("task-declaration.galgas", 237)) ;
            enumerator_8636.gotoNextObject () ;
          }
        }
        const enumGalgasBool test_7 = GALGAS_bool (kIsStrictSup, var_candidateTaskList_7693.getter_length (SOURCE_FILE ("task-declaration.galgas", 240)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_7) {
          var_continue_7558 = GALGAS_bool (true) ;
          cEnumerator_taskListAST enumerator_8842 (var_candidateTaskList_7693, kENUMERATION_UP) ;
          while (enumerator_8842.hasCurrentObject ()) {
            var_handledTaskSet_7538.addAssign_operation (enumerator_8842.current (HERE).getter_mTaskName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("task-declaration.galgas", 243)) ;
            enumerator_8842.gotoNextObject () ;
          }
          var_sortedTaskList_7505.plusAssign_operation(var_candidateTaskList_7693, inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 245)) ;
        }
      }
    }
  }
  cEnumerator_taskListAST enumerator_9027 (var_taskList_7468, kENUMERATION_UP) ;
  while (enumerator_9027.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray8 ;
    inCompiler->emitSemanticError (enumerator_9027.current_mTaskName (HERE).getter_location (SOURCE_FILE ("task-declaration.galgas", 250)), GALGAS_string ("this task is out of priority order"), fixItArray8  COMMA_SOURCE_FILE ("task-declaration.galgas", 250)) ;
    enumerator_9027.gotoNextObject () ;
  }
  GALGAS_decoratedTaskList var_decoratedTaskList_9134 = GALGAS_decoratedTaskList::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 253)) ;
  cEnumerator_taskListAST enumerator_9168 (var_sortedTaskList_7505, kENUMERATION_UP) ;
  while (enumerator_9168.hasCurrentObject ()) {
    GALGAS_propertyList var_propertyList_9224 = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 256)) ;
    GALGAS_propertyMap var_propertyMap_9258 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("task-declaration.galgas", 257)) ;
    GALGAS_sortedOperandIRList var_initialValueList_9305 = GALGAS_sortedOperandIRList::constructor_emptySortedList (SOURCE_FILE ("task-declaration.galgas", 258)) ;
    cEnumerator_structurePropertyListAST enumerator_9344 (enumerator_9168.current (HERE).getter_mVarList (HERE), kENUMERATION_UP) ;
    while (enumerator_9344.hasCurrentObject ()) {
      GALGAS_constructorSignature joker_9565 = GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 267)) ;
      GALGAS_string joker_9577 = GALGAS_string::constructor_default (SOURCE_FILE ("task-declaration.galgas", 268)) ;
      GALGAS_bool joker_9589 = GALGAS_bool::constructor_default (SOURCE_FILE ("task-declaration.galgas", 269)) ;
      extensionMethod_enterPropertyInContext (enumerator_9344.current (HERE), enumerator_9168.current (HERE).getter_mTaskName (HERE), ioArgument_ioContext, ioArgument_ioStaticEntityMap, var_propertyList_9224, var_propertyMap_9258, var_initialValueList_9305, joker_9565, joker_9577, joker_9589, ioArgument_ioGlobalVariableIRList, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 260)) ;
      enumerator_9344.gotoNextObject () ;
    }
    {
    extensionSetter_addFunctionWithoutArgument (var_propertyMap_9258, ioArgument_ioSubprogramInvocationGraph, enumerator_9168.current (HERE).getter_mTaskName (HERE).getter_string (SOURCE_FILE ("task-declaration.galgas", 276)), GALGAS_string ("activate"), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("task-declaration.galgas", 279)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 274)) ;
    }
    extensionMethod_enterFunctionsInPropertyMap (enumerator_9168.current (HERE).getter_mTaskFunctionList (HERE), enumerator_9168.current (HERE).getter_mTaskName (HERE).getter_string (SOURCE_FILE ("task-declaration.galgas", 283)), ioArgument_ioContext, var_propertyMap_9258, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 283)) ;
    GALGAS_PLMType var_taskType_10159 = GALGAS_PLMType::constructor_new (var_propertyMap_9258, GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("task-declaration.galgas", 287)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("task-declaration.galgas", 288)), GALGAS_guardMapForContext::constructor_emptyMap (SOURCE_FILE ("task-declaration.galgas", 289)), GALGAS_PLMTypeAttributes::constructor_none (SOURCE_FILE ("task-declaration.galgas", 290)), enumerator_9168.current (HERE).getter_mTaskName (HERE).getter_string (SOURCE_FILE ("task-declaration.galgas", 291)), GALGAS_typeKind::constructor_structure (var_propertyList_9224  COMMA_SOURCE_FILE ("task-declaration.galgas", 292)), enumerator_9168.current (HERE).getter_mTaskName (HERE).getter_string (SOURCE_FILE ("task-declaration.galgas", 293))  COMMA_SOURCE_FILE ("task-declaration.galgas", 285)) ;
    {
    ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (enumerator_9168.current (HERE).getter_mTaskName (HERE), var_taskType_10159, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("task-declaration.galgas", 298)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 295)) ;
    }
    {
    ioArgument_ioContext.mProperty_mTaskMap.setter_insertKey (enumerator_9168.current (HERE).getter_mTaskName (HERE), var_taskType_10159, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 301)) ;
    }
    {
    extensionSetter_insertTask (ioArgument_ioContext.mProperty_mValuedObjectMap, enumerator_9168.current (HERE).getter_mTaskName (HERE), var_taskType_10159, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 302)) ;
    }
    ioArgument_ioContext.mProperty_mGlobalTaskVariableList.addAssign_operation (enumerator_9168.current (HERE).getter_mTaskName (HERE).getter_string (HERE), enumerator_9168.current (HERE).getter_mTaskName (HERE).getter_string (HERE), GALGAS_objectIR::constructor_llvmStructureValue (var_taskType_10159, var_initialValueList_9305  COMMA_SOURCE_FILE ("task-declaration.galgas", 306))  COMMA_SOURCE_FILE ("task-declaration.galgas", 303)) ;
    extensionMethod_enterFunctionInContext (enumerator_9168.current (HERE).getter_mTaskFunctionList (HERE), enumerator_9168.current (HERE).getter_mTaskName (HERE), ioArgument_ioContext, ioArgument_ioDecoratedRoutineList, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 308)) ;
    var_decoratedTaskList_9134.addAssign_operation (enumerator_9168.current (HERE).getter_mTaskName (HERE), enumerator_9168.current (HERE).getter_mStackSize (HERE), enumerator_9168.current (HERE).getter_mVarList (HERE), enumerator_9168.current (HERE).getter_mTaskFunctionList (HERE), enumerator_9168.current (HERE).getter_mTaskSetupListAST (HERE), enumerator_9168.current (HERE).getter_mTaskActivateListAST (HERE), enumerator_9168.current (HERE).getter_mTaskDeactivateListAST (HERE), enumerator_9168.current (HERE).getter_mGuardedCommandList (HERE), enumerator_9168.current (HERE).getter_mEndOfTaskDeclaration (HERE), enumerator_9168.current (HERE).getter_mActivate (HERE)  COMMA_SOURCE_FILE ("task-declaration.galgas", 314)) ;
    enumerator_9168.gotoNextObject () ;
  }
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedTaskListDeclaration::constructor_new (var_decoratedTaskList_9134  COMMA_SOURCE_FILE ("task-declaration.galgas", 327))  COMMA_SOURCE_FILE ("task-declaration.galgas", 327)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Class for element of '@decoratedTaskList' list                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_decoratedTaskList : public cCollectionElement {
  public : GALGAS_decoratedTaskList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_decoratedTaskList (const GALGAS_lstring & in_mTaskName,
                                                 const GALGAS_lbigint & in_mStackSize,
                                                 const GALGAS_structurePropertyListAST & in_mVarList,
                                                 const GALGAS_functionDeclarationListAST & in_mTaskProcList,
                                                 const GALGAS_taskSetupListAST & in_mTaskSetupListAST,
                                                 const GALGAS_taskSetupListAST & in_mTaskActivateListAST,
                                                 const GALGAS_taskSetupListAST & in_mTaskDeactivateListAST,
                                                 const GALGAS_syncInstructionBranchListAST & in_mGuardedCommandList,
                                                 const GALGAS_location & in_mEndOfTaskDeclaration,
                                                 const GALGAS_bool & in_mActivate
                                                 COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_decoratedTaskList (const GALGAS_decoratedTaskList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_decoratedTaskList::cCollectionElement_decoratedTaskList (const GALGAS_lstring & in_mTaskName,
                                                                            const GALGAS_lbigint & in_mStackSize,
                                                                            const GALGAS_structurePropertyListAST & in_mVarList,
                                                                            const GALGAS_functionDeclarationListAST & in_mTaskProcList,
                                                                            const GALGAS_taskSetupListAST & in_mTaskSetupListAST,
                                                                            const GALGAS_taskSetupListAST & in_mTaskActivateListAST,
                                                                            const GALGAS_taskSetupListAST & in_mTaskDeactivateListAST,
                                                                            const GALGAS_syncInstructionBranchListAST & in_mGuardedCommandList,
                                                                            const GALGAS_location & in_mEndOfTaskDeclaration,
                                                                            const GALGAS_bool & in_mActivate
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTaskName, in_mStackSize, in_mVarList, in_mTaskProcList, in_mTaskSetupListAST, in_mTaskActivateListAST, in_mTaskDeactivateListAST, in_mGuardedCommandList, in_mEndOfTaskDeclaration, in_mActivate) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_decoratedTaskList::cCollectionElement_decoratedTaskList (const GALGAS_decoratedTaskList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTaskName, inElement.mProperty_mStackSize, inElement.mProperty_mVarList, inElement.mProperty_mTaskProcList, inElement.mProperty_mTaskSetupListAST, inElement.mProperty_mTaskActivateListAST, inElement.mProperty_mTaskDeactivateListAST, inElement.mProperty_mGuardedCommandList, inElement.mProperty_mEndOfTaskDeclaration, inElement.mProperty_mActivate) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_decoratedTaskList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_decoratedTaskList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_decoratedTaskList (mObject.mProperty_mTaskName, mObject.mProperty_mStackSize, mObject.mProperty_mVarList, mObject.mProperty_mTaskProcList, mObject.mProperty_mTaskSetupListAST, mObject.mProperty_mTaskActivateListAST, mObject.mProperty_mTaskDeactivateListAST, mObject.mProperty_mGuardedCommandList, mObject.mProperty_mEndOfTaskDeclaration, mObject.mProperty_mActivate COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_decoratedTaskList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskName" ":" ;
  mObject.mProperty_mTaskName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStackSize" ":" ;
  mObject.mProperty_mStackSize.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mVarList" ":" ;
  mObject.mProperty_mVarList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskProcList" ":" ;
  mObject.mProperty_mTaskProcList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskSetupListAST" ":" ;
  mObject.mProperty_mTaskSetupListAST.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskActivateListAST" ":" ;
  mObject.mProperty_mTaskActivateListAST.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskDeactivateListAST" ":" ;
  mObject.mProperty_mTaskDeactivateListAST.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGuardedCommandList" ":" ;
  mObject.mProperty_mGuardedCommandList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfTaskDeclaration" ":" ;
  mObject.mProperty_mEndOfTaskDeclaration.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActivate" ":" ;
  mObject.mProperty_mActivate.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_decoratedTaskList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_decoratedTaskList * operand = (cCollectionElement_decoratedTaskList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_decoratedTaskList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedTaskList::GALGAS_decoratedTaskList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedTaskList::GALGAS_decoratedTaskList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedTaskList GALGAS_decoratedTaskList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_decoratedTaskList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedTaskList GALGAS_decoratedTaskList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_lbigint & inOperand1,
                                                                              const GALGAS_structurePropertyListAST & inOperand2,
                                                                              const GALGAS_functionDeclarationListAST & inOperand3,
                                                                              const GALGAS_taskSetupListAST & inOperand4,
                                                                              const GALGAS_taskSetupListAST & inOperand5,
                                                                              const GALGAS_taskSetupListAST & inOperand6,
                                                                              const GALGAS_syncInstructionBranchListAST & inOperand7,
                                                                              const GALGAS_location & inOperand8,
                                                                              const GALGAS_bool & inOperand9
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_decoratedTaskList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid ()) {
    result = GALGAS_decoratedTaskList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_decoratedTaskList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedTaskList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GALGAS_lstring & in_mTaskName,
                                                          const GALGAS_lbigint & in_mStackSize,
                                                          const GALGAS_structurePropertyListAST & in_mVarList,
                                                          const GALGAS_functionDeclarationListAST & in_mTaskProcList,
                                                          const GALGAS_taskSetupListAST & in_mTaskSetupListAST,
                                                          const GALGAS_taskSetupListAST & in_mTaskActivateListAST,
                                                          const GALGAS_taskSetupListAST & in_mTaskDeactivateListAST,
                                                          const GALGAS_syncInstructionBranchListAST & in_mGuardedCommandList,
                                                          const GALGAS_location & in_mEndOfTaskDeclaration,
                                                          const GALGAS_bool & in_mActivate
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_decoratedTaskList * p = NULL ;
  macroMyNew (p, cCollectionElement_decoratedTaskList (in_mTaskName,
                                                       in_mStackSize,
                                                       in_mVarList,
                                                       in_mTaskProcList,
                                                       in_mTaskSetupListAST,
                                                       in_mTaskActivateListAST,
                                                       in_mTaskDeactivateListAST,
                                                       in_mGuardedCommandList,
                                                       in_mEndOfTaskDeclaration,
                                                       in_mActivate COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedTaskList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                    const GALGAS_lbigint & inOperand1,
                                                    const GALGAS_structurePropertyListAST & inOperand2,
                                                    const GALGAS_functionDeclarationListAST & inOperand3,
                                                    const GALGAS_taskSetupListAST & inOperand4,
                                                    const GALGAS_taskSetupListAST & inOperand5,
                                                    const GALGAS_taskSetupListAST & inOperand6,
                                                    const GALGAS_syncInstructionBranchListAST & inOperand7,
                                                    const GALGAS_location & inOperand8,
                                                    const GALGAS_bool & inOperand9
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_decoratedTaskList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedTaskList::setter_append (GALGAS_decoratedTaskList_2D_element inElement,
                                              C_Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_decoratedTaskList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedTaskList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                     const GALGAS_lbigint inOperand1,
                                                     const GALGAS_structurePropertyListAST inOperand2,
                                                     const GALGAS_functionDeclarationListAST inOperand3,
                                                     const GALGAS_taskSetupListAST inOperand4,
                                                     const GALGAS_taskSetupListAST inOperand5,
                                                     const GALGAS_taskSetupListAST inOperand6,
                                                     const GALGAS_syncInstructionBranchListAST inOperand7,
                                                     const GALGAS_location inOperand8,
                                                     const GALGAS_bool inOperand9,
                                                     const GALGAS_uint inInsertionIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_decoratedTaskList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedTaskList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                     GALGAS_lbigint & outOperand1,
                                                     GALGAS_structurePropertyListAST & outOperand2,
                                                     GALGAS_functionDeclarationListAST & outOperand3,
                                                     GALGAS_taskSetupListAST & outOperand4,
                                                     GALGAS_taskSetupListAST & outOperand5,
                                                     GALGAS_taskSetupListAST & outOperand6,
                                                     GALGAS_syncInstructionBranchListAST & outOperand7,
                                                     GALGAS_location & outOperand8,
                                                     GALGAS_bool & outOperand9,
                                                     const GALGAS_uint inRemoveIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
      outOperand6.drop () ;
      outOperand7.drop () ;
      outOperand8.drop () ;
      outOperand9.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
      outOperand0 = p->mObject.mProperty_mTaskName ;
      outOperand1 = p->mObject.mProperty_mStackSize ;
      outOperand2 = p->mObject.mProperty_mVarList ;
      outOperand3 = p->mObject.mProperty_mTaskProcList ;
      outOperand4 = p->mObject.mProperty_mTaskSetupListAST ;
      outOperand5 = p->mObject.mProperty_mTaskActivateListAST ;
      outOperand6 = p->mObject.mProperty_mTaskDeactivateListAST ;
      outOperand7 = p->mObject.mProperty_mGuardedCommandList ;
      outOperand8 = p->mObject.mProperty_mEndOfTaskDeclaration ;
      outOperand9 = p->mObject.mProperty_mActivate ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedTaskList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                GALGAS_lbigint & outOperand1,
                                                GALGAS_structurePropertyListAST & outOperand2,
                                                GALGAS_functionDeclarationListAST & outOperand3,
                                                GALGAS_taskSetupListAST & outOperand4,
                                                GALGAS_taskSetupListAST & outOperand5,
                                                GALGAS_taskSetupListAST & outOperand6,
                                                GALGAS_syncInstructionBranchListAST & outOperand7,
                                                GALGAS_location & outOperand8,
                                                GALGAS_bool & outOperand9,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mStackSize ;
    outOperand2 = p->mObject.mProperty_mVarList ;
    outOperand3 = p->mObject.mProperty_mTaskProcList ;
    outOperand4 = p->mObject.mProperty_mTaskSetupListAST ;
    outOperand5 = p->mObject.mProperty_mTaskActivateListAST ;
    outOperand6 = p->mObject.mProperty_mTaskDeactivateListAST ;
    outOperand7 = p->mObject.mProperty_mGuardedCommandList ;
    outOperand8 = p->mObject.mProperty_mEndOfTaskDeclaration ;
    outOperand9 = p->mObject.mProperty_mActivate ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedTaskList::setter_popLast (GALGAS_lstring & outOperand0,
                                               GALGAS_lbigint & outOperand1,
                                               GALGAS_structurePropertyListAST & outOperand2,
                                               GALGAS_functionDeclarationListAST & outOperand3,
                                               GALGAS_taskSetupListAST & outOperand4,
                                               GALGAS_taskSetupListAST & outOperand5,
                                               GALGAS_taskSetupListAST & outOperand6,
                                               GALGAS_syncInstructionBranchListAST & outOperand7,
                                               GALGAS_location & outOperand8,
                                               GALGAS_bool & outOperand9,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mStackSize ;
    outOperand2 = p->mObject.mProperty_mVarList ;
    outOperand3 = p->mObject.mProperty_mTaskProcList ;
    outOperand4 = p->mObject.mProperty_mTaskSetupListAST ;
    outOperand5 = p->mObject.mProperty_mTaskActivateListAST ;
    outOperand6 = p->mObject.mProperty_mTaskDeactivateListAST ;
    outOperand7 = p->mObject.mProperty_mGuardedCommandList ;
    outOperand8 = p->mObject.mProperty_mEndOfTaskDeclaration ;
    outOperand9 = p->mObject.mProperty_mActivate ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedTaskList::method_first (GALGAS_lstring & outOperand0,
                                             GALGAS_lbigint & outOperand1,
                                             GALGAS_structurePropertyListAST & outOperand2,
                                             GALGAS_functionDeclarationListAST & outOperand3,
                                             GALGAS_taskSetupListAST & outOperand4,
                                             GALGAS_taskSetupListAST & outOperand5,
                                             GALGAS_taskSetupListAST & outOperand6,
                                             GALGAS_syncInstructionBranchListAST & outOperand7,
                                             GALGAS_location & outOperand8,
                                             GALGAS_bool & outOperand9,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mStackSize ;
    outOperand2 = p->mObject.mProperty_mVarList ;
    outOperand3 = p->mObject.mProperty_mTaskProcList ;
    outOperand4 = p->mObject.mProperty_mTaskSetupListAST ;
    outOperand5 = p->mObject.mProperty_mTaskActivateListAST ;
    outOperand6 = p->mObject.mProperty_mTaskDeactivateListAST ;
    outOperand7 = p->mObject.mProperty_mGuardedCommandList ;
    outOperand8 = p->mObject.mProperty_mEndOfTaskDeclaration ;
    outOperand9 = p->mObject.mProperty_mActivate ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedTaskList::method_last (GALGAS_lstring & outOperand0,
                                            GALGAS_lbigint & outOperand1,
                                            GALGAS_structurePropertyListAST & outOperand2,
                                            GALGAS_functionDeclarationListAST & outOperand3,
                                            GALGAS_taskSetupListAST & outOperand4,
                                            GALGAS_taskSetupListAST & outOperand5,
                                            GALGAS_taskSetupListAST & outOperand6,
                                            GALGAS_syncInstructionBranchListAST & outOperand7,
                                            GALGAS_location & outOperand8,
                                            GALGAS_bool & outOperand9,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mStackSize ;
    outOperand2 = p->mObject.mProperty_mVarList ;
    outOperand3 = p->mObject.mProperty_mTaskProcList ;
    outOperand4 = p->mObject.mProperty_mTaskSetupListAST ;
    outOperand5 = p->mObject.mProperty_mTaskActivateListAST ;
    outOperand6 = p->mObject.mProperty_mTaskDeactivateListAST ;
    outOperand7 = p->mObject.mProperty_mGuardedCommandList ;
    outOperand8 = p->mObject.mProperty_mEndOfTaskDeclaration ;
    outOperand9 = p->mObject.mProperty_mActivate ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedTaskList GALGAS_decoratedTaskList::add_operation (const GALGAS_decoratedTaskList & inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_decoratedTaskList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedTaskList GALGAS_decoratedTaskList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedTaskList result = GALGAS_decoratedTaskList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedTaskList GALGAS_decoratedTaskList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedTaskList result = GALGAS_decoratedTaskList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedTaskList GALGAS_decoratedTaskList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedTaskList result = GALGAS_decoratedTaskList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedTaskList::plusAssign_operation (const GALGAS_decoratedTaskList inOperand,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_decoratedTaskList::getter_mTaskNameAtIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    result = p->mObject.mProperty_mTaskName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lbigint GALGAS_decoratedTaskList::getter_mStackSizeAtIndex (const GALGAS_uint & inIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
  GALGAS_lbigint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    result = p->mObject.mProperty_mStackSize ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structurePropertyListAST GALGAS_decoratedTaskList::getter_mVarListAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
  GALGAS_structurePropertyListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    result = p->mObject.mProperty_mVarList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionDeclarationListAST GALGAS_decoratedTaskList::getter_mTaskProcListAtIndex (const GALGAS_uint & inIndex,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
  GALGAS_functionDeclarationListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    result = p->mObject.mProperty_mTaskProcList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskSetupListAST GALGAS_decoratedTaskList::getter_mTaskSetupListASTAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
  GALGAS_taskSetupListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    result = p->mObject.mProperty_mTaskSetupListAST ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskSetupListAST GALGAS_decoratedTaskList::getter_mTaskActivateListASTAtIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
  GALGAS_taskSetupListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    result = p->mObject.mProperty_mTaskActivateListAST ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskSetupListAST GALGAS_decoratedTaskList::getter_mTaskDeactivateListASTAtIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
  GALGAS_taskSetupListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    result = p->mObject.mProperty_mTaskDeactivateListAST ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_syncInstructionBranchListAST GALGAS_decoratedTaskList::getter_mGuardedCommandListAtIndex (const GALGAS_uint & inIndex,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
  GALGAS_syncInstructionBranchListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    result = p->mObject.mProperty_mGuardedCommandList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_decoratedTaskList::getter_mEndOfTaskDeclarationAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    result = p->mObject.mProperty_mEndOfTaskDeclaration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_decoratedTaskList::getter_mActivateAtIndex (const GALGAS_uint & inIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    result = p->mObject.mProperty_mActivate ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_decoratedTaskList::cEnumerator_decoratedTaskList (const GALGAS_decoratedTaskList & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedTaskList_2D_element cEnumerator_decoratedTaskList::current (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_decoratedTaskList::current_mTaskName (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject.mProperty_mTaskName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lbigint cEnumerator_decoratedTaskList::current_mStackSize (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject.mProperty_mStackSize ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structurePropertyListAST cEnumerator_decoratedTaskList::current_mVarList (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject.mProperty_mVarList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionDeclarationListAST cEnumerator_decoratedTaskList::current_mTaskProcList (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject.mProperty_mTaskProcList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskSetupListAST cEnumerator_decoratedTaskList::current_mTaskSetupListAST (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject.mProperty_mTaskSetupListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskSetupListAST cEnumerator_decoratedTaskList::current_mTaskActivateListAST (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject.mProperty_mTaskActivateListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskSetupListAST cEnumerator_decoratedTaskList::current_mTaskDeactivateListAST (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject.mProperty_mTaskDeactivateListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_syncInstructionBranchListAST cEnumerator_decoratedTaskList::current_mGuardedCommandList (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject.mProperty_mGuardedCommandList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cEnumerator_decoratedTaskList::current_mEndOfTaskDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject.mProperty_mEndOfTaskDeclaration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_decoratedTaskList::current_mActivate (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject.mProperty_mActivate ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @decoratedTaskList type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedTaskList ("decoratedTaskList",
                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_decoratedTaskList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedTaskList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_decoratedTaskList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedTaskList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedTaskList GALGAS_decoratedTaskList::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_decoratedTaskList result ;
  const GALGAS_decoratedTaskList * p = (const GALGAS_decoratedTaskList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedTaskList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedTaskList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_decoratedTaskListDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_decoratedTaskListDeclaration * p = (const cPtr_decoratedTaskListDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_decoratedTaskListDeclaration) ;
  if (kOperandEqual == result) {
    result = mProperty_mTaskList.objectCompare (p->mProperty_mTaskList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_decoratedTaskListDeclaration::objectCompare (const GALGAS_decoratedTaskListDeclaration & inOperand) const {
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

GALGAS_decoratedTaskListDeclaration::GALGAS_decoratedTaskListDeclaration (void) :
GALGAS_abstractDecoratedDeclaration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedTaskListDeclaration GALGAS_decoratedTaskListDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_decoratedTaskListDeclaration::constructor_new (GALGAS_decoratedTaskList::constructor_emptyList (HERE)
                                                               COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedTaskListDeclaration::GALGAS_decoratedTaskListDeclaration (const cPtr_decoratedTaskListDeclaration * inSourcePtr) :
GALGAS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedTaskListDeclaration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedTaskListDeclaration GALGAS_decoratedTaskListDeclaration::constructor_new (const GALGAS_decoratedTaskList & inAttribute_mTaskList
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_decoratedTaskListDeclaration result ;
  if (inAttribute_mTaskList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_decoratedTaskListDeclaration (inAttribute_mTaskList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedTaskList GALGAS_decoratedTaskListDeclaration::getter_mTaskList (UNUSED_LOCATION_ARGS) const {
  GALGAS_decoratedTaskList result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedTaskListDeclaration * p = (const cPtr_decoratedTaskListDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedTaskListDeclaration) ;
    result = p->mProperty_mTaskList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedTaskList cPtr_decoratedTaskListDeclaration::getter_mTaskList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @decoratedTaskListDeclaration class                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_decoratedTaskListDeclaration::cPtr_decoratedTaskListDeclaration (const GALGAS_decoratedTaskList & in_mTaskList
                                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (THERE),
mProperty_mTaskList (in_mTaskList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_decoratedTaskListDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedTaskListDeclaration ;
}

void cPtr_decoratedTaskListDeclaration::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@decoratedTaskListDeclaration:" ;
  mProperty_mTaskList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_decoratedTaskListDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_decoratedTaskListDeclaration (mProperty_mTaskList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @decoratedTaskListDeclaration type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedTaskListDeclaration ("decoratedTaskListDeclaration",
                                                     & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_decoratedTaskListDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedTaskListDeclaration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_decoratedTaskListDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedTaskListDeclaration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedTaskListDeclaration GALGAS_decoratedTaskListDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_decoratedTaskListDeclaration result ;
  const GALGAS_decoratedTaskListDeclaration * p = (const GALGAS_decoratedTaskListDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedTaskListDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedTaskListDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_taskMapIR::cMapElement_taskMapIR (const GALGAS_lstring & inKey,
                                              const GALGAS_PLMType & in_mTaskType,
                                              const GALGAS_uint & in_mPriority,
                                              const GALGAS_bigint & in_mStackSize,
                                              const GALGAS_allocaList & in_mSetupAllocaList,
                                              const GALGAS_instructionListIR & in_mSetupInstructionListIR,
                                              const GALGAS_allocaList & in_mActivateAllocaList,
                                              const GALGAS_instructionListIR & in_mActivateInstructionListIR,
                                              const GALGAS_allocaList & in_mDeactivateAllocaList,
                                              const GALGAS_instructionListIR & in_mDeactivateInstructionListIR,
                                              const GALGAS_uint & in_mTaskNameStringIndex,
                                              const GALGAS_bool & in_mActivate
                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mTaskType (in_mTaskType),
mProperty_mPriority (in_mPriority),
mProperty_mStackSize (in_mStackSize),
mProperty_mSetupAllocaList (in_mSetupAllocaList),
mProperty_mSetupInstructionListIR (in_mSetupInstructionListIR),
mProperty_mActivateAllocaList (in_mActivateAllocaList),
mProperty_mActivateInstructionListIR (in_mActivateInstructionListIR),
mProperty_mDeactivateAllocaList (in_mDeactivateAllocaList),
mProperty_mDeactivateInstructionListIR (in_mDeactivateInstructionListIR),
mProperty_mTaskNameStringIndex (in_mTaskNameStringIndex),
mProperty_mActivate (in_mActivate) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_taskMapIR::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mTaskType.isValid () && mProperty_mPriority.isValid () && mProperty_mStackSize.isValid () && mProperty_mSetupAllocaList.isValid () && mProperty_mSetupInstructionListIR.isValid () && mProperty_mActivateAllocaList.isValid () && mProperty_mActivateInstructionListIR.isValid () && mProperty_mDeactivateAllocaList.isValid () && mProperty_mDeactivateInstructionListIR.isValid () && mProperty_mTaskNameStringIndex.isValid () && mProperty_mActivate.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_taskMapIR::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_taskMapIR (mProperty_lkey, mProperty_mTaskType, mProperty_mPriority, mProperty_mStackSize, mProperty_mSetupAllocaList, mProperty_mSetupInstructionListIR, mProperty_mActivateAllocaList, mProperty_mActivateInstructionListIR, mProperty_mDeactivateAllocaList, mProperty_mDeactivateInstructionListIR, mProperty_mTaskNameStringIndex, mProperty_mActivate COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_taskMapIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskType" ":" ;
  mProperty_mTaskType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPriority" ":" ;
  mProperty_mPriority.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStackSize" ":" ;
  mProperty_mStackSize.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSetupAllocaList" ":" ;
  mProperty_mSetupAllocaList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSetupInstructionListIR" ":" ;
  mProperty_mSetupInstructionListIR.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActivateAllocaList" ":" ;
  mProperty_mActivateAllocaList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActivateInstructionListIR" ":" ;
  mProperty_mActivateInstructionListIR.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDeactivateAllocaList" ":" ;
  mProperty_mDeactivateAllocaList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDeactivateInstructionListIR" ":" ;
  mProperty_mDeactivateInstructionListIR.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskNameStringIndex" ":" ;
  mProperty_mTaskNameStringIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActivate" ":" ;
  mProperty_mActivate.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_taskMapIR::compare (const cCollectionElement * inOperand) const {
  cMapElement_taskMapIR * operand = (cMapElement_taskMapIR *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mTaskType.objectCompare (operand->mProperty_mTaskType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPriority.objectCompare (operand->mProperty_mPriority) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStackSize.objectCompare (operand->mProperty_mStackSize) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSetupAllocaList.objectCompare (operand->mProperty_mSetupAllocaList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSetupInstructionListIR.objectCompare (operand->mProperty_mSetupInstructionListIR) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActivateAllocaList.objectCompare (operand->mProperty_mActivateAllocaList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActivateInstructionListIR.objectCompare (operand->mProperty_mActivateInstructionListIR) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDeactivateAllocaList.objectCompare (operand->mProperty_mDeactivateAllocaList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDeactivateInstructionListIR.objectCompare (operand->mProperty_mDeactivateInstructionListIR) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTaskNameStringIndex.objectCompare (operand->mProperty_mTaskNameStringIndex) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActivate.objectCompare (operand->mProperty_mActivate) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskMapIR::GALGAS_taskMapIR (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskMapIR::GALGAS_taskMapIR (const GALGAS_taskMapIR & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskMapIR & GALGAS_taskMapIR::operator = (const GALGAS_taskMapIR & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskMapIR GALGAS_taskMapIR::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_taskMapIR result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskMapIR GALGAS_taskMapIR::constructor_mapWithMapToOverride (const GALGAS_taskMapIR & inMapToOverride
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_taskMapIR result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskMapIR GALGAS_taskMapIR::getter_overriddenMap (C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_taskMapIR result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskMapIR::addAssign_operation (const GALGAS_lstring & inKey,
                                            const GALGAS_PLMType & inArgument0,
                                            const GALGAS_uint & inArgument1,
                                            const GALGAS_bigint & inArgument2,
                                            const GALGAS_allocaList & inArgument3,
                                            const GALGAS_instructionListIR & inArgument4,
                                            const GALGAS_allocaList & inArgument5,
                                            const GALGAS_instructionListIR & inArgument6,
                                            const GALGAS_allocaList & inArgument7,
                                            const GALGAS_instructionListIR & inArgument8,
                                            const GALGAS_uint & inArgument9,
                                            const GALGAS_bool & inArgument10,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cMapElement_taskMapIR * p = NULL ;
  macroMyNew (p, cMapElement_taskMapIR (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6, inArgument7, inArgument8, inArgument9, inArgument10 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@taskMapIR insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskMapIR::setter_insertKey (GALGAS_lstring inKey,
                                         GALGAS_PLMType inArgument0,
                                         GALGAS_uint inArgument1,
                                         GALGAS_bigint inArgument2,
                                         GALGAS_allocaList inArgument3,
                                         GALGAS_instructionListIR inArgument4,
                                         GALGAS_allocaList inArgument5,
                                         GALGAS_instructionListIR inArgument6,
                                         GALGAS_allocaList inArgument7,
                                         GALGAS_instructionListIR inArgument8,
                                         GALGAS_uint inArgument9,
                                         GALGAS_bool inArgument10,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cMapElement_taskMapIR * p = NULL ;
  macroMyNew (p, cMapElement_taskMapIR (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6, inArgument7, inArgument8, inArgument9, inArgument10 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "** internal error **" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_taskMapIR_searchKey = "** internal error **" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskMapIR::method_searchKey (GALGAS_lstring inKey,
                                         GALGAS_PLMType & outArgument0,
                                         GALGAS_uint & outArgument1,
                                         GALGAS_bigint & outArgument2,
                                         GALGAS_allocaList & outArgument3,
                                         GALGAS_instructionListIR & outArgument4,
                                         GALGAS_allocaList & outArgument5,
                                         GALGAS_instructionListIR & outArgument6,
                                         GALGAS_allocaList & outArgument7,
                                         GALGAS_instructionListIR & outArgument8,
                                         GALGAS_uint & outArgument9,
                                         GALGAS_bool & outArgument10,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) performSearch (inKey,
                                                                                   inCompiler,
                                                                                   kSearchErrorMessage_taskMapIR_searchKey
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
    outArgument10.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    outArgument0 = p->mProperty_mTaskType ;
    outArgument1 = p->mProperty_mPriority ;
    outArgument2 = p->mProperty_mStackSize ;
    outArgument3 = p->mProperty_mSetupAllocaList ;
    outArgument4 = p->mProperty_mSetupInstructionListIR ;
    outArgument5 = p->mProperty_mActivateAllocaList ;
    outArgument6 = p->mProperty_mActivateInstructionListIR ;
    outArgument7 = p->mProperty_mDeactivateAllocaList ;
    outArgument8 = p->mProperty_mDeactivateInstructionListIR ;
    outArgument9 = p->mProperty_mTaskNameStringIndex ;
    outArgument10 = p->mProperty_mActivate ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskMapIR::setter_removeKey (GALGAS_lstring inKey,
                                         GALGAS_PLMType & outArgument0,
                                         GALGAS_uint & outArgument1,
                                         GALGAS_bigint & outArgument2,
                                         GALGAS_allocaList & outArgument3,
                                         GALGAS_instructionListIR & outArgument4,
                                         GALGAS_allocaList & outArgument5,
                                         GALGAS_instructionListIR & outArgument6,
                                         GALGAS_allocaList & outArgument7,
                                         GALGAS_instructionListIR & outArgument8,
                                         GALGAS_uint & outArgument9,
                                         GALGAS_bool & outArgument10,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  const char * kRemoveErrorMessage = "** internal error **" ;
  capCollectionElement attributes ;
  performRemove (inKey, attributes, inCompiler, kRemoveErrorMessage COMMA_THERE) ;
  cMapElement_taskMapIR * p = (cMapElement_taskMapIR *) attributes.ptr () ;
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
    outArgument10.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    outArgument0 = p->mProperty_mTaskType ;
    outArgument1 = p->mProperty_mPriority ;
    outArgument2 = p->mProperty_mStackSize ;
    outArgument3 = p->mProperty_mSetupAllocaList ;
    outArgument4 = p->mProperty_mSetupInstructionListIR ;
    outArgument5 = p->mProperty_mActivateAllocaList ;
    outArgument6 = p->mProperty_mActivateInstructionListIR ;
    outArgument7 = p->mProperty_mDeactivateAllocaList ;
    outArgument8 = p->mProperty_mDeactivateInstructionListIR ;
    outArgument9 = p->mProperty_mTaskNameStringIndex ;
    outArgument10 = p->mProperty_mActivate ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_taskMapIR::getter_mTaskTypeForKey (const GALGAS_string & inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) attributes ;
  GALGAS_PLMType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    result = p->mProperty_mTaskType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_taskMapIR::getter_mPriorityForKey (const GALGAS_string & inKey,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    result = p->mProperty_mPriority ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bigint GALGAS_taskMapIR::getter_mStackSizeForKey (const GALGAS_string & inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) attributes ;
  GALGAS_bigint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    result = p->mProperty_mStackSize ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_allocaList GALGAS_taskMapIR::getter_mSetupAllocaListForKey (const GALGAS_string & inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) attributes ;
  GALGAS_allocaList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    result = p->mProperty_mSetupAllocaList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListIR GALGAS_taskMapIR::getter_mSetupInstructionListIRForKey (const GALGAS_string & inKey,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) attributes ;
  GALGAS_instructionListIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    result = p->mProperty_mSetupInstructionListIR ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_allocaList GALGAS_taskMapIR::getter_mActivateAllocaListForKey (const GALGAS_string & inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) attributes ;
  GALGAS_allocaList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    result = p->mProperty_mActivateAllocaList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListIR GALGAS_taskMapIR::getter_mActivateInstructionListIRForKey (const GALGAS_string & inKey,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) attributes ;
  GALGAS_instructionListIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    result = p->mProperty_mActivateInstructionListIR ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_allocaList GALGAS_taskMapIR::getter_mDeactivateAllocaListForKey (const GALGAS_string & inKey,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) attributes ;
  GALGAS_allocaList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    result = p->mProperty_mDeactivateAllocaList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListIR GALGAS_taskMapIR::getter_mDeactivateInstructionListIRForKey (const GALGAS_string & inKey,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) attributes ;
  GALGAS_instructionListIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    result = p->mProperty_mDeactivateInstructionListIR ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_taskMapIR::getter_mTaskNameStringIndexForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    result = p->mProperty_mTaskNameStringIndex ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_taskMapIR::getter_mActivateForKey (const GALGAS_string & inKey,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    result = p->mProperty_mActivate ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskMapIR::setter_setMTaskTypeForKey (GALGAS_PLMType inAttributeValue,
                                                  GALGAS_string inKey,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_taskMapIR * p = (cMapElement_taskMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    p->mProperty_mTaskType = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskMapIR::setter_setMPriorityForKey (GALGAS_uint inAttributeValue,
                                                  GALGAS_string inKey,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_taskMapIR * p = (cMapElement_taskMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    p->mProperty_mPriority = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskMapIR::setter_setMStackSizeForKey (GALGAS_bigint inAttributeValue,
                                                   GALGAS_string inKey,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_taskMapIR * p = (cMapElement_taskMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    p->mProperty_mStackSize = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskMapIR::setter_setMSetupAllocaListForKey (GALGAS_allocaList inAttributeValue,
                                                         GALGAS_string inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_taskMapIR * p = (cMapElement_taskMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    p->mProperty_mSetupAllocaList = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskMapIR::setter_setMSetupInstructionListIRForKey (GALGAS_instructionListIR inAttributeValue,
                                                                GALGAS_string inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_taskMapIR * p = (cMapElement_taskMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    p->mProperty_mSetupInstructionListIR = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskMapIR::setter_setMActivateAllocaListForKey (GALGAS_allocaList inAttributeValue,
                                                            GALGAS_string inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_taskMapIR * p = (cMapElement_taskMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    p->mProperty_mActivateAllocaList = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskMapIR::setter_setMActivateInstructionListIRForKey (GALGAS_instructionListIR inAttributeValue,
                                                                   GALGAS_string inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_taskMapIR * p = (cMapElement_taskMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    p->mProperty_mActivateInstructionListIR = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskMapIR::setter_setMDeactivateAllocaListForKey (GALGAS_allocaList inAttributeValue,
                                                              GALGAS_string inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_taskMapIR * p = (cMapElement_taskMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    p->mProperty_mDeactivateAllocaList = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskMapIR::setter_setMDeactivateInstructionListIRForKey (GALGAS_instructionListIR inAttributeValue,
                                                                     GALGAS_string inKey,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_taskMapIR * p = (cMapElement_taskMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    p->mProperty_mDeactivateInstructionListIR = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskMapIR::setter_setMTaskNameStringIndexForKey (GALGAS_uint inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_taskMapIR * p = (cMapElement_taskMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    p->mProperty_mTaskNameStringIndex = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskMapIR::setter_setMActivateForKey (GALGAS_bool inAttributeValue,
                                                  GALGAS_string inKey,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_taskMapIR * p = (cMapElement_taskMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    p->mProperty_mActivate = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_taskMapIR * GALGAS_taskMapIR::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                             const GALGAS_string & inKey
                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_taskMapIR * result = (cMapElement_taskMapIR *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_taskMapIR) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_taskMapIR::cEnumerator_taskMapIR (const GALGAS_taskMapIR & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskMapIR_2D_element cEnumerator_taskMapIR::current (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return GALGAS_taskMapIR_2D_element (p->mProperty_lkey, p->mProperty_mTaskType, p->mProperty_mPriority, p->mProperty_mStackSize, p->mProperty_mSetupAllocaList, p->mProperty_mSetupInstructionListIR, p->mProperty_mActivateAllocaList, p->mProperty_mActivateInstructionListIR, p->mProperty_mDeactivateAllocaList, p->mProperty_mDeactivateInstructionListIR, p->mProperty_mTaskNameStringIndex, p->mProperty_mActivate) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_taskMapIR::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType cEnumerator_taskMapIR::current_mTaskType (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mTaskType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cEnumerator_taskMapIR::current_mPriority (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mPriority ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bigint cEnumerator_taskMapIR::current_mStackSize (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mStackSize ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_allocaList cEnumerator_taskMapIR::current_mSetupAllocaList (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mSetupAllocaList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListIR cEnumerator_taskMapIR::current_mSetupInstructionListIR (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mSetupInstructionListIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_allocaList cEnumerator_taskMapIR::current_mActivateAllocaList (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mActivateAllocaList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListIR cEnumerator_taskMapIR::current_mActivateInstructionListIR (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mActivateInstructionListIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_allocaList cEnumerator_taskMapIR::current_mDeactivateAllocaList (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mDeactivateAllocaList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListIR cEnumerator_taskMapIR::current_mDeactivateInstructionListIR (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mDeactivateInstructionListIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cEnumerator_taskMapIR::current_mTaskNameStringIndex (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mTaskNameStringIndex ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_taskMapIR::current_mActivate (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mActivate ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                   @taskMapIR type                                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_taskMapIR ("taskMapIR",
                                  NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_taskMapIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskMapIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_taskMapIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskMapIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskMapIR GALGAS_taskMapIR::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_taskMapIR result ;
  const GALGAS_taskMapIR * p = (const GALGAS_taskMapIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_taskMapIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskMapIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Class for element of '@allocaList' list                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_allocaList : public cCollectionElement {
  public : GALGAS_allocaList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_allocaList (const GALGAS_string & in_mVarLLVMName,
                                          const GALGAS_PLMType & in_mLLVMType,
                                          const GALGAS_bool & in_mFormalInputArgument
                                          COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_allocaList (const GALGAS_allocaList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_allocaList::cCollectionElement_allocaList (const GALGAS_string & in_mVarLLVMName,
                                                              const GALGAS_PLMType & in_mLLVMType,
                                                              const GALGAS_bool & in_mFormalInputArgument
                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mVarLLVMName, in_mLLVMType, in_mFormalInputArgument) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_allocaList::cCollectionElement_allocaList (const GALGAS_allocaList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mVarLLVMName, inElement.mProperty_mLLVMType, inElement.mProperty_mFormalInputArgument) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_allocaList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_allocaList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_allocaList (mObject.mProperty_mVarLLVMName, mObject.mProperty_mLLVMType, mObject.mProperty_mFormalInputArgument COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_allocaList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mVarLLVMName" ":" ;
  mObject.mProperty_mVarLLVMName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLLVMType" ":" ;
  mObject.mProperty_mLLVMType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalInputArgument" ":" ;
  mObject.mProperty_mFormalInputArgument.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_allocaList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_allocaList * operand = (cCollectionElement_allocaList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_allocaList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_allocaList::GALGAS_allocaList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_allocaList::GALGAS_allocaList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_allocaList GALGAS_allocaList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_allocaList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_allocaList GALGAS_allocaList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                const GALGAS_PLMType & inOperand1,
                                                                const GALGAS_bool & inOperand2
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_allocaList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_allocaList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_allocaList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_allocaList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                   const GALGAS_string & in_mVarLLVMName,
                                                   const GALGAS_PLMType & in_mLLVMType,
                                                   const GALGAS_bool & in_mFormalInputArgument
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_allocaList * p = NULL ;
  macroMyNew (p, cCollectionElement_allocaList (in_mVarLLVMName,
                                                in_mLLVMType,
                                                in_mFormalInputArgument COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_allocaList::addAssign_operation (const GALGAS_string & inOperand0,
                                             const GALGAS_PLMType & inOperand1,
                                             const GALGAS_bool & inOperand2
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_allocaList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_allocaList::setter_append (GALGAS_allocaList_2D_element inElement,
                                       C_Compiler * /* inCompiler */
                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_allocaList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_allocaList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                              const GALGAS_PLMType inOperand1,
                                              const GALGAS_bool inOperand2,
                                              const GALGAS_uint inInsertionIndex,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_allocaList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_allocaList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                              GALGAS_PLMType & outOperand1,
                                              GALGAS_bool & outOperand2,
                                              const GALGAS_uint inRemoveIndex,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_allocaList * p = (cCollectionElement_allocaList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_allocaList) ;
      outOperand0 = p->mObject.mProperty_mVarLLVMName ;
      outOperand1 = p->mObject.mProperty_mLLVMType ;
      outOperand2 = p->mObject.mProperty_mFormalInputArgument ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_allocaList::setter_popFirst (GALGAS_string & outOperand0,
                                         GALGAS_PLMType & outOperand1,
                                         GALGAS_bool & outOperand2,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_allocaList * p = (cCollectionElement_allocaList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_allocaList) ;
    outOperand0 = p->mObject.mProperty_mVarLLVMName ;
    outOperand1 = p->mObject.mProperty_mLLVMType ;
    outOperand2 = p->mObject.mProperty_mFormalInputArgument ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_allocaList::setter_popLast (GALGAS_string & outOperand0,
                                        GALGAS_PLMType & outOperand1,
                                        GALGAS_bool & outOperand2,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_allocaList * p = (cCollectionElement_allocaList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_allocaList) ;
    outOperand0 = p->mObject.mProperty_mVarLLVMName ;
    outOperand1 = p->mObject.mProperty_mLLVMType ;
    outOperand2 = p->mObject.mProperty_mFormalInputArgument ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_allocaList::method_first (GALGAS_string & outOperand0,
                                      GALGAS_PLMType & outOperand1,
                                      GALGAS_bool & outOperand2,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_allocaList * p = (cCollectionElement_allocaList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_allocaList) ;
    outOperand0 = p->mObject.mProperty_mVarLLVMName ;
    outOperand1 = p->mObject.mProperty_mLLVMType ;
    outOperand2 = p->mObject.mProperty_mFormalInputArgument ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_allocaList::method_last (GALGAS_string & outOperand0,
                                     GALGAS_PLMType & outOperand1,
                                     GALGAS_bool & outOperand2,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_allocaList * p = (cCollectionElement_allocaList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_allocaList) ;
    outOperand0 = p->mObject.mProperty_mVarLLVMName ;
    outOperand1 = p->mObject.mProperty_mLLVMType ;
    outOperand2 = p->mObject.mProperty_mFormalInputArgument ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_allocaList GALGAS_allocaList::add_operation (const GALGAS_allocaList & inOperand,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_allocaList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_allocaList GALGAS_allocaList::getter_subListWithRange (const GALGAS_range & inRange,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_allocaList result = GALGAS_allocaList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_allocaList GALGAS_allocaList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_allocaList result = GALGAS_allocaList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_allocaList GALGAS_allocaList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_allocaList result = GALGAS_allocaList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_allocaList::plusAssign_operation (const GALGAS_allocaList inOperand,
                                              C_Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_allocaList::getter_mVarLLVMNameAtIndex (const GALGAS_uint & inIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_allocaList * p = (cCollectionElement_allocaList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_allocaList) ;
    result = p->mObject.mProperty_mVarLLVMName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_allocaList::getter_mLLVMTypeAtIndex (const GALGAS_uint & inIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_allocaList * p = (cCollectionElement_allocaList *) attributes.ptr () ;
  GALGAS_PLMType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_allocaList) ;
    result = p->mObject.mProperty_mLLVMType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_allocaList::getter_mFormalInputArgumentAtIndex (const GALGAS_uint & inIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_allocaList * p = (cCollectionElement_allocaList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_allocaList) ;
    result = p->mObject.mProperty_mFormalInputArgument ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_allocaList::cEnumerator_allocaList (const GALGAS_allocaList & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_allocaList_2D_element cEnumerator_allocaList::current (LOCATION_ARGS) const {
  const cCollectionElement_allocaList * p = (const cCollectionElement_allocaList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_allocaList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_allocaList::current_mVarLLVMName (LOCATION_ARGS) const {
  const cCollectionElement_allocaList * p = (const cCollectionElement_allocaList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_allocaList) ;
  return p->mObject.mProperty_mVarLLVMName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType cEnumerator_allocaList::current_mLLVMType (LOCATION_ARGS) const {
  const cCollectionElement_allocaList * p = (const cCollectionElement_allocaList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_allocaList) ;
  return p->mObject.mProperty_mLLVMType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_allocaList::current_mFormalInputArgument (LOCATION_ARGS) const {
  const cCollectionElement_allocaList * p = (const cCollectionElement_allocaList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_allocaList) ;
  return p->mObject.mProperty_mFormalInputArgument ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                  @allocaList type                                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_allocaList ("allocaList",
                                   NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_allocaList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_allocaList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_allocaList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_allocaList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_allocaList GALGAS_allocaList::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_allocaList result ;
  const GALGAS_allocaList * p = (const GALGAS_allocaList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_allocaList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("allocaList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Class for element of '@instructionListIR' list                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_instructionListIR : public cCollectionElement {
  public : GALGAS_instructionListIR_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_instructionListIR (const GALGAS_abstractInstructionIR & in_mInstructionGeneration
                                                 COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_instructionListIR (const GALGAS_instructionListIR_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_instructionListIR::cCollectionElement_instructionListIR (const GALGAS_abstractInstructionIR & in_mInstructionGeneration
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstructionGeneration) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_instructionListIR::cCollectionElement_instructionListIR (const GALGAS_instructionListIR_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstructionGeneration) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_instructionListIR::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_instructionListIR::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_instructionListIR (mObject.mProperty_mInstructionGeneration COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_instructionListIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionGeneration" ":" ;
  mObject.mProperty_mInstructionGeneration.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_instructionListIR::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_instructionListIR * operand = (cCollectionElement_instructionListIR *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_instructionListIR) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListIR::GALGAS_instructionListIR (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListIR::GALGAS_instructionListIR (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListIR GALGAS_instructionListIR::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_instructionListIR  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListIR GALGAS_instructionListIR::constructor_listWithValue (const GALGAS_abstractInstructionIR & inOperand0
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_instructionListIR result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_instructionListIR (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_instructionListIR::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_instructionListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GALGAS_abstractInstructionIR & in_mInstructionGeneration
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_instructionListIR * p = NULL ;
  macroMyNew (p, cCollectionElement_instructionListIR (in_mInstructionGeneration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_instructionListIR::addAssign_operation (const GALGAS_abstractInstructionIR & inOperand0
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_instructionListIR (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_instructionListIR::setter_append (GALGAS_instructionListIR_2D_element inElement,
                                              C_Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_instructionListIR (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_instructionListIR::setter_insertAtIndex (const GALGAS_abstractInstructionIR inOperand0,
                                                     const GALGAS_uint inInsertionIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_instructionListIR (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_instructionListIR::setter_removeAtIndex (GALGAS_abstractInstructionIR & outOperand0,
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
      outOperand0 = p->mObject.mProperty_mInstructionGeneration ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_instructionListIR::setter_popFirst (GALGAS_abstractInstructionIR & outOperand0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListIR * p = (cCollectionElement_instructionListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionListIR) ;
    outOperand0 = p->mObject.mProperty_mInstructionGeneration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_instructionListIR::setter_popLast (GALGAS_abstractInstructionIR & outOperand0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListIR * p = (cCollectionElement_instructionListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionListIR) ;
    outOperand0 = p->mObject.mProperty_mInstructionGeneration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    outOperand0 = p->mObject.mProperty_mInstructionGeneration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    outOperand0 = p->mObject.mProperty_mInstructionGeneration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListIR GALGAS_instructionListIR::getter_subListWithRange (const GALGAS_range & inRange,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_instructionListIR result = GALGAS_instructionListIR::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListIR GALGAS_instructionListIR::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_instructionListIR result = GALGAS_instructionListIR::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListIR GALGAS_instructionListIR::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_instructionListIR result = GALGAS_instructionListIR::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_instructionListIR::plusAssign_operation (const GALGAS_instructionListIR inOperand,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractInstructionIR GALGAS_instructionListIR::getter_mInstructionGenerationAtIndex (const GALGAS_uint & inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListIR * p = (cCollectionElement_instructionListIR *) attributes.ptr () ;
  GALGAS_abstractInstructionIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_instructionListIR) ;
    result = p->mObject.mProperty_mInstructionGeneration ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_instructionListIR::cEnumerator_instructionListIR (const GALGAS_instructionListIR & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListIR_2D_element cEnumerator_instructionListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_instructionListIR * p = (const cCollectionElement_instructionListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_instructionListIR) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractInstructionIR cEnumerator_instructionListIR::current_mInstructionGeneration (LOCATION_ARGS) const {
  const cCollectionElement_instructionListIR * p = (const cCollectionElement_instructionListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_instructionListIR) ;
  return p->mObject.mProperty_mInstructionGeneration ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @instructionListIR type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_instructionListIR ("instructionListIR",
                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_instructionListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instructionListIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_instructionListIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_instructionListIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Class for element of '@taskSortedListIR' sorted list                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cSortedListElement_taskSortedListIR : public cSortedListElement {
  public : GALGAS_taskSortedListIR_2D_element mObject ;

//--- Constructor
  public : cSortedListElement_taskSortedListIR (const GALGAS_string & in_mTaskName,
                                                const GALGAS_uint & in_mPriority,
                                                const GALGAS_bigint & in_mStackSize,
                                                const GALGAS_allocaList & in_mSetupAllocaList,
                                                const GALGAS_instructionListIR & in_mSetupInstructionListIR,
                                                const GALGAS_allocaList & in_mActivateAllocaList,
                                                const GALGAS_instructionListIR & in_mActivateInstructionListIR,
                                                const GALGAS_allocaList & in_mDeactivateAllocaList,
                                                const GALGAS_instructionListIR & in_mDeactivateInstructionListIR,
                                                const GALGAS_uint & in_mTaskNameStringIndex,
                                                const GALGAS_bool & in_mActivate
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

cSortedListElement_taskSortedListIR::cSortedListElement_taskSortedListIR (const GALGAS_string & in_mTaskName,
                                                                          const GALGAS_uint & in_mPriority,
                                                                          const GALGAS_bigint & in_mStackSize,
                                                                          const GALGAS_allocaList & in_mSetupAllocaList,
                                                                          const GALGAS_instructionListIR & in_mSetupInstructionListIR,
                                                                          const GALGAS_allocaList & in_mActivateAllocaList,
                                                                          const GALGAS_instructionListIR & in_mActivateInstructionListIR,
                                                                          const GALGAS_allocaList & in_mDeactivateAllocaList,
                                                                          const GALGAS_instructionListIR & in_mDeactivateInstructionListIR,
                                                                          const GALGAS_uint & in_mTaskNameStringIndex,
                                                                          const GALGAS_bool & in_mActivate
                                                                          COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (in_mTaskName, in_mPriority, in_mStackSize, in_mSetupAllocaList, in_mSetupInstructionListIR, in_mActivateAllocaList, in_mActivateInstructionListIR, in_mDeactivateAllocaList, in_mDeactivateInstructionListIR, in_mTaskNameStringIndex, in_mActivate) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cSortedListElement_taskSortedListIR::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cSortedListElement * cSortedListElement_taskSortedListIR::copy (void) {
  cSortedListElement * result = NULL ;
  macroMyNew (result, cSortedListElement_taskSortedListIR (mObject.mProperty_mTaskName, mObject.mProperty_mPriority, mObject.mProperty_mStackSize, mObject.mProperty_mSetupAllocaList, mObject.mProperty_mSetupInstructionListIR, mObject.mProperty_mActivateAllocaList, mObject.mProperty_mActivateInstructionListIR, mObject.mProperty_mDeactivateAllocaList, mObject.mProperty_mDeactivateInstructionListIR, mObject.mProperty_mTaskNameStringIndex, mObject.mProperty_mActivate COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cSortedListElement_taskSortedListIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskName" ":" ;
  mObject.mProperty_mTaskName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPriority" ":" ;
  mObject.mProperty_mPriority.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStackSize" ":" ;
  mObject.mProperty_mStackSize.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSetupAllocaList" ":" ;
  mObject.mProperty_mSetupAllocaList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSetupInstructionListIR" ":" ;
  mObject.mProperty_mSetupInstructionListIR.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActivateAllocaList" ":" ;
  mObject.mProperty_mActivateAllocaList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActivateInstructionListIR" ":" ;
  mObject.mProperty_mActivateInstructionListIR.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDeactivateAllocaList" ":" ;
  mObject.mProperty_mDeactivateAllocaList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDeactivateInstructionListIR" ":" ;
  mObject.mProperty_mDeactivateInstructionListIR.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskNameStringIndex" ":" ;
  mObject.mProperty_mTaskNameStringIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActivate" ":" ;
  mObject.mProperty_mActivate.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cSortedListElement_taskSortedListIR::compare (const cCollectionElement * inOperand) const {
  cSortedListElement_taskSortedListIR * operand = (cSortedListElement_taskSortedListIR *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_taskSortedListIR) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskSortedListIR::GALGAS_taskSortedListIR (void) :
AC_GALGAS_sortedlist () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cSortedListElement_taskSortedListIR::compareForSorting (const cSortedListElement * inOperand) const {
  typeComparisonResult result = kOperandEqual ;
  const cSortedListElement_taskSortedListIR * operand = (const cSortedListElement_taskSortedListIR *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_taskSortedListIR) ;
  if (result == kOperandEqual) {
    result = operand->mObject.mProperty_mPriority.objectCompare (mObject.mProperty_mPriority) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskSortedListIR GALGAS_taskSortedListIR::constructor_emptySortedList (LOCATION_ARGS) {
  GALGAS_taskSortedListIR result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskSortedListIR GALGAS_taskSortedListIR::constructor_sortedListWithValue (const GALGAS_string & inOperand0,
                                                                                  const GALGAS_uint & inOperand1,
                                                                                  const GALGAS_bigint & inOperand2,
                                                                                  const GALGAS_allocaList & inOperand3,
                                                                                  const GALGAS_instructionListIR & inOperand4,
                                                                                  const GALGAS_allocaList & inOperand5,
                                                                                  const GALGAS_instructionListIR & inOperand6,
                                                                                  const GALGAS_allocaList & inOperand7,
                                                                                  const GALGAS_instructionListIR & inOperand8,
                                                                                  const GALGAS_uint & inOperand9,
                                                                                  const GALGAS_bool & inOperand10
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_taskSortedListIR result = constructor_emptySortedList (THERE) ;
  cSortedListElement * p = NULL ;
  macroMyNew (p, cSortedListElement_taskSortedListIR (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10 COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  result.appendObject (attributes) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskSortedListIR::addAssign_operation (const GALGAS_string & inOperand0,
                                                   const GALGAS_uint & inOperand1,
                                                   const GALGAS_bigint & inOperand2,
                                                   const GALGAS_allocaList & inOperand3,
                                                   const GALGAS_instructionListIR & inOperand4,
                                                   const GALGAS_allocaList & inOperand5,
                                                   const GALGAS_instructionListIR & inOperand6,
                                                   const GALGAS_allocaList & inOperand7,
                                                   const GALGAS_instructionListIR & inOperand8,
                                                   const GALGAS_uint & inOperand9,
                                                   const GALGAS_bool & inOperand10
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = NULL ;
    macroMyNew (p, cSortedListElement_taskSortedListIR (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskSortedListIR::plusAssign_operation (const GALGAS_taskSortedListIR inOperand,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    appendSortedList (inOperand) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskSortedListIR::setter_popSmallest (GALGAS_string & outOperand0,
                                                  GALGAS_uint & outOperand1,
                                                  GALGAS_bigint & outOperand2,
                                                  GALGAS_allocaList & outOperand3,
                                                  GALGAS_instructionListIR & outOperand4,
                                                  GALGAS_allocaList & outOperand5,
                                                  GALGAS_instructionListIR & outOperand6,
                                                  GALGAS_allocaList & outOperand7,
                                                  GALGAS_instructionListIR & outOperand8,
                                                  GALGAS_uint & outOperand9,
                                                  GALGAS_bool & outOperand10,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_taskSortedListIR * p = (cSortedListElement_taskSortedListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mPriority ;
    outOperand2 = p->mObject.mProperty_mStackSize ;
    outOperand3 = p->mObject.mProperty_mSetupAllocaList ;
    outOperand4 = p->mObject.mProperty_mSetupInstructionListIR ;
    outOperand5 = p->mObject.mProperty_mActivateAllocaList ;
    outOperand6 = p->mObject.mProperty_mActivateInstructionListIR ;
    outOperand7 = p->mObject.mProperty_mDeactivateAllocaList ;
    outOperand8 = p->mObject.mProperty_mDeactivateInstructionListIR ;
    outOperand9 = p->mObject.mProperty_mTaskNameStringIndex ;
    outOperand10 = p->mObject.mProperty_mActivate ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskSortedListIR::setter_popGreatest (GALGAS_string & outOperand0,
                                                  GALGAS_uint & outOperand1,
                                                  GALGAS_bigint & outOperand2,
                                                  GALGAS_allocaList & outOperand3,
                                                  GALGAS_instructionListIR & outOperand4,
                                                  GALGAS_allocaList & outOperand5,
                                                  GALGAS_instructionListIR & outOperand6,
                                                  GALGAS_allocaList & outOperand7,
                                                  GALGAS_instructionListIR & outOperand8,
                                                  GALGAS_uint & outOperand9,
                                                  GALGAS_bool & outOperand10,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_taskSortedListIR * p = (cSortedListElement_taskSortedListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mPriority ;
    outOperand2 = p->mObject.mProperty_mStackSize ;
    outOperand3 = p->mObject.mProperty_mSetupAllocaList ;
    outOperand4 = p->mObject.mProperty_mSetupInstructionListIR ;
    outOperand5 = p->mObject.mProperty_mActivateAllocaList ;
    outOperand6 = p->mObject.mProperty_mActivateInstructionListIR ;
    outOperand7 = p->mObject.mProperty_mDeactivateAllocaList ;
    outOperand8 = p->mObject.mProperty_mDeactivateInstructionListIR ;
    outOperand9 = p->mObject.mProperty_mTaskNameStringIndex ;
    outOperand10 = p->mObject.mProperty_mActivate ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskSortedListIR::method_smallest (GALGAS_string & outOperand0,
                                               GALGAS_uint & outOperand1,
                                               GALGAS_bigint & outOperand2,
                                               GALGAS_allocaList & outOperand3,
                                               GALGAS_instructionListIR & outOperand4,
                                               GALGAS_allocaList & outOperand5,
                                               GALGAS_instructionListIR & outOperand6,
                                               GALGAS_allocaList & outOperand7,
                                               GALGAS_instructionListIR & outOperand8,
                                               GALGAS_uint & outOperand9,
                                               GALGAS_bool & outOperand10,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_taskSortedListIR * p = (cSortedListElement_taskSortedListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mPriority ;
    outOperand2 = p->mObject.mProperty_mStackSize ;
    outOperand3 = p->mObject.mProperty_mSetupAllocaList ;
    outOperand4 = p->mObject.mProperty_mSetupInstructionListIR ;
    outOperand5 = p->mObject.mProperty_mActivateAllocaList ;
    outOperand6 = p->mObject.mProperty_mActivateInstructionListIR ;
    outOperand7 = p->mObject.mProperty_mDeactivateAllocaList ;
    outOperand8 = p->mObject.mProperty_mDeactivateInstructionListIR ;
    outOperand9 = p->mObject.mProperty_mTaskNameStringIndex ;
    outOperand10 = p->mObject.mProperty_mActivate ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_taskSortedListIR::method_greatest (GALGAS_string & outOperand0,
                                               GALGAS_uint & outOperand1,
                                               GALGAS_bigint & outOperand2,
                                               GALGAS_allocaList & outOperand3,
                                               GALGAS_instructionListIR & outOperand4,
                                               GALGAS_allocaList & outOperand5,
                                               GALGAS_instructionListIR & outOperand6,
                                               GALGAS_allocaList & outOperand7,
                                               GALGAS_instructionListIR & outOperand8,
                                               GALGAS_uint & outOperand9,
                                               GALGAS_bool & outOperand10,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_taskSortedListIR * p = (cSortedListElement_taskSortedListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mPriority ;
    outOperand2 = p->mObject.mProperty_mStackSize ;
    outOperand3 = p->mObject.mProperty_mSetupAllocaList ;
    outOperand4 = p->mObject.mProperty_mSetupInstructionListIR ;
    outOperand5 = p->mObject.mProperty_mActivateAllocaList ;
    outOperand6 = p->mObject.mProperty_mActivateInstructionListIR ;
    outOperand7 = p->mObject.mProperty_mDeactivateAllocaList ;
    outOperand8 = p->mObject.mProperty_mDeactivateInstructionListIR ;
    outOperand9 = p->mObject.mProperty_mTaskNameStringIndex ;
    outOperand10 = p->mObject.mProperty_mActivate ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_taskSortedListIR::cEnumerator_taskSortedListIR (const GALGAS_taskSortedListIR & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskSortedListIR_2D_element cEnumerator_taskSortedListIR::current (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_taskSortedListIR::current_mTaskName (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mTaskName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cEnumerator_taskSortedListIR::current_mPriority (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mPriority ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bigint cEnumerator_taskSortedListIR::current_mStackSize (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mStackSize ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_allocaList cEnumerator_taskSortedListIR::current_mSetupAllocaList (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mSetupAllocaList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListIR cEnumerator_taskSortedListIR::current_mSetupInstructionListIR (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mSetupInstructionListIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_allocaList cEnumerator_taskSortedListIR::current_mActivateAllocaList (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mActivateAllocaList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListIR cEnumerator_taskSortedListIR::current_mActivateInstructionListIR (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mActivateInstructionListIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_allocaList cEnumerator_taskSortedListIR::current_mDeactivateAllocaList (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mDeactivateAllocaList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListIR cEnumerator_taskSortedListIR::current_mDeactivateInstructionListIR (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mDeactivateInstructionListIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cEnumerator_taskSortedListIR::current_mTaskNameStringIndex (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mTaskNameStringIndex ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_taskSortedListIR::current_mActivate (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mActivate ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @taskSortedListIR type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_taskSortedListIR ("taskSortedListIR",
                                         NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_taskSortedListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskSortedListIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_taskSortedListIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskSortedListIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskSortedListIR GALGAS_taskSortedListIR::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_taskSortedListIR result ;
  const GALGAS_taskSortedListIR * p = (const GALGAS_taskSortedListIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_taskSortedListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskSortedListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Class for element of '@globalTaskVariableList' list                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_globalTaskVariableList : public cCollectionElement {
  public : GALGAS_globalTaskVariableList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_globalTaskVariableList (const GALGAS_string & in_mTaskName,
                                                      const GALGAS_string & in_mTaskTypeName,
                                                      const GALGAS_objectIR & in_mInitialValue
                                                      COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_globalTaskVariableList (const GALGAS_globalTaskVariableList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_globalTaskVariableList::cCollectionElement_globalTaskVariableList (const GALGAS_string & in_mTaskName,
                                                                                      const GALGAS_string & in_mTaskTypeName,
                                                                                      const GALGAS_objectIR & in_mInitialValue
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTaskName, in_mTaskTypeName, in_mInitialValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_globalTaskVariableList::cCollectionElement_globalTaskVariableList (const GALGAS_globalTaskVariableList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTaskName, inElement.mProperty_mTaskTypeName, inElement.mProperty_mInitialValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_globalTaskVariableList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_globalTaskVariableList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_globalTaskVariableList (mObject.mProperty_mTaskName, mObject.mProperty_mTaskTypeName, mObject.mProperty_mInitialValue COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_globalTaskVariableList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskName" ":" ;
  mObject.mProperty_mTaskName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskTypeName" ":" ;
  mObject.mProperty_mTaskTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInitialValue" ":" ;
  mObject.mProperty_mInitialValue.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_globalTaskVariableList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_globalTaskVariableList * operand = (cCollectionElement_globalTaskVariableList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_globalTaskVariableList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalTaskVariableList::GALGAS_globalTaskVariableList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalTaskVariableList::GALGAS_globalTaskVariableList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalTaskVariableList GALGAS_globalTaskVariableList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_globalTaskVariableList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalTaskVariableList GALGAS_globalTaskVariableList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                        const GALGAS_string & inOperand1,
                                                                                        const GALGAS_objectIR & inOperand2
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_globalTaskVariableList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_globalTaskVariableList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_globalTaskVariableList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalTaskVariableList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_string & in_mTaskName,
                                                               const GALGAS_string & in_mTaskTypeName,
                                                               const GALGAS_objectIR & in_mInitialValue
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_globalTaskVariableList * p = NULL ;
  macroMyNew (p, cCollectionElement_globalTaskVariableList (in_mTaskName,
                                                            in_mTaskTypeName,
                                                            in_mInitialValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalTaskVariableList::addAssign_operation (const GALGAS_string & inOperand0,
                                                         const GALGAS_string & inOperand1,
                                                         const GALGAS_objectIR & inOperand2
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_globalTaskVariableList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalTaskVariableList::setter_append (GALGAS_globalTaskVariableList_2D_element inElement,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_globalTaskVariableList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalTaskVariableList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                          const GALGAS_string inOperand1,
                                                          const GALGAS_objectIR inOperand2,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_globalTaskVariableList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalTaskVariableList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                          GALGAS_string & outOperand1,
                                                          GALGAS_objectIR & outOperand2,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_globalTaskVariableList * p = (cCollectionElement_globalTaskVariableList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
      outOperand0 = p->mObject.mProperty_mTaskName ;
      outOperand1 = p->mObject.mProperty_mTaskTypeName ;
      outOperand2 = p->mObject.mProperty_mInitialValue ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalTaskVariableList::setter_popFirst (GALGAS_string & outOperand0,
                                                     GALGAS_string & outOperand1,
                                                     GALGAS_objectIR & outOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_globalTaskVariableList * p = (cCollectionElement_globalTaskVariableList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mTaskTypeName ;
    outOperand2 = p->mObject.mProperty_mInitialValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalTaskVariableList::setter_popLast (GALGAS_string & outOperand0,
                                                    GALGAS_string & outOperand1,
                                                    GALGAS_objectIR & outOperand2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_globalTaskVariableList * p = (cCollectionElement_globalTaskVariableList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mTaskTypeName ;
    outOperand2 = p->mObject.mProperty_mInitialValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalTaskVariableList::method_first (GALGAS_string & outOperand0,
                                                  GALGAS_string & outOperand1,
                                                  GALGAS_objectIR & outOperand2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_globalTaskVariableList * p = (cCollectionElement_globalTaskVariableList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mTaskTypeName ;
    outOperand2 = p->mObject.mProperty_mInitialValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalTaskVariableList::method_last (GALGAS_string & outOperand0,
                                                 GALGAS_string & outOperand1,
                                                 GALGAS_objectIR & outOperand2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_globalTaskVariableList * p = (cCollectionElement_globalTaskVariableList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mTaskTypeName ;
    outOperand2 = p->mObject.mProperty_mInitialValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalTaskVariableList GALGAS_globalTaskVariableList::add_operation (const GALGAS_globalTaskVariableList & inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_globalTaskVariableList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalTaskVariableList GALGAS_globalTaskVariableList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_globalTaskVariableList result = GALGAS_globalTaskVariableList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalTaskVariableList GALGAS_globalTaskVariableList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_globalTaskVariableList result = GALGAS_globalTaskVariableList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalTaskVariableList GALGAS_globalTaskVariableList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_globalTaskVariableList result = GALGAS_globalTaskVariableList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalTaskVariableList::plusAssign_operation (const GALGAS_globalTaskVariableList inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_globalTaskVariableList::getter_mTaskNameAtIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_globalTaskVariableList * p = (cCollectionElement_globalTaskVariableList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
    result = p->mObject.mProperty_mTaskName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_globalTaskVariableList::getter_mTaskTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_globalTaskVariableList * p = (cCollectionElement_globalTaskVariableList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
    result = p->mObject.mProperty_mTaskTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_globalTaskVariableList::getter_mInitialValueAtIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_globalTaskVariableList * p = (cCollectionElement_globalTaskVariableList *) attributes.ptr () ;
  GALGAS_objectIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
    result = p->mObject.mProperty_mInitialValue ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_globalTaskVariableList::cEnumerator_globalTaskVariableList (const GALGAS_globalTaskVariableList & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalTaskVariableList_2D_element cEnumerator_globalTaskVariableList::current (LOCATION_ARGS) const {
  const cCollectionElement_globalTaskVariableList * p = (const cCollectionElement_globalTaskVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_globalTaskVariableList::current_mTaskName (LOCATION_ARGS) const {
  const cCollectionElement_globalTaskVariableList * p = (const cCollectionElement_globalTaskVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
  return p->mObject.mProperty_mTaskName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_globalTaskVariableList::current_mTaskTypeName (LOCATION_ARGS) const {
  const cCollectionElement_globalTaskVariableList * p = (const cCollectionElement_globalTaskVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
  return p->mObject.mProperty_mTaskTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR cEnumerator_globalTaskVariableList::current_mInitialValue (LOCATION_ARGS) const {
  const cCollectionElement_globalTaskVariableList * p = (const cCollectionElement_globalTaskVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
  return p->mObject.mProperty_mInitialValue ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @globalTaskVariableList type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalTaskVariableList ("globalTaskVariableList",
                                               NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_globalTaskVariableList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalTaskVariableList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_globalTaskVariableList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalTaskVariableList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalTaskVariableList GALGAS_globalTaskVariableList::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_globalTaskVariableList result ;
  const GALGAS_globalTaskVariableList * p = (const GALGAS_globalTaskVariableList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_globalTaskVariableList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalTaskVariableList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Extension method '@taskMapIR generateCode'                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_generateCode (const GALGAS_taskMapIR inObject,
                                   GALGAS_string & ioArgument_ioLLVMcode,
                                   const GALGAS_generationContext constinArgument_inGenerationContext,
                                   GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                   GALGAS_primitiveAndServiceIRlist & ioArgument_ioServiceList,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Activate task service"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 636)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 636)) ;
  GALGAS_string var_activateTaskImplementationName_23425 = function_llvmNameForServiceImplementation (function_llvmNameForActivateTask (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 637)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 637)) ;
  GALGAS_string var_activateTaskCallName_23517 = function_llvmNameForServiceCall (function_llvmNameForActivateTask (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 638)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 638)) ;
  ioArgument_ioServiceList.addAssign_operation (var_activateTaskCallName_23517, var_activateTaskImplementationName_23425, GALGAS_bool (false)  COMMA_SOURCE_FILE ("task-declaration.galgas", 639)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare void @").add_operation (var_activateTaskCallName_23517, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 640)).add_operation (GALGAS_string (" (i8 %inTaskIndex) nounwind\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 640)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 640)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Wait for activation service"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 642)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 642)) ;
  GALGAS_string var_waitForActivationImplementationName_23902 = function_llvmNameForServiceImplementation (function_llvmNameForTaskWaitsForActivation (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 643)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 643)) ;
  GALGAS_string var_waitForActivationCallName_24009 = function_llvmNameForServiceCall (function_llvmNameForTaskWaitsForActivation (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 644)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 644)) ;
  ioArgument_ioServiceList.addAssign_operation (var_waitForActivationCallName_24009, var_waitForActivationImplementationName_23902, GALGAS_bool (false)  COMMA_SOURCE_FILE ("task-declaration.galgas", 645)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare void @").add_operation (var_waitForActivationCallName_24009, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 646)).add_operation (GALGAS_string (" () nounwind\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 646)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 646)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Task variables"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 648)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 648)) ;
  cEnumerator_globalTaskVariableList enumerator_24425 (constinArgument_inGenerationContext.getter_mGlobalTaskVariableList (HERE), kENUMERATION_UP) ;
  while (enumerator_24425.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForGlobalVariable (enumerator_24425.current_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 650)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 650)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" = internal global %"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 651)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(enumerator_24425.current_mTaskTypeName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 652)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 652)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_llvmValue (enumerator_24425.current_mInitialValue (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 653)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 653)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 653)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 653)) ;
    enumerator_24425.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 655)) ;
  GALGAS_taskSortedListIR var_orderedTaskList_24738 = GALGAS_taskSortedListIR::constructor_emptySortedList (SOURCE_FILE ("task-declaration.galgas", 657)) ;
  const GALGAS_taskMapIR temp_0 = inObject ;
  cEnumerator_taskMapIR enumerator_24762 (temp_0, kENUMERATION_UP) ;
  while (enumerator_24762.hasCurrentObject ()) {
    var_orderedTaskList_24738.addAssign_operation (enumerator_24762.current (HERE).getter_lkey (HERE).getter_string (HERE), enumerator_24762.current (HERE).getter_mPriority (HERE), enumerator_24762.current (HERE).getter_mStackSize (HERE), enumerator_24762.current (HERE).getter_mSetupAllocaList (HERE), enumerator_24762.current (HERE).getter_mSetupInstructionListIR (HERE), enumerator_24762.current (HERE).getter_mActivateAllocaList (HERE), enumerator_24762.current (HERE).getter_mActivateInstructionListIR (HERE), enumerator_24762.current (HERE).getter_mDeactivateAllocaList (HERE), enumerator_24762.current (HERE).getter_mDeactivateInstructionListIR (HERE), enumerator_24762.current (HERE).getter_mTaskNameStringIndex (HERE), enumerator_24762.current (HERE).getter_mActivate (HERE)  COMMA_SOURCE_FILE ("task-declaration.galgas", 659)) ;
    enumerator_24762.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Create task extern routine"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 673)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 673)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare void @kernel_create_task (i32 %inTaskIndex, i8* %inTaskName, i32* %inStackBufferAddress, "), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 674)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i32 %inStackBufferSize, void ()* %inTaskRoutine) nounwind\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 675)) ;
  cEnumerator_taskSortedListIR enumerator_25469 (var_orderedTaskList_24738, kENUMERATION_UP) ;
  GALGAS_uint index_25445 ((uint32_t) 0) ;
  while (enumerator_25469.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Task ").add_operation (enumerator_25469.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 677)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 677)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 677)) ;
    GALGAS_string var_assemblerTaskName_25573 = enumerator_25469.current (HERE).getter_mTaskName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 678)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(function_stackNameForTask (enumerator_25469.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 679)).add_operation (GALGAS_string (" = global ["), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 679)).add_operation (enumerator_25469.current (HERE).getter_mStackSize (HERE).divide_operation (GALGAS_uint ((uint32_t) 4U).getter_bigint (SOURCE_FILE ("task-declaration.galgas", 679)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 679)).getter_string (SOURCE_FILE ("task-declaration.galgas", 679)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 679)).add_operation (GALGAS_string (" x i32] zeroinitializer\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 679)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 679)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 680)) ;
    GALGAS_string var_effectiveParameter_25789 = GALGAS_string ("(%").add_operation (var_assemblerTaskName_25573, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 681)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 681)).add_operation (function_llvmNameForGlobalVariable (enumerator_25469.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 681)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 681)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 681)) ;
    GALGAS_string var_formalArgument_25898 = GALGAS_string ("(%").add_operation (var_assemblerTaskName_25573, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 682)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 682)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 682)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 682)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 682)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 683)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 683)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 683)) ;
    GALGAS_lstring var_activateFunctionName_26064 = function_routineMangledNameFromAST (enumerator_25469.current (HERE).getter_mTaskName (HERE), GALGAS_string ("activate").getter_nowhere (SOURCE_FILE ("task-declaration.galgas", 687)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 688)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 685)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (function_llvmNameForFunction (var_activateFunctionName_26064.getter_string (SOURCE_FILE ("task-declaration.galgas", 690)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 690)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 690)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 690)).add_operation (var_formalArgument_25898, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 690)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 690)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 690)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 690)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 690)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (var_activateTaskCallName_23517, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 691)).add_operation (GALGAS_string (" (i8 "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 691)).add_operation (index_25445.getter_string (SOURCE_FILE ("task-declaration.galgas", 691)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 691)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 691)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 691)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 692)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 693)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 694)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 694)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 695)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void ").add_operation (function_setupNameForTaskType (enumerator_25469.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 697)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 697)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 697)).add_operation (var_formalArgument_25898, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 697)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 697)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 697)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 697)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 697)) ;
    extensionMethod_generateAllocaList (enumerator_25469.current (HERE).getter_mSetupAllocaList (HERE), ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 698)) ;
    extensionMethod_instructionListLLVMCode (enumerator_25469.current (HERE).getter_mSetupInstructionListIR (HERE), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 699)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 700)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 701)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 702)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 702)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 703)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void ").add_operation (function_activateNameForTaskType (enumerator_25469.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 705)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 705)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 705)).add_operation (var_formalArgument_25898, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 705)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 705)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 705)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 705)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 705)) ;
    extensionMethod_generateAllocaList (enumerator_25469.current (HERE).getter_mActivateAllocaList (HERE), ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 706)) ;
    extensionMethod_instructionListLLVMCode (enumerator_25469.current (HERE).getter_mActivateInstructionListIR (HERE), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 707)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 708)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 709)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 710)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 710)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 711)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void ").add_operation (function_deactivateNameForTaskType (enumerator_25469.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 713)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 713)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 713)).add_operation (var_formalArgument_25898, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 713)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 713)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 713)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 713)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 713)) ;
    extensionMethod_generateAllocaList (enumerator_25469.current (HERE).getter_mDeactivateAllocaList (HERE), ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 714)) ;
    extensionMethod_instructionListLLVMCode (enumerator_25469.current (HERE).getter_mDeactivateInstructionListIR (HERE), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 715)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 716)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 717)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 718)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 718)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 719)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void ").add_operation (function_mainRoutineNameForTask (enumerator_25469.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 721)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 721)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 721)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 721)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 721)).add_operation (GALGAS_string ("noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 721)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 721)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void ").add_operation (function_setupNameForTaskType (enumerator_25469.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 722)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 722)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 722)).add_operation (var_effectiveParameter_25789, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 722)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 722)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 722)) ;
    GALGAS_string var_taskLoopLabel_28203 = GALGAS_string ("loop.").add_operation (enumerator_25469.current (HERE).getter_mTaskName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 723)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 723)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_taskLoopLabel_28203, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 724)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 724)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 724)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_taskLoopLabel_28203.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 725)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 725)) ;
    const enumGalgasBool test_1 = enumerator_25469.current (HERE).getter_mActivate (HERE).operator_not (SOURCE_FILE ("task-declaration.galgas", 726)).boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (var_waitForActivationCallName_24009, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 727)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 727)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 727)) ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void ").add_operation (function_activateNameForTaskType (enumerator_25469.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 729)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 729)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 729)).add_operation (var_effectiveParameter_25789, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 729)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 729)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 729)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @func.").add_operation (function_llvmNameForFunction (enumerator_25469.current (HERE).getter_mTaskName (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 730)).add_operation (function_llvmNameForTaskLoopFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 730)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 730)).add_operation (GALGAS_string ("()"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 730)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 730)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 730)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 730)).add_operation (var_effectiveParameter_25789, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 730)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 730)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 730)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void ").add_operation (function_deactivateNameForTaskType (enumerator_25469.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 731)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 731)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 731)).add_operation (var_effectiveParameter_25789, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 731)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 731)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 731)) ;
    const enumGalgasBool test_2 = enumerator_25469.current (HERE).getter_mActivate (HERE).boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (var_waitForActivationCallName_24009, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 733)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 733)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 733)) ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_taskLoopLabel_28203, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 735)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 735)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 735)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 736)) ;
    enumerator_25469.gotoNextObject () ;
    index_25445.increment_operation (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 676)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Start tasks"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 739)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 739)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @start.tasks ()").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 740)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 740)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 740)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 740)) ;
  cEnumerator_taskSortedListIR enumerator_29268 (var_orderedTaskList_24738, kENUMERATION_UP) ;
  GALGAS_uint index_29244 ((uint32_t) 0) ;
  while (enumerator_29268.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (function_stackAddressForTask (enumerator_29268.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 742)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 742)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 742)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" = getelementptr inbounds [").add_operation (enumerator_29268.current (HERE).getter_mStackSize (HERE).divide_operation (GALGAS_uint ((uint32_t) 4U).getter_bigint (SOURCE_FILE ("task-declaration.galgas", 743)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 743)).getter_string (SOURCE_FILE ("task-declaration.galgas", 743)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 743)).add_operation (GALGAS_string (" x i32], "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 743)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 743)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("[").add_operation (enumerator_29268.current (HERE).getter_mStackSize (HERE).divide_operation (GALGAS_uint ((uint32_t) 4U).getter_bigint (SOURCE_FILE ("task-declaration.galgas", 744)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 744)).getter_string (SOURCE_FILE ("task-declaration.galgas", 744)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 744)).add_operation (GALGAS_string (" x i32]* "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 744)).add_operation (function_stackNameForTask (enumerator_29268.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 744)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 744)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 744)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 0, i32 0\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 745)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %task.name.").add_operation (index_29244.getter_string (SOURCE_FILE ("task-declaration.galgas", 746)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 746)).add_operation (GALGAS_string (" = load i8*, i8** "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 746)).add_operation (function_literalStringName (enumerator_29268.current (HERE).getter_mTaskNameStringIndex (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 746)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 746)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 746)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 746)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @kernel_create_task ("), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 747)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i32 ").add_operation (index_29244.getter_string (SOURCE_FILE ("task-declaration.galgas", 748)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 748)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 748)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i8* %task.name.").add_operation (index_29244.getter_string (SOURCE_FILE ("task-declaration.galgas", 749)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 749)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 749)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32* ").add_operation (function_stackAddressForTask (enumerator_29268.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 750)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 750)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 750)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_29268.current (HERE).getter_mStackSize (HERE).getter_string (SOURCE_FILE ("task-declaration.galgas", 751)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 751)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 751)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", void ()* ").add_operation (function_mainRoutineNameForTask (enumerator_29268.current (HERE).getter_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 752)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 752)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 752)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 752)) ;
    enumerator_29268.gotoNextObject () ;
    index_29244.increment_operation (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 741)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 754)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 755)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mode::GALGAS_mode (void) :
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mode GALGAS_mode::constructor_userMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_userMode ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mode GALGAS_mode::constructor_sectionMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_sectionMode ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mode GALGAS_mode::constructor_serviceMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_serviceMode ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mode GALGAS_mode::constructor_primitiveMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_primitiveMode ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mode GALGAS_mode::constructor_guardMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_guardMode ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mode GALGAS_mode::constructor_panicMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_panicMode ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mode GALGAS_mode::constructor_bootMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_bootMode ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mode GALGAS_mode::constructor_startupMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_startupMode ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mode GALGAS_mode::constructor_anyMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_anyMode ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_mode [10] = {
  "(not built)",
  "userMode",
  "sectionMode",
  "serviceMode",
  "primitiveMode",
  "guardMode",
  "panicMode",
  "bootMode",
  "startupMode",
  "anyMode"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_mode::getter_isUserMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_userMode == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_mode::getter_isSectionMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_sectionMode == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_mode::getter_isServiceMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_serviceMode == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_mode::getter_isPrimitiveMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_primitiveMode == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_mode::getter_isGuardMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_guardMode == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_mode::getter_isPanicMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_panicMode == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_mode::getter_isBootMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_bootMode == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_mode::getter_isStartupMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_startupMode == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_mode::getter_isAnyMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_anyMode == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mode::description (C_String & ioString,
                               const int32_t /* inIndentation */) const {
  ioString << "<enum @mode: " << gEnumNameArrayFor_mode [mEnum] ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_mode::objectCompare (const GALGAS_mode & inOperand) const {
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
//                                                     @mode type                                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mode ("mode",
                             NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_mode::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mode ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_mode::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mode (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mode GALGAS_mode::extractObject (const GALGAS_object & inObject,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GALGAS_mode result ;
  const GALGAS_mode * p = (const GALGAS_mode *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mode *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mode", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Class for element of '@routineFormalArgumentListAST' list                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_routineFormalArgumentListAST : public cCollectionElement {
  public : GALGAS_routineFormalArgumentListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_routineFormalArgumentListAST (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                            const GALGAS_lstring & in_mSelector,
                                                            const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                            const GALGAS_lstring & in_mFormalArgumentName
                                                            COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_routineFormalArgumentListAST (const GALGAS_routineFormalArgumentListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_routineFormalArgumentListAST::cCollectionElement_routineFormalArgumentListAST (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                                                                  const GALGAS_lstring & in_mSelector,
                                                                                                  const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                                                                  const GALGAS_lstring & in_mFormalArgumentName
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalArgumentPassingMode, in_mSelector, in_mFormalArgumentTypeName, in_mFormalArgumentName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_routineFormalArgumentListAST::cCollectionElement_routineFormalArgumentListAST (const GALGAS_routineFormalArgumentListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFormalArgumentPassingMode, inElement.mProperty_mSelector, inElement.mProperty_mFormalArgumentTypeName, inElement.mProperty_mFormalArgumentName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_routineFormalArgumentListAST::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_routineFormalArgumentListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_routineFormalArgumentListAST (mObject.mProperty_mFormalArgumentPassingMode, mObject.mProperty_mSelector, mObject.mProperty_mFormalArgumentTypeName, mObject.mProperty_mFormalArgumentName COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_routineFormalArgumentListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentPassingMode" ":" ;
  mObject.mProperty_mFormalArgumentPassingMode.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSelector" ":" ;
  mObject.mProperty_mSelector.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentTypeName" ":" ;
  mObject.mProperty_mFormalArgumentTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentName" ":" ;
  mObject.mProperty_mFormalArgumentName.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_routineFormalArgumentListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_routineFormalArgumentListAST * operand = (cCollectionElement_routineFormalArgumentListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_routineFormalArgumentListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListAST::GALGAS_routineFormalArgumentListAST (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListAST::GALGAS_routineFormalArgumentListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListAST GALGAS_routineFormalArgumentListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineFormalArgumentListAST  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListAST GALGAS_routineFormalArgumentListAST::constructor_listWithValue (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                                    const GALGAS_lstring & inOperand1,
                                                                                                    const GALGAS_lstring & inOperand2,
                                                                                                    const GALGAS_lstring & inOperand3
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_routineFormalArgumentListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_routineFormalArgumentListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_routineFormalArgumentListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineFormalArgumentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                     const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                                     const GALGAS_lstring & in_mSelector,
                                                                     const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                                     const GALGAS_lstring & in_mFormalArgumentName
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_routineFormalArgumentListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_routineFormalArgumentListAST (in_mFormalArgumentPassingMode,
                                                                  in_mSelector,
                                                                  in_mFormalArgumentTypeName,
                                                                  in_mFormalArgumentName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineFormalArgumentListAST::addAssign_operation (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                               const GALGAS_lstring & inOperand1,
                                                               const GALGAS_lstring & inOperand2,
                                                               const GALGAS_lstring & inOperand3
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_routineFormalArgumentListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineFormalArgumentListAST::setter_append (GALGAS_routineFormalArgumentListAST_2D_element inElement,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_routineFormalArgumentListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineFormalArgumentListAST::setter_insertAtIndex (const GALGAS_procFormalArgumentPassingMode inOperand0,
                                                                const GALGAS_lstring inOperand1,
                                                                const GALGAS_lstring inOperand2,
                                                                const GALGAS_lstring inOperand3,
                                                                const GALGAS_uint inInsertionIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_routineFormalArgumentListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineFormalArgumentListAST::setter_removeAtIndex (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                                GALGAS_lstring & outOperand1,
                                                                GALGAS_lstring & outOperand2,
                                                                GALGAS_lstring & outOperand3,
                                                                const GALGAS_uint inRemoveIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_routineFormalArgumentListAST * p = (cCollectionElement_routineFormalArgumentListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
      outOperand0 = p->mObject.mProperty_mFormalArgumentPassingMode ;
      outOperand1 = p->mObject.mProperty_mSelector ;
      outOperand2 = p->mObject.mProperty_mFormalArgumentTypeName ;
      outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineFormalArgumentListAST::setter_popFirst (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                           GALGAS_lstring & outOperand1,
                                                           GALGAS_lstring & outOperand2,
                                                           GALGAS_lstring & outOperand3,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListAST * p = (cCollectionElement_routineFormalArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand1 = p->mObject.mProperty_mSelector ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentTypeName ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineFormalArgumentListAST::setter_popLast (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          GALGAS_lstring & outOperand2,
                                                          GALGAS_lstring & outOperand3,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListAST * p = (cCollectionElement_routineFormalArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand1 = p->mObject.mProperty_mSelector ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentTypeName ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineFormalArgumentListAST::method_first (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                        GALGAS_lstring & outOperand1,
                                                        GALGAS_lstring & outOperand2,
                                                        GALGAS_lstring & outOperand3,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListAST * p = (cCollectionElement_routineFormalArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand1 = p->mObject.mProperty_mSelector ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentTypeName ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineFormalArgumentListAST::method_last (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       GALGAS_lstring & outOperand2,
                                                       GALGAS_lstring & outOperand3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListAST * p = (cCollectionElement_routineFormalArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand1 = p->mObject.mProperty_mSelector ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentTypeName ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListAST GALGAS_routineFormalArgumentListAST::add_operation (const GALGAS_routineFormalArgumentListAST & inOperand,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_routineFormalArgumentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListAST GALGAS_routineFormalArgumentListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_routineFormalArgumentListAST result = GALGAS_routineFormalArgumentListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListAST GALGAS_routineFormalArgumentListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_routineFormalArgumentListAST result = GALGAS_routineFormalArgumentListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListAST GALGAS_routineFormalArgumentListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_routineFormalArgumentListAST result = GALGAS_routineFormalArgumentListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineFormalArgumentListAST::plusAssign_operation (const GALGAS_routineFormalArgumentListAST inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procFormalArgumentPassingMode GALGAS_routineFormalArgumentListAST::getter_mFormalArgumentPassingModeAtIndex (const GALGAS_uint & inIndex,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListAST * p = (cCollectionElement_routineFormalArgumentListAST *) attributes.ptr () ;
  GALGAS_procFormalArgumentPassingMode result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
    result = p->mObject.mProperty_mFormalArgumentPassingMode ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_routineFormalArgumentListAST::getter_mSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListAST * p = (cCollectionElement_routineFormalArgumentListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
    result = p->mObject.mProperty_mSelector ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_routineFormalArgumentListAST::getter_mFormalArgumentTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListAST * p = (cCollectionElement_routineFormalArgumentListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
    result = p->mObject.mProperty_mFormalArgumentTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_routineFormalArgumentListAST::getter_mFormalArgumentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListAST * p = (cCollectionElement_routineFormalArgumentListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
    result = p->mObject.mProperty_mFormalArgumentName ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_routineFormalArgumentListAST::cEnumerator_routineFormalArgumentListAST (const GALGAS_routineFormalArgumentListAST & inEnumeratedObject,
                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListAST_2D_element cEnumerator_routineFormalArgumentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListAST * p = (const cCollectionElement_routineFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procFormalArgumentPassingMode cEnumerator_routineFormalArgumentListAST::current_mFormalArgumentPassingMode (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListAST * p = (const cCollectionElement_routineFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
  return p->mObject.mProperty_mFormalArgumentPassingMode ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_routineFormalArgumentListAST::current_mSelector (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListAST * p = (const cCollectionElement_routineFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
  return p->mObject.mProperty_mSelector ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_routineFormalArgumentListAST::current_mFormalArgumentTypeName (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListAST * p = (const cCollectionElement_routineFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
  return p->mObject.mProperty_mFormalArgumentTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_routineFormalArgumentListAST::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListAST * p = (const cCollectionElement_routineFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
  return p->mObject.mProperty_mFormalArgumentName ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @routineFormalArgumentListAST type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineFormalArgumentListAST ("routineFormalArgumentListAST",
                                                     NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_routineFormalArgumentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineFormalArgumentListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_routineFormalArgumentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineFormalArgumentListAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListAST GALGAS_routineFormalArgumentListAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_routineFormalArgumentListAST result ;
  const GALGAS_routineFormalArgumentListAST * p = (const GALGAS_routineFormalArgumentListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineFormalArgumentListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineFormalArgumentListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procFormalArgumentPassingMode::GALGAS_procFormalArgumentPassingMode (void) :
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procFormalArgumentPassingMode GALGAS_procFormalArgumentPassingMode::constructor_input (UNUSED_LOCATION_ARGS) {
  GALGAS_procFormalArgumentPassingMode result ;
  result.mEnum = kEnum_input ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procFormalArgumentPassingMode GALGAS_procFormalArgumentPassingMode::constructor_output (UNUSED_LOCATION_ARGS) {
  GALGAS_procFormalArgumentPassingMode result ;
  result.mEnum = kEnum_output ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procFormalArgumentPassingMode GALGAS_procFormalArgumentPassingMode::constructor_inputOutput (UNUSED_LOCATION_ARGS) {
  GALGAS_procFormalArgumentPassingMode result ;
  result.mEnum = kEnum_inputOutput ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_procFormalArgumentPassingMode [4] = {
  "(not built)",
  "input",
  "output",
  "inputOutput"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_procFormalArgumentPassingMode::getter_isInput (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_input == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_procFormalArgumentPassingMode::getter_isOutput (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_output == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_procFormalArgumentPassingMode::getter_isInputOutput (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_inputOutput == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_procFormalArgumentPassingMode::description (C_String & ioString,
                                                        const int32_t /* inIndentation */) const {
  ioString << "<enum @procFormalArgumentPassingMode: " << gEnumNameArrayFor_procFormalArgumentPassingMode [mEnum] ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_procFormalArgumentPassingMode::objectCompare (const GALGAS_procFormalArgumentPassingMode & inOperand) const {
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
//                                         @procFormalArgumentPassingMode type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procFormalArgumentPassingMode ("procFormalArgumentPassingMode",
                                                      NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_procFormalArgumentPassingMode::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procFormalArgumentPassingMode ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_procFormalArgumentPassingMode::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procFormalArgumentPassingMode (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procFormalArgumentPassingMode GALGAS_procFormalArgumentPassingMode::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_procFormalArgumentPassingMode result ;
  const GALGAS_procFormalArgumentPassingMode * p = (const GALGAS_procFormalArgumentPassingMode *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procFormalArgumentPassingMode *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procFormalArgumentPassingMode", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Extension Getter '@procFormalArgumentPassingMode formalPassingModeString'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string extensionGetter_formalPassingModeString (const GALGAS_procFormalArgumentPassingMode & inObject,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_procFormalArgumentPassingMode temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
    break ;
  case GALGAS_procFormalArgumentPassingMode::kEnum_input:
    {
      result_result = GALGAS_string ("\?") ;
    }
    break ;
  case GALGAS_procFormalArgumentPassingMode::kEnum_output:
    {
      result_result = GALGAS_string ("!") ;
    }
    break ;
  case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
    {
      result_result = GALGAS_string ("\?!") ;
    }
    break ;
  }
//---
  return result_result ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Extension Getter '@procFormalArgumentPassingMode requiredActualPassingModeForSelector'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string extensionGetter_requiredActualPassingModeForSelector (const GALGAS_procFormalArgumentPassingMode & inObject,
                                                                    const GALGAS_string & constinArgument_inSelector,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_procFormalArgumentPassingMode temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
    break ;
  case GALGAS_procFormalArgumentPassingMode::kEnum_input:
    {
      result_result = GALGAS_string ("!") ;
    }
    break ;
  case GALGAS_procFormalArgumentPassingMode::kEnum_output:
    {
      result_result = GALGAS_string ("\?") ;
    }
    break ;
  case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
    {
      result_result = GALGAS_string ("!\?") ;
    }
    break ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inSelector.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    result_result.plusAssign_operation(constinArgument_inSelector.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 52)), inCompiler  COMMA_SOURCE_FILE ("declaration-func.galgas", 52)) ;
  }
//---
  return result_result ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Extension method '@functionDeclarationListAST noteTypesInPrecedenceGraph'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_noteTypesInPrecedenceGraph (const GALGAS_functionDeclarationListAST inObject,
                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_functionDeclarationListAST temp_0 = inObject ;
  cEnumerator_functionDeclarationListAST enumerator_6286 (temp_0, kENUMERATION_UP) ;
  while (enumerator_6286.hasCurrentObject ()) {
    cEnumerator_routineFormalArgumentListAST enumerator_6359 (enumerator_6286.current_mFunctionFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_6359.hasCurrentObject ()) {
      {
      ioArgument_ioGraph.setter_noteNode (enumerator_6359.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-func.galgas", 202)) ;
      }
      enumerator_6359.gotoNextObject () ;
    }
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_6286.current_mFunctionInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 204)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_6286.current_mFunctionReturnTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      ioArgument_ioGraph.setter_noteNode (enumerator_6286.current_mFunctionReturnTypeName (HERE) COMMA_SOURCE_FILE ("declaration-func.galgas", 206)) ;
      }
    }
    enumerator_6286.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Extension method '@functionDeclarationListAST enterFunctionInContext'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_enterFunctionInContext (const GALGAS_functionDeclarationListAST inObject,
                                             const GALGAS_lstring constinArgument_inSelfTypeName,
                                             GALGAS_semanticContext & ioArgument_ioContext,
                                             GALGAS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_functionDeclarationListAST temp_0 = inObject ;
  cEnumerator_functionDeclarationListAST enumerator_7209 (temp_0, kENUMERATION_UP) ;
  while (enumerator_7209.hasCurrentObject ()) {
    GALGAS_routineTypedSignature var_signature_7325 ;
    {
    routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, enumerator_7209.current (HERE).getter_mFunctionFormalArgumentList (HERE), var_signature_7325, inCompiler  COMMA_SOURCE_FILE ("declaration-func.galgas", 222)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_returnTypeProxy_7466 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeOptionalProxy (ioArgument_ioContext.mProperty_mTypeMap, enumerator_7209.current (HERE).getter_mFunctionReturnTypeName (HERE), var_returnTypeProxy_7466 COMMA_SOURCE_FILE ("declaration-func.galgas", 224)) ;
    }
    GALGAS_bool var_warnIfUnused_7506 = GALGAS_bool (true) ;
    GALGAS_bool var_globalFunction_7536 = GALGAS_bool (false) ;
    GALGAS_bool var_canMutateProperties_7572 = GALGAS_bool (false) ;
    GALGAS_bool var_isSafe_7595 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_7658 (enumerator_7209.current (HERE).getter_mFunctionAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_7658.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_7658.current_mValue (HERE).getter_string (HERE).objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 231)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        const enumGalgasBool test_2 = var_warnIfUnused_7506.operator_not (SOURCE_FILE ("declaration-func.galgas", 232)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (enumerator_7658.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-func.galgas", 233)), GALGAS_string ("duplicated @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 233)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 233)), fixItArray3  COMMA_SOURCE_FILE ("declaration-func.galgas", 233)) ;
        }
        var_warnIfUnused_7506 = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_1) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_7658.current_mValue (HERE).getter_string (HERE).objectCompare (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 236)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const enumGalgasBool test_5 = var_globalFunction_7536.boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (enumerator_7658.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-func.galgas", 238)), GALGAS_string ("duplicated @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 238)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 238)), fixItArray6  COMMA_SOURCE_FILE ("declaration-func.galgas", 238)) ;
          }
          var_globalFunction_7536 = GALGAS_bool (true) ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_7658.current_mValue (HERE).getter_string (HERE).objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 241)))).boolEnum () ;
          if (kBoolTrue == test_7) {
            const enumGalgasBool test_8 = var_canMutateProperties_7572.boolEnum () ;
            if (kBoolTrue == test_8) {
              TC_Array <C_FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (enumerator_7658.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-func.galgas", 243)), GALGAS_string ("duplicated @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 243)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 243)), fixItArray9  COMMA_SOURCE_FILE ("declaration-func.galgas", 243)) ;
            }
            var_canMutateProperties_7572 = GALGAS_bool (true) ;
          }else if (kBoolFalse == test_7) {
            const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, enumerator_7658.current_mValue (HERE).getter_string (HERE).objectCompare (function_safeAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 246)))).boolEnum () ;
            if (kBoolTrue == test_10) {
              const enumGalgasBool test_11 = var_isSafe_7595.boolEnum () ;
              if (kBoolTrue == test_11) {
                TC_Array <C_FixItDescription> fixItArray12 ;
                fixItArray12.appendObject (C_FixItDescription (kFixItRemove, "")) ;
                inCompiler->emitSemanticError (enumerator_7658.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-func.galgas", 248)), GALGAS_string ("duplicated attribute"), fixItArray12  COMMA_SOURCE_FILE ("declaration-func.galgas", 248)) ;
              }else if (kBoolFalse == test_11) {
                var_isSafe_7595 = GALGAS_bool (true) ;
              }
            }else if (kBoolFalse == test_10) {
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (enumerator_7658.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-func.galgas", 253)), GALGAS_string ("unknown attribute; available attributes are @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 253)).add_operation (GALGAS_string (", @"), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 254)).add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 254)).add_operation (GALGAS_string (", @"), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 254)).add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 254)).add_operation (GALGAS_string (", @"), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 254)).add_operation (function_safeAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 254)), fixItArray13  COMMA_SOURCE_FILE ("declaration-func.galgas", 253)) ;
            }
          }
        }
      }
      enumerator_7658.gotoNextObject () ;
    }
    GALGAS_bool var_canAccessProperties_8783 = GALGAS_bool (kIsNotEqual, enumerator_7209.current (HERE).getter_mMode (HERE).objectCompare (GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-func.galgas", 257)))) ;
    GALGAS_lstring var_routineMangledName_8868 = function_routineMangledNameFromAST (constinArgument_inSelfTypeName.getter_string (SOURCE_FILE ("declaration-func.galgas", 260)), enumerator_7209.current (HERE).getter_mFunctionName (HERE), enumerator_7209.current (HERE).getter_mFunctionFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 259)) ;
    {
    extensionSetter_insertRoutine (ioArgument_ioContext.mProperty_mRoutineMapForContext, constinArgument_inSelfTypeName.getter_string (SOURCE_FILE ("declaration-func.galgas", 266)), enumerator_7209.current (HERE).getter_mFunctionName (HERE), extensionGetter_routineSignature (enumerator_7209.current (HERE).getter_mFunctionFormalArgumentList (HERE), enumerator_7209.current (HERE).getter_mFunctionName (HERE).getter_location (SOURCE_FILE ("declaration-func.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 268)), var_routineMangledName_8868, GALGAS_routineDescriptor::constructor_new (enumerator_7209.current (HERE).getter_mPublicFunction (HERE), var_globalFunction_7536, enumerator_7209.current (HERE).getter_mFunctionName (HERE).getter_string (SOURCE_FILE ("declaration-func.galgas", 273)), GALGAS_routineKind::constructor_function (enumerator_7209.current (HERE).getter_mMode (HERE)  COMMA_SOURCE_FILE ("declaration-func.galgas", 274)), var_signature_7325, var_returnTypeProxy_7466, var_canAccessProperties_8783, var_canMutateProperties_7572, var_isSafe_7595  COMMA_SOURCE_FILE ("declaration-func.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 265)) ;
    }
    ioArgument_ioDecoratedRoutineList.addAssign_operation (constinArgument_inSelfTypeName, enumerator_7209.current (HERE).getter_mMode (HERE), GALGAS_routineKind::constructor_function (enumerator_7209.current (HERE).getter_mMode (HERE)  COMMA_SOURCE_FILE ("declaration-func.galgas", 286)), var_warnIfUnused_7506, var_globalFunction_7536, GALGAS_routineAttributes::constructor_directPropertyAccess (SOURCE_FILE ("declaration-func.galgas", 289)), var_routineMangledName_8868, enumerator_7209.current (HERE).getter_mFunctionFormalArgumentList (HERE), enumerator_7209.current (HERE).getter_mFunctionInstructionList (HERE), enumerator_7209.current (HERE).getter_mEndOfFunctionDeclaration (HERE), enumerator_7209.current (HERE).getter_mFunctionReturnTypeName (HERE)  COMMA_SOURCE_FILE ("declaration-func.galgas", 283)) ;
    enumerator_7209.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Extension method '@functionDeclarationListAST enterFunctionsInPropertyMap'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_enterFunctionsInPropertyMap (const GALGAS_functionDeclarationListAST inObject,
                                                  const GALGAS_string constinArgument_inReceiverLLVMBaseTypeName,
                                                  GALGAS_semanticContext & ioArgument_ioContext,
                                                  GALGAS_propertyMap & ioArgument_ioPropertyMap,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_functionDeclarationListAST temp_0 = inObject ;
  cEnumerator_functionDeclarationListAST enumerator_10500 (temp_0, kENUMERATION_UP) ;
  while (enumerator_10500.hasCurrentObject ()) {
    GALGAS_stringset var_attributeSet_10549 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-func.galgas", 308)) ;
    cEnumerator_lstringlist enumerator_10607 (enumerator_10500.current (HERE).getter_mFunctionAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_10607.hasCurrentObject ()) {
      var_attributeSet_10549.addAssign_operation (enumerator_10607.current (HERE).getter_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("declaration-func.galgas", 310)) ;
      enumerator_10607.gotoNextObject () ;
    }
    GALGAS_bool var_exportedFunction_10690 = var_attributeSet_10549.getter_hasKey (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 312)) COMMA_SOURCE_FILE ("declaration-func.galgas", 312)) ;
    GALGAS_bool var_canMutateProperties_10764 = var_attributeSet_10549.getter_hasKey (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 313)) COMMA_SOURCE_FILE ("declaration-func.galgas", 313)) ;
    GALGAS_bool var_safe_10823 = var_attributeSet_10549.getter_hasKey (function_safeAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 314)) COMMA_SOURCE_FILE ("declaration-func.galgas", 314)) ;
    GALGAS_bool var_canAccessProperties_10893 = GALGAS_bool (kIsNotEqual, enumerator_10500.current (HERE).getter_mMode (HERE).objectCompare (GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-func.galgas", 315)))) ;
    GALGAS_routineTypedSignature var_signature_11036 ;
    {
    routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, enumerator_10500.current (HERE).getter_mFunctionFormalArgumentList (HERE), var_signature_11036, inCompiler  COMMA_SOURCE_FILE ("declaration-func.galgas", 317)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_returnTypeProxy_11177 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeOptionalProxy (ioArgument_ioContext.mProperty_mTypeMap, enumerator_10500.current (HERE).getter_mFunctionReturnTypeName (HERE), var_returnTypeProxy_11177 COMMA_SOURCE_FILE ("declaration-func.galgas", 319)) ;
    }
    GALGAS_lstring var_routineMangledName_11233 = function_routineMangledNameFromAST (constinArgument_inReceiverLLVMBaseTypeName, enumerator_10500.current (HERE).getter_mFunctionName (HERE), enumerator_10500.current (HERE).getter_mFunctionFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 321)) ;
    GALGAS_routineDescriptor var_descriptor_11422 = GALGAS_routineDescriptor::constructor_new (enumerator_10500.current (HERE).getter_mPublicFunction (HERE), var_exportedFunction_10690, enumerator_10500.current (HERE).getter_mFunctionName (HERE).getter_string (SOURCE_FILE ("declaration-func.galgas", 330)), GALGAS_routineKind::constructor_function (enumerator_10500.current (HERE).getter_mMode (HERE)  COMMA_SOURCE_FILE ("declaration-func.galgas", 331)), var_signature_11036, var_returnTypeProxy_11177, var_canAccessProperties_10893, var_canMutateProperties_10764, var_safe_10823  COMMA_SOURCE_FILE ("declaration-func.galgas", 327)) ;
    {
    ioArgument_ioPropertyMap.setter_insertKey (var_routineMangledName_11233, enumerator_10500.current (HERE).getter_mPublicFunction (HERE), GALGAS_propertyAccessKind::constructor_nonVirtualMethod (var_descriptor_11422  COMMA_SOURCE_FILE ("declaration-func.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 339)) ;
    }
    enumerator_10500.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_routineKind_function::cEnumAssociatedValues_routineKind_function (const GALGAS_mode & inAssociatedValue0
                                                                                        COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_routineKind_function::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_routineKind_function::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_routineKind_function * ptr = dynamic_cast<const cEnumAssociatedValues_routineKind_function *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineKind::GALGAS_routineKind (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineKind GALGAS_routineKind::constructor_function (const GALGAS_mode & inAssociatedValue0
                                                             COMMA_LOCATION_ARGS) {
  GALGAS_routineKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_function ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_routineKind_function (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineKind GALGAS_routineKind::constructor_section (UNUSED_LOCATION_ARGS) {
  GALGAS_routineKind result ;
  result.mEnum = kEnum_section ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineKind GALGAS_routineKind::constructor_service (UNUSED_LOCATION_ARGS) {
  GALGAS_routineKind result ;
  result.mEnum = kEnum_service ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineKind GALGAS_routineKind::constructor_primitive (UNUSED_LOCATION_ARGS) {
  GALGAS_routineKind result ;
  result.mEnum = kEnum_primitive ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineKind::method_function (GALGAS_mode & outAssociatedValue0,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_function) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @routineKind function invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_routineKind_function * ptr = (const cEnumAssociatedValues_routineKind_function *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_routineKind [5] = {
  "(not built)",
  "function",
  "section",
  "service",
  "primitive"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_routineKind::getter_isFunction (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_function == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_routineKind::getter_isSection (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_section == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_routineKind::getter_isService (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_service == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_routineKind::getter_isPrimitive (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_primitive == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineKind::description (C_String & ioString,
                                      const int32_t inIndentation) const {
  ioString << "<enum @routineKind: " << gEnumNameArrayFor_routineKind [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_routineKind::objectCompare (const GALGAS_routineKind & inOperand) const {
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
//                                                  @routineKind type                                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineKind ("routineKind",
                                    NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_routineKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_routineKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineKind (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineKind GALGAS_routineKind::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_routineKind result ;
  const GALGAS_routineKind * p = (const GALGAS_routineKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Extension method '@systemRoutineDeclarationListAST noteTypesInPrecedenceGraph'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_noteTypesInPrecedenceGraph (const GALGAS_systemRoutineDeclarationListAST inObject,
                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_systemRoutineDeclarationListAST temp_0 = inObject ;
  cEnumerator_systemRoutineDeclarationListAST enumerator_4226 (temp_0, kENUMERATION_UP) ;
  while (enumerator_4226.hasCurrentObject ()) {
    cEnumerator_routineFormalArgumentListAST enumerator_4291 (enumerator_4226.current_mFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_4291.hasCurrentObject ()) {
      {
      ioArgument_ioGraph.setter_noteNode (enumerator_4291.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-svc.galgas", 134)) ;
      }
      enumerator_4291.gotoNextObject () ;
    }
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_4226.current_mInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 136)) ;
    enumerator_4226.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Extension method '@systemRoutineDeclarationListAST enterSystemRoutineInContext'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_enterSystemRoutineInContext (const GALGAS_systemRoutineDeclarationListAST inObject,
                                                  const GALGAS_string constinArgument_inReceiverTypeName,
                                                  GALGAS_semanticContext & ioArgument_ioContext,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_systemRoutineDeclarationListAST temp_0 = inObject ;
  cEnumerator_systemRoutineDeclarationListAST enumerator_4975 (temp_0, kENUMERATION_UP) ;
  while (enumerator_4975.hasCurrentObject ()) {
    GALGAS_lstring var_routineMangledName_5033 = function_routineMangledNameFromAST (constinArgument_inReceiverTypeName, enumerator_4975.current (HERE).getter_mName (HERE), enumerator_4975.current (HERE).getter_mFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 150)) ;
    GALGAS_routineTypedSignature var_signature_5244 ;
    {
    routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, enumerator_4975.current (HERE).getter_mFormalArgumentList (HERE), var_signature_5244, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 156)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_returnTypeProxy_5372 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeOptionalProxy (ioArgument_ioContext.mProperty_mTypeMap, enumerator_4975.current (HERE).getter_mReturnTypeName (HERE), var_returnTypeProxy_5372 COMMA_SOURCE_FILE ("declaration-svc.galgas", 158)) ;
    }
    GALGAS_bool var_mutating_5408 = GALGAS_bool (false) ;
    GALGAS_bool var_safe_5429 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_5479 (enumerator_4975.current (HERE).getter_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_5479.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_5479.current_mValue (HERE).getter_string (HERE).objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 163)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_mutating_5408 = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_1) {
        const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_5479.current_mValue (HERE).getter_string (HERE).objectCompare (function_safeAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 165)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          var_safe_5429 = GALGAS_bool (true) ;
        }
      }
      enumerator_5479.gotoNextObject () ;
    }
    {
    extensionSetter_insertRoutine (ioArgument_ioContext.mProperty_mRoutineMapForContext, constinArgument_inReceiverTypeName, enumerator_4975.current (HERE).getter_mName (HERE), extensionGetter_routineSignature (enumerator_4975.current (HERE).getter_mFormalArgumentList (HERE), enumerator_4975.current (HERE).getter_mName (HERE).getter_location (SOURCE_FILE ("declaration-svc.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 173)), var_routineMangledName_5033, GALGAS_routineDescriptor::constructor_new (enumerator_4975.current (HERE).getter_mPublic (HERE), GALGAS_bool (false), enumerator_4975.current (HERE).getter_mName (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 178)), enumerator_4975.current (HERE).getter_mRoutineKind (HERE), var_signature_5244, var_returnTypeProxy_5372, GALGAS_bool (true), var_mutating_5408, var_safe_5429  COMMA_SOURCE_FILE ("declaration-svc.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 170)) ;
    }
    enumerator_4975.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Extension method '@systemRoutineDeclarationListAST systemRoutineSemanticAnalysis'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_systemRoutineSemanticAnalysis (const GALGAS_systemRoutineDeclarationListAST inObject,
                                                    GALGAS_PLMType inArgument_inReceiverType,
                                                    const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                    GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_systemRoutineDeclarationListAST temp_0 = inObject ;
  cEnumerator_systemRoutineDeclarationListAST enumerator_6851 (temp_0, kENUMERATION_UP) ;
  while (enumerator_6851.hasCurrentObject ()) {
    GALGAS_bool var_mutating_6871 = GALGAS_bool (false) ;
    GALGAS_bool var_noUnusedWarning_6903 = GALGAS_bool (false) ;
    GALGAS_bool var_isSafe_6926 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_6976 (enumerator_6851.current (HERE).getter_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_6976.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_6976.current_mValue (HERE).getter_string (HERE).objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 205)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        const enumGalgasBool test_2 = var_noUnusedWarning_6903.boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          fixItArray3.appendObject (C_FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (enumerator_6976.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-svc.galgas", 207)), GALGAS_string ("duplicated @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 207)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 207)), fixItArray3  COMMA_SOURCE_FILE ("declaration-svc.galgas", 207)) ;
        }
        var_noUnusedWarning_6903 = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_1) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_6976.current_mValue (HERE).getter_string (HERE).objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 210)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const enumGalgasBool test_5 = var_mutating_6871.boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <C_FixItDescription> fixItArray6 ;
            fixItArray6.appendObject (C_FixItDescription (kFixItRemove, "")) ;
            inCompiler->emitSemanticError (enumerator_6976.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-svc.galgas", 212)), GALGAS_string ("duplicated @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 212)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 212)), fixItArray6  COMMA_SOURCE_FILE ("declaration-svc.galgas", 212)) ;
          }
          var_mutating_6871 = GALGAS_bool (true) ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_6976.current_mValue (HERE).getter_string (HERE).objectCompare (function_safeAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 215)))).boolEnum () ;
          if (kBoolTrue == test_7) {
            const enumGalgasBool test_8 = var_isSafe_6926.boolEnum () ;
            if (kBoolTrue == test_8) {
              TC_Array <C_FixItDescription> fixItArray9 ;
              fixItArray9.appendObject (C_FixItDescription (kFixItRemove, "")) ;
              inCompiler->emitSemanticError (enumerator_6976.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-svc.galgas", 217)), GALGAS_string ("duplicated @").add_operation (function_safeAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 217)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 217)), fixItArray9  COMMA_SOURCE_FILE ("declaration-svc.galgas", 217)) ;
            }
            var_isSafe_6926 = GALGAS_bool (true) ;
          }else if (kBoolFalse == test_7) {
            TC_Array <C_FixItDescription> fixItArray10 ;
            fixItArray10.appendObject (C_FixItDescription (kFixItRemove, "")) ;
            inCompiler->emitSemanticError (enumerator_6976.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-svc.galgas", 221)), GALGAS_string ("unknown attribute; available attributes are @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 222)).add_operation (GALGAS_string (", @"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 222)).add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 222)), fixItArray10  COMMA_SOURCE_FILE ("declaration-svc.galgas", 221)) ;
          }
        }
      }
      enumerator_6976.gotoNextObject () ;
    }
    GALGAS_mode var_mode_7861 ;
    switch (enumerator_6851.current (HERE).getter_mRoutineKind (HERE).enumValue ()) {
    case GALGAS_routineKind::kNotBuilt:
      break ;
    case GALGAS_routineKind::kEnum_section:
      {
        var_mode_7861 = GALGAS_mode::constructor_sectionMode (SOURCE_FILE ("declaration-svc.galgas", 228)) ;
      }
      break ;
    case GALGAS_routineKind::kEnum_primitive:
      {
        var_mode_7861 = GALGAS_mode::constructor_primitiveMode (SOURCE_FILE ("declaration-svc.galgas", 229)) ;
      }
      break ;
    case GALGAS_routineKind::kEnum_service:
      {
        var_mode_7861 = GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("declaration-svc.galgas", 230)) ;
      }
      break ;
    case GALGAS_routineKind::kEnum_function:
      {
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (enumerator_6851.current (HERE).getter_mEndOfInstructionListLocation (HERE), GALGAS_string ("INTERNAL ERROR"), fixItArray11  COMMA_SOURCE_FILE ("declaration-svc.galgas", 231)) ;
        var_mode_7861.drop () ; // Release error dropped variable
      }
      break ;
    }
    GALGAS_routineAttributes var_attributes_8142 = GALGAS_routineAttributes::constructor_mutating (SOURCE_FILE ("declaration-svc.galgas", 233)).operator_or (GALGAS_routineAttributes::constructor_directPropertyAccess (SOURCE_FILE ("declaration-svc.galgas", 233)) COMMA_SOURCE_FILE ("declaration-svc.galgas", 233)).operator_or (GALGAS_routineAttributes::constructor_controlRegisterReadable (SOURCE_FILE ("declaration-svc.galgas", 233)) COMMA_SOURCE_FILE ("declaration-svc.galgas", 233)) ;
    const enumGalgasBool test_12 = var_isSafe_6926.operator_not (SOURCE_FILE ("declaration-svc.galgas", 234)).boolEnum () ;
    if (kBoolTrue == test_12) {
      var_attributes_8142 = var_attributes_8142.operator_or (GALGAS_routineAttributes::constructor_panicAllowed (SOURCE_FILE ("declaration-svc.galgas", 235)) COMMA_SOURCE_FILE ("declaration-svc.galgas", 235)) ;
    }
    {
    routine_routineSemanticAnalysis (inArgument_inReceiverType, enumerator_6851.current (HERE).getter_mRoutineKind (HERE), var_mode_7861, enumerator_6851.current (HERE).getter_mName (HERE), enumerator_6851.current (HERE).getter_mFormalArgumentList (HERE), enumerator_6851.current (HERE).getter_mReturnTypeName (HERE), enumerator_6851.current (HERE).getter_mInstructionList (HERE), enumerator_6851.current (HERE).getter_mEndOfInstructionListLocation (HERE), var_attributes_8142, var_noUnusedWarning_6903.operator_not (SOURCE_FILE ("declaration-svc.galgas", 247)), GALGAS_bool (true), constinArgument_inSemanticContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 237)) ;
    }
    enumerator_6851.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Class for element of '@sectionIRlist' list                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_sectionIRlist : public cCollectionElement {
  public : GALGAS_sectionIRlist_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_sectionIRlist (const GALGAS_string & in_mSectionCallName,
                                             const GALGAS_string & in_mSectionImplementationName,
                                             const GALGAS_bool & in_mInvocationFromUserModeOnly
                                             COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_sectionIRlist (const GALGAS_sectionIRlist_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_sectionIRlist::cCollectionElement_sectionIRlist (const GALGAS_string & in_mSectionCallName,
                                                                    const GALGAS_string & in_mSectionImplementationName,
                                                                    const GALGAS_bool & in_mInvocationFromUserModeOnly
                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSectionCallName, in_mSectionImplementationName, in_mInvocationFromUserModeOnly) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_sectionIRlist::cCollectionElement_sectionIRlist (const GALGAS_sectionIRlist_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSectionCallName, inElement.mProperty_mSectionImplementationName, inElement.mProperty_mInvocationFromUserModeOnly) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_sectionIRlist::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_sectionIRlist::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_sectionIRlist (mObject.mProperty_mSectionCallName, mObject.mProperty_mSectionImplementationName, mObject.mProperty_mInvocationFromUserModeOnly COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_sectionIRlist::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSectionCallName" ":" ;
  mObject.mProperty_mSectionCallName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSectionImplementationName" ":" ;
  mObject.mProperty_mSectionImplementationName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInvocationFromUserModeOnly" ":" ;
  mObject.mProperty_mInvocationFromUserModeOnly.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_sectionIRlist::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_sectionIRlist * operand = (cCollectionElement_sectionIRlist *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_sectionIRlist) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sectionIRlist::GALGAS_sectionIRlist (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sectionIRlist::GALGAS_sectionIRlist (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sectionIRlist GALGAS_sectionIRlist::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_sectionIRlist  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sectionIRlist GALGAS_sectionIRlist::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                      const GALGAS_string & inOperand1,
                                                                      const GALGAS_bool & inOperand2
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_sectionIRlist result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_sectionIRlist (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_sectionIRlist::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sectionIRlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                      const GALGAS_string & in_mSectionCallName,
                                                      const GALGAS_string & in_mSectionImplementationName,
                                                      const GALGAS_bool & in_mInvocationFromUserModeOnly
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_sectionIRlist * p = NULL ;
  macroMyNew (p, cCollectionElement_sectionIRlist (in_mSectionCallName,
                                                   in_mSectionImplementationName,
                                                   in_mInvocationFromUserModeOnly COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sectionIRlist::addAssign_operation (const GALGAS_string & inOperand0,
                                                const GALGAS_string & inOperand1,
                                                const GALGAS_bool & inOperand2
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_sectionIRlist (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sectionIRlist::setter_append (GALGAS_sectionIRlist_2D_element inElement,
                                          C_Compiler * /* inCompiler */
                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_sectionIRlist (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sectionIRlist::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                 const GALGAS_string inOperand1,
                                                 const GALGAS_bool inOperand2,
                                                 const GALGAS_uint inInsertionIndex,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_sectionIRlist (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sectionIRlist::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                 GALGAS_string & outOperand1,
                                                 GALGAS_bool & outOperand2,
                                                 const GALGAS_uint inRemoveIndex,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_sectionIRlist * p = (cCollectionElement_sectionIRlist *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
      outOperand0 = p->mObject.mProperty_mSectionCallName ;
      outOperand1 = p->mObject.mProperty_mSectionImplementationName ;
      outOperand2 = p->mObject.mProperty_mInvocationFromUserModeOnly ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sectionIRlist::setter_popFirst (GALGAS_string & outOperand0,
                                            GALGAS_string & outOperand1,
                                            GALGAS_bool & outOperand2,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sectionIRlist * p = (cCollectionElement_sectionIRlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
    outOperand0 = p->mObject.mProperty_mSectionCallName ;
    outOperand1 = p->mObject.mProperty_mSectionImplementationName ;
    outOperand2 = p->mObject.mProperty_mInvocationFromUserModeOnly ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sectionIRlist::setter_popLast (GALGAS_string & outOperand0,
                                           GALGAS_string & outOperand1,
                                           GALGAS_bool & outOperand2,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sectionIRlist * p = (cCollectionElement_sectionIRlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
    outOperand0 = p->mObject.mProperty_mSectionCallName ;
    outOperand1 = p->mObject.mProperty_mSectionImplementationName ;
    outOperand2 = p->mObject.mProperty_mInvocationFromUserModeOnly ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sectionIRlist::method_first (GALGAS_string & outOperand0,
                                         GALGAS_string & outOperand1,
                                         GALGAS_bool & outOperand2,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sectionIRlist * p = (cCollectionElement_sectionIRlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
    outOperand0 = p->mObject.mProperty_mSectionCallName ;
    outOperand1 = p->mObject.mProperty_mSectionImplementationName ;
    outOperand2 = p->mObject.mProperty_mInvocationFromUserModeOnly ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sectionIRlist::method_last (GALGAS_string & outOperand0,
                                        GALGAS_string & outOperand1,
                                        GALGAS_bool & outOperand2,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sectionIRlist * p = (cCollectionElement_sectionIRlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
    outOperand0 = p->mObject.mProperty_mSectionCallName ;
    outOperand1 = p->mObject.mProperty_mSectionImplementationName ;
    outOperand2 = p->mObject.mProperty_mInvocationFromUserModeOnly ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sectionIRlist GALGAS_sectionIRlist::add_operation (const GALGAS_sectionIRlist & inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_sectionIRlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sectionIRlist GALGAS_sectionIRlist::getter_subListWithRange (const GALGAS_range & inRange,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_sectionIRlist result = GALGAS_sectionIRlist::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sectionIRlist GALGAS_sectionIRlist::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_sectionIRlist result = GALGAS_sectionIRlist::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sectionIRlist GALGAS_sectionIRlist::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_sectionIRlist result = GALGAS_sectionIRlist::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sectionIRlist::plusAssign_operation (const GALGAS_sectionIRlist inOperand,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_sectionIRlist::getter_mSectionCallNameAtIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sectionIRlist * p = (cCollectionElement_sectionIRlist *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
    result = p->mObject.mProperty_mSectionCallName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_sectionIRlist::getter_mSectionImplementationNameAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sectionIRlist * p = (cCollectionElement_sectionIRlist *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
    result = p->mObject.mProperty_mSectionImplementationName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_sectionIRlist::getter_mInvocationFromUserModeOnlyAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sectionIRlist * p = (cCollectionElement_sectionIRlist *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
    result = p->mObject.mProperty_mInvocationFromUserModeOnly ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_sectionIRlist::cEnumerator_sectionIRlist (const GALGAS_sectionIRlist & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sectionIRlist_2D_element cEnumerator_sectionIRlist::current (LOCATION_ARGS) const {
  const cCollectionElement_sectionIRlist * p = (const cCollectionElement_sectionIRlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_sectionIRlist::current_mSectionCallName (LOCATION_ARGS) const {
  const cCollectionElement_sectionIRlist * p = (const cCollectionElement_sectionIRlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
  return p->mObject.mProperty_mSectionCallName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_sectionIRlist::current_mSectionImplementationName (LOCATION_ARGS) const {
  const cCollectionElement_sectionIRlist * p = (const cCollectionElement_sectionIRlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
  return p->mObject.mProperty_mSectionImplementationName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_sectionIRlist::current_mInvocationFromUserModeOnly (LOCATION_ARGS) const {
  const cCollectionElement_sectionIRlist * p = (const cCollectionElement_sectionIRlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
  return p->mObject.mProperty_mInvocationFromUserModeOnly ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                 @sectionIRlist type                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sectionIRlist ("sectionIRlist",
                                      NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_sectionIRlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sectionIRlist ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_sectionIRlist::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sectionIRlist (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sectionIRlist GALGAS_sectionIRlist::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_sectionIRlist result ;
  const GALGAS_sectionIRlist * p = (const GALGAS_sectionIRlist *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sectionIRlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sectionIRlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Class for element of '@primitiveAndServiceIRlist' list                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_primitiveAndServiceIRlist : public cCollectionElement {
  public : GALGAS_primitiveAndServiceIRlist_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_primitiveAndServiceIRlist (const GALGAS_string & in_mCallName,
                                                         const GALGAS_string & in_mImplementationName,
                                                         const GALGAS_bool & in_mHasReturnValue
                                                         COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_primitiveAndServiceIRlist (const GALGAS_primitiveAndServiceIRlist_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_primitiveAndServiceIRlist::cCollectionElement_primitiveAndServiceIRlist (const GALGAS_string & in_mCallName,
                                                                                            const GALGAS_string & in_mImplementationName,
                                                                                            const GALGAS_bool & in_mHasReturnValue
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mCallName, in_mImplementationName, in_mHasReturnValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_primitiveAndServiceIRlist::cCollectionElement_primitiveAndServiceIRlist (const GALGAS_primitiveAndServiceIRlist_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mCallName, inElement.mProperty_mImplementationName, inElement.mProperty_mHasReturnValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_primitiveAndServiceIRlist::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_primitiveAndServiceIRlist::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_primitiveAndServiceIRlist (mObject.mProperty_mCallName, mObject.mProperty_mImplementationName, mObject.mProperty_mHasReturnValue COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_primitiveAndServiceIRlist::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCallName" ":" ;
  mObject.mProperty_mCallName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mImplementationName" ":" ;
  mObject.mProperty_mImplementationName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasReturnValue" ":" ;
  mObject.mProperty_mHasReturnValue.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_primitiveAndServiceIRlist::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_primitiveAndServiceIRlist * operand = (cCollectionElement_primitiveAndServiceIRlist *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_primitiveAndServiceIRlist) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_primitiveAndServiceIRlist::GALGAS_primitiveAndServiceIRlist (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_primitiveAndServiceIRlist::GALGAS_primitiveAndServiceIRlist (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_primitiveAndServiceIRlist GALGAS_primitiveAndServiceIRlist::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_primitiveAndServiceIRlist  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_primitiveAndServiceIRlist GALGAS_primitiveAndServiceIRlist::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                              const GALGAS_string & inOperand1,
                                                                                              const GALGAS_bool & inOperand2
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_primitiveAndServiceIRlist result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_primitiveAndServiceIRlist (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_primitiveAndServiceIRlist::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_primitiveAndServiceIRlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_string & in_mCallName,
                                                                  const GALGAS_string & in_mImplementationName,
                                                                  const GALGAS_bool & in_mHasReturnValue
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_primitiveAndServiceIRlist * p = NULL ;
  macroMyNew (p, cCollectionElement_primitiveAndServiceIRlist (in_mCallName,
                                                               in_mImplementationName,
                                                               in_mHasReturnValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_primitiveAndServiceIRlist::addAssign_operation (const GALGAS_string & inOperand0,
                                                            const GALGAS_string & inOperand1,
                                                            const GALGAS_bool & inOperand2
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_primitiveAndServiceIRlist (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_primitiveAndServiceIRlist::setter_append (GALGAS_primitiveAndServiceIRlist_2D_element inElement,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_primitiveAndServiceIRlist (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_primitiveAndServiceIRlist::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                             const GALGAS_string inOperand1,
                                                             const GALGAS_bool inOperand2,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_primitiveAndServiceIRlist (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_primitiveAndServiceIRlist::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                             GALGAS_string & outOperand1,
                                                             GALGAS_bool & outOperand2,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_primitiveAndServiceIRlist * p = (cCollectionElement_primitiveAndServiceIRlist *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
      outOperand0 = p->mObject.mProperty_mCallName ;
      outOperand1 = p->mObject.mProperty_mImplementationName ;
      outOperand2 = p->mObject.mProperty_mHasReturnValue ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_primitiveAndServiceIRlist::setter_popFirst (GALGAS_string & outOperand0,
                                                        GALGAS_string & outOperand1,
                                                        GALGAS_bool & outOperand2,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_primitiveAndServiceIRlist * p = (cCollectionElement_primitiveAndServiceIRlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
    outOperand0 = p->mObject.mProperty_mCallName ;
    outOperand1 = p->mObject.mProperty_mImplementationName ;
    outOperand2 = p->mObject.mProperty_mHasReturnValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_primitiveAndServiceIRlist::setter_popLast (GALGAS_string & outOperand0,
                                                       GALGAS_string & outOperand1,
                                                       GALGAS_bool & outOperand2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_primitiveAndServiceIRlist * p = (cCollectionElement_primitiveAndServiceIRlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
    outOperand0 = p->mObject.mProperty_mCallName ;
    outOperand1 = p->mObject.mProperty_mImplementationName ;
    outOperand2 = p->mObject.mProperty_mHasReturnValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_primitiveAndServiceIRlist::method_first (GALGAS_string & outOperand0,
                                                     GALGAS_string & outOperand1,
                                                     GALGAS_bool & outOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_primitiveAndServiceIRlist * p = (cCollectionElement_primitiveAndServiceIRlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
    outOperand0 = p->mObject.mProperty_mCallName ;
    outOperand1 = p->mObject.mProperty_mImplementationName ;
    outOperand2 = p->mObject.mProperty_mHasReturnValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_primitiveAndServiceIRlist::method_last (GALGAS_string & outOperand0,
                                                    GALGAS_string & outOperand1,
                                                    GALGAS_bool & outOperand2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_primitiveAndServiceIRlist * p = (cCollectionElement_primitiveAndServiceIRlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
    outOperand0 = p->mObject.mProperty_mCallName ;
    outOperand1 = p->mObject.mProperty_mImplementationName ;
    outOperand2 = p->mObject.mProperty_mHasReturnValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_primitiveAndServiceIRlist GALGAS_primitiveAndServiceIRlist::add_operation (const GALGAS_primitiveAndServiceIRlist & inOperand,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_primitiveAndServiceIRlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_primitiveAndServiceIRlist GALGAS_primitiveAndServiceIRlist::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_primitiveAndServiceIRlist result = GALGAS_primitiveAndServiceIRlist::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_primitiveAndServiceIRlist GALGAS_primitiveAndServiceIRlist::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_primitiveAndServiceIRlist result = GALGAS_primitiveAndServiceIRlist::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_primitiveAndServiceIRlist GALGAS_primitiveAndServiceIRlist::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_primitiveAndServiceIRlist result = GALGAS_primitiveAndServiceIRlist::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_primitiveAndServiceIRlist::plusAssign_operation (const GALGAS_primitiveAndServiceIRlist inOperand,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_primitiveAndServiceIRlist::getter_mCallNameAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_primitiveAndServiceIRlist * p = (cCollectionElement_primitiveAndServiceIRlist *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
    result = p->mObject.mProperty_mCallName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_primitiveAndServiceIRlist::getter_mImplementationNameAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_primitiveAndServiceIRlist * p = (cCollectionElement_primitiveAndServiceIRlist *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
    result = p->mObject.mProperty_mImplementationName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_primitiveAndServiceIRlist::getter_mHasReturnValueAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_primitiveAndServiceIRlist * p = (cCollectionElement_primitiveAndServiceIRlist *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
    result = p->mObject.mProperty_mHasReturnValue ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_primitiveAndServiceIRlist::cEnumerator_primitiveAndServiceIRlist (const GALGAS_primitiveAndServiceIRlist & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_primitiveAndServiceIRlist_2D_element cEnumerator_primitiveAndServiceIRlist::current (LOCATION_ARGS) const {
  const cCollectionElement_primitiveAndServiceIRlist * p = (const cCollectionElement_primitiveAndServiceIRlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_primitiveAndServiceIRlist::current_mCallName (LOCATION_ARGS) const {
  const cCollectionElement_primitiveAndServiceIRlist * p = (const cCollectionElement_primitiveAndServiceIRlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
  return p->mObject.mProperty_mCallName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_primitiveAndServiceIRlist::current_mImplementationName (LOCATION_ARGS) const {
  const cCollectionElement_primitiveAndServiceIRlist * p = (const cCollectionElement_primitiveAndServiceIRlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
  return p->mObject.mProperty_mImplementationName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_primitiveAndServiceIRlist::current_mHasReturnValue (LOCATION_ARGS) const {
  const cCollectionElement_primitiveAndServiceIRlist * p = (const cCollectionElement_primitiveAndServiceIRlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
  return p->mObject.mProperty_mHasReturnValue ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @primitiveAndServiceIRlist type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_primitiveAndServiceIRlist ("primitiveAndServiceIRlist",
                                                  NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_primitiveAndServiceIRlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primitiveAndServiceIRlist ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_primitiveAndServiceIRlist::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_primitiveAndServiceIRlist (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_primitiveAndServiceIRlist GALGAS_primitiveAndServiceIRlist::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_primitiveAndServiceIRlist result ;
  const GALGAS_primitiveAndServiceIRlist * p = (const GALGAS_primitiveAndServiceIRlist *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_primitiveAndServiceIRlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("primitiveAndServiceIRlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Class for element of '@requiredProcedureDeclarationListAST' list                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_requiredProcedureDeclarationListAST : public cCollectionElement {
  public : GALGAS_requiredProcedureDeclarationListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_requiredProcedureDeclarationListAST (const GALGAS_lstring & in_mName,
                                                                   const GALGAS_mode & in_mExecutionMode,
                                                                   const GALGAS_bool & in_mIsExported,
                                                                   const GALGAS_bool & in_mIsSafe,
                                                                   const GALGAS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                                                   const GALGAS_location & in_mEndOfProcLocation
                                                                   COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_requiredProcedureDeclarationListAST (const GALGAS_requiredProcedureDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_requiredProcedureDeclarationListAST::cCollectionElement_requiredProcedureDeclarationListAST (const GALGAS_lstring & in_mName,
                                                                                                                const GALGAS_mode & in_mExecutionMode,
                                                                                                                const GALGAS_bool & in_mIsExported,
                                                                                                                const GALGAS_bool & in_mIsSafe,
                                                                                                                const GALGAS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                                                                                                const GALGAS_location & in_mEndOfProcLocation
                                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mName, in_mExecutionMode, in_mIsExported, in_mIsSafe, in_mFormalArgumentList, in_mEndOfProcLocation) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_requiredProcedureDeclarationListAST::cCollectionElement_requiredProcedureDeclarationListAST (const GALGAS_requiredProcedureDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mName, inElement.mProperty_mExecutionMode, inElement.mProperty_mIsExported, inElement.mProperty_mIsSafe, inElement.mProperty_mFormalArgumentList, inElement.mProperty_mEndOfProcLocation) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_requiredProcedureDeclarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_requiredProcedureDeclarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_requiredProcedureDeclarationListAST (mObject.mProperty_mName, mObject.mProperty_mExecutionMode, mObject.mProperty_mIsExported, mObject.mProperty_mIsSafe, mObject.mProperty_mFormalArgumentList, mObject.mProperty_mEndOfProcLocation COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_requiredProcedureDeclarationListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mName" ":" ;
  mObject.mProperty_mName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExecutionMode" ":" ;
  mObject.mProperty_mExecutionMode.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsExported" ":" ;
  mObject.mProperty_mIsExported.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsSafe" ":" ;
  mObject.mProperty_mIsSafe.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentList" ":" ;
  mObject.mProperty_mFormalArgumentList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfProcLocation" ":" ;
  mObject.mProperty_mEndOfProcLocation.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_requiredProcedureDeclarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_requiredProcedureDeclarationListAST * operand = (cCollectionElement_requiredProcedureDeclarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_requiredProcedureDeclarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_requiredProcedureDeclarationListAST::GALGAS_requiredProcedureDeclarationListAST (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_requiredProcedureDeclarationListAST::GALGAS_requiredProcedureDeclarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_requiredProcedureDeclarationListAST GALGAS_requiredProcedureDeclarationListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_requiredProcedureDeclarationListAST  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_requiredProcedureDeclarationListAST GALGAS_requiredProcedureDeclarationListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_mode & inOperand1,
                                                                                                                  const GALGAS_bool & inOperand2,
                                                                                                                  const GALGAS_bool & inOperand3,
                                                                                                                  const GALGAS_routineFormalArgumentListAST & inOperand4,
                                                                                                                  const GALGAS_location & inOperand5
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_requiredProcedureDeclarationListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_requiredProcedureDeclarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_requiredProcedureDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_requiredProcedureDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                            const GALGAS_lstring & in_mName,
                                                                            const GALGAS_mode & in_mExecutionMode,
                                                                            const GALGAS_bool & in_mIsExported,
                                                                            const GALGAS_bool & in_mIsSafe,
                                                                            const GALGAS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                                                            const GALGAS_location & in_mEndOfProcLocation
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_requiredProcedureDeclarationListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_requiredProcedureDeclarationListAST (in_mName,
                                                                         in_mExecutionMode,
                                                                         in_mIsExported,
                                                                         in_mIsSafe,
                                                                         in_mFormalArgumentList,
                                                                         in_mEndOfProcLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_requiredProcedureDeclarationListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_mode & inOperand1,
                                                                      const GALGAS_bool & inOperand2,
                                                                      const GALGAS_bool & inOperand3,
                                                                      const GALGAS_routineFormalArgumentListAST & inOperand4,
                                                                      const GALGAS_location & inOperand5
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_requiredProcedureDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_requiredProcedureDeclarationListAST::setter_append (GALGAS_requiredProcedureDeclarationListAST_2D_element inElement,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_requiredProcedureDeclarationListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_requiredProcedureDeclarationListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                       const GALGAS_mode inOperand1,
                                                                       const GALGAS_bool inOperand2,
                                                                       const GALGAS_bool inOperand3,
                                                                       const GALGAS_routineFormalArgumentListAST inOperand4,
                                                                       const GALGAS_location inOperand5,
                                                                       const GALGAS_uint inInsertionIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_requiredProcedureDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_requiredProcedureDeclarationListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                       GALGAS_mode & outOperand1,
                                                                       GALGAS_bool & outOperand2,
                                                                       GALGAS_bool & outOperand3,
                                                                       GALGAS_routineFormalArgumentListAST & outOperand4,
                                                                       GALGAS_location & outOperand5,
                                                                       const GALGAS_uint inRemoveIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_requiredProcedureDeclarationListAST * p = (cCollectionElement_requiredProcedureDeclarationListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
      outOperand0 = p->mObject.mProperty_mName ;
      outOperand1 = p->mObject.mProperty_mExecutionMode ;
      outOperand2 = p->mObject.mProperty_mIsExported ;
      outOperand3 = p->mObject.mProperty_mIsSafe ;
      outOperand4 = p->mObject.mProperty_mFormalArgumentList ;
      outOperand5 = p->mObject.mProperty_mEndOfProcLocation ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_requiredProcedureDeclarationListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                  GALGAS_mode & outOperand1,
                                                                  GALGAS_bool & outOperand2,
                                                                  GALGAS_bool & outOperand3,
                                                                  GALGAS_routineFormalArgumentListAST & outOperand4,
                                                                  GALGAS_location & outOperand5,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredProcedureDeclarationListAST * p = (cCollectionElement_requiredProcedureDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mExecutionMode ;
    outOperand2 = p->mObject.mProperty_mIsExported ;
    outOperand3 = p->mObject.mProperty_mIsSafe ;
    outOperand4 = p->mObject.mProperty_mFormalArgumentList ;
    outOperand5 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_requiredProcedureDeclarationListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                                 GALGAS_mode & outOperand1,
                                                                 GALGAS_bool & outOperand2,
                                                                 GALGAS_bool & outOperand3,
                                                                 GALGAS_routineFormalArgumentListAST & outOperand4,
                                                                 GALGAS_location & outOperand5,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredProcedureDeclarationListAST * p = (cCollectionElement_requiredProcedureDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mExecutionMode ;
    outOperand2 = p->mObject.mProperty_mIsExported ;
    outOperand3 = p->mObject.mProperty_mIsSafe ;
    outOperand4 = p->mObject.mProperty_mFormalArgumentList ;
    outOperand5 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_requiredProcedureDeclarationListAST::method_first (GALGAS_lstring & outOperand0,
                                                               GALGAS_mode & outOperand1,
                                                               GALGAS_bool & outOperand2,
                                                               GALGAS_bool & outOperand3,
                                                               GALGAS_routineFormalArgumentListAST & outOperand4,
                                                               GALGAS_location & outOperand5,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredProcedureDeclarationListAST * p = (cCollectionElement_requiredProcedureDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mExecutionMode ;
    outOperand2 = p->mObject.mProperty_mIsExported ;
    outOperand3 = p->mObject.mProperty_mIsSafe ;
    outOperand4 = p->mObject.mProperty_mFormalArgumentList ;
    outOperand5 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_requiredProcedureDeclarationListAST::method_last (GALGAS_lstring & outOperand0,
                                                              GALGAS_mode & outOperand1,
                                                              GALGAS_bool & outOperand2,
                                                              GALGAS_bool & outOperand3,
                                                              GALGAS_routineFormalArgumentListAST & outOperand4,
                                                              GALGAS_location & outOperand5,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredProcedureDeclarationListAST * p = (cCollectionElement_requiredProcedureDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mExecutionMode ;
    outOperand2 = p->mObject.mProperty_mIsExported ;
    outOperand3 = p->mObject.mProperty_mIsSafe ;
    outOperand4 = p->mObject.mProperty_mFormalArgumentList ;
    outOperand5 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_requiredProcedureDeclarationListAST GALGAS_requiredProcedureDeclarationListAST::add_operation (const GALGAS_requiredProcedureDeclarationListAST & inOperand,
                                                                                                      C_Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_requiredProcedureDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_requiredProcedureDeclarationListAST GALGAS_requiredProcedureDeclarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_requiredProcedureDeclarationListAST result = GALGAS_requiredProcedureDeclarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_requiredProcedureDeclarationListAST GALGAS_requiredProcedureDeclarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_requiredProcedureDeclarationListAST result = GALGAS_requiredProcedureDeclarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_requiredProcedureDeclarationListAST GALGAS_requiredProcedureDeclarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_requiredProcedureDeclarationListAST result = GALGAS_requiredProcedureDeclarationListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_requiredProcedureDeclarationListAST::plusAssign_operation (const GALGAS_requiredProcedureDeclarationListAST inOperand,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_requiredProcedureDeclarationListAST::getter_mNameAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredProcedureDeclarationListAST * p = (cCollectionElement_requiredProcedureDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
    result = p->mObject.mProperty_mName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mode GALGAS_requiredProcedureDeclarationListAST::getter_mExecutionModeAtIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredProcedureDeclarationListAST * p = (cCollectionElement_requiredProcedureDeclarationListAST *) attributes.ptr () ;
  GALGAS_mode result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
    result = p->mObject.mProperty_mExecutionMode ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_requiredProcedureDeclarationListAST::getter_mIsExportedAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredProcedureDeclarationListAST * p = (cCollectionElement_requiredProcedureDeclarationListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
    result = p->mObject.mProperty_mIsExported ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_requiredProcedureDeclarationListAST::getter_mIsSafeAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredProcedureDeclarationListAST * p = (cCollectionElement_requiredProcedureDeclarationListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
    result = p->mObject.mProperty_mIsSafe ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListAST GALGAS_requiredProcedureDeclarationListAST::getter_mFormalArgumentListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                   C_Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredProcedureDeclarationListAST * p = (cCollectionElement_requiredProcedureDeclarationListAST *) attributes.ptr () ;
  GALGAS_routineFormalArgumentListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
    result = p->mObject.mProperty_mFormalArgumentList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_requiredProcedureDeclarationListAST::getter_mEndOfProcLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredProcedureDeclarationListAST * p = (cCollectionElement_requiredProcedureDeclarationListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
    result = p->mObject.mProperty_mEndOfProcLocation ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_requiredProcedureDeclarationListAST::cEnumerator_requiredProcedureDeclarationListAST (const GALGAS_requiredProcedureDeclarationListAST & inEnumeratedObject,
                                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_requiredProcedureDeclarationListAST_2D_element cEnumerator_requiredProcedureDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_requiredProcedureDeclarationListAST * p = (const cCollectionElement_requiredProcedureDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_requiredProcedureDeclarationListAST::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_requiredProcedureDeclarationListAST * p = (const cCollectionElement_requiredProcedureDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
  return p->mObject.mProperty_mName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mode cEnumerator_requiredProcedureDeclarationListAST::current_mExecutionMode (LOCATION_ARGS) const {
  const cCollectionElement_requiredProcedureDeclarationListAST * p = (const cCollectionElement_requiredProcedureDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
  return p->mObject.mProperty_mExecutionMode ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_requiredProcedureDeclarationListAST::current_mIsExported (LOCATION_ARGS) const {
  const cCollectionElement_requiredProcedureDeclarationListAST * p = (const cCollectionElement_requiredProcedureDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
  return p->mObject.mProperty_mIsExported ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_requiredProcedureDeclarationListAST::current_mIsSafe (LOCATION_ARGS) const {
  const cCollectionElement_requiredProcedureDeclarationListAST * p = (const cCollectionElement_requiredProcedureDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
  return p->mObject.mProperty_mIsSafe ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListAST cEnumerator_requiredProcedureDeclarationListAST::current_mFormalArgumentList (LOCATION_ARGS) const {
  const cCollectionElement_requiredProcedureDeclarationListAST * p = (const cCollectionElement_requiredProcedureDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
  return p->mObject.mProperty_mFormalArgumentList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cEnumerator_requiredProcedureDeclarationListAST::current_mEndOfProcLocation (LOCATION_ARGS) const {
  const cCollectionElement_requiredProcedureDeclarationListAST * p = (const cCollectionElement_requiredProcedureDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
  return p->mObject.mProperty_mEndOfProcLocation ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @requiredProcedureDeclarationListAST type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_requiredProcedureDeclarationListAST ("requiredProcedureDeclarationListAST",
                                                            NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_requiredProcedureDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_requiredProcedureDeclarationListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_requiredProcedureDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_requiredProcedureDeclarationListAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_requiredProcedureDeclarationListAST GALGAS_requiredProcedureDeclarationListAST::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_requiredProcedureDeclarationListAST result ;
  const GALGAS_requiredProcedureDeclarationListAST * p = (const GALGAS_requiredProcedureDeclarationListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_requiredProcedureDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("requiredProcedureDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Class for element of '@externProcedureDeclarationListAST' list                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_externProcedureDeclarationListAST : public cCollectionElement {
  public : GALGAS_externProcedureDeclarationListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_externProcedureDeclarationListAST (const GALGAS_lstring & in_mExternProcedureName,
                                                                 const GALGAS_mode & in_mMode,
                                                                 const GALGAS_lstringlist & in_mAttributeList,
                                                                 const GALGAS_routineFormalArgumentListAST & in_mProcFormalArgumentList,
                                                                 const GALGAS_lstring & in_mReturnTypeName,
                                                                 const GALGAS_lstring & in_mRoutineNameForGeneration,
                                                                 const GALGAS_location & in_mEndOfProcLocation
                                                                 COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_externProcedureDeclarationListAST (const GALGAS_externProcedureDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_externProcedureDeclarationListAST::cCollectionElement_externProcedureDeclarationListAST (const GALGAS_lstring & in_mExternProcedureName,
                                                                                                            const GALGAS_mode & in_mMode,
                                                                                                            const GALGAS_lstringlist & in_mAttributeList,
                                                                                                            const GALGAS_routineFormalArgumentListAST & in_mProcFormalArgumentList,
                                                                                                            const GALGAS_lstring & in_mReturnTypeName,
                                                                                                            const GALGAS_lstring & in_mRoutineNameForGeneration,
                                                                                                            const GALGAS_location & in_mEndOfProcLocation
                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExternProcedureName, in_mMode, in_mAttributeList, in_mProcFormalArgumentList, in_mReturnTypeName, in_mRoutineNameForGeneration, in_mEndOfProcLocation) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_externProcedureDeclarationListAST::cCollectionElement_externProcedureDeclarationListAST (const GALGAS_externProcedureDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mExternProcedureName, inElement.mProperty_mMode, inElement.mProperty_mAttributeList, inElement.mProperty_mProcFormalArgumentList, inElement.mProperty_mReturnTypeName, inElement.mProperty_mRoutineNameForGeneration, inElement.mProperty_mEndOfProcLocation) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_externProcedureDeclarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_externProcedureDeclarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_externProcedureDeclarationListAST (mObject.mProperty_mExternProcedureName, mObject.mProperty_mMode, mObject.mProperty_mAttributeList, mObject.mProperty_mProcFormalArgumentList, mObject.mProperty_mReturnTypeName, mObject.mProperty_mRoutineNameForGeneration, mObject.mProperty_mEndOfProcLocation COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_externProcedureDeclarationListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExternProcedureName" ":" ;
  mObject.mProperty_mExternProcedureName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMode" ":" ;
  mObject.mProperty_mMode.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeList" ":" ;
  mObject.mProperty_mAttributeList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProcFormalArgumentList" ":" ;
  mObject.mProperty_mProcFormalArgumentList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReturnTypeName" ":" ;
  mObject.mProperty_mReturnTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRoutineNameForGeneration" ":" ;
  mObject.mProperty_mRoutineNameForGeneration.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfProcLocation" ":" ;
  mObject.mProperty_mEndOfProcLocation.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_externProcedureDeclarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_externProcedureDeclarationListAST * operand = (cCollectionElement_externProcedureDeclarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_externProcedureDeclarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externProcedureDeclarationListAST::GALGAS_externProcedureDeclarationListAST (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externProcedureDeclarationListAST::GALGAS_externProcedureDeclarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externProcedureDeclarationListAST GALGAS_externProcedureDeclarationListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_externProcedureDeclarationListAST  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externProcedureDeclarationListAST GALGAS_externProcedureDeclarationListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_mode & inOperand1,
                                                                                                              const GALGAS_lstringlist & inOperand2,
                                                                                                              const GALGAS_routineFormalArgumentListAST & inOperand3,
                                                                                                              const GALGAS_lstring & inOperand4,
                                                                                                              const GALGAS_lstring & inOperand5,
                                                                                                              const GALGAS_location & inOperand6
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_externProcedureDeclarationListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_externProcedureDeclarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_externProcedureDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externProcedureDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                          const GALGAS_lstring & in_mExternProcedureName,
                                                                          const GALGAS_mode & in_mMode,
                                                                          const GALGAS_lstringlist & in_mAttributeList,
                                                                          const GALGAS_routineFormalArgumentListAST & in_mProcFormalArgumentList,
                                                                          const GALGAS_lstring & in_mReturnTypeName,
                                                                          const GALGAS_lstring & in_mRoutineNameForGeneration,
                                                                          const GALGAS_location & in_mEndOfProcLocation
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_externProcedureDeclarationListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_externProcedureDeclarationListAST (in_mExternProcedureName,
                                                                       in_mMode,
                                                                       in_mAttributeList,
                                                                       in_mProcFormalArgumentList,
                                                                       in_mReturnTypeName,
                                                                       in_mRoutineNameForGeneration,
                                                                       in_mEndOfProcLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externProcedureDeclarationListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_mode & inOperand1,
                                                                    const GALGAS_lstringlist & inOperand2,
                                                                    const GALGAS_routineFormalArgumentListAST & inOperand3,
                                                                    const GALGAS_lstring & inOperand4,
                                                                    const GALGAS_lstring & inOperand5,
                                                                    const GALGAS_location & inOperand6
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_externProcedureDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externProcedureDeclarationListAST::setter_append (GALGAS_externProcedureDeclarationListAST_2D_element inElement,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_externProcedureDeclarationListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externProcedureDeclarationListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                     const GALGAS_mode inOperand1,
                                                                     const GALGAS_lstringlist inOperand2,
                                                                     const GALGAS_routineFormalArgumentListAST inOperand3,
                                                                     const GALGAS_lstring inOperand4,
                                                                     const GALGAS_lstring inOperand5,
                                                                     const GALGAS_location inOperand6,
                                                                     const GALGAS_uint inInsertionIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_externProcedureDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externProcedureDeclarationListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                     GALGAS_mode & outOperand1,
                                                                     GALGAS_lstringlist & outOperand2,
                                                                     GALGAS_routineFormalArgumentListAST & outOperand3,
                                                                     GALGAS_lstring & outOperand4,
                                                                     GALGAS_lstring & outOperand5,
                                                                     GALGAS_location & outOperand6,
                                                                     const GALGAS_uint inRemoveIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_externProcedureDeclarationListAST * p = (cCollectionElement_externProcedureDeclarationListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
      outOperand6.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
      outOperand0 = p->mObject.mProperty_mExternProcedureName ;
      outOperand1 = p->mObject.mProperty_mMode ;
      outOperand2 = p->mObject.mProperty_mAttributeList ;
      outOperand3 = p->mObject.mProperty_mProcFormalArgumentList ;
      outOperand4 = p->mObject.mProperty_mReturnTypeName ;
      outOperand5 = p->mObject.mProperty_mRoutineNameForGeneration ;
      outOperand6 = p->mObject.mProperty_mEndOfProcLocation ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externProcedureDeclarationListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                GALGAS_mode & outOperand1,
                                                                GALGAS_lstringlist & outOperand2,
                                                                GALGAS_routineFormalArgumentListAST & outOperand3,
                                                                GALGAS_lstring & outOperand4,
                                                                GALGAS_lstring & outOperand5,
                                                                GALGAS_location & outOperand6,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externProcedureDeclarationListAST * p = (cCollectionElement_externProcedureDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mExternProcedureName ;
    outOperand1 = p->mObject.mProperty_mMode ;
    outOperand2 = p->mObject.mProperty_mAttributeList ;
    outOperand3 = p->mObject.mProperty_mProcFormalArgumentList ;
    outOperand4 = p->mObject.mProperty_mReturnTypeName ;
    outOperand5 = p->mObject.mProperty_mRoutineNameForGeneration ;
    outOperand6 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externProcedureDeclarationListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                               GALGAS_mode & outOperand1,
                                                               GALGAS_lstringlist & outOperand2,
                                                               GALGAS_routineFormalArgumentListAST & outOperand3,
                                                               GALGAS_lstring & outOperand4,
                                                               GALGAS_lstring & outOperand5,
                                                               GALGAS_location & outOperand6,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externProcedureDeclarationListAST * p = (cCollectionElement_externProcedureDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mExternProcedureName ;
    outOperand1 = p->mObject.mProperty_mMode ;
    outOperand2 = p->mObject.mProperty_mAttributeList ;
    outOperand3 = p->mObject.mProperty_mProcFormalArgumentList ;
    outOperand4 = p->mObject.mProperty_mReturnTypeName ;
    outOperand5 = p->mObject.mProperty_mRoutineNameForGeneration ;
    outOperand6 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externProcedureDeclarationListAST::method_first (GALGAS_lstring & outOperand0,
                                                             GALGAS_mode & outOperand1,
                                                             GALGAS_lstringlist & outOperand2,
                                                             GALGAS_routineFormalArgumentListAST & outOperand3,
                                                             GALGAS_lstring & outOperand4,
                                                             GALGAS_lstring & outOperand5,
                                                             GALGAS_location & outOperand6,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externProcedureDeclarationListAST * p = (cCollectionElement_externProcedureDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mExternProcedureName ;
    outOperand1 = p->mObject.mProperty_mMode ;
    outOperand2 = p->mObject.mProperty_mAttributeList ;
    outOperand3 = p->mObject.mProperty_mProcFormalArgumentList ;
    outOperand4 = p->mObject.mProperty_mReturnTypeName ;
    outOperand5 = p->mObject.mProperty_mRoutineNameForGeneration ;
    outOperand6 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externProcedureDeclarationListAST::method_last (GALGAS_lstring & outOperand0,
                                                            GALGAS_mode & outOperand1,
                                                            GALGAS_lstringlist & outOperand2,
                                                            GALGAS_routineFormalArgumentListAST & outOperand3,
                                                            GALGAS_lstring & outOperand4,
                                                            GALGAS_lstring & outOperand5,
                                                            GALGAS_location & outOperand6,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externProcedureDeclarationListAST * p = (cCollectionElement_externProcedureDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mExternProcedureName ;
    outOperand1 = p->mObject.mProperty_mMode ;
    outOperand2 = p->mObject.mProperty_mAttributeList ;
    outOperand3 = p->mObject.mProperty_mProcFormalArgumentList ;
    outOperand4 = p->mObject.mProperty_mReturnTypeName ;
    outOperand5 = p->mObject.mProperty_mRoutineNameForGeneration ;
    outOperand6 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externProcedureDeclarationListAST GALGAS_externProcedureDeclarationListAST::add_operation (const GALGAS_externProcedureDeclarationListAST & inOperand,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_externProcedureDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externProcedureDeclarationListAST GALGAS_externProcedureDeclarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_externProcedureDeclarationListAST result = GALGAS_externProcedureDeclarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externProcedureDeclarationListAST GALGAS_externProcedureDeclarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_externProcedureDeclarationListAST result = GALGAS_externProcedureDeclarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externProcedureDeclarationListAST GALGAS_externProcedureDeclarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_externProcedureDeclarationListAST result = GALGAS_externProcedureDeclarationListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externProcedureDeclarationListAST::plusAssign_operation (const GALGAS_externProcedureDeclarationListAST inOperand,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_externProcedureDeclarationListAST::getter_mExternProcedureNameAtIndex (const GALGAS_uint & inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externProcedureDeclarationListAST * p = (cCollectionElement_externProcedureDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
    result = p->mObject.mProperty_mExternProcedureName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mode GALGAS_externProcedureDeclarationListAST::getter_mModeAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externProcedureDeclarationListAST * p = (cCollectionElement_externProcedureDeclarationListAST *) attributes.ptr () ;
  GALGAS_mode result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
    result = p->mObject.mProperty_mMode ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_externProcedureDeclarationListAST::getter_mAttributeListAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externProcedureDeclarationListAST * p = (cCollectionElement_externProcedureDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
    result = p->mObject.mProperty_mAttributeList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListAST GALGAS_externProcedureDeclarationListAST::getter_mProcFormalArgumentListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                     C_Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externProcedureDeclarationListAST * p = (cCollectionElement_externProcedureDeclarationListAST *) attributes.ptr () ;
  GALGAS_routineFormalArgumentListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
    result = p->mObject.mProperty_mProcFormalArgumentList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_externProcedureDeclarationListAST::getter_mReturnTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externProcedureDeclarationListAST * p = (cCollectionElement_externProcedureDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
    result = p->mObject.mProperty_mReturnTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_externProcedureDeclarationListAST::getter_mRoutineNameForGenerationAtIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externProcedureDeclarationListAST * p = (cCollectionElement_externProcedureDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
    result = p->mObject.mProperty_mRoutineNameForGeneration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_externProcedureDeclarationListAST::getter_mEndOfProcLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externProcedureDeclarationListAST * p = (cCollectionElement_externProcedureDeclarationListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
    result = p->mObject.mProperty_mEndOfProcLocation ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_externProcedureDeclarationListAST::cEnumerator_externProcedureDeclarationListAST (const GALGAS_externProcedureDeclarationListAST & inEnumeratedObject,
                                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externProcedureDeclarationListAST_2D_element cEnumerator_externProcedureDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_externProcedureDeclarationListAST * p = (const cCollectionElement_externProcedureDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_externProcedureDeclarationListAST::current_mExternProcedureName (LOCATION_ARGS) const {
  const cCollectionElement_externProcedureDeclarationListAST * p = (const cCollectionElement_externProcedureDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
  return p->mObject.mProperty_mExternProcedureName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mode cEnumerator_externProcedureDeclarationListAST::current_mMode (LOCATION_ARGS) const {
  const cCollectionElement_externProcedureDeclarationListAST * p = (const cCollectionElement_externProcedureDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
  return p->mObject.mProperty_mMode ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cEnumerator_externProcedureDeclarationListAST::current_mAttributeList (LOCATION_ARGS) const {
  const cCollectionElement_externProcedureDeclarationListAST * p = (const cCollectionElement_externProcedureDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
  return p->mObject.mProperty_mAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListAST cEnumerator_externProcedureDeclarationListAST::current_mProcFormalArgumentList (LOCATION_ARGS) const {
  const cCollectionElement_externProcedureDeclarationListAST * p = (const cCollectionElement_externProcedureDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
  return p->mObject.mProperty_mProcFormalArgumentList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_externProcedureDeclarationListAST::current_mReturnTypeName (LOCATION_ARGS) const {
  const cCollectionElement_externProcedureDeclarationListAST * p = (const cCollectionElement_externProcedureDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
  return p->mObject.mProperty_mReturnTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_externProcedureDeclarationListAST::current_mRoutineNameForGeneration (LOCATION_ARGS) const {
  const cCollectionElement_externProcedureDeclarationListAST * p = (const cCollectionElement_externProcedureDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
  return p->mObject.mProperty_mRoutineNameForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cEnumerator_externProcedureDeclarationListAST::current_mEndOfProcLocation (LOCATION_ARGS) const {
  const cCollectionElement_externProcedureDeclarationListAST * p = (const cCollectionElement_externProcedureDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
  return p->mObject.mProperty_mEndOfProcLocation ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @externProcedureDeclarationListAST type                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externProcedureDeclarationListAST ("externProcedureDeclarationListAST",
                                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_externProcedureDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externProcedureDeclarationListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_externProcedureDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externProcedureDeclarationListAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externProcedureDeclarationListAST GALGAS_externProcedureDeclarationListAST::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_externProcedureDeclarationListAST result ;
  const GALGAS_externProcedureDeclarationListAST * p = (const GALGAS_externProcedureDeclarationListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externProcedureDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externProcedureDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Extension method '@externProcedureDeclarationListAST noteTypesInPrecedenceGraph'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_noteTypesInPrecedenceGraph (const GALGAS_externProcedureDeclarationListAST inObject,
                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_externProcedureDeclarationListAST temp_0 = inObject ;
  cEnumerator_externProcedureDeclarationListAST enumerator_2298 (temp_0, kENUMERATION_UP) ;
  while (enumerator_2298.hasCurrentObject ()) {
    cEnumerator_routineFormalArgumentListAST enumerator_2367 (enumerator_2298.current_mProcFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_2367.hasCurrentObject ()) {
      {
      ioArgument_ioGraph.setter_noteNode (enumerator_2367.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 54)) ;
      }
      enumerator_2367.gotoNextObject () ;
    }
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_2298.current_mReturnTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      ioArgument_ioGraph.setter_noteNode (enumerator_2298.current_mReturnTypeName (HERE) COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 57)) ;
      }
    }
    enumerator_2298.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Extension method '@externProcedureDeclarationListAST enterExternProcInContext'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_enterExternProcInContext (const GALGAS_externProcedureDeclarationListAST inObject,
                                               GALGAS_semanticContext & ioArgument_ioContext,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_externProcedureDeclarationListAST temp_0 = inObject ;
  cEnumerator_externProcedureDeclarationListAST enumerator_3033 (temp_0, kENUMERATION_UP) ;
  while (enumerator_3033.hasCurrentObject ()) {
    extensionMethod_enterExternProcInContext (enumerator_3033.current (HERE), ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 70)) ;
    enumerator_3033.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Extension method '@externProcedureDeclarationListAST externProcedureSemanticAnalysis'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_externProcedureSemanticAnalysis (const GALGAS_externProcedureDeclarationListAST inObject,
                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                      GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_externProcedureDeclarationListAST temp_0 = inObject ;
  cEnumerator_externProcedureDeclarationListAST enumerator_4833 (temp_0, kENUMERATION_UP) ;
  while (enumerator_4833.hasCurrentObject ()) {
    extensionMethod_externProcedureSemanticAnalysis (enumerator_4833.current (HERE), constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 116)) ;
    enumerator_4833.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_externProcedureMapIR::cMapElement_externProcedureMapIR (const GALGAS_lstring & inKey,
                                                                    const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mReturnType
                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mFormalArgumentListForGeneration (in_mFormalArgumentListForGeneration),
mProperty_mReturnType (in_mReturnType) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_externProcedureMapIR::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mFormalArgumentListForGeneration.isValid () && mProperty_mReturnType.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_externProcedureMapIR::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_externProcedureMapIR (mProperty_lkey, mProperty_mFormalArgumentListForGeneration, mProperty_mReturnType COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_externProcedureMapIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentListForGeneration" ":" ;
  mProperty_mFormalArgumentListForGeneration.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReturnType" ":" ;
  mProperty_mReturnType.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_externProcedureMapIR::compare (const cCollectionElement * inOperand) const {
  cMapElement_externProcedureMapIR * operand = (cMapElement_externProcedureMapIR *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mFormalArgumentListForGeneration.objectCompare (operand->mProperty_mFormalArgumentListForGeneration) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReturnType.objectCompare (operand->mProperty_mReturnType) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externProcedureMapIR::GALGAS_externProcedureMapIR (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externProcedureMapIR::GALGAS_externProcedureMapIR (const GALGAS_externProcedureMapIR & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externProcedureMapIR & GALGAS_externProcedureMapIR::operator = (const GALGAS_externProcedureMapIR & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externProcedureMapIR GALGAS_externProcedureMapIR::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_externProcedureMapIR result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externProcedureMapIR GALGAS_externProcedureMapIR::constructor_mapWithMapToOverride (const GALGAS_externProcedureMapIR & inMapToOverride
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_externProcedureMapIR result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externProcedureMapIR GALGAS_externProcedureMapIR::getter_overriddenMap (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_externProcedureMapIR result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externProcedureMapIR::addAssign_operation (const GALGAS_lstring & inKey,
                                                       const GALGAS_routineFormalArgumentListIR & inArgument0,
                                                       const GALGAS_unifiedTypeMap_2D_proxy & inArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_externProcedureMapIR * p = NULL ;
  macroMyNew (p, cMapElement_externProcedureMapIR (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@externProcedureMapIR insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externProcedureMapIR::setter_insertKey (GALGAS_lstring inKey,
                                                    GALGAS_routineFormalArgumentListIR inArgument0,
                                                    GALGAS_unifiedTypeMap_2D_proxy inArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_externProcedureMapIR * p = NULL ;
  macroMyNew (p, cMapElement_externProcedureMapIR (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "extern procedure %K is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListIR GALGAS_externProcedureMapIR::getter_mFormalArgumentListForGenerationForKey (const GALGAS_string & inKey,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_externProcedureMapIR * p = (const cMapElement_externProcedureMapIR *) attributes ;
  GALGAS_routineFormalArgumentListIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_externProcedureMapIR) ;
    result = p->mProperty_mFormalArgumentListForGeneration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_externProcedureMapIR::getter_mReturnTypeForKey (const GALGAS_string & inKey,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_externProcedureMapIR * p = (const cMapElement_externProcedureMapIR *) attributes ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_externProcedureMapIR) ;
    result = p->mProperty_mReturnType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externProcedureMapIR::setter_setMFormalArgumentListForGenerationForKey (GALGAS_routineFormalArgumentListIR inAttributeValue,
                                                                                    GALGAS_string inKey,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_externProcedureMapIR * p = (cMapElement_externProcedureMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_externProcedureMapIR) ;
    p->mProperty_mFormalArgumentListForGeneration = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externProcedureMapIR::setter_setMReturnTypeForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_externProcedureMapIR * p = (cMapElement_externProcedureMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_externProcedureMapIR) ;
    p->mProperty_mReturnType = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_externProcedureMapIR * GALGAS_externProcedureMapIR::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                   const GALGAS_string & inKey
                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_externProcedureMapIR * result = (cMapElement_externProcedureMapIR *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_externProcedureMapIR) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_externProcedureMapIR::cEnumerator_externProcedureMapIR (const GALGAS_externProcedureMapIR & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externProcedureMapIR_2D_element cEnumerator_externProcedureMapIR::current (LOCATION_ARGS) const {
  const cMapElement_externProcedureMapIR * p = (const cMapElement_externProcedureMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_externProcedureMapIR) ;
  return GALGAS_externProcedureMapIR_2D_element (p->mProperty_lkey, p->mProperty_mFormalArgumentListForGeneration, p->mProperty_mReturnType) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_externProcedureMapIR::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListIR cEnumerator_externProcedureMapIR::current_mFormalArgumentListForGeneration (LOCATION_ARGS) const {
  const cMapElement_externProcedureMapIR * p = (const cMapElement_externProcedureMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_externProcedureMapIR) ;
  return p->mProperty_mFormalArgumentListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_externProcedureMapIR::current_mReturnType (LOCATION_ARGS) const {
  const cMapElement_externProcedureMapIR * p = (const cMapElement_externProcedureMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_externProcedureMapIR) ;
  return p->mProperty_mReturnType ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @externProcedureMapIR type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externProcedureMapIR ("externProcedureMapIR",
                                             NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_externProcedureMapIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externProcedureMapIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_externProcedureMapIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externProcedureMapIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externProcedureMapIR GALGAS_externProcedureMapIR::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_externProcedureMapIR result ;
  const GALGAS_externProcedureMapIR * p = (const GALGAS_externProcedureMapIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externProcedureMapIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externProcedureMapIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Class for element of '@routineFormalArgumentListIR' list                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_routineFormalArgumentListIR : public cCollectionElement {
  public : GALGAS_routineFormalArgumentListIR_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_routineFormalArgumentListIR (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentKind,
                                                           const GALGAS_PLMType & in_mFormalArgumentType,
                                                           const GALGAS_string & in_mFormalArgumentName
                                                           COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_routineFormalArgumentListIR (const GALGAS_routineFormalArgumentListIR_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_routineFormalArgumentListIR::cCollectionElement_routineFormalArgumentListIR (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentKind,
                                                                                                const GALGAS_PLMType & in_mFormalArgumentType,
                                                                                                const GALGAS_string & in_mFormalArgumentName
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalArgumentKind, in_mFormalArgumentType, in_mFormalArgumentName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_routineFormalArgumentListIR::cCollectionElement_routineFormalArgumentListIR (const GALGAS_routineFormalArgumentListIR_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFormalArgumentKind, inElement.mProperty_mFormalArgumentType, inElement.mProperty_mFormalArgumentName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_routineFormalArgumentListIR::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_routineFormalArgumentListIR::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_routineFormalArgumentListIR (mObject.mProperty_mFormalArgumentKind, mObject.mProperty_mFormalArgumentType, mObject.mProperty_mFormalArgumentName COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_routineFormalArgumentListIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentKind" ":" ;
  mObject.mProperty_mFormalArgumentKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentType" ":" ;
  mObject.mProperty_mFormalArgumentType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentName" ":" ;
  mObject.mProperty_mFormalArgumentName.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_routineFormalArgumentListIR::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_routineFormalArgumentListIR * operand = (cCollectionElement_routineFormalArgumentListIR *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_routineFormalArgumentListIR) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListIR::GALGAS_routineFormalArgumentListIR (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListIR::GALGAS_routineFormalArgumentListIR (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListIR GALGAS_routineFormalArgumentListIR::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineFormalArgumentListIR  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListIR GALGAS_routineFormalArgumentListIR::constructor_listWithValue (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                                  const GALGAS_PLMType & inOperand1,
                                                                                                  const GALGAS_string & inOperand2
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_routineFormalArgumentListIR result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_routineFormalArgumentListIR (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_routineFormalArgumentListIR::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineFormalArgumentListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentKind,
                                                                    const GALGAS_PLMType & in_mFormalArgumentType,
                                                                    const GALGAS_string & in_mFormalArgumentName
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_routineFormalArgumentListIR * p = NULL ;
  macroMyNew (p, cCollectionElement_routineFormalArgumentListIR (in_mFormalArgumentKind,
                                                                 in_mFormalArgumentType,
                                                                 in_mFormalArgumentName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineFormalArgumentListIR::addAssign_operation (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                              const GALGAS_PLMType & inOperand1,
                                                              const GALGAS_string & inOperand2
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_routineFormalArgumentListIR (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineFormalArgumentListIR::setter_append (GALGAS_routineFormalArgumentListIR_2D_element inElement,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_routineFormalArgumentListIR (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineFormalArgumentListIR::setter_insertAtIndex (const GALGAS_procFormalArgumentPassingMode inOperand0,
                                                               const GALGAS_PLMType inOperand1,
                                                               const GALGAS_string inOperand2,
                                                               const GALGAS_uint inInsertionIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_routineFormalArgumentListIR (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineFormalArgumentListIR::setter_removeAtIndex (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                               GALGAS_PLMType & outOperand1,
                                                               GALGAS_string & outOperand2,
                                                               const GALGAS_uint inRemoveIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_routineFormalArgumentListIR * p = (cCollectionElement_routineFormalArgumentListIR *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
      outOperand0 = p->mObject.mProperty_mFormalArgumentKind ;
      outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
      outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineFormalArgumentListIR::setter_popFirst (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                          GALGAS_PLMType & outOperand1,
                                                          GALGAS_string & outOperand2,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListIR * p = (cCollectionElement_routineFormalArgumentListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentKind ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineFormalArgumentListIR::setter_popLast (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                         GALGAS_PLMType & outOperand1,
                                                         GALGAS_string & outOperand2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListIR * p = (cCollectionElement_routineFormalArgumentListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentKind ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineFormalArgumentListIR::method_first (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                       GALGAS_PLMType & outOperand1,
                                                       GALGAS_string & outOperand2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListIR * p = (cCollectionElement_routineFormalArgumentListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentKind ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineFormalArgumentListIR::method_last (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                      GALGAS_PLMType & outOperand1,
                                                      GALGAS_string & outOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListIR * p = (cCollectionElement_routineFormalArgumentListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentKind ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListIR GALGAS_routineFormalArgumentListIR::add_operation (const GALGAS_routineFormalArgumentListIR & inOperand,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_routineFormalArgumentListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListIR GALGAS_routineFormalArgumentListIR::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_routineFormalArgumentListIR result = GALGAS_routineFormalArgumentListIR::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListIR GALGAS_routineFormalArgumentListIR::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_routineFormalArgumentListIR result = GALGAS_routineFormalArgumentListIR::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListIR GALGAS_routineFormalArgumentListIR::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_routineFormalArgumentListIR result = GALGAS_routineFormalArgumentListIR::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineFormalArgumentListIR::plusAssign_operation (const GALGAS_routineFormalArgumentListIR inOperand,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procFormalArgumentPassingMode GALGAS_routineFormalArgumentListIR::getter_mFormalArgumentKindAtIndex (const GALGAS_uint & inIndex,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListIR * p = (cCollectionElement_routineFormalArgumentListIR *) attributes.ptr () ;
  GALGAS_procFormalArgumentPassingMode result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
    result = p->mObject.mProperty_mFormalArgumentKind ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_routineFormalArgumentListIR::getter_mFormalArgumentTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListIR * p = (cCollectionElement_routineFormalArgumentListIR *) attributes.ptr () ;
  GALGAS_PLMType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
    result = p->mObject.mProperty_mFormalArgumentType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_routineFormalArgumentListIR::getter_mFormalArgumentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListIR * p = (cCollectionElement_routineFormalArgumentListIR *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
    result = p->mObject.mProperty_mFormalArgumentName ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_routineFormalArgumentListIR::cEnumerator_routineFormalArgumentListIR (const GALGAS_routineFormalArgumentListIR & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListIR_2D_element cEnumerator_routineFormalArgumentListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListIR * p = (const cCollectionElement_routineFormalArgumentListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procFormalArgumentPassingMode cEnumerator_routineFormalArgumentListIR::current_mFormalArgumentKind (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListIR * p = (const cCollectionElement_routineFormalArgumentListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
  return p->mObject.mProperty_mFormalArgumentKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType cEnumerator_routineFormalArgumentListIR::current_mFormalArgumentType (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListIR * p = (const cCollectionElement_routineFormalArgumentListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
  return p->mObject.mProperty_mFormalArgumentType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_routineFormalArgumentListIR::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListIR * p = (const cCollectionElement_routineFormalArgumentListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
  return p->mObject.mProperty_mFormalArgumentName ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @routineFormalArgumentListIR type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineFormalArgumentListIR ("routineFormalArgumentListIR",
                                                    NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_routineFormalArgumentListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineFormalArgumentListIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_routineFormalArgumentListIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineFormalArgumentListIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListIR GALGAS_routineFormalArgumentListIR::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_routineFormalArgumentListIR result ;
  const GALGAS_routineFormalArgumentListIR * p = (const GALGAS_routineFormalArgumentListIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineFormalArgumentListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineFormalArgumentListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

