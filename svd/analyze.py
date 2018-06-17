#!/usr/bin/python
# -*- coding: utf-8 -*-

#----------------------------------------------------------------------------------------------------------------------*

import os, sys
import xml.etree.ElementTree as ET

#----------------------------------------------------------------------------------------------------------------------*

def cppComment () :
  return "//" + "—" * 118 + "\n"

#----------------------------------------------------------------------------------------------------------------------*

def asComment () :
  return "@" + "—" * 119 + "\n"

#----------------------------------------------------------------------------------------------------------------------*

def pyComment () :
  return "#" + "—" * 119 + "\n"

#——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
#   FOR PRINTING IN COLOR                                                                                              *
#——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

def BLACK () :
  return '\033[90m'

#······················································································································*

def RED () :
  return '\033[91m'

#······················································································································*

def GREEN () :
  return '\033[92m'

#······················································································································*

def YELLOW () :
  return '\033[93m'

#······················································································································*

def BLUE () :
  return '\033[94m'

#······················································································································*

def MAGENTA () :
  return '\033[95m'

#······················································································································*

def CYAN () :
  return '\033[96m'

#······················································································································*

def WHITE () :
  return '\033[97m'

#······················································································································*

def ENDC () :
  return '\033[0m'

#······················································································································*

def BOLD () :
  return '\033[1m'

#······················································································································*

def UNDERLINE () :
  return '\033[4m'

#······················································································································*

def BLINK () :
  return '\033[5m'

#······················································································································*

def BOLD_BLUE () :
  return BOLD () + BLUE ()

#······················································································································*

def BOLD_MAGENTA () :
  return BOLD () + MAGENTA ()

#······················································································································*

def BOLD_GREEN () :
  return BOLD () + GREEN ()

#······················································································································*

def BOLD_RED () :
  return BOLD () + RED ()

#----------------------------------------------------------------------------------------------------------------------*

def writeInterruptVectors (root, stringArray) :
  stringArray [2] += "#!/usr/bin/python\n"
  stringArray [2] += "# -*- coding: utf-8 -*-\n\n"
  stringArray [2] += pyComment () + "\n"
  stringArray [2] += "def interruptNames () :\n"
  stringArray [2] += "  result = {}\n"
  stringArray [2] += "  result [\"NMI\"] = 2\n"
  stringArray [2] += "  result [\"HardFault\"] = 3\n"
  stringArray [2] += "  result [\"MemManage\"] = 4\n"
  stringArray [2] += "  result [\"BusFault\"] = 5\n"
  stringArray [2] += "  result [\"UsageFault\"] = 6\n"
  stringArray [2] += "  result [\"SVC\"] = 11\n"
  stringArray [2] += "  result [\"DebugMonitor\"] = 12\n"
  stringArray [2] += "  result [\"PendSV\"] = 14\n"
  stringArray [2] += "  result [\"SysTick\"] = 15\n"
  stringArray [1] += asComment ()
  stringArray [1] += "@   INTERRUPT VECTORS\n"
  stringArray [1] += asComment () + "\n"
  interruptNameArray = []
  for i in range (0, 256 - 16) :
    interruptNameArray.append ("")
  for interrupt in root.iter ('interrupt') :
    interruptName = interrupt.find ('name').text
    interruptValue = int (interrupt.find ('value').text)
    interruptNameArray [interruptValue] = interruptName
  stringArray [1] += "	.syntax unified\n"
  stringArray [1] += "	.cpu cortex-m4\n"
  stringArray [1] += "	.thumb\n\n"
  stringArray [1] += asComment () + "\n"
  stringArray [1] += "  .section .isr_vector, \"a\", %progbits\n\n"
  stringArray [1] += asComment () + "\n"
  stringArray [1] += "  .word __system_stack_end\n"
  stringArray [1] += "@--- ARM Core System Handler Vectors\n"
  stringArray [1] += "  .word reset.handler @ 1\n"
  stringArray [1] += "  .word interrupt.NMI @ 2\n"
  stringArray [1] += "  .word interrupt.HardFault @ 3\n"
  stringArray [1] += "  .word interrupt.MemManage @ 4\n"
  stringArray [1] += "  .word interrupt.BusFault @ 5\n"
  stringArray [1] += "  .word interrupt.UsageFault @ 6\n"
  stringArray [1] += "  .word -1 @ 7, reserved\n"
  stringArray [1] += "  .word -1 @ 8, reserved\n"
  stringArray [1] += "  .word -1 @ 9, reserved\n"
  stringArray [1] += "  .word -1 @ 10, reserved\n"
  stringArray [1] += "  .word interrupt.SVC @ 11\n"
  stringArray [1] += "  .word interrupt.DebugMonitor @ 12\n"
  stringArray [1] += "  .word -1 @ 13, reserved\n"
  stringArray [1] += "  .word interrupt.PendSV @ 14\n"
  stringArray [1] += "  .word interrupt.SysTick @ 15\n"
  stringArray [1] += "@--- Non-Core Vectors\n"
  for i in range (0, 256 - 16) :
    if interruptNameArray [i] == "" :
       stringArray[1] += "  .word -1 @ " + str (i + 16) + " (unused)\n"
    else:
      stringArray[1] += "  .word interrupt." + interruptNameArray [i] + " @ " + str (i + 16) + "\n"
      stringArray[2] += "  result [\"" + interruptNameArray [i] + "\"] = " + str (i + 16) + "\n"
  stringArray [1] += "\n" + asComment ()
  stringArray [2] += "  return result\n\n"
  stringArray [2] += pyComment ()

#----------------------------------------------------------------------------------------------------------------------*

def writeBitbanding (stringArray) :
  stringArray[0] += cppComment ()
  stringArray[0] += "// BITBAND\n"
  stringArray[0] += cppComment () + "\n"
  stringArray[0] += "inline void bitband32 (const volatile uint32_t & inRegister, const uint8_t inBit, const bool inValue) {\n"
  stringArray[0] += "  const uint32_t address = ((uint32_t) &inRegister - 0x40000000) * 32 + ((uint32_t) inBit) * 4 + 0x42000000 ;\n"
  stringArray[0] += "  volatile uint32_t * ptr = (volatile uint32_t *) address ;\n"
  stringArray[0] += "  *ptr = (uint32_t) inValue ;\n"
  stringArray[0] += "}\n\n"


#----------------------------------------------------------------------------------------------------------------------*

def writeInterruptionNumbers (root, stringArray) :
  stringArray[0] += cppComment ()
  stringArray[0] += "// INTERRUPTS\n"
  stringArray[0] += cppComment () + "\n"
  stringArray[0] += "enum class ISRSlot : uint8_t {\n"
  interruptDictionary = {}
  for interrupt in root.iter ('interrupt') :
    interruptName = interrupt.find ('name').text
    interruptValue = int (interrupt.find ('value').text)
    if interruptName in interruptDictionary :
      if interruptValue != interruptDictionary [interruptName] :
        print ("Inconsistent interrupt number for " + interruptName)
    else :
      interruptDictionary [interruptName] = interruptValue
  for interruptName in sorted (interruptDictionary.keys ()) :
    stringArray[0] += "  " + interruptName + " = " + str (interruptDictionary [interruptName]) + ",\n"
  stringArray[0] += "} ;\n\n"
  stringArray[0] += cppComment () + "\n"
  stringArray[0] += "inline void NVIC_ENABLE_IRQ (const ISRSlot inInterrupt) {\n"
  stringArray[0] += "  const uint32_t it = static_cast <uint32_t> (inInterrupt) ;\n"
  stringArray[0] += "  *((volatile uint32_t *) (0xE000E100 + 4 * (it >> 5))) = 1U << (it & 31) ;\n"
  stringArray[0] += "}\n\n"
  stringArray[0] += cppComment () + "\n"
  stringArray[0] += "inline void NVIC_DISABLE_IRQ (const ISRSlot inInterrupt) {\n"
  stringArray[0] += "  const uint32_t it = static_cast <uint32_t> (inInterrupt) ;\n"
  stringArray[0] += "  *((volatile uint32_t *) (0xE000E180 + 4 * (it >> 5))) = 1U << (it & 31) ;\n"
  stringArray[0] += "}\n\n"


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
    if register.find ('description') == None :
      print (BOLD_MAGENTA () + "*** Warning: no 'access' for " + registerName + " register" + ENDC ())
      registerDescription = ""
    else:
      registerDescription = register.find ('description').text
    registerOffset = register.find ('addressOffset').text
    registerSize = int (register.find ('size').text)
    if register.find ('access') == None :
      print (BOLD_MAGENTA () + "*** Warning: no 'access' for " + registerName + " register" + ENDC ())
      registerAccess = "read-only"
    else:
      registerAccess = register.find ('access').text
    # print ("  Register '" + registerName + "', offset " + registerOffset + ", size " + str (registerSize) + ", access " + registerAccess)
    constAttribute = "const " if registerAccess == "read-only" else ""
    registerType = constAttribute + "volatile uint" + str (registerSize) + "_t"
    if register.find ('dim') != None :
      registerDimension = int (register.find ('dim').text)
      dimensionIncrement = register.find ('dimIncrement').text
      actualRegName = registerName.replace ("%s", "")
      stringArray[0] += "//-------------------- " + registerDescription + " (idx = 0 ... " + str (registerDimension - 1) + ")\n"
      stringArray[0] += "#define " + peripheralName + "_" + actualRegName + "(idx) (* ((" + registerType + " *) (" + baseAddress + " + " + registerOffset + " + " + dimensionIncrement + " * (idx))))\n"
    else:
      stringArray[0] += "//-------------------- " + registerDescription + "\n"
      stringArray[0] += "#define " + peripheralName + "_" + registerName + " (* ((" + registerType + " *) (" + baseAddress + " + " + registerOffset + ")))\n"
#       stringArray[0] += "inline " + registerType + " & " + peripheralName + "_" + registerName + " (void) {\n"
#       stringArray[0] += "  const uint32_t address = " + baseAddress + " + " + registerOffset + " ;\n"
#       stringArray[0] += "  return * ((" + registerType + " *) address) ;\n"
#       stringArray[0] += "}\n\n"
    stringArray[0] += "\n"
    for field in register.iter ('field') :
      fieldName = field.find ('name').text
      if field.find ('description') == None :
        print (BOLD_MAGENTA () + "*** Warning: no 'description' for " + fieldName + " field of " + registerName + " register"+ ENDC ())
        fieldDescription = ""
      elif field.find ('description').text == None :
        print (BOLD_MAGENTA () + "*** Warning: no text for 'description' for " + fieldName + " field of " + registerName + " register"+ ENDC ())
        fieldDescription = ""
      else:
        fieldDescription = field.find ('description').text
      if field.find ('bitOffset') == None :
        print (BOLD_RED () + "*** Error: no 'bitOffset' for " + fieldName + " field of " + registerName + " register"+ ENDC ())
        fieldOffset = 0
      else:
        fieldOffset = int (field.find ('bitOffset').text)
      if field.find ('bitWidth') == None :
        print (BOLD_RED () + "*** Error: no 'bitWidth' for " + fieldName + " field of " + registerName + " register"+ ENDC ())
        fieldWidth = 1
      else:
        fieldWidth = int (field.find ('bitWidth').text)
      # print ("    Field '" + fieldName + "', from bit " + str (fieldOffset) + ", width " + str (fieldWidth))
      fieldType = "uint" + str (registerSize) + "_t"
      qualifiedFieldName = peripheralName + "_" + registerName.replace ("%s", "") + "_" + fieldName
      if fieldWidth == 1:
        stringArray[0] += "  // Boolean field: " + fieldDescription + "\n"
        stringArray[0] += "    static const " + fieldType + " " + qualifiedFieldName + " = 1U << " + str (fieldOffset) + " ;\n\n"
      elif fieldWidth != registerSize :
        stringArray[0] += "  // Field (width: " + str (fieldWidth) + " bits): " + fieldDescription + "\n"
        stringArray[0] += "    inline " + fieldType + " " + qualifiedFieldName + " (const " + fieldType + " inValue) { return (inValue & " + str ((1 << fieldWidth) - 1) + "U) << " + str (fieldOffset) + " ; }\n\n"

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
      registerType = constAttribute + "volatile uint" + str (registerSize) + "_t"
      if 'dim' in register :
        registerDimension = register ['dim']
        dimensionIncrement = register ['dimIncrement']
        actualRegName = registerName.replace ("%s", "")
        stringArray[0] += "//-------------------- " + registerDescription + " (idx = 0 ... " + str (registerDimension - 1) + ")\n"
        stringArray[0] += "#define " + key + "_" + actualRegName + "(group,idx) (* ((" + registerType + " *) (kBaseAddress_" + key + " [group] + " + registerOffset + " + " + dimensionIncrement + " * (idx))))\n"
        for i in range (0, len (peripheralNameArray)) :
          stringArray[0] += "#define " + peripheralNameArray [i] + "_" + actualRegName + "(idx) (* ((" + registerType + " *) (" + peripheralBaseAddressArray [i] + " + " + registerOffset + " + " + dimensionIncrement + " * (idx))))\n"
      else:
        stringArray[0] += "//-------------------- " + registerDescription + "\n"
        stringArray[0] += "#define " + key + "_" + registerName + "(group) (* ((" + registerType + " *) (kBaseAddress_" + key + " [group] + " + registerOffset + ")))\n"
        for i in range (0, len (peripheralNameArray)) :
          stringArray[0] += "#define " + peripheralNameArray [i] + "_" + registerName + " (* ((" + registerType + " *) (" + peripheralBaseAddressArray [i] + " + " + registerOffset + ")))\n"
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
          stringArray[0] += "    inline " + fieldType + " " + qualifiedFieldName + " (const " + fieldType + " inValue) { return (inValue & " + str ((1 << fieldWidth) - 1) + "U) << " + str (fieldOffset) + " ; }\n\n"

#----------------------------------------------------------------------------------------------------------------------*

def analyzeSVDfile (svdFile, stringArray) :
  print ("File " + BOLD_BLUE () + svdFile + ".svd" + ENDC ())
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
        if register.find ('access') == None :
          print (BOLD_MAGENTA () + "*** Warning: no 'access' for " + registerName + " register"+ ENDC ())
          registerPropertyDictionary ["access"] = "read-only"
        else:
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
        print (BOLD_RED () + "  Error with group named '" + groupName + "', peripheral '" + peripheralName + "'"+ ENDC ())
        if peripheralDictionary.keys () != peripheralGroupDictionary [groupName].keys () :
          print ("    register name error")
          print ("    Current registers: %s" % sorted (set (peripheralDictionary.keys ()) - set (peripheralGroupDictionary [groupName].keys ())))
          print ("    Other registers: %s" % sorted (set (peripheralGroupDictionary [groupName].keys ()) - set (peripheralDictionary.keys ())))
        else:
          for key in sorted (peripheralDictionary.keys ()) :
            currentReg = peripheralDictionary [key]
            otherReg = peripheralGroupDictionary [groupName] [key]
            if currentReg != otherReg :
               print (BOLD_RED () + "      Error for register '" + key + "'"+ ENDC ()) ;
      else:
        peripheralName = peripheral.find('name').text
        peripheralGroupNameDictionary [groupName].append (peripheralName)
        peripheralGroupBaseAddressDictionary [groupName].append (peripheralBaseAddress)
        # print ("  Ok with group named '" + groupName + "', peripheral '" + peripheralName + "'")
  writePeripheralGroups (peripheralGroupDictionary, peripheralGroupNameDictionary, peripheralGroupBaseAddressDictionary, stringArray)
  writeInterruptionNumbers (root, stringArray)
  writeBitbanding (stringArray)
  writeInterruptVectors (root, stringArray)

#----------------------------------------------------------------------------------------------------------------------*

#--- Get script absolute path
scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))
os.chdir (scriptDir)
for root, dirs, files in os.walk (scriptDir) :
  for name in files:
    (baseName, extension) = os.path.splitext (os.path.join (root, name))
    if extension == ".svd" :
      stringArray = ["#pragma once\n\n", "", ""] # C Header, vectors (assembly), interrupt names (python)
      stringArray [0] += cppComment () + "\n"
      stringArray [0] += "#include <stdint.h>\n\n"
      analyzeSVDfile (baseName, stringArray)
      stringArray[0] += cppComment ()
      f = open (baseName + ".h", "wt")
      f.write (stringArray [0])
      f.close()
      f = open (baseName + ".s", "wt")
      f.write (stringArray [1])
      f.close()
      f = open (baseName + ".py", "wt")
      f.write (stringArray [2])
      f.close()

#----------------------------------------------------------------------------------------------------------------------*
