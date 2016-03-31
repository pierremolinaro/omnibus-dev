#! /usr/bin/env python
# -*- coding: UTF-8 -*-

#----------------------------------------------------------------------------------------------------------------------*

import sys, os, json

#----------------------------------------------------------------------------------------------------------------------*

def dictionaryFromJsonFile (file) :
  result = {}
  if not os.path.exists (os.path.abspath (file)):
    print "Error: the '" + file + "' file does not exist"
    sys.exit (1)
  try:
    f = open (file, "r")
    result = json.loads (f.read ())
    f.close ()
  except:
    print "Syntax error in '" + file + "' JSON file"
    sys.exit (1)
  return result

#----------------------------------------------------------------------------------------------------------------------*
#    MAIN                                                                                                              *
#----------------------------------------------------------------------------------------------------------------------*

ok = True
providedStacksJSONFile = sys.argv [1]
# print "providedStacksJSONFile '" + providedStacksJSONFile + "'"
stackAnalysisJSONFile = sys.argv [2]
# print "stackAnalysisJSONFile '" + stackAnalysisJSONFile + "'"
resultFile = sys.argv [3]
# print "resultFile '" + resultFile + "'"
resultContents = ""
#--- Read JSON file
requirementsDictionary = dictionaryFromJsonFile (providedStacksJSONFile)
stackAnalysisDictionary = dictionaryFromJsonFile (stackAnalysisJSONFile)
solvedFunctionDictionary = stackAnalysisDictionary ["solved"]
#--- Saved register byte count in user stack
savedRegisterInUserStackByteCount = requirementsDictionary ["stacked-register-size-on-user-stack"]
systemStackSize = requirementsDictionary ["system-stack-size"]
serviceStackRequirement = requirementsDictionary ["service-stack-needs"]
sectionStackRequirement = requirementsDictionary ["section-stack-needs"]
#--- Check task stacks
resultContents += "*----------------------------------------------------------------*\n"
resultContents += "*   CHECK TASK STACKS                                            *\n"
resultContents += "*----------------------------------------------------------------*\n\n"
resultContents += "  Interrupt stacked register size: " + str (savedRegisterInUserStackByteCount) + " bytes\n\n"
taskDictionary = requirementsDictionary ["tasks"]
for taskName in taskDictionary :
  availableStackSize = taskDictionary [taskName]
  taskFunctionName = "task.main." + taskName
  if solvedFunctionDictionary.has_key (taskFunctionName) :
    stackRequirement = solvedFunctionDictionary [taskFunctionName] + savedRegisterInUserStackByteCount
    resultContents += "  task '" + taskName + "', provided stack: "
    resultContents += str (availableStackSize) + " bytes, required: " + str (stackRequirement) + "\n"
    if stackRequirement > availableStackSize:
      ok = False
      print "Error: insufficient stack size for '" + taskName + "' task"
      resultContents += "Error: insufficient stack size for '" + taskName + "' task\n"
  else:
    print "Error: " + taskName + ": unsolved '" + taskFunctionName + "', cannot compute"
    resultContents += "Error: " + taskName + ": unsolved '" + taskFunctionName + "', cannot compute\n"
    ok = False
resultContents += "\n"
#--- Check services
resultContents += "*----------------------------------------------------------------*\n"
resultContents += "*   CHECK SERVICE STACK                                          *\n"
resultContents += "*----------------------------------------------------------------*\n\n"
resultContents += "  System stack: " + str (systemStackSize) + " bytes\n"
resultContents += "  Service handler stack needs: " + str (serviceStackRequirement) + " bytes\n\n"
for serviceName in requirementsDictionary ["services"]:
  if solvedFunctionDictionary.has_key (serviceName) :
    stackRequirement = solvedFunctionDictionary [serviceName] + serviceStackRequirement
    resultContents += "  Service '" + serviceName + "', required stack: " + str (stackRequirement) + "\n"
    if stackRequirement > systemStackSize:
      ok = False
      print "Error: insufficient stack size for service '" + serviceName + "' task"
      resultContents += "Error: insufficient stack size for service '" + serviceName + "' task\n"
  else:
    print "Error: service " + serviceName + ": unsolved"
    resultContents += "Error: service " + serviceName + ": unsolved\n"
    ok = False
resultContents += "\n"
#--- Check sections
resultContents += "*----------------------------------------------------------------*\n"
resultContents += "*   CHECK SECTION STACK                                          *\n"
resultContents += "*----------------------------------------------------------------*\n\n"
resultContents += "  System stack: " + str (systemStackSize) + " bytes\n"
resultContents += "  Section handler stack needs: " + str (sectionStackRequirement) + " bytes\n\n"
for sectionName in requirementsDictionary ["sections"]:
  if solvedFunctionDictionary.has_key (sectionName) :
    stackRequirement = solvedFunctionDictionary [sectionName] + sectionStackRequirement
    resultContents += "  Section '" + sectionName + "', required stack: " + str (stackRequirement) + "\n"
    if stackRequirement > systemStackSize:
      ok = False
      print "Error: insufficient stack size for section '" + sectionName + "' task"
      resultContents += "Error: insufficient stack size for section '" + sectionName + "' task\n"
  else:
    print "Error: section " + sectionName + ": unsolved"
    resultContents += "Error: section " + sectionName + ": unsolved\n"
    ok = False
resultContents += "\n"
#--- Check sections
resultContents += "*----------------------------------------------------------------*\n"
resultContents += "*   CHECK INTERRUPT SERVICE ROUTINE STACKS                       *\n"
resultContents += "*----------------------------------------------------------------*\n\n"
resultContents += "  System stack: " + str (systemStackSize) + " bytes\n"
#resultContents += "  Section handler stack needs: " + str (sectionStackRequirement) + " bytes\n\n"
for isr in requirementsDictionary ["isr"]:
  if solvedFunctionDictionary.has_key (isr) :
    stackRequirement = solvedFunctionDictionary [isr]
    resultContents += "  ISR '" + isr + "', required stack: " + str (stackRequirement) + "\n"
    if stackRequirement > systemStackSize:
      ok = False
      print "Error: insufficient stack size for isr '" + isr + "' task"
      resultContents += "Error: insufficient stack size for isr '" + isr + "' task\n"
  else:
    print "Error: isr " + isr + ": unsolved"
    resultContents += "Error: isr " + isr + ": unsolved\n"
    ok = False
resultContents += "\n"
#--- Write result file
resultContents += "*----------------------------------------------------------------*\n"
f = open (resultFile, 'w')
f.write (resultContents)
f.close ()
#--- return
if not ok :
  sys.exit (1)
#----------------------------------------------------------------------------------------------------------------------*
