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

struct GPIOModes : Codable {
  var mPins : [GPIOPin]

  enum CodingKeys: String, CodingKey {
    case mPins = "GPIO_Pin"
  }

  func print () {
    for pin in self.mPins {
      Swift.print ("Pin \(pin.mName)")
      if let signals = pin.mPinSignals {
        for pinSignal in signals {
          let components = pinSignal.mSpecificParameter.mPossibleValue.components (separatedBy: "_")
          let af : Int
          if components.count > 2, components [1].hasPrefix ("AF") {
            var s = components [1]
            s.removeFirst (2)
            af = Int (s)!
          }else{
            af = -1
          }
          Swift.print ("  '\(pinSignal.mName)' -> \(af) (\(pinSignal.mSpecificParameter.mPossibleValue))")
          if af < 0 {
            Swift.print ("    ERROR \(pinSignal.mSpecificParameter.mPossibleValue)")
            exit (1) ;
          }
          if pinSignal.mSpecificParameter.mName != "GPIO_AF" {
            Swift.print ("    ERROR \(pinSignal.mSpecificParameter.mName)")
            exit (1) ;
          }
        }
      }
    }
  }
}

//------------------------------------------------------------------------------

struct GPIOPin : Codable {
  var mName : String
  var mPinSignals : [PinSignal]? // Optionnel, car la liste peut être vide

  enum CodingKeys: String, CodingKey {
    case mName = "Name"
    case mPinSignals = "PinSignal"
  }
}

//------------------------------------------------------------------------------

struct PinSignal : Codable {
  var mName : String
  var mSpecificParameter : SpecificParameter

  enum CodingKeys: String, CodingKey {
    case mName = "Name" // GPIO_AF
    case mSpecificParameter = "SpecificParameter"
  }
}

//------------------------------------------------------------------------------

struct SpecificParameter : Codable {
  var mName : String
  var mPossibleValue : String

  enum CodingKeys: String, CodingKey {
    case mName = "Name"
    case mPossibleValue = "PossibleValue"
  }
}

//------------------------------------------------------------------------------

