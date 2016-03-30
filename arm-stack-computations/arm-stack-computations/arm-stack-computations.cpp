//
//  main.cpp
//  arm-stack-computations
//
//  Created by Pierre Molinaro on 29/03/2016.
//  Copyright © 2016 Pierre Molinaro. All rights reserved.
//
//----------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <set>
#include <map>

//----------------------------------------------------------------------------------------------------------------------

class cFunction {
 // public : const std::string mCurrentFunctionName ; // If empty, outside function
  public : const std::set <std::string> mCalledSubroutineSet ;
  public : const std::set <std::string> mBranchedSubroutineSet ;
  public : const int mSavedRegisterCount ;
  public : const int mPadWordCount ;
  
  public : cFunction (const std::set <std::string> & inCalledSubroutineSet,
                      const std::set <std::string> & inBranchedSubroutineSet,
                      const int inSavedRegisterCount,
                      const int inPadWordCount) :
  mCalledSubroutineSet (inCalledSubroutineSet),
  mBranchedSubroutineSet (inBranchedSubroutineSet),
  mSavedRegisterCount (inSavedRegisterCount),
  mPadWordCount (inPadWordCount) {
  }
} ;

//----------------------------------------------------------------------------------------------------------------------

static std::map <std::string, cFunction> gFunctionMap ;

//----------------------------------------------------------------------------------------------------------------------

static std::string gCurrentLabelName ; // Set whenever a label is defined

static std::string gCurrentFunctionName ; // If empty, outside function
static std::set <std::string> gCalledSubroutineSet ;
static std::set <std::string> gBranchedSubroutineSet ;
static int gSavedRegisterCount = 0 ;
static int gPadWordCount = 0 ;

//----------------------------------------------------------------------------------------------------------------------

static void errorForLine (const std::string & inLine, const int inLineNumber, const int inColumn, const char * inMessage) {
  std::cout << "Error: " << inMessage << " at " << inLineNumber << ":" << inColumn << "\n" << inLine ;
  for (int i=1 ; i<inColumn ; i++) {
    std::cout << "-" ;
  }
  std::cout << "^\n" ;
  exit (1) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void startOfFunction (const std::string & inLine, const int inLineNumber, const int inColumn) {
  if (gCurrentFunctionName.length() > 0) {
    errorForLine (inLine, inLineNumber, inColumn, "enter function, already within a function") ;
  }else if (gCurrentLabelName.length() == 0) {
    errorForLine (inLine, inLineNumber, inColumn, "enter function, no current label") ;
  }else{
    gCurrentFunctionName = gCurrentLabelName ;
    gCalledSubroutineSet.clear() ;
    gBranchedSubroutineSet.clear() ;
    gSavedRegisterCount = 0 ;
    gPadWordCount = 0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void endOfFunction (const std::string & inLine, const int inLineNumber, const int inColumn) {
  if (gCurrentFunctionName.length() == 0) {
    errorForLine (inLine, inLineNumber, inColumn, "end of function, no current function function") ;
  }
  const cFunction f (gCalledSubroutineSet, gBranchedSubroutineSet, gSavedRegisterCount, gPadWordCount) ;
  gFunctionMap.insert (std::pair <std::string, cFunction> (gCurrentFunctionName, f)) ;
  gCurrentFunctionName = "" ;
  gCurrentLabelName = "" ;
}

//----------------------------------------------------------------------------------------------------------------------

static bool isNameFirstChar (const char inChar) {
  bool result = isalpha (inChar) ;
  if (! result) {
    result = (inChar == '.') || (inChar == '_') ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static bool isNameChar (const char inChar) {
  bool result = isalnum (inChar) ;
  if (! result) {
    result = (inChar == '.') || (inChar == '_') || (inChar == '$') ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static std::string decodeNameFromLine (const std::string & inLine, const int inLineNumber, int & ioColumn) {
  std::string result ;
  if (!isNameFirstChar (inLine [ioColumn])) {
    errorForLine (inLine, inLineNumber, ioColumn, "invalid label first char") ;
  }else{
    do {
      result += inLine [ioColumn] ;
      ioColumn ++ ;
    }while (isNameChar (inLine [ioColumn])) ;
  }
  return result ;
}


//----------------------------------------------------------------------------------------------------------------------

static int decodeNumberFromLine (const std::string & inLine, const int inLineNumber, int & ioColumn) {
  int result = 0 ;
  if (!isnumber (inLine [ioColumn])) {
    errorForLine (inLine, inLineNumber, ioColumn, "invalid number first char") ;
  }else{
    do {
      result *= 10 ;
      result += inLine [ioColumn] - '0' ;
      ioColumn ++ ;
    }while (isnumber (inLine [ioColumn])) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static void passSpaces (const std::string & inLine, int & ioColumn) {
  while ((inLine [ioColumn] == ' ') || (inLine [ioColumn] == 0x9)) {
    ioColumn ++ ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static bool nameIsBranchInstruction (const std::string & inName) {
  const char * kBranchInstructions [] = {
    "b", "bal", "beq", "bne", "bpl", "bmi", "bcc", "blo", "bcs", "bhs",
    "bvc", "bvs", "bgt", "bge", "blt", "ble", "bhi", "bls",
    NULL
  } ;
  int idx = 0 ;
  bool result = false ;
  while (!result && (kBranchInstructions [idx] != NULL)) {
    result = inName == kBranchInstructions [idx] ;
    idx ++ ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static bool nameIsBranchLinkInstruction (const std::string & inName) {
  const char * kBranchInstructions [] = {
    "bl", "blal", "bleq", "blne", "blpl", "blmi", "blcc", "bllo", "blcs", "blhs",
    "blvc", "blvs", "blgt", "blge", "bllt", "blle", "blhi", "blls",
    NULL
  } ;
  int idx = 0 ;
  bool result = false ;
  while (!result && (kBranchInstructions [idx] != NULL)) {
    result = inName == kBranchInstructions [idx] ;
    idx ++ ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static int getSavedRegisterCount (const std::string & inLine, const int inLineNumber, int & ioColumn) {
  int result = 0 ;
  passSpaces (inLine, ioColumn) ;
  const bool ok = inLine [ioColumn] == '{' ;
  if (!ok) {
    errorForLine (inLine, inLineNumber, ioColumn, "'{' required") ;
  }else{
    do{
      ioColumn ++ ; // Pass '{'
      passSpaces (inLine, ioColumn) ;
      decodeNameFromLine (inLine, inLineNumber, ioColumn) ;
      result ++ ;
      passSpaces (inLine, ioColumn) ;
    }while (inLine [ioColumn] == ',') ;
    if (inLine [ioColumn] != '}') {
      errorForLine (inLine, inLineNumber, ioColumn, "'}' required") ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void analyzeLine (const std::string & inLine, const int inLineNumber) {
  if ((inLine [0] == ' ') || (inLine [0] == 0x9)) { // Space of htab
  //--- Pass spaces and htabs
    int column = 0 ;
    passSpaces (inLine, column) ;
  //--- Analyze line
    if (isNameFirstChar (inLine [column])) { // Name
      const std::string name = decodeNameFromLine (inLine, inLineNumber, column) ;
      if (name == ".fnstart") {
        startOfFunction (inLine, inLineNumber, column) ;
        // std::cout << inLineNumber << ": '.fnstart'\n" ;
      }else if (name == ".fnend") {
        endOfFunction (inLine, inLineNumber, column) ;
        // std::cout << inLineNumber << ": '.fnend'\n" ;
      }else if (name == ".save") {
        const int n = getSavedRegisterCount (inLine, inLineNumber, column) ;
        if (gSavedRegisterCount == 0) {
          gSavedRegisterCount = n ;
        }else{
          errorForLine (inLine, inLineNumber, column, "duplicated .save") ;
        }
        // std::cout << inLineNumber << ": '.save' " << n << "\n" ;
      }else if (name == ".pad") {
        //std::cout << inLineNumber << ": '.pad'\n" ;
        passSpaces (inLine, column) ;
        if (inLine [column] == '#') {
          column ++ ;
          passSpaces (inLine, column) ;
          const int n = decodeNumberFromLine (inLine, inLineNumber, column) ;
          if ((n % 4) != 0) {
            errorForLine (inLine, inLineNumber, column, "pad with is not a multiple of 4") ;
          }else if (gPadWordCount != 0) {
            errorForLine (inLine, inLineNumber, column, "duplicated .pad") ;
          }else{
            gPadWordCount = n / 4 ;
          }
        }else{
          errorForLine (inLine, inLineNumber, column, "'#' expected") ;
        }
      }else if (nameIsBranchInstruction (name)) {
        passSpaces (inLine, column) ;
        if (isNameFirstChar (inLine [column])) { // Name
          const std::string branchTarget = decodeNameFromLine (inLine, inLineNumber, column) ;
          if (branchTarget [0] != '.') {
            gBranchedSubroutineSet.insert (branchTarget) ;
          }
          // std::cout << inLineNumber << ": branch '" << name << "' to '" << branchTarget << "'\n" ;
        }else{
          errorForLine (inLine, inLineNumber, column, "invalid branch target") ;
        }
      }else if (nameIsBranchLinkInstruction (name)) {
        passSpaces (inLine, column) ;
        if (isNameFirstChar (inLine [column])) { // Name
          const std::string branchTarget = decodeNameFromLine (inLine, inLineNumber, column) ;
          if (branchTarget [0] != '.') {
            gCalledSubroutineSet.insert (branchTarget) ;
          }
          // std::cout << inLineNumber << ": branchLink '" << name << "' to '" << branchTarget << "'\n" ;
        }else{
          errorForLine (inLine, inLineNumber, column, "invalid bl target") ;
        }
      }
    }else if ((inLine [column] != '@') && (inLine [column] != '\n')) { // Comment or empty line ?
      errorForLine (inLine, inLineNumber, column, "invalid line") ;
    }
  }else if (isNameFirstChar (inLine [0])) { // Label at column 0
    int column = 0 ;
    const std::string name = decodeNameFromLine (inLine, inLineNumber, column) ;
    bool ok = inLine [column] == ':' ;
    if (ok) {
      // std::cout << inLineNumber << ": '" << name << "'\n" ;
      gCurrentLabelName = name ;
    }
  }else if ((inLine [0] != '@') && (inLine [0] != '\n')) { // Comment or empty line ?
    errorForLine (inLine, inLineNumber, 1, "invalid line") ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void analyzeAssemblyFile (const char * inFilePath) {
  std::ifstream f (inFilePath) ;
  std::string line ;
  int lineNumber = 1 ;
  while (std::getline (f, line)) {
    analyzeLine (line + '\n', lineNumber) ;
    lineNumber ++ ;
  }
  f.close () ;
}

//----------------------------------------------------------------------------------------------------------------------

static void computeStackRequirements (const bool inVerbose, std::string & ioJSONResult) {
  std::map <std::string, int> gSolvedFunctionMap ;
  std::map <std::string, cFunction> unsolvedFunctionMap = gFunctionMap ;
  bool loop = true ;
  while (loop && unsolvedFunctionMap.size () > 0) {
    loop = false ;
    const std::map <std::string, cFunction> temp = unsolvedFunctionMap ;
    unsolvedFunctionMap.clear() ;
    for (auto mapIt=temp.cbegin(); mapIt != temp.cend(); ++mapIt) {
      bool allSolved = true ;
      int calledRoutineStackNeeds = 0 ;
    //--- All called subroutine solved ?
      for (auto subroutineIt = mapIt->second.mCalledSubroutineSet.cbegin();
           allSolved && (subroutineIt != mapIt->second.mCalledSubroutineSet.cend()) ;
           ++subroutineIt) {
        allSolved = gSolvedFunctionMap.count (*subroutineIt) > 0 ;
        if (allSolved) {
          const int n = gSolvedFunctionMap.find (*subroutineIt)->second ;
          if (calledRoutineStackNeeds < n) {
            calledRoutineStackNeeds = n ;
          }
        }
      }
    //--- All branched subroutine solved ?
      int branchedRoutineStackNeeds = 0 ;
      for (auto subroutineIt = mapIt->second.mBranchedSubroutineSet.cbegin();
           allSolved && (subroutineIt != mapIt->second.mBranchedSubroutineSet.cend()) ;
           ++subroutineIt) {
        allSolved = gSolvedFunctionMap.count (*subroutineIt) > 0 ;
        if (allSolved) {
          const int n = gSolvedFunctionMap.find (*subroutineIt)->second ;
          if (branchedRoutineStackNeeds < n) {
            branchedRoutineStackNeeds = n ;
          }
        }
      }
    //--- If solved, enter in solved map ; if not, enter un unsolved map
      if (allSolved) {
        calledRoutineStackNeeds += mapIt->second.mPadWordCount + mapIt->second.mSavedRegisterCount ;
        const int stackNeeds = (calledRoutineStackNeeds > branchedRoutineStackNeeds) ? calledRoutineStackNeeds : branchedRoutineStackNeeds ;
        gSolvedFunctionMap.insert (std::pair <std::string, int> (mapIt->first, stackNeeds)) ;
        if (inVerbose) {
          std::cout << "SOLVED '" << mapIt->first << "', " << stackNeeds << " word(s)\n" ;
        }
        loop = true ;
      }else{
        unsolvedFunctionMap.insert (*mapIt) ;
      }
    }
  }
//--- Not solved keys
  for (auto mapIt=unsolvedFunctionMap.cbegin(); mapIt != unsolvedFunctionMap.cend(); ++mapIt) {
    if (inVerbose) {
      std::cout << "NOT SOLVED '" << mapIt->first << "'\n" ;
    }
    for (auto subroutineIt = mapIt->second.mCalledSubroutineSet.cbegin();
         subroutineIt != mapIt->second.mCalledSubroutineSet.cend() ;
         ++subroutineIt) {
      const bool solved = gSolvedFunctionMap.count (*subroutineIt) > 0 ;
      if (inVerbose) {
        std::cout << "  call '" << *subroutineIt << "', " << (solved ? "solved" : "???") << "\n" ;
      }
    }
    for (auto subroutineIt = mapIt->second.mBranchedSubroutineSet.cbegin();
         subroutineIt != mapIt->second.mBranchedSubroutineSet.cend() ;
         ++subroutineIt) {
      const bool solved = gSolvedFunctionMap.count (*subroutineIt) > 0 ;
      if (inVerbose) {
        std::cout << "  branch '" << *subroutineIt << "', " << (solved ? "solved" : "???") << "\n" ;
      }
    }
  }
//--- Build JSON file
  ioJSONResult += "{\n" ;
  ioJSONResult += "  \"solved\" : {\n" ;
  bool first = true ;
  for (auto mapIt=gSolvedFunctionMap.cbegin(); mapIt != gSolvedFunctionMap.cend(); ++mapIt) {
    if (first) {
      first = false ;
    }else{
      ioJSONResult += ",\n" ;
    }
    ioJSONResult += "    \"" + mapIt->first + "\" : " + std::to_string (mapIt->second) ;
  }
  if (!first) {
    ioJSONResult += "\n" ;
  }
  ioJSONResult += "  }\n" ;
  ioJSONResult += "  \"undefined\" : {\n" ;
  first = true ;
  for (auto mapIt=unsolvedFunctionMap.cbegin(); mapIt != unsolvedFunctionMap.cend(); ++mapIt) {
    if (first) {
      first = false ;
    }else{
      ioJSONResult += ",\n" ;
    }
    ioJSONResult += "    \"" + mapIt->first + "\" : {\n" ;
    bool firstSecondary = true ;
    for (auto subroutineIt = mapIt->second.mCalledSubroutineSet.cbegin();
         subroutineIt != mapIt->second.mCalledSubroutineSet.cend() ;
         ++subroutineIt) {
      if (firstSecondary) {
        firstSecondary = false ;
      }else{
        ioJSONResult += ",\n" ;
      }
      const bool solved = gSolvedFunctionMap.count (*subroutineIt) > 0 ;
      ioJSONResult += "      \"" + *subroutineIt + "\" : " + (solved ? "true" : "false") ;
    }
    for (auto subroutineIt = mapIt->second.mBranchedSubroutineSet.cbegin();
         subroutineIt != mapIt->second.mBranchedSubroutineSet.cend() ;
         ++subroutineIt) {
      if (firstSecondary) {
        firstSecondary = false ;
      }else{
        ioJSONResult += ",\n" ;
      }
      const bool solved = gSolvedFunctionMap.count (*subroutineIt) > 0 ;
      ioJSONResult += "      \"" + *subroutineIt + "\" : " + (solved ? "true" : "false") ;
    }
    if (!firstSecondary) {
      ioJSONResult += "\n" ;
    }
    ioJSONResult += "    }" ;
  }
  if (!first) {
    ioJSONResult += "\n" ;
  }
  ioJSONResult += "  }\n" ;
  ioJSONResult += "}\n" ;
}

//----------------------------------------------------------------------------------------------------------------------

int main (int argc, const char * argv[]) {
  std::string outputFile ;
  bool verbose = false ;
  bool outputOptionOn = false ;
  for (int i=1 ; i < argc ; i++) {
    if (strcmp (argv [i], "-v") == 0) {
      verbose = true ;
    }else if (strcmp (argv [i], "-o") == 0) {
      if (outputOptionOn) {
        std::cout << "Error: \"-o\" command line option followed by \"-o\"\n" ;
        exit (1) ;
      }
      outputOptionOn = true ;
    }else{
      if (outputOptionOn) {
        if (outputFile.size () > 0) {
          std::cout << "Error: duplicated \"-o\" command line option\n" ;
          exit (1) ;
        }
        outputFile += argv [i] ;
        outputOptionOn = false ;
      }else{
        analyzeAssemblyFile (argv [i]) ;
      }
    }
  }
  if (outputOptionOn) {
    std::cout << "Error: \"-o\" is the last command line option\n" ;
    exit (1) ;
  }
  std::string jsonResult ;
  computeStackRequirements (verbose, jsonResult) ;
  if (verbose) {
    std::cout << "--- JSON result -----------------------------------------\n" ;
    std::cout << jsonResult << "\n" ;
    std::cout << "---------------------------------------------------------\n" ;
  }
  if (outputFile.size () > 0) {
    std::ofstream f (outputFile) ;
    f << jsonResult ;
    f.close () ;
  }
  return 0 ;
}

//----------------------------------------------------------------------------------------------------------------------
