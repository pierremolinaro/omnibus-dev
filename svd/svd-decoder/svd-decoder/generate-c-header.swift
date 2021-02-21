//
//  generate-c-header.swift
//  svd-decoder
//
//  Created by Pierre Molinaro on 08/12/2019.
//  Copyright © 2019 Pierre Molinaro. All rights reserved.
//
//------------------------------------------------------------------------------

import Foundation

fileprivate let separator = "//" + String (repeating: "-", count: 78) + "\n"

//------------------------------------------------------------------------------

func hexString (_ inValue : UInt32) -> String {
  let s = String (inValue, radix: 16, uppercase: true)
  return "0x\(s)"
}

//------------------------------------------------------------------------------

func hexString (_ inValue : UInt) -> String {
  return hexString (UInt32 (inValue))
}

//------------------------------------------------------------------------------

func hexString (_ inValue : UInt64) -> String {
  return hexString (UInt32 (inValue))
}

//------------------------------------------------------------------------------

func hexString (_ inValue : Int) -> String {
  return hexString (UInt32 (inValue))
}

//------------------------------------------------------------------------------

func generateHeader (device inDevice : Device, baseURL inBaseURL : URL) {
  var s = "#pragma once\n\n"
  s += separator
  s += "// " + inDevice.name + ": " + inDevice.description + "\n"
  s += separator + "\n"
  s += "#include <stdint.h>\n\n"
  var groupDictionary = [String : [Peripheral]] ()
  var generationDict = [String : String] ()
  for peripheral in inDevice.peripherals.peripheral {
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
//----
  s += separator
  s += "// INTERRUPTS\n"
  s += separator + "\n"
  s += "enum class ISRSlot : uint8_t {\n"
  var interruptDictionary = [UInt : String] ()
  for peripheral in inDevice.peripherals.peripheral {
    for interrupt in peripheral.interrupt ?? [] {
      interruptDictionary [interrupt.value] = interrupt.name
    }
  }
  for interruptNumber in interruptDictionary.keys.sorted () {
    s += "  \(interruptDictionary [interruptNumber]!) = \(interruptNumber),\n"
  }
  s += "} ;\n\n"
  s += separator + "\n"
  s += "inline void NVIC_ENABLE_IRQ (const ISRSlot inInterrupt) {\n"
  s += "  const uint32_t it = static_cast <uint32_t> (inInterrupt) ;\n"
  s += "  *((volatile uint32_t *) (0xE000E100 + 4 * (it >> 5))) = 1U << (it & 31) ;\n"
  s += "}\n\n"
  s += separator + "\n"
  s += "inline void NVIC_DISABLE_IRQ (const ISRSlot inInterrupt) {\n"
  s += "  const uint32_t it = static_cast <uint32_t> (inInterrupt) ;\n"
  s += "  *((volatile uint32_t *) (0xE000E180 + 4 * (it >> 5))) = 1U << (it & 31) ;\n"
  s += "}\n\n"
  s += separator
  s += "// BITBAND\n"
  s += separator + "\n"
  s += "inline void bitband32 (const volatile uint32_t & inRegister, const uint8_t inBit, const bool inValue) {\n"
  s += "  const uint32_t address = ((uint32_t) &inRegister - 0x40000000) * 32 + ((uint32_t) inBit) * 4 + 0x42000000 ;\n"
  s += "  volatile uint32_t * ptr = (volatile uint32_t *) address ;\n"
  s += "  *ptr = (uint32_t) inValue ;\n"
  s += "}\n\n"
  s += separator
//---
  try! s.write(to: inBaseURL.appendingPathExtension ("h"), atomically: true, encoding: .utf8)
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
  for register in inPeripheral.registers?.register ?? [] {
    s += separator + "\n"
    let registerBaseName : String = register.name.replacingOccurrences (of: "%s", with: "")
    let registerAddressOffset = hexString (register.addressOffset)
    if let dimension = register.dim {
      s += "//---  Registers \(registerBaseName)(\(register.dimIndex!)): \(register.description)\n"
      let dimensionIncrement = hexString (register.dimIncrement!)
      let suffixArray = register.dimIndex!.components (separatedBy: ",")
      s += "  #define \(inPeripheral.name)_\(registerBaseName)(idx) (* ((volatile uint\(register.size)_t *) (\(hexString (inPeripheral.baseAddress)) + \(registerAddressOffset) + (idx) * \(dimensionIncrement))))\n"
      for dim in 0 ..< dimension {
        let registerName = register.name.replacingOccurrences (of: "%s", with: suffixArray [dim])
        let qualifier : String
        if let access = register.access, access == "read-only" {
          qualifier = "const "
        }else{
          qualifier = ""
        }
//        s += "  // #define " + inPeripheral.name + "_" + registerName
//        s += " (* ((\(qualifier)volatile uint\(register.size)_t *) (\(hexString (inPeripheral.baseAddress)) + \(registerAddressOffset) + \(dim) * \(dimensionIncrement))))\n"
        s += "  static volatile uint\(register.size)_t \(qualifier)& " + inPeripheral.name + "_" + registerName
        s += " __attribute__((unused)) = * ((\(qualifier)volatile uint\(register.size)_t *) (\(hexString (inPeripheral.baseAddress)) + \(register.addressOffset))) ;\n"
      }
    }else{
      s += "//---  Register " + register.name + ": " + register.description.replacingOccurrences(of: "\n", with: " ") + "\n"
      let qualifier : String
      if let access = register.access, access == "read-only" {
        qualifier = "const "
      }else{
        qualifier = ""
      }
//      s += "  // #define " + inPeripheral.name + "_" + register.name
//      s += " (* ((\(qualifier)volatile uint\(register.size)_t *) (\(hexString (inPeripheral.baseAddress)) + \(register.addressOffset))))\n"
      s += "  static volatile uint\(register.size)_t \(qualifier)& " + inPeripheral.name + "_" + register.name
      s += " __attribute__((unused)) = * ((\(qualifier)volatile uint\(register.size)_t *) (\(hexString (inPeripheral.baseAddress)) + \(register.addressOffset))) ;\n"
    }
    s += "\n"
    for field in register.fields?.field ?? [] {
      if field.name != "RESERVED" {
        s += "  // Field " + field.name + ": " + field.description + "\n"
        if field.bitWidth == 1 {
          s += "    const uint\(register.size)_t "
          s += inPeripheral.name + "_" + registerBaseName + "_" + field.name
          s += " = 1U << \(field.bitOffset) ;\n\n"
        }else{
          s += "    inline uint\(register.size)_t "
          s += inPeripheral.name + "_" + registerBaseName + "_" + field.name + " ("
          let w = hexString ((1 << field.bitWidth) - 1) + "U"
          s += "const uint\(register.size)_t inValue) {return (inValue & \(w)) << \(field.bitOffset) ; }\n\n"
        }
      }
    }
  }
  ioGenerationDict [inPeripheral.name] = s
}

//------------------------------------------------------------------------------

fileprivate func generateGroup (_ inGroupName : String, _ inPeripheralArray : [Peripheral]) -> String {
  var s = ""
  s += separator
  s += "// PERIPHERAL GROUP: \(inGroupName)\n"
  var a = "static const uint32_t kBaseAddress_\(inGroupName) [\(inPeripheralArray.count)] = {"
  var first = true
  for peripheral in inPeripheralArray {
   let address = hexString (peripheral.baseAddress)
   s += "//        \(peripheral.name) at \(address)\n"
   if first {
     first = false
   }else{
     a += ", "
   }
   a += address
  }
  s += separator + "\n"
  s += a + "} ;\n\n"
  s += separator + "\n"
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
    let registerAddressOffset = hexString (register.addressOffset)
    if let dimension = register.dim {
      s += "//---  Registers \(registerBaseName)(\(register.dimIndex!)): \(register.description)\n"
      let dimensionIncrement = hexString (register.dimIncrement!)
      let suffixArray = register.dimIndex!.components (separatedBy: ",")
      s += "  #define \(inGroupName)_\(registerBaseName)(group,idx) (* ((volatile uint\(register.size)_t *) (kBaseAddress_\(registerBaseName) [group] + \(registerAddressOffset) + (idx) * \(dimensionIncrement))))\n"
      for peripheral in inPeripheralArray {
        let baseAddress = hexString (peripheral.baseAddress)
        s += "  #define \(peripheral.name)_\(registerBaseName)(idx) (* ((volatile uint\(register.size)_t *) (\(baseAddress) + \(registerAddressOffset) + (idx) * \(dimensionIncrement))))\n"
      }
      for dim in 0 ..< dimension {
        for peripheral in inPeripheralArray {
          let registerName = register.name.replacingOccurrences (of: "%s", with: suffixArray [dim])
          let qualifier : String
          if let access = register.access, access == "read-only" {
            qualifier = "const "
          }else{
            qualifier = ""
          }
//          s += "  // #define " + peripheral.name + "_" + registerName
//          s += " (* ((\(qualifier)volatile uint\(register.size)_t *) (\(hexString (peripheral.baseAddress)) + \(registerAddressOffset) + \(dim) * \(dimensionIncrement))))\n"
          s += "  static volatile uint\(register.size)_t \(qualifier)& " + peripheral.name + "_" + registerName
          s += " __attribute__((unused)) = * ((\(qualifier)volatile uint\(register.size)_t *) (\(hexString (peripheral.baseAddress)) + \(register.addressOffset))) ;\n"
        }
      }
    }else{
      s += "//---  Register " + register.name + ": " + register.description + "\n"
      s += "  #define \(inGroupName)_\(register.name)(group) (* ((volatile uint\(register.size)_t *) (kBaseAddress_\(register.name) [group] + \(registerAddressOffset))))\n"
      for peripheral in inPeripheralArray {
        let qualifier : String
        if let access = register.access, access == "read-only" {
          qualifier = "const "
        }else{
          qualifier = ""
        }
//        s += "  // #define " + peripheral.name + "_" + register.name
//        s += " (* ((\(qualifier)volatile uint\(register.size)_t *) (\(hexString (peripheral.baseAddress)) + \(registerAddressOffset))))\n"
        s += "  static volatile uint\(register.size)_t \(qualifier)& " + peripheral.name + "_" + register.name
        s += " __attribute__((unused)) = * ((\(qualifier)volatile uint\(register.size)_t *) (\(hexString (peripheral.baseAddress)) + \(register.addressOffset))) ;\n"
      }
    }
    s += "\n"
    for field in register.fields?.field ?? [] {
      if field.name != "RESERVED" {
        s += "  // Field " + field.name + ": " + field.description + "\n"
        if field.bitWidth == 1 {
          s += "    const uint\(register.size)_t "
          s += inGroupName + "_" + registerBaseName + "_" + field.name
          s += " = 1U << \(field.bitOffset) ;\n\n"
        }else{
          s += "    inline uint\(register.size)_t "
          s += inGroupName + "_" + registerBaseName + "_" + field.name + " ("
          let w = hexString ((UInt64 (1) << field.bitWidth) - 1) + "U"
          s += "const uint\(register.size)_t inValue) {return (inValue & \(w)) << \(field.bitOffset) ; }\n\n"
        }
      }
    }
  }
  return s
}

//------------------------------------------------------------------------------
