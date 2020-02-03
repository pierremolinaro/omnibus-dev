//
//  analyze-svd.swift
//  svd-decoder
//
//  Created by Pierre Molinaro on 07/12/2019.
//  Copyright © 2019 Pierre Molinaro. All rights reserved.
//
//------------------------------------------------------------------------------

import Foundation

//------------------------------------------------------------------------------

func analyzeSVDFile (path inPath : String) {
  print ("File \(inPath)")
  let url = URL (fileURLWithPath: inPath)
  let data = try! Data (contentsOf: url)
  let decoder = XMLDecoder ()
  let device: Device = try! decoder.decode (Device.self, from: data)
//--- Normalize field descriptions (can contains carriage returns and several consecutive spaces)
  for peripheral in device.peripherals.peripheral {
    for register in peripheral.registers?.register ?? [] {
      for field in register.fields?.field ?? [] {
        let array = field.description.components(separatedBy: ["\n", " "])
        field.description = ""
        var addSeparator = false
        for string in array {
          if string != "" {
            if addSeparator {
              field.description += " "
            }
            field.description += string
            addSeparator = true
          }
        }
      }
    }
  }
//--- Solve 'derivedFrom' definitions
var peripheralDict = [String : Peripheral] ()
for peripheral in device.peripherals.peripheral {
  if peripheral.derivedFrom == nil {
    peripheralDict [peripheral.name] = peripheral
  }
}
for peripheral in device.peripherals.peripheral {
  if let baseName = peripheral.derivedFrom {
    let basePeripheral = peripheralDict [baseName]!
    peripheral.registers = basePeripheral.registers
  }
}
//---
  let baseName = url.deletingPathExtension ().lastPathComponent
//  print (baseName)
  let productDirectory = url.deletingLastPathComponent().appendingPathComponent (baseName)
//  print (productDirectory)
//--- Create product directory
  let fm = FileManager ()
  if !fm.fileExists(atPath: productDirectory.path) {
    try! fm.createDirectory(at: productDirectory, withIntermediateDirectories: false, attributes: nil)
  }
  let productBaseURL = productDirectory.appendingPathComponent (baseName)
//  print (productBaseURL)
//---
  generateHeader (device: device, baseURL: productBaseURL)
  generateAssembly (device: device, baseURL: productBaseURL)
  generatePython (device: device, baseURL: productBaseURL)
  generateOmnibus (device: device, baseURL: productBaseURL)
}

//------------------------------------------------------------------------------

func print (device inDevice : Device) {
  print ("Device: '\(inDevice.name)'")
  print ("  Version: '\(inDevice.version)'")
  print ("  Description: '\(inDevice.description)'")
  for peripheral in inDevice.peripherals.peripheral {
    print ("  Peripheral name: '\(peripheral.name)'")
    print ("    Description: '\(peripheral.description ?? "nil")'")
    print ("    Group name: '\(peripheral.groupName ?? "nil")'")
    print ("    Base address: 0x\(String (peripheral.baseAddress, radix: 16))")
    for register in peripheral.registers?.register ?? [] {
      print ("    Register name: '\(register.name)'")
      print ("      Description: '\(register.description)'")
      print ("      Address offset: '0x\(String (register.addressOffset, radix: 16))'")
      print ("      Size: \(register.size)")
      print ("      Access: '\(register.access ?? "nil")'")
      for field in register.fields?.field ?? [] {
        print ("      Field name: '\(field.name)'")
        print ("        description: '\(field.description)'")
        print ("        Bit offset: \(field.bitOffset)")
        print ("        Bit width: \(field.bitWidth)")
      }
    }
  }
}

//------------------------------------------------------------------------------
