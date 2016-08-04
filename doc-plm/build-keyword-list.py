#! /usr/bin/env python
# -*- coding: UTF-8 -*-

#----------------------------------------------------------------------------------------------------------------------*

import sys, os, subprocess, shutil

#----------------------------------------------------------------------------------------------------------------------*

#----------------------------------------------------------------- Get script absolute path
scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))
os.chdir (scriptDir)
#----------------------------------------------------------------- Build 
returnCode = subprocess.call (["python", "build.py"], cwd=scriptDir + "/../makefile-macosx")
if returnCode != 0 :
  sys.exit (returnCode)
#----------------------------------------------------------------- Get production rules in tex file 
returnCode = subprocess.call ([
  "galgas",
  "--output-grammar-rule-list-in-tex-files",
  scriptDir + "/../+plm.galgasProject"
])
if returnCode != 0 :
  sys.exit (returnCode)
#--- Copy result files
shutil.copy2 (scriptDir + "/../build/tex/plm_grammar.tex", scriptDir + "/grammaire/plm_grammar.tex")
shutil.copy2 (scriptDir + "/../build/tex/plm_target_grammar.tex", scriptDir + "/grammaire/plm_target_grammar.tex")
#----------------------------------------------------------------- Get keyword list 
returnCode = subprocess.call ([
  scriptDir + "/../makefile-macosx/plm",
  "--output-keyword-list-file=plm_lexique:keyWordList:5:\plm!:!:" + scriptDir + "/chapitres/keywordList.tex"
])
if returnCode != 0 :
  sys.exit (returnCode)
#----------------------------------------------------------------- Get delimiter list 
returnCode = subprocess.call ([
  scriptDir + "/../makefile-macosx/plm",
  "--output-keyword-list-file=plm_lexique:delimitorsList:12:\plm@:@:" + scriptDir + "/chapitres/delimiterList.tex"
])
if returnCode != 0 :
  sys.exit (returnCode)

#----------------------------------------------------------------------------------------------------------------------*
