//
//  main.swift
//  computed-property-sample-code
//
//  Created by Pierre Molinaro on 01/01/2019.
//  Copyright © 2019 Pierre Molinaro. All rights reserved.
//
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

import Foundation

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

struct First {

  private var a = 7

  var premièrePropriétéCalculée : Int {
    get {
      Swift.print ("Lecture première propriété calculée \(self.a)")
      return self.a
    }
    set (value) {
      Swift.print ("Écriture première propriété calculée \(value)")
      self.a = value
    }
  }
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

struct Second {
  private var b = First ()

  var secondePropriétéCalculée : First {
    get {
      Swift.print ("Lecture seconde propriété calculée \(self.b)")
      return self.b
    }
    set (value) {
      Swift.print ("Écriture seconde propriété calculée \(value)")
      self.b = value
    }
  }
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

var s = Second ()
s.secondePropriétéCalculée.premièrePropriétéCalculée = 8

