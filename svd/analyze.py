#!/usr/bin/python
# -*- coding: utf-8 -*-

#----------------------------------------------------------------------------------------------------------------------*

import os, sys
import xml.etree.ElementTree as ET

#----------------------------------------------------------------------------------------------------------------------*

def cppComment () :
  return "//" + "—" * 118 + "\n"

#----------------------------------------------------------------------------------------------------------------------*

def writeSinglePeripheral (peripheral, stringArray) :
  peripheralName = peripheral.find('name').text
  baseAddress = peripheral.find ('baseAddress').text
  # print ("Group '" + peripheralName + "' at " + baseAddress)
  stringArray[0] += cppComment ()
  stringArray[0] += "// Peripheral " + peripheralName + "\n"
  stringArray[0] += cppComment () + "\n"
  for register in peripheral.iter ('register') :
    registerName = register.find ('name').text
    registerDescription = register.find ('description').text
    registerOffset = register.find ('addressOffset').text
    registerSize = int (register.find ('size').text)
    registerAccess = register.find ('access').text
    # print ("  Register '" + registerName + "', offset " + registerOffset + ", size " + str (registerSize) + ", access " + registerAccess)
    constAttribute = "const " if registerAccess == "read-only" else ""
    registerType = "(" + constAttribute + "volatile uint" + str (registerSize) + "_t *)"
    if register.find ('dim') != None :
      registerDimension = int (register.find ('dim').text)
      dimensionIncrement = register.find ('dimIncrement').text
      actualRegName = registerName.replace ("%s", "")
      stringArray[0] += "//-------------------- " + registerDescription + " (idx = 0 ... " + str (registerDimension - 1) + ")\n"
      stringArray[0] += "#define " + peripheralName + "_" + actualRegName + "(idx) (* (" + registerType + " (" + baseAddress + " + " + registerOffset + " + " + dimensionIncrement + " * (idx))))\n"
    else:
      stringArray[0] += "//-------------------- " + registerDescription + "\n"
      stringArray[0] += "#define " + peripheralName + "_" + registerName + " (* (" + registerType + " (" + baseAddress + " + " + registerOffset + ")))\n"
    stringArray[0] += "\n"
    for field in register.iter ('field') :
      fieldName = field.find ('name').text
      fieldDescription = field.find ('description').text
      fieldOffset = int (field.find ('bitOffset').text)
      fieldWidth = int (field.find ('bitWidth').text)
      # print ("    Field '" + fieldName + "', from bit " + str (fieldOffset) + ", width " + str (fieldWidth))
      fieldType = "uint" + str (registerSize) + "_t"
      qualifiedFieldName = peripheralName + "_" + registerName.replace ("%s", "") + "_" + fieldName
      if fieldWidth == 1:
        stringArray[0] += "  // Boolean field: " + fieldDescription + "\n"
        stringArray[0] += "    static const " + fieldType + " " + qualifiedFieldName + " = 1U << " + str (fieldOffset) + " ;\n\n"
      elif fieldWidth != registerSize :
        stringArray[0] += "  // Field (width: " + str (fieldWidth) + " bits): " + fieldDescription + "\n"
        stringArray[0] += "    inline " + fieldType + " " + qualifiedFieldName + " (const " + fieldType + " inValue) { return (inValue & " + str ((1 << fieldWidth) - 1) + ") << " + str (fieldOffset) + " ; }\n\n"

#----------------------------------------------------------------------------------------------------------------------*

def writePeripheralGroups (peripheralGroupDictionary, peripheralGroupNameDictionary, peripheralGroupBaseAddressDictionary, stringArray) :
  for key in sorted (peripheralGroupDictionary.keys ()) :
    peripheralDictionary = peripheralGroupDictionary [key]
    peripheralNameArray = peripheralGroupNameDictionary [key]
    peripheralBaseAddressArray = peripheralGroupBaseAddressDictionary [key]
    stringArray[0] += cppComment ()
    stringArray[0] += "// Peripheral group " + key + "\n"
    for i in range (0, len (peripheralNameArray)) :
      stringArray[0] += "//                " + peripheralNameArray [i] + " at " + peripheralBaseAddressArray [i] + "\n"
    stringArray[0] += cppComment () + "\n"
    stringArray[0] += "static const uint32_t kBaseAddress_" + key + " [" + str (len (peripheralNameArray)) + "] = {"
    for i in range (0, len (peripheralNameArray)) :
      if i != 0 :
        stringArray[0] += ", "
      stringArray[0] += peripheralBaseAddressArray [i]
    stringArray[0] += "} ;\n\n"
    stringArray[0] += cppComment () + "\n"
    for registerName in peripheralDictionary.keys () :
      register = peripheralDictionary [registerName]
      registerDescription = register ['description']
      registerOffset = register ['addressOffset']
      registerSize = register ['size']
      registerAccess = register ['access']
      # print ("  Register '" + registerName + "', offset " + registerOffset + ", size " + str (registerSize) + ", access " + registerAccess)
      constAttribute = "const " if registerAccess == "read-only" else ""
      registerType = "(" + constAttribute + "volatile uint" + str (registerSize) + "_t *)"
      if 'dim' in register :
        registerDimension = register ['dim']
        dimensionIncrement = register ['dimIncrement']
        actualRegName = registerName.replace ("%s", "")
        stringArray[0] += "//-------------------- " + registerDescription + " (idx = 0 ... " + str (registerDimension - 1) + ")\n"
        stringArray[0] += "#define " + key + "_" + actualRegName + "(group,idx) (* (" + registerType + " (kBaseAddress_" + key + " [group] + " + registerOffset + " + " + dimensionIncrement + " * (idx))))\n"
        for i in range (0, len (peripheralNameArray)) :
          stringArray[0] += "#define " + peripheralNameArray [i] + "_" + actualRegName + "(idx) (* (" + registerType + " (" + peripheralBaseAddressArray [i] + " + " + registerOffset + " + " + dimensionIncrement + " * (idx))))\n"
      else:
        stringArray[0] += "//-------------------- " + registerDescription + "\n"
        stringArray[0] += "#define " + key + "_" + registerName + "(group) (* (" + registerType + " (kBaseAddress_" + key + " [group] + " + registerOffset + ")))\n"
        for i in range (0, len (peripheralNameArray)) :
          stringArray[0] += "#define " + peripheralNameArray [i] + "_" + registerName + " (* (" + registerType + " (" + peripheralBaseAddressArray [i] + " + " + registerOffset + ")))\n"
      stringArray[0] += "\n"
      for fieldName in register ["fields"].keys () :
       # fieldName = register ["fields"] [i] ['name']
        fieldDescription = register ["fields"] [fieldName] ['description']
        fieldOffset = register ["fields"] [fieldName] ['bitOffset']
        fieldWidth = register ["fields"] [fieldName] ['bitWidth']
        # print ("    Field '" + fieldName + "', from bit " + str (fieldOffset) + ", width " + str (fieldWidth))
        fieldType = "uint" + str (registerSize) + "_t"
        qualifiedFieldName = key + "_" + registerName.replace ("%s", "") + "_" + fieldName
        if fieldWidth == 1:
          stringArray[0] += "  // Boolean field: " + fieldDescription + "\n"
          stringArray[0] += "    static const " + fieldType + " " + qualifiedFieldName + " = 1U << " + str (fieldOffset) + " ;\n\n"
        elif fieldWidth != registerSize :
          stringArray[0] += "  // Field (width: " + str (fieldWidth) + " bits): " + fieldDescription + "\n"
          stringArray[0] += "    inline " + fieldType + " " + qualifiedFieldName + " (const " + fieldType + " inValue) { return (inValue & " + str ((1 << fieldWidth) - 1) + ") << " + str (fieldOffset) + " ; }\n\n"

#----------------------------------------------------------------------------------------------------------------------*

def analyzeSVDfile (svdFile, stringArray) :
  print ("File " + svdFile + ".svd")
  tree = ET.parse (svdFile + ".svd")
  root = tree.getroot()
  peripheralGroupDictionary = {}
  peripheralGroupNameDictionary = {}
  peripheralGroupBaseAddressDictionary = {}
  for peripheral in root.iter ('peripheral') :
    if peripheral.find ('groupName') == None :
      writeSinglePeripheral (peripheral, stringArray)
    else:
      peripheralName = peripheral.find('name').text
      peripheralBaseAddress = peripheral.find ('baseAddress').text
      groupName = peripheral.find ('groupName').text
      peripheralDictionary = {}
      for register in peripheral.iter ('register') :
        registerName = register.find ('name').text
        registerPropertyDictionary = {}
        registerPropertyDictionary ["description"] = register.find ('description').text
        registerPropertyDictionary ["addressOffset"] = register.find ('addressOffset').text
        registerPropertyDictionary ["size"] = int (register.find ('size').text)
        registerPropertyDictionary ["access"] = register.find ('access').text
        if register.find ('dim') != None :
          registerPropertyDictionary ["dim"] = int (register.find ('dim').text)
          registerPropertyDictionary ["dimIncrement"] = register.find ('dimIncrement').text
        registerFieldDictionary = {}
        for field in register.iter ('field') :
          fieldName = field.find ('name').text
          fieldPropertyDictionary = {}
          fieldPropertyDictionary ['description'] = field.find ('description').text
          fieldPropertyDictionary ['bitOffset'] = int (field.find ('bitOffset').text)
          fieldPropertyDictionary ['bitWidth'] = int (field.find ('bitWidth').text)
          registerFieldDictionary [fieldName] = fieldPropertyDictionary
        registerPropertyDictionary ["fields"] = registerFieldDictionary
        peripheralDictionary [registerName] = registerPropertyDictionary
      if not groupName in peripheralGroupDictionary :
        peripheralGroupDictionary [groupName] = peripheralDictionary
        peripheralGroupNameDictionary [groupName] = [peripheralName]
        peripheralGroupBaseAddressDictionary [groupName] = [peripheralBaseAddress]
      elif peripheralGroupDictionary [groupName] != peripheralDictionary :
        peripheralName = peripheral.find('name').text
        print ("  Error with group named '" + groupName + "', peripheral '" + peripheralName + "'")
        if peripheralDictionary.keys () != peripheralGroupDictionary [groupName].keys () :
          print ("    register name error")
          print ("    Current registers: %s" % sorted (set (peripheralDictionary.keys ()) - set (peripheralGroupDictionary [groupName].keys ())))
          print ("    Other registers: %s" % sorted (set (peripheralGroupDictionary [groupName].keys ()) - set (peripheralDictionary.keys ())))
        else:
          for key in sorted (peripheralDictionary.keys ()) :
            currentReg = peripheralDictionary [key]
            otherReg = peripheralGroupDictionary [groupName] [key]
            if currentReg != otherReg :
               print ("      Error for register '" + key + "'") ;
      else:
        peripheralName = peripheral.find('name').text
        peripheralGroupNameDictionary [groupName].append (peripheralName)
        peripheralGroupBaseAddressDictionary [groupName].append (peripheralBaseAddress)
        # print ("  Ok with group named '" + groupName + "', peripheral '" + peripheralName + "'")
  writePeripheralGroups (peripheralGroupDictionary, peripheralGroupNameDictionary, peripheralGroupBaseAddressDictionary, stringArray)

#----------------------------------------------------------------------------------------------------------------------*

#--- Get script absolute path
scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))
os.chdir (scriptDir)
for root, dirs, files in os.walk (scriptDir) :
  for name in files:
    (baseName, extension) = os.path.splitext (os.path.join (root, name))
    if extension == ".svd" :
      stringArray = ["#pragma once\n\n"]
      stringArray [0] += cppComment () + "\n"
      stringArray [0] += "#include <stdint.h>\n\n"
      analyzeSVDfile (baseName, stringArray)
      f = open (baseName + ".h", "wt")
      f.write (stringArray [0])
      f.close()

#----------------------------------------------------------------------------------------------------------------------*
