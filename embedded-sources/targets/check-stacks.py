#! /usr/bin/env python
# -*- coding: utf-8 -*-

#----------------------------------------------------------------------------------------------------------------------*

import sys, os, json

#----------------------------------------------------------------------------------------------------------------------*

def printUTF8 (s) :
  print s.encode ('utf-8')

#----------------------------------------------------------------------------------------------------------------------*

def dictionaryFromJsonFile (file) :
  result = {}
  if not os.path.exists (os.path.abspath (file)):
    printUTF8 (u"Error: the '" + file + u"' file does not exist")
    sys.exit (1)
  try:
    f = open (file, "r")
    result = json.loads (f.read ())
    f.close ()
  except:
    printUTF8 (u"Syntax error in '" + file + u"' JSON file")
    sys.exit (1)
  return result

#----------------------------------------------------------------------------------------------------------------------*
#    MAIN                                                                                                              *
#----------------------------------------------------------------------------------------------------------------------*

ok = True
providedStacksJSONFile = sys.argv [1]
# print u"providedStacksJSONFile '" + providedStacksJSONFile + u"'"
stackAnalysisJSONFile = sys.argv [2]
# print u"stackAnalysisJSONFile '" + stackAnalysisJSONFile + u"'"
resultFile = sys.argv [3]
# print u"resultFile '" + resultFile + u"'"
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
resultContents += u"*----------------------------------------------------------------*\n"
resultContents += u"*   CHECK TASK STACKS                                            *\n"
resultContents += u"*----------------------------------------------------------------*\n\n"
resultContents += u"  Interrupt stacked register size: " + str (savedRegisterInUserStackByteCount) + u" bytes\n\n"
taskDictionary = requirementsDictionary ["tasks"]
for taskName in taskDictionary :
  unicodeTaskName = (taskName)
  availableStackSize = taskDictionary [unicodeTaskName]
  taskFunctionName = u"task.main." + unicodeTaskName
  if solvedFunctionDictionary.has_key (taskFunctionName) :
    stackRequirement = solvedFunctionDictionary [taskFunctionName] + savedRegisterInUserStackByteCount
    resultContents += u"  task '" + taskName + u"', provided stack: "
    resultContents += str (availableStackSize) + u" bytes, required: " + str (stackRequirement) + u"\n"
    if stackRequirement > availableStackSize:
      ok = False
      printUTF8 (u"Error: insufficient stack size for '" + unicodeTaskName + u"' task")
      resultContents += u"Error: insufficient stack size for '" + unicodeTaskName + u"' task\n"
  else:
    printUTF8 (u"Error: " + unicodeTaskName + u": unsolved '" + taskFunctionName + u"', cannot compute")
    resultContents += u"Error: " + unicodeTaskName + u": unsolved '" + taskFunctionName + u"', cannot compute\n"
    ok = False
resultContents += u"\n"
#--- Check services
resultContents += u"*----------------------------------------------------------------*\n"
resultContents += u"*   CHECK SERVICE STACK                                          *\n"
resultContents += u"*----------------------------------------------------------------*\n\n"
resultContents += u"  System stack: " + str (systemStackSize) + u" bytes\n"
resultContents += u"  Service handler stack needs: " + str (serviceStackRequirement) + u" bytes\n\n"
for serviceName in requirementsDictionary ["services"]:
  if solvedFunctionDictionary.has_key (serviceName) :
    stackRequirement = solvedFunctionDictionary [serviceName] + serviceStackRequirement
    resultContents += u"  Service '" + serviceName + u"', required stack: " + str (stackRequirement) + u"\n"
    if stackRequirement > systemStackSize:
      ok = False
      printUTF8 (u"Error: insufficient stack size for service '" + serviceName + u"' task")
      resultContents += u"Error: insufficient stack size for service '" + serviceName + u"' task\n"
  else:
    printUTF8 (u"Error: service u" + serviceName + u": unsolved")
    resultContents += u"Error: service " + serviceName + u": unsolved\n"
    ok = False
resultContents += u"\n"
#--- Check sections
resultContents += u"*----------------------------------------------------------------*\n"
resultContents += u"*   CHECK SECTION STACK                                          *\n"
resultContents += u"*----------------------------------------------------------------*\n\n"
resultContents += u"  System stack: " + str (systemStackSize) + u" bytes\n"
resultContents += u"  Section handler stack needs: " + str (sectionStackRequirement) + u" bytes\n\n"
for sectionName in requirementsDictionary ["sections"]:
  if solvedFunctionDictionary.has_key (sectionName) :
    stackRequirement = solvedFunctionDictionary [sectionName] + sectionStackRequirement
    resultContents += u"  Section '" + sectionName + u"', required stack: " + str (stackRequirement) + u"\n"
    if stackRequirement > systemStackSize:
      ok = False
      printUTF8 (u"Error: insufficient stack size for section '" + sectionName + u"' task")
      resultContents += u"Error: insufficient stack size for section '" + sectionName + u"' task\n"
  else:
    printUTF8 (u"Error: section " + sectionName + u": unsolved")
    resultContents += u"Error: section " + sectionName + u": unsolved\n"
    ok = False
resultContents += u"\n"
#--- Check sections
resultContents += u"*----------------------------------------------------------------*\n"
resultContents += u"*   CHECK INTERRUPT SERVICE ROUTINE STACKS                       *\n"
resultContents += u"*----------------------------------------------------------------*\n\n"
resultContents += u"  System stack: " + str (systemStackSize) + u" bytes\n"
#resultContents += u"  Section handler stack needs: " + str (sectionStackRequirement) + u" bytes\n\n"
for isr in requirementsDictionary ["isr"]:
  if solvedFunctionDictionary.has_key (isr) :
    stackRequirement = solvedFunctionDictionary [isr]
    resultContents += u"  ISR '" + isr + u"', required stack: " + str (stackRequirement) + u"\n"
    if stackRequirement > systemStackSize:
      ok = False
      printUTF8 (u"Error: insufficient stack size for isr '" + isr + u"' task")
      resultContents += u"Error: insufficient stack size for isr '" + isr + u"' task\n"
  else:
    printUTF8 (u"Error: isr " + isr + u": unsolved")
    resultContents += u"Error: isr " + isr + u": unsolved\n"
    ok = False
resultContents += u"\n"
#--- Write result file
resultContents += u"*----------------------------------------------------------------*\n"
f = open (resultFile, 'w')
f.write (resultContents.encode ('utf-8'))
f.close ()
#--- return
if not ok :
  sys.exit (1)
#----------------------------------------------------------------------------------------------------------------------*
