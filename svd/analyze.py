#!/usr/bin/python
# -*- coding: utf-8 -*-

#----------------------------------------------------------------------------------------------------------------------*

import os, sys
import xml.etree.ElementTree as ET

#----------------------------------------------------------------------------------------------------------------------*

def analyzeSVDfile (svdFile) :
  print ("File " + svdFile + ".svd")
  tree = ET.parse (svdFile + ".svd")
  root = tree.getroot()
  cppString = "#pragma once\n\n"
  cppComment = "//" + "—" * 118 + "\n"
  cppString += cppComment + "\n"
  cppString += "#include <stdint.h>\n\n"
  for peripheral in root.iter ('peripheral') :
    if peripheral.find ('groupName') != None :
      print ("  Group Name: '" + peripheral.find ('groupName').text + "'")
    peripheralName = peripheral.find('name').text
    baseAddress = peripheral.find ('baseAddress').text
    # print ("Group '" + peripheralName + "' at " + baseAddress)
    cppString += cppComment
    cppString += "// Peripheral " + peripheralName + "\n"
    cppString += cppComment + "\n"
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
        cppString += "//-------------------- " + registerDescription + " (idx = 0 ... " + str (registerDimension - 1) + ")\n"
        cppString += "#define " + peripheralName + "_" + actualRegName + "(idx) (* (" + registerType + " (" + baseAddress + " + " + registerOffset + " + " + dimensionIncrement + " * (idx))))\n"
#         for idx in range (0, registerDimension) :
#           actualRegName = registerName.replace ("%s", str (idx))
#           cppString += "#define " + peripheralName + "_" + actualRegName + " (* (" + registerType + " (" + baseAddress + " + " + registerOffset + " + " + dimensionIncrement + " * " + str (idx) + ")))\n"
      else:
        cppString += "//-------------------- " + registerDescription + "\n"
        cppString += "#define " + peripheralName + "_" + registerName + " (* (" + registerType + " (" + baseAddress + " + " + registerOffset + ")))\n"
      cppString += "\n"
      for field in register.iter ('field') :
        fieldName = field.find ('name').text
        fieldDescription = field.find ('description').text
        fieldOffset = int (field.find ('bitOffset').text)
        fieldWidth = int (field.find ('bitWidth').text)
        # print ("    Field '" + fieldName + "', from bit " + str (fieldOffset) + ", width " + str (fieldWidth))
        fieldType = "uint" + str (registerSize) + "_t"
        qualifiedFieldName = peripheralName + "_" + registerName.replace ("%s", "") + "_" + fieldName
        if fieldWidth == 1:
          cppString += "  // Boolean field: " + fieldDescription + "\n"
          cppString += "    static const " + fieldType + " " + qualifiedFieldName + " = 1U << " + str (fieldOffset) + " ;\n\n"
        elif fieldWidth != registerSize :
          cppString += "  // Field (width: " + str (fieldWidth) + " bits): " + fieldDescription + "\n"
          cppString += "    inline " + fieldType + " " + qualifiedFieldName + " (const " + fieldType + " inValue) { return (inValue & " + str ((1 << fieldWidth) - 1) + ") << " + str (fieldOffset) + " ; }\n\n"
  cppString += cppComment
  #------------------------------ Write destination file
  f = open (svdFile + ".h", "wt")
  f.write (cppString)
  f.close()

#----------------------------------------------------------------------------------------------------------------------*

#--- Get script absolute path
scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))
os.chdir (scriptDir)
for root, dirs, files in os.walk (scriptDir) :
  for name in files:
    (baseName, extension) = os.path.splitext (os.path.join (root, name))
    if extension == ".svd" :
      analyzeSVDfile (baseName)

#----------------------------------------------------------------------------------------------------------------------*
