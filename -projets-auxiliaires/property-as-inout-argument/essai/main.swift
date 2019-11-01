//
//  main.swift
//  essai
//
//  Created by Pierre Molinaro on 30/10/2019.
//  Copyright © 2019 Pierre Molinaro. All rights reserved.
//

import Foundation

func maFonction (_ ioValue : inout Int, _ inObject : MaClasse) {
  print("1-AVANT \(inObject.c)")
  ioValue += 1
  print("1-APRÈS \(inObject.c)")
}

class MaClasse {
  var a = 0
  var c = 0
  var b : Int { get { self.a } set { self.c = newValue } }

  func f (_ ioValue : inout Int) {
    print("2-AVANT \(self.c)")
    ioValue += 1
    print("2-APRÈS \(self.c)")
  }
}

var x = MaClasse ()
maFonction (&x.b, x)
print("1-FINAL \(x.c)")
x.a = 17
x.f (&x.b)
print("2-FINAL \(x.c)")

