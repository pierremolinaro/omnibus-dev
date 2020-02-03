//
//  generate-py-file.swift
//  svd-decoder
//
//  Created by Pierre Molinaro on 08/12/2019.
//  Copyright © 2019 Pierre Molinaro. All rights reserved.
//
//------------------------------------------------------------------------------

import Foundation

//------------------------------------------------------------------------------

func generatePython (device inDevice : Device, baseURL inBaseURL : URL) {
  let separator = "#" + String (repeating: "-", count: 79) + "\n"
  var s = "#!/usr/bin/python\n"
  s += "# -*- coding: utf-8 -*-\n\n"
  s += separator
  s += "# INTERRUPT DICTIONARY, " + inDevice.name + ": " + inDevice.description + "\n"
  s += separator + "\n"
  s += "def interruptNames () :\n"
  s += "  result = {}\n"
  s += "  result [\"NMI\"] = 2\n"
  s += "  result [\"HardFault\"] = 3\n"
  s += "  result [\"MemManage\"] = 4\n"
  s += "  result [\"BusFault\"] = 5\n"
  s += "  result [\"UsageFault\"] = 6\n"
  s += "  result [\"SVC\"] = 11\n"
  s += "  result [\"DebugMonitor\"] = 12\n"
  s += "  result [\"PendSV\"] = 14\n"
  s += "  result [\"SysTick\"] = 15\n"
  var interruptDictionary = [UInt : String] ()
  for peripheral in inDevice.peripherals.peripheral {
    for interrupt in peripheral.interrupt ?? [] {
      interruptDictionary [interrupt.value] = interrupt.name
    }
  }
  for i : UInt in 0 ..< 240 {
    if let name = interruptDictionary [i] {
      s += "  result [\"\(name)\"] = \(i + 16)\n"
    }
  }
  s += "  return result\n\n"
  s += separator + "\n"
//---
  try! s.write(to: inBaseURL.appendingPathExtension ("py"), atomically: true, encoding: .utf8)
}

//------------------------------------------------------------------------------
