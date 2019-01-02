//
//  main.swift
//  didset-sample-code
//
//  Created by Pierre Molinaro on 02/01/2019.
//  Copyright © 2019 Pierre Molinaro. All rights reserved.
//
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

import Foundation

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

struct First {
  var x = 99 {
    didSet {
      Swift.print ("Set First.x \(self.x)")
    }
  }

  var a = 7 {
    didSet {
      Swift.print ("Set First.a \(self.a)")
    }
  }

}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

struct Second {
  var b = First () {
    didSet {
      Swift.print ("Set Second.b \(self.b)")
    }
  }
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

var s = Second ()
s.b.a = 8
