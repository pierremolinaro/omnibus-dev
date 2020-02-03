//
//  generate-s-file.swift
//  svd-decoder
//
//  Created by Pierre Molinaro on 08/12/2019.
//  Copyright © 2019 Pierre Molinaro. All rights reserved.
//
//------------------------------------------------------------------------------

import Foundation

//------------------------------------------------------------------------------

func generateAssembly (device inDevice : Device, baseURL inBaseURL : URL) {
  let separator = "@" + String (repeating: "-", count: 79) + "\n"
  var s = separator
  s += "@ INTERRUPT VECTORS, " + inDevice.name + ": " + inDevice.description + "\n"
  s += separator + "\n"
  s += "  .syntax unified\n"
  s += "  .cpu cortex-m4\n"
  s += "  .thumb\n\n"
  s += separator + "\n"
  s += "  .section isr.vectors, \"a\", %progbits\n\n"
  s += separator + "\n"
  s += "  .word __system_stack_end\n"
  s += "@--- ARM Core System Handler Vectors\n"
  s += "  .word reset.handler @ 1\n"
  s += "  .word interrupt.NMI @ 2\n"
  s += "  .word interrupt.HardFault @ 3\n"
  s += "  .word interrupt.MemManage @ 4\n"
  s += "  .word interrupt.BusFault @ 5\n"
  s += "  .word interrupt.UsageFault @ 6\n"
  s += "  .word -1 @ 7, reserved\n"
  s += "  .word -1 @ 8, reserved\n"
  s += "  .word -1 @ 9, reserved\n"
  s += "  .word -1 @ 10, reserved\n"
  s += "  .word interrupt.SVC @ 11\n"
  s += "  .word interrupt.DebugMonitor @ 12\n"
  s += "  .word -1 @ 13, reserved\n"
  s += "  .word interrupt.PendSV @ 14\n"
  s += "  .word interrupt.SysTick @ 15\n"
  s += "@--- Non-Core Vectors\n"
  var interruptDictionary = [UInt : String] ()
  for peripheral in inDevice.peripherals.peripheral {
    for interrupt in peripheral.interrupt ?? [] {
      interruptDictionary [interrupt.value] = interrupt.name
    }
  }
  for i : UInt in 0 ..< 240 {
    if let name = interruptDictionary [i] {
      s += "  .word interrupt.\(name) @ \(i + 16)\n"
    }else{
      s += "  .word -1 @ \(i + 16) (unused)\n"
    }
  }
  s += "\n"
  s += separator + "\n"
//---
  try! s.write(to: inBaseURL.appendingPathExtension ("s"), atomically: true, encoding: .utf8)
}

//------------------------------------------------------------------------------
