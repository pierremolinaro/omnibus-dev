//
//  main.swift
//  computed-property-analysis
//
//  Created by Pierre Molinaro on 24/02/2019.
//  Copyright © 2019 Pierre Molinaro. All rights reserved.
//
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

import Foundation

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

enum ExpressionElement {
  case storedProperty (String)
  case computedProperty (String)
  case indexedProperty (Int)
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

func analysis (_ inExpression : [ExpressionElement]) {
  let sourceExpression = "sourceExp"
  var receiver = "receiver"
  var pendingInstructions = [String] ()
  var idx = 0
  for expression in inExpression {
    switch expression {
    case .storedProperty (let propertyName) :
      let newReceiver = "%\(idx)" ; idx += 1
      Swift.print (" \(newReceiver) = storedPropertyAccess \(receiver), \(propertyName)")
      receiver = newReceiver
    case .computedProperty (let propertyName) :
      let newReceiver = "%\(idx)" ; idx += 1
      Swift.print (" \(newReceiver) = readComputedProperty \(receiver), \(propertyName)")
      pendingInstructions.insert ("store \(newReceiver) intoComputedProperty \(receiver), \(propertyName)", at:0)
      receiver = newReceiver
    case .indexedProperty (let index) :
      let newReceiver = "%\(idx)" ; idx += 1
      Swift.print (" \(newReceiver) = indexedPropertyAccess \(receiver), \(index)")
      receiver = newReceiver
    }
  }
//--- Assignment
  Swift.print (" store \(sourceExpression), \(receiver)")
  for instruction in pendingInstructions {
    Swift.print (" \(instruction)")
  }
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//let expression : [ExpressionElement] = [.storedProperty ("a"), .computedProperty ("b"), .computedProperty ("c"), .indexedProperty (5)]
let expression : [ExpressionElement] = [.computedProperty ("c")]

analysis (expression)

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
