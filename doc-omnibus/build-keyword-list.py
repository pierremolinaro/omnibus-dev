#! /usr/bin/env python
# -*- coding: UTF-8 -*-

#----------------------------------------------------------------------------------------------------------------------*

import sys, os, subprocess, shutil

#----------------------------------------------------------------------------------------------------------------------*

#----------------------------------------------------------------- Get script absolute path
scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))
os.chdir (scriptDir)
#----------------------------------------------------------------- Build
returnCode = subprocess.call (["python3", "build.py"], cwd=scriptDir + "/../makefile-macosx")
if returnCode != 0 :
  sys.exit (returnCode)
#----------------------------------------------------------------- Get production rules in tex file
returnCode = subprocess.call ([
  "galgas",
  "--emit-syntax-diagrams",
  scriptDir + "/../+omnibus.galgasProject"
])
if returnCode != 0 :
  sys.exit (returnCode)
#--- Copy result files
shutil.copy2 (scriptDir + "/../build/tex/omnibus_grammar.tex", scriptDir + "/grammaire/omnibus_grammar.tex")
shutil.copy2 (scriptDir + "/../build/tex/omnibus_target_grammar.tex", scriptDir + "/grammaire/omnibus_target_grammar.tex")
#----------------------------------------------------------------- Get keyword list
returnCode = subprocess.call ([
  scriptDir + "/../makefile-macosx/omnibus",
  "--output-keyword-list-file=omnibus_lexique:keyWordList:5:\omnibus!:!:" + scriptDir + "/chapitres/keywordList.tex"
])
if returnCode != 0 :
  sys.exit (returnCode)
#----------------------------------------------------------------- Get delimiter list
returnCode = subprocess.call ([
  scriptDir + "/../makefile-macosx/omnibus",
  "--output-keyword-list-file=omnibus_lexique:delimitorsList:12:\omnibus@:@:" + scriptDir + "/chapitres/delimiterList.tex"
])
if returnCode != 0 :
  sys.exit (returnCode)

#----------------------------------------------------------------------------------------------------------------------*
