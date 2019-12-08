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

struct Register : Codable, Equatable {

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

  enum CodingKeys: String, CodingKey {
    case name = "name"
    case description = "description"
    case bitOffset = "bitOffset"
    case bitWidth = "bitWidth"
  }

  static func == (lhs: Field, rhs: Field) -> Bool {
    return (lhs.name == rhs.name)
        && (lhs.description == rhs.description)
        && (lhs.bitOffset == rhs.bitOffset)
        && (lhs.bitWidth == rhs.bitWidth)

  }
}

//------------------------------------------------------------------------------

