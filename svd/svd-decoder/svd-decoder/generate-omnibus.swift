//
//  generate-omnibus.swift
//  svd-decoder
//
//  Created by Pierre Molinaro on 12/12/2019.
//  Copyright © 2019 Pierre Molinaro. All rights reserved.
//
//------------------------------------------------------------------------------

import Foundation

//------------------------------------------------------------------------------

fileprivate let separator = "//" + String (repeating: "-", count: 78) + "\n"

//------------------------------------------------------------------------------

func generateOmnibus (device inDevice : Device, baseURL inBaseURL : URL) {
  var s = separator
  s += "// " + inDevice.name + ": " + inDevice.description + "\n"
  s += separator + "\n"
  var groupDictionary = [String : [Peripheral]] ()
  var generationDict = [String : String] ()
  for peripheral in inDevice.peripherals.peripheral {
    // print ("  \(peripheral.name) -> 0x\(String (peripheral.baseAddress, radix: 16))")
    if let groupName = peripheral.groupName, peripheral.prependToName != nil {
      groupDictionary [groupName] = (groupDictionary [groupName] ?? []) + [peripheral]
    }else{
      generatePeripheral (peripheral, &generationDict)
    }
  }
  //----
  for (groupName, peripheralArray) in groupDictionary {
    generationDict [groupName] = generateGroup (groupName, peripheralArray)
  }
  for name in generationDict.keys.sorted () {
    s += generationDict [name]!
  }
//---
  try! s.write(to: inBaseURL.appendingPathExtension ("omnibus-import"), atomically: true, encoding: .utf8)
}

//------------------------------------------------------------------------------

fileprivate func generatePeripheral (_ inPeripheral : Peripheral,
                                     _ ioGenerationDict : inout [String : String]) {
  var s = separator
  s += "// Peripheral " + inPeripheral.name
  if let d = inPeripheral.description {
    s += ": " + d.replacingOccurrences(of: "\n", with: " ")
  }
  s += "\n"
  s += separator + "\n"

  s += "registers ©\(inPeripheral.name) @at 0x\(String (inPeripheral.baseAddress, radix: 16)) {\n"
  for register in inPeripheral.registers?.register ?? [] {
    let registerBaseName : String = register.name.replacingOccurrences (of: "%s", with: "")
    if let dimension = register.dim {
      s += "//---  Registers \(registerBaseName)(\(register.dimIndex!)): \(register.description)\n"
      s += "  \(registerBaseName) [\(dimension)"
      s += " @offset 0x\(String (register.addressOffset, radix: 16))"
      s += " @inc 0x\(String (register.dimIncrement!, radix: 16))"
      s += "]"
      let suffixArray = register.dimIndex!.components (separatedBy: ",")
      for dim in 0 ..< dimension {
        let address = register.addressOffset + UInt (dim * register.dimIncrement!)
        let registerName = register.name.replacingOccurrences (of: "%s", with: suffixArray [dim])
        s += "\n  \(registerName) @offset 0x\(String (address, radix: 16))"
      }
    }else{
      s += "//---  Register " + register.name + ": " + register.description.replacingOccurrences(of: "\n", with: " ") + "\n"
      s += "  \(register.name) @offset 0x\(String (register.addressOffset, radix: 16))"
    }
    if let access = register.access, access == "read-only" {
      s += " @ro"
    }
    s += " $u\(register.size)"
    let fields = register.fields?.field ?? []
    if fields.count > 0 {
      s += " {\n"
      var bitFieldDictionary = [UInt : (UInt, String, String)] ()
      for field in fields {
        if field.name != "RESERVED" {
          bitFieldDictionary [field.bitOffset] = (field.bitWidth, field.name, field.description)
        }
      }
      var fieldOffset = register.size
      for offset in bitFieldDictionary.keys.sorted ().reversed () {
        let (bitWidth, name, description) = bitFieldDictionary [offset]!
        let unusedBitCount = fieldOffset - offset - bitWidth
        if unusedBitCount > 0 {
          s += "    \(unusedBitCount)\n"
        }
        let w = (bitWidth == 1) ? "" : ":\(bitWidth)"
        s += "    \(name)\(w) // at \(offset): \(description)\n"
        fieldOffset -= unusedBitCount + bitWidth
      }
      if fieldOffset > 0 {
        s += "    \(fieldOffset)\n"
      }
      s += "  }\n"
    }
    s += "\n"
  }
  s += "}\n\n"
  ioGenerationDict [inPeripheral.name] = s
}

//------------------------------------------------------------------------------

fileprivate func generateGroup (_ inGroupName : String, _ inPeripheralArray : [Peripheral]) -> String {
  var s = ""
  s += separator
  s += "// PERIPHERAL GROUP: ©\(inGroupName) [\(inPeripheralArray.count)]\n"
  for peripheral in inPeripheralArray {
   s += "//        \(peripheral.name) at 0x\(String (peripheral.baseAddress, radix: 16))\n"
  }
  s += separator + "\n"
  s += "registers ©\(inGroupName) [\(inPeripheralArray.count) @at"
  for peripheral in inPeripheralArray {
   s += " 0x\(String (peripheral.baseAddress, radix: 16))"
  }
  s += "]"
  for peripheral in inPeripheralArray {
    s += "\n          ©\(peripheral.name) @at 0x\(String (peripheral.baseAddress, radix: 16))"
  }
  s += " {\n"
//--- Check peripheral registers are identical
  let referenceRegisterArray = inPeripheralArray.first!.registers?.register ?? []
  for peripheral in inPeripheralArray {
    let testedRegisterArray = peripheral.registers?.register ?? []
    if referenceRegisterArray.count != testedRegisterArray.count {
      print ("  *** Error for group \(inGroupName) ***")
      print ("      Peripheral \(inPeripheralArray.first!.name) has \(referenceRegisterArray.count) registers")
      print ("      Peripheral \(peripheral.name) has \(testedRegisterArray.count) registers")
      var referenceRegisterNameSet = Set <String> ()
      for register in referenceRegisterArray {
        referenceRegisterNameSet.insert (register.name)
      }
      var testedRegisterNameSet = Set <String> ()
      for register in testedRegisterArray {
        testedRegisterNameSet.insert (register.name)
      }
      var s = "        Peripheral \(peripheral.name) does not define:"
      for name in referenceRegisterNameSet.subtracting (testedRegisterNameSet) {
        s += " " + name
      }
      print (s)
      s = "        Peripheral \(inPeripheralArray.first!.name) does not define:"
      for name in testedRegisterNameSet.subtracting (referenceRegisterNameSet) {
        s += " " + name
      }
      print (s)
    }else{
  //--- Check registers
      var regIndex = 0
      while regIndex < referenceRegisterArray.count {
        let referenceRegister = referenceRegisterArray [regIndex]
        let testedRegister = testedRegisterArray [regIndex]
        if referenceRegister != testedRegister {
          print ("  *** Error for group \(inGroupName) ***")
          print ("      Peripheral \(inPeripheralArray.first!.name), register named '\(referenceRegister.name)'")
          print ("      Peripheral \(peripheral.name), incompatible register named '\(testedRegister.name)'")
          referenceRegister.printIncompatibility (with: testedRegister)
        }
        regIndex += 1
      }
    }
  }
  //--- Generate register definition
  for register in referenceRegisterArray {
    let registerBaseName : String = register.name.replacingOccurrences (of: "%s", with: "")
    let registerAddressOffset = "0x\(String (register.addressOffset, radix: 16))"
    if let dimension = register.dim {
      s += "//---  Registers \(registerBaseName)(\(register.dimIndex!)): \(register.description)\n"
      s += "  \(registerBaseName) [\(dimension)"
      s += " @offset 0x\(String (register.addressOffset, radix: 16))"
      s += " @inc 0x\(String (register.dimIncrement!, radix: 16))"
      s += "]"
      let suffixArray = register.dimIndex!.components (separatedBy: ",")
      for dim in 0 ..< dimension {
        let registerName = register.name.replacingOccurrences (of: "%s", with: suffixArray [dim])
        let offset = Int (register.addressOffset) + dim * register.dimIncrement!
        s += "\n  \(registerName) @offset 0x\(String (offset, radix: 16))"
        if let access = register.access, access == "read-only" {
          s += " @ro"
        }
      }
    }else{
      s += "//---  Register " + register.name + ": " + register.description + "\n"
      s += "  \(registerBaseName) @offset \(registerAddressOffset)"
      if let access = register.access, access == "read-only" {
        s += " @ro"
      }
    }
    s += " $u\(register.size)"
    let fields = register.fields?.field ?? []
    if fields.count > 0 {
      s += " {\n"
      var bitFieldDictionary = [UInt : (UInt, String, String)] ()
      for field in fields {
        if field.name != "RESERVED" {
          bitFieldDictionary [field.bitOffset] = (field.bitWidth, field.name, field.description)
        }
      }
      var fieldOffset = register.size
      for offset in bitFieldDictionary.keys.sorted ().reversed () {
        let (bitWidth, name, description) = bitFieldDictionary [offset]!
        let unusedBitCount = fieldOffset - offset - bitWidth
        if unusedBitCount > 0 {
          s += "    \(unusedBitCount)\n"
        }
        let w = (bitWidth == 1) ? "" : ":\(bitWidth)"
        s += "    \(name)\(w) // at \(offset): \(description)\n"
        fieldOffset -= unusedBitCount + bitWidth
      }
      if fieldOffset > 0 {
        s += "    \(fieldOffset)\n"
      }
      s += "  }\n"
    }
    s += "\n"
  }
  s += "}\n\n"
  return s
}

//------------------------------------------------------------------------------
