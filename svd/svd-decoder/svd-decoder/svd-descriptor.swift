//
//  svd-descriptor.swift
//  svd-decoder
//
//  Created by Pierre Molinaro on 07/12/2019.
//  Copyright © 2019 Pierre Molinaro. All rights reserved.
//
//------------------------------------------------------------------------------

import Foundation

//------------------------------------------------------------------------------

struct Device : Codable {
  var name : String
  var version : String
  var description : String
  var peripherals : Peripherals

  enum CodingKeys: String, CodingKey {
    case name = "name"
    case version = "version"
    case description = "description"
    case peripherals = "peripherals"
  }
}

//------------------------------------------------------------------------------

struct Peripherals : Codable {
  var peripheral: [Peripheral]

  enum CodingKeys: String, CodingKey {
    case peripheral = "peripheral"
  }
}

//------------------------------------------------------------------------------

class Peripheral : Codable {
  var derivedFrom : String?
  var name : String
  var description : String?
  var groupName : String?
  var prependToName : String?
  var baseAddress : UInt32
  var registers : Registers?
  var interrupt : [Interrupt]?

  enum CodingKeys: String, CodingKey {
    case derivedFrom = "derivedFrom"
    case name = "name"
    case description = "description"
    case groupName = "groupName"
    case baseAddress = "baseAddress"
    case registers = "registers"
    case interrupt = "interrupt"
    case prependToName = "prependToName"
  }
}

//------------------------------------------------------------------------------

struct Registers : Codable {
  var register: [Register]

  enum CodingKeys: String, CodingKey {
    case register = "register"
  }

}

//------------------------------------------------------------------------------

struct Interrupt : Codable {
  var name: String
  var value: UInt

  enum CodingKeys: String, CodingKey {
    case name = "name"
    case value = "value"
  }
}

//------------------------------------------------------------------------------

class Register : Codable, Equatable {

  static func == (lhs: Register, rhs: Register) -> Bool {
    return (lhs.name == rhs.name)
        && (lhs.description == rhs.description)
        && (lhs.addressOffset == rhs.addressOffset)
        && (lhs.size == rhs.size)
        && (lhs.access == rhs.access)
        && (lhs.fields == rhs.fields)
        && (lhs.dim == rhs.dim)
        && (lhs.dimIncrement == rhs.dimIncrement)
        && (lhs.dimIndex == rhs.dimIndex)
  }

  var name : String
  var description : String
  var addressOffset : UInt
  var size : UInt
  var access : String?
  var fields : Fields?
  var dim : Int?
  var dimIncrement : Int?
  var dimIndex : String?

  enum CodingKeys: String, CodingKey {
    case name = "name"
    case description = "description"
    case addressOffset = "addressOffset"
    case size = "size"
    case access = "access"
    case fields = "fields"
    case dim = "dim"
    case dimIncrement = "dimIncrement"
    case dimIndex = "dimIndex"
  }

  func printIncompatibility (with inTestedRegister : Register) {
    if self.name != inTestedRegister.name {
      print ("        Name error: \(self.name) :: \(inTestedRegister.name)")
    }
    if self.description != inTestedRegister.description {
      print ("        Description error: \(self.description) :: \(inTestedRegister.description)")
    }
    if self.addressOffset != inTestedRegister.addressOffset {
      print ("        Address offset error: \(self.addressOffset) :: \(inTestedRegister.addressOffset)")
    }
    if self.size != inTestedRegister.size {
      print ("        Size error: \(self.size) :: \(inTestedRegister.size)")
    }
    if self.access != inTestedRegister.access {
      print ("        Access error: \(String(describing: self.access)) :: \(String(describing: inTestedRegister.access))")
    }
    if self.dim != inTestedRegister.dim {
      print ("        Dim error: \(String(describing: self.dim)) :: \(String(describing: inTestedRegister.dim))")
    }
    if self.dimIncrement != inTestedRegister.dimIncrement {
      print ("        Dim increment error: \(String(describing: self.dimIncrement)) :: \(String(describing: inTestedRegister.dimIncrement))")
    }
    if self.dimIndex != inTestedRegister.dimIndex {
      print ("        Dim index error: \(String(describing: self.dimIndex)) :: \(String(describing: inTestedRegister.dimIndex))")
    }
    if self.fields != inTestedRegister.fields {
      print ("        Fields error: \(String(describing: self.fields)) :: \(String(describing: inTestedRegister.fields))")
    }
  }

}

//------------------------------------------------------------------------------

struct Fields : Codable, Equatable {
  var field : [Field]

  enum CodingKeys: String, CodingKey {
    case field = "field"
  }
}

//------------------------------------------------------------------------------

class Field : Codable, Equatable {
  var name : String
  var description : String
  var bitOffset : UInt
  var bitWidth : UInt
  var enumeratedValues : EnumeratedValues?

  enum CodingKeys: String, CodingKey {
    case name = "name"
    case description = "description"
    case bitOffset = "bitOffset"
    case bitWidth = "bitWidth"
    case enumeratedValues = "enumeratedValues"
  }

  static func == (lhs: Field, rhs: Field) -> Bool {
    return (lhs.name == rhs.name)
        && (lhs.description == rhs.description)
        && (lhs.bitOffset == rhs.bitOffset)
        && (lhs.bitWidth == rhs.bitWidth)

  }
}

//------------------------------------------------------------------------------

struct EnumeratedValues : Codable, Equatable {
  var enumeratedValue : [EnumeratedValue]

  enum CodingKeys: String, CodingKey {
    case enumeratedValue = "enumeratedValue"
  }
}

//------------------------------------------------------------------------------

struct EnumeratedValue : Codable, Equatable {
  let name : String
  let description : String
  let value : UInt32

  enum CodingKeys : String, CodingKey {
    case name = "name"
    case description = "description"
    case value = "value"
  }
}

//------------------------------------------------------------------------------

