#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-8.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "utilities/MF_MemoryControl.h"
#include "galgas2/C_galgas_CLI_Options.h"

#include "files/C_FileManager.h"

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                       N O N    T E R M I N A L    N A M E S                                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const char * gNonTerminalNames_omnibus_target_grammar [14] = {
  "<configuration_key>",// Index 0
  "<python_utility_tool_list>",// Index 1
  "<configuration_start_symbol>",// Index 2
  "<interruptConfigList>",// Index 3
  "<select_omnibus_5F_target_5F_specific_5F_syntax_0>",// Index 4
  "<select_omnibus_5F_target_5F_specific_5F_syntax_1>",// Index 5
  "<select_omnibus_5F_target_5F_specific_5F_syntax_2>",// Index 6
  "<select_omnibus_5F_target_5F_specific_5F_syntax_3>",// Index 7
  "<select_omnibus_5F_target_5F_specific_5F_syntax_4>",// Index 8
  "<select_omnibus_5F_target_5F_specific_5F_syntax_5>",// Index 9
  "<select_omnibus_5F_target_5F_specific_5F_syntax_6>",// Index 10
  "<select_omnibus_5F_target_5F_specific_5F_syntax_7>",// Index 11
  "<select_omnibus_5F_target_5F_specific_5F_syntax_8>",// Index 12
  "<>"// Index 13
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                S L R    A N A L Y Z E R    A C T I O N    T A B L E                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

// Action tables handle shift and reduce actions ;
//  - a shift action is (terminal_symbol, SHIFT (n)) : if shifts to state n ;
//  - the accept action is (terminal_symbol, ACCEPT) ;
//  - a reduce action is (terminal_symbol, REDUCE (n)) ; if reduces to state n.

#define SHIFT(a) ((a) + 2)
#define REDUCE(a) (-(a) - 1)
#define ACCEPT (1)
#define END (-1)

static const int16_t gActionTable_omnibus_target_grammar [] = {
// State S0 (index = 0)
  C_Lexique_omnibus_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S1 (index = 3)
, C_Lexique_omnibus_5F_lexique::kToken__3A_, SHIFT (5)
, END
// State S2 (index = 6)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, REDUCE (4)
, C_Lexique_omnibus_5F_lexique::kToken__22_string_22_, SHIFT (6)
, END
// State S3 (index = 11)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S4 (index = 14)
, C_Lexique_omnibus_5F_lexique::kToken_, ACCEPT
, END
// State S5 (index = 17)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, REDUCE (0)
, C_Lexique_omnibus_5F_lexique::kToken__22_string_22_, REDUCE (0)
, C_Lexique_omnibus_5F_lexique::kToken__24_type, REDUCE (0)
, C_Lexique_omnibus_5F_lexique::kToken_integer, REDUCE (0)
, C_Lexique_omnibus_5F_lexique::kToken_yes, REDUCE (0)
, C_Lexique_omnibus_5F_lexique::kToken_no, REDUCE (0)
, C_Lexique_omnibus_5F_lexique::kToken_, REDUCE (0)
, END
// State S6 (index = 32)
, C_Lexique_omnibus_5F_lexique::kToken__2D__3E_, SHIFT (9)
, END
// State S7 (index = 35)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, REDUCE (1)
, END
// State S8 (index = 38)
, C_Lexique_omnibus_5F_lexique::kToken__22_string_22_, SHIFT (10)
, END
// State S9 (index = 41)
, C_Lexique_omnibus_5F_lexique::kToken__22_string_22_, SHIFT (11)
, END
// State S10 (index = 44)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S11 (index = 47)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, REDUCE (4)
, C_Lexique_omnibus_5F_lexique::kToken__22_string_22_, SHIFT (6)
, END
// State S12 (index = 52)
, C_Lexique_omnibus_5F_lexique::kToken__22_string_22_, SHIFT (14)
, END
// State S13 (index = 55)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, REDUCE (5)
, END
// State S14 (index = 58)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S15 (index = 61)
, C_Lexique_omnibus_5F_lexique::kToken__24_type, SHIFT (16)
, END
// State S16 (index = 64)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S17 (index = 67)
, C_Lexique_omnibus_5F_lexique::kToken__24_type, SHIFT (18)
, END
// State S18 (index = 70)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S19 (index = 73)
, C_Lexique_omnibus_5F_lexique::kToken_integer, SHIFT (20)
, END
// State S20 (index = 76)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S21 (index = 79)
, C_Lexique_omnibus_5F_lexique::kToken_yes, SHIFT (22)
, C_Lexique_omnibus_5F_lexique::kToken_no, SHIFT (23)
, END
// State S22 (index = 84)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, REDUCE (6)
, END
// State S23 (index = 87)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, REDUCE (7)
, END
// State S24 (index = 90)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S25 (index = 93)
, C_Lexique_omnibus_5F_lexique::kToken_integer, SHIFT (26)
, END
// State S26 (index = 96)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S27 (index = 99)
, C_Lexique_omnibus_5F_lexique::kToken__22_string_22_, SHIFT (28)
, END
// State S28 (index = 102)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S29 (index = 105)
, C_Lexique_omnibus_5F_lexique::kToken_integer, SHIFT (30)
, C_Lexique_omnibus_5F_lexique::kToken_no, SHIFT (31)
, END
// State S30 (index = 110)
, C_Lexique_omnibus_5F_lexique::kToken_integer, SHIFT (33)
, END
// State S31 (index = 113)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, REDUCE (8)
, END
// State S32 (index = 116)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S33 (index = 119)
, C_Lexique_omnibus_5F_lexique::kToken_integer, SHIFT (35)
, END
// State S34 (index = 122)
, C_Lexique_omnibus_5F_lexique::kToken__22_string_22_, SHIFT (36)
, END
// State S35 (index = 125)
, C_Lexique_omnibus_5F_lexique::kToken_integer, SHIFT (37)
, END
// State S36 (index = 128)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S37 (index = 131)
, C_Lexique_omnibus_5F_lexique::kToken_integer, SHIFT (39)
, END
// State S38 (index = 134)
, C_Lexique_omnibus_5F_lexique::kToken_integer, SHIFT (40)
, END
// State S39 (index = 137)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, REDUCE (9)
, END
// State S40 (index = 140)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S41 (index = 143)
, C_Lexique_omnibus_5F_lexique::kToken__22_string_22_, SHIFT (42)
, END
// State S42 (index = 146)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S43 (index = 149)
, C_Lexique_omnibus_5F_lexique::kToken__22_string_22_, SHIFT (44)
, END
// State S44 (index = 152)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S45 (index = 155)
, C_Lexique_omnibus_5F_lexique::kToken__22_string_22_, SHIFT (46)
, END
// State S46 (index = 158)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S47 (index = 161)
, C_Lexique_omnibus_5F_lexique::kToken__22_string_22_, SHIFT (48)
, END
// State S48 (index = 164)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S49 (index = 167)
, C_Lexique_omnibus_5F_lexique::kToken__22_string_22_, SHIFT (50)
, END
// State S50 (index = 170)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S51 (index = 173)
, C_Lexique_omnibus_5F_lexique::kToken_integer, SHIFT (52)
, END
// State S52 (index = 176)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S53 (index = 179)
, C_Lexique_omnibus_5F_lexique::kToken__22_string_22_, SHIFT (54)
, END
// State S54 (index = 182)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S55 (index = 185)
, C_Lexique_omnibus_5F_lexique::kToken__22_string_22_, SHIFT (56)
, END
// State S56 (index = 188)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S57 (index = 191)
, C_Lexique_omnibus_5F_lexique::kToken__22_string_22_, SHIFT (58)
, END
// State S58 (index = 194)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S59 (index = 197)
, C_Lexique_omnibus_5F_lexique::kToken__22_string_22_, SHIFT (60)
, END
// State S60 (index = 200)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S61 (index = 203)
, C_Lexique_omnibus_5F_lexique::kToken__22_string_22_, SHIFT (62)
, END
// State S62 (index = 206)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S63 (index = 209)
, C_Lexique_omnibus_5F_lexique::kToken_integer, SHIFT (64)
, END
// State S64 (index = 212)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S65 (index = 215)
, C_Lexique_omnibus_5F_lexique::kToken__22_string_22_, SHIFT (66)
, END
// State S66 (index = 218)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S67 (index = 221)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, REDUCE (10)
, C_Lexique_omnibus_5F_lexique::kToken__22_string_22_, SHIFT (68)
, END
// State S68 (index = 226)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, REDUCE (10)
, C_Lexique_omnibus_5F_lexique::kToken__22_string_22_, SHIFT (68)
, END
// State S69 (index = 231)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S70 (index = 234)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, REDUCE (11)
, END
// State S71 (index = 237)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, REDUCE (12)
, C_Lexique_omnibus_5F_lexique::kToken__22_string_22_, SHIFT (72)
, END
// State S72 (index = 242)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, REDUCE (12)
, C_Lexique_omnibus_5F_lexique::kToken__22_string_22_, SHIFT (72)
, END
// State S73 (index = 247)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S74 (index = 250)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, REDUCE (13)
, END
// State S75 (index = 253)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, REDUCE (14)
, C_Lexique_omnibus_5F_lexique::kToken__22_string_22_, SHIFT (76)
, END
// State S76 (index = 258)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, REDUCE (14)
, C_Lexique_omnibus_5F_lexique::kToken__22_string_22_, SHIFT (76)
, END
// State S77 (index = 263)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S78 (index = 266)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, REDUCE (15)
, END
// State S79 (index = 269)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, REDUCE (16)
, C_Lexique_omnibus_5F_lexique::kToken__22_string_22_, SHIFT (80)
, END
// State S80 (index = 274)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, REDUCE (16)
, C_Lexique_omnibus_5F_lexique::kToken__22_string_22_, SHIFT (80)
, END
// State S81 (index = 279)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S82 (index = 282)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, REDUCE (17)
, END
// State S83 (index = 285)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, SHIFT (85)
, C_Lexique_omnibus_5F_lexique::kToken_, REDUCE (18)
, END
// State S84 (index = 290)
, C_Lexique_omnibus_5F_lexique::kToken_, REDUCE (2)
, END
// State S85 (index = 293)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, REDUCE (20)
, C_Lexique_omnibus_5F_lexique::kToken__2D__3E_, SHIFT (87)
, C_Lexique_omnibus_5F_lexique::kToken_, REDUCE (20)
, END
// State S86 (index = 300)
, C_Lexique_omnibus_5F_lexique::kToken_, REDUCE (3)
, END
// State S87 (index = 303)
, C_Lexique_omnibus_5F_lexique::kToken_integer, SHIFT (89)
, END
// State S88 (index = 306)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, SHIFT (85)
, C_Lexique_omnibus_5F_lexique::kToken_, REDUCE (18)
, END
// State S89 (index = 311)
, C_Lexique_omnibus_5F_lexique::kToken_identifier, REDUCE (21)
, C_Lexique_omnibus_5F_lexique::kToken_, REDUCE (21)
, END
// State S90 (index = 316)
, C_Lexique_omnibus_5F_lexique::kToken_, REDUCE (19)
, END} ;

static const uint32_t gActionTableIndex_omnibus_target_grammar [91] = {
  0  // S0
, 3  // S1
, 6  // S2
, 11  // S3
, 14  // S4
, 17  // S5
, 32  // S6
, 35  // S7
, 38  // S8
, 41  // S9
, 44  // S10
, 47  // S11
, 52  // S12
, 55  // S13
, 58  // S14
, 61  // S15
, 64  // S16
, 67  // S17
, 70  // S18
, 73  // S19
, 76  // S20
, 79  // S21
, 84  // S22
, 87  // S23
, 90  // S24
, 93  // S25
, 96  // S26
, 99  // S27
, 102  // S28
, 105  // S29
, 110  // S30
, 113  // S31
, 116  // S32
, 119  // S33
, 122  // S34
, 125  // S35
, 128  // S36
, 131  // S37
, 134  // S38
, 137  // S39
, 140  // S40
, 143  // S41
, 146  // S42
, 149  // S43
, 152  // S44
, 155  // S45
, 158  // S46
, 161  // S47
, 164  // S48
, 167  // S49
, 170  // S50
, 173  // S51
, 176  // S52
, 179  // S53
, 182  // S54
, 185  // S55
, 188  // S56
, 191  // S57
, 194  // S58
, 197  // S59
, 200  // S60
, 203  // S61
, 206  // S62
, 209  // S63
, 212  // S64
, 215  // S65
, 218  // S66
, 221  // S67
, 226  // S68
, 231  // S69
, 234  // S70
, 237  // S71
, 242  // S72
, 247  // S73
, 250  // S74
, 253  // S75
, 258  // S76
, 263  // S77
, 266  // S78
, 269  // S79
, 274  // S80
, 279  // S81
, 282  // S82
, 285  // S83
, 290  // S84
, 293  // S85
, 300  // S86
, 303  // S87
, 306  // S88
, 311  // S89
, 316  // S90
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                            SLR states successors table                                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

// Successor tables handle non terminal successors ;
// an entry is (non_terminal_symbol, n) ; successor is state n.

static const int16_t gSuccessorTable_omnibus_target_grammar_0 [7] = {0, 2,
  1, 3,
  2, 4, -1} ;

static const int16_t gSuccessorTable_omnibus_target_grammar_2 [3] = {4, 7, -1} ;

static const int16_t gSuccessorTable_omnibus_target_grammar_3 [3] = {0, 8, -1} ;

static const int16_t gSuccessorTable_omnibus_target_grammar_10 [3] = {0, 12, -1} ;

static const int16_t gSuccessorTable_omnibus_target_grammar_11 [3] = {4, 13, -1} ;

static const int16_t gSuccessorTable_omnibus_target_grammar_14 [3] = {0, 15, -1} ;

static const int16_t gSuccessorTable_omnibus_target_grammar_16 [3] = {0, 17, -1} ;

static const int16_t gSuccessorTable_omnibus_target_grammar_18 [3] = {0, 19, -1} ;

static const int16_t gSuccessorTable_omnibus_target_grammar_20 [3] = {0, 21, -1} ;

static const int16_t gSuccessorTable_omnibus_target_grammar_21 [3] = {5, 24, -1} ;

static const int16_t gSuccessorTable_omnibus_target_grammar_24 [3] = {0, 25, -1} ;

static const int16_t gSuccessorTable_omnibus_target_grammar_26 [3] = {0, 27, -1} ;

static const int16_t gSuccessorTable_omnibus_target_grammar_28 [3] = {0, 29, -1} ;

static const int16_t gSuccessorTable_omnibus_target_grammar_29 [3] = {6, 32, -1} ;

static const int16_t gSuccessorTable_omnibus_target_grammar_32 [3] = {0, 34, -1} ;

static const int16_t gSuccessorTable_omnibus_target_grammar_36 [3] = {0, 38, -1} ;

static const int16_t gSuccessorTable_omnibus_target_grammar_40 [3] = {0, 41, -1} ;

static const int16_t gSuccessorTable_omnibus_target_grammar_42 [3] = {0, 43, -1} ;

static const int16_t gSuccessorTable_omnibus_target_grammar_44 [3] = {0, 45, -1} ;

static const int16_t gSuccessorTable_omnibus_target_grammar_46 [3] = {0, 47, -1} ;

static const int16_t gSuccessorTable_omnibus_target_grammar_48 [3] = {0, 49, -1} ;

static const int16_t gSuccessorTable_omnibus_target_grammar_50 [3] = {0, 51, -1} ;

static const int16_t gSuccessorTable_omnibus_target_grammar_52 [3] = {0, 53, -1} ;

static const int16_t gSuccessorTable_omnibus_target_grammar_54 [3] = {0, 55, -1} ;

static const int16_t gSuccessorTable_omnibus_target_grammar_56 [3] = {0, 57, -1} ;

static const int16_t gSuccessorTable_omnibus_target_grammar_58 [3] = {0, 59, -1} ;

static const int16_t gSuccessorTable_omnibus_target_grammar_60 [3] = {0, 61, -1} ;

static const int16_t gSuccessorTable_omnibus_target_grammar_62 [3] = {0, 63, -1} ;

static const int16_t gSuccessorTable_omnibus_target_grammar_64 [3] = {0, 65, -1} ;

static const int16_t gSuccessorTable_omnibus_target_grammar_66 [3] = {0, 67, -1} ;

static const int16_t gSuccessorTable_omnibus_target_grammar_67 [3] = {7, 69, -1} ;

static const int16_t gSuccessorTable_omnibus_target_grammar_68 [3] = {7, 70, -1} ;

static const int16_t gSuccessorTable_omnibus_target_grammar_69 [3] = {0, 71, -1} ;

static const int16_t gSuccessorTable_omnibus_target_grammar_71 [3] = {8, 73, -1} ;

static const int16_t gSuccessorTable_omnibus_target_grammar_72 [3] = {8, 74, -1} ;

static const int16_t gSuccessorTable_omnibus_target_grammar_73 [3] = {0, 75, -1} ;

static const int16_t gSuccessorTable_omnibus_target_grammar_75 [3] = {9, 77, -1} ;

static const int16_t gSuccessorTable_omnibus_target_grammar_76 [3] = {9, 78, -1} ;

static const int16_t gSuccessorTable_omnibus_target_grammar_77 [3] = {0, 79, -1} ;

static const int16_t gSuccessorTable_omnibus_target_grammar_79 [3] = {10, 81, -1} ;

static const int16_t gSuccessorTable_omnibus_target_grammar_80 [3] = {10, 82, -1} ;

static const int16_t gSuccessorTable_omnibus_target_grammar_81 [5] = {0, 83,
  3, 84, -1} ;

static const int16_t gSuccessorTable_omnibus_target_grammar_83 [3] = {11, 86, -1} ;

static const int16_t gSuccessorTable_omnibus_target_grammar_85 [3] = {12, 88, -1} ;

static const int16_t gSuccessorTable_omnibus_target_grammar_88 [3] = {11, 90, -1} ;

static const int16_t * gSuccessorTable_omnibus_target_grammar [91] = {
gSuccessorTable_omnibus_target_grammar_0, NULL, gSuccessorTable_omnibus_target_grammar_2, gSuccessorTable_omnibus_target_grammar_3, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_omnibus_target_grammar_10, gSuccessorTable_omnibus_target_grammar_11, 
  NULL, NULL, gSuccessorTable_omnibus_target_grammar_14, NULL, 
  gSuccessorTable_omnibus_target_grammar_16, NULL, gSuccessorTable_omnibus_target_grammar_18, NULL, 
  gSuccessorTable_omnibus_target_grammar_20, gSuccessorTable_omnibus_target_grammar_21, NULL, NULL, 
  gSuccessorTable_omnibus_target_grammar_24, NULL, gSuccessorTable_omnibus_target_grammar_26, NULL, 
  gSuccessorTable_omnibus_target_grammar_28, gSuccessorTable_omnibus_target_grammar_29, NULL, NULL, 
  gSuccessorTable_omnibus_target_grammar_32, NULL, NULL, NULL, 
  gSuccessorTable_omnibus_target_grammar_36, NULL, NULL, NULL, 
  gSuccessorTable_omnibus_target_grammar_40, NULL, gSuccessorTable_omnibus_target_grammar_42, NULL, 
  gSuccessorTable_omnibus_target_grammar_44, NULL, gSuccessorTable_omnibus_target_grammar_46, NULL, 
  gSuccessorTable_omnibus_target_grammar_48, NULL, gSuccessorTable_omnibus_target_grammar_50, NULL, 
  gSuccessorTable_omnibus_target_grammar_52, NULL, gSuccessorTable_omnibus_target_grammar_54, NULL, 
  gSuccessorTable_omnibus_target_grammar_56, NULL, gSuccessorTable_omnibus_target_grammar_58, NULL, 
  gSuccessorTable_omnibus_target_grammar_60, NULL, gSuccessorTable_omnibus_target_grammar_62, NULL, 
  gSuccessorTable_omnibus_target_grammar_64, NULL, gSuccessorTable_omnibus_target_grammar_66, gSuccessorTable_omnibus_target_grammar_67, 
  gSuccessorTable_omnibus_target_grammar_68, gSuccessorTable_omnibus_target_grammar_69, NULL, gSuccessorTable_omnibus_target_grammar_71, 
  gSuccessorTable_omnibus_target_grammar_72, gSuccessorTable_omnibus_target_grammar_73, NULL, gSuccessorTable_omnibus_target_grammar_75, 
  gSuccessorTable_omnibus_target_grammar_76, gSuccessorTable_omnibus_target_grammar_77, NULL, gSuccessorTable_omnibus_target_grammar_79, 
  gSuccessorTable_omnibus_target_grammar_80, gSuccessorTable_omnibus_target_grammar_81, NULL, gSuccessorTable_omnibus_target_grammar_83, 
  NULL, gSuccessorTable_omnibus_target_grammar_85, NULL, NULL, 
  gSuccessorTable_omnibus_target_grammar_88, NULL, NULL} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                          Production rules infos (left non terminal, size of right string)                            
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gProductionsTable_omnibus_target_grammar [23 * 2] = {
  0, 2,
  1, 2,
  2, 58,
  3, 2,
  4, 0,
  4, 4,
  5, 1,
  5, 1,
  6, 1,
  6, 5,
  7, 0,
  7, 2,
  8, 0,
  8, 2,
  9, 0,
  9, 2,
  10, 0,
  10, 2,
  11, 0,
  11, 3,
  12, 0,
  12, 2,
  13, 1
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                  'configuration_key' non terminal implementation                                     
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_omnibus_5F_target_5F_grammar::nt_configuration_5F_key_parse (C_Lexique_omnibus_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 0 :
      rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_key_i0_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_omnibus_5F_target_5F_grammar::nt_configuration_5F_key_ (const GALGAS_string  parameter_1,
                                C_Lexique_omnibus_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 0 :
      rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_key_i0_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'python_utility_tool_list' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_omnibus_5F_target_5F_grammar::nt_python_5F_utility_5F_tool_5F_list_parse (C_Lexique_omnibus_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
      rule_omnibus_5F_target_5F_specific_5F_syntax_python_5F_utility_5F_tool_5F_list_i1_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_omnibus_5F_target_5F_grammar::nt_python_5F_utility_5F_tool_5F_list_ (GALGAS__32_lstringlist &  parameter_1,
                                C_Lexique_omnibus_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
      rule_omnibus_5F_target_5F_specific_5F_syntax_python_5F_utility_5F_tool_5F_list_i1_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                              'configuration_start_symbol' non terminal implementation                                
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_omnibus_5F_target_5F_grammar::nt_configuration_5F_start_5F_symbol_parse (C_Lexique_omnibus_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 2 :
      rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_start_5F_symbol_i2_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_omnibus_5F_target_5F_grammar::nt_configuration_5F_start_5F_symbol_ (GALGAS_ast &  parameter_1,
                                GALGAS_lstringlist &  parameter_2,
                                GALGAS_location &  parameter_3,
                                C_Lexique_omnibus_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 2 :
      rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_start_5F_symbol_i2_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_omnibus_5F_target_5F_grammar::performIndexing (C_Compiler * /* inCompiler */,
             const C_String & /* inSourceFilePath */) {
}

void cGrammar_omnibus_5F_target_5F_grammar::performOnlyLexicalAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_omnibus_5F_lexique * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_omnibus_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_omnibus_5F_target_5F_grammar::performOnlySyntaxAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_omnibus_5F_lexique * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_omnibus_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performBottomUpParsing (gActionTable_omnibus_target_grammar, gNonTerminalNames_omnibus_target_grammar,
                                     gActionTableIndex_omnibus_target_grammar, gSuccessorTable_omnibus_target_grammar,
                                     gProductionsTable_omnibus_target_grammar) ;
  }
  macroDetachSharedObject (scanner) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                        Grammar start symbol implementation                                           
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_omnibus_5F_target_5F_grammar::_performSourceFileParsing_ (C_Compiler * inCompiler,
                                GALGAS_lstring inFilePath,
                                GALGAS_ast &  parameter_1,
                                GALGAS_lstringlist &  parameter_2,
                                GALGAS_location &  parameter_3
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GALGAS_string filePathAsString = inFilePath.readProperty_string () ;
    C_String filePath = filePathAsString.stringValue () ;
    if (! C_FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().stringByDeletingLastPathComponent ().stringByAppendingPathComponent (filePath) ;
    }
    if (C_FileManager::fileExistsAtPath (filePath)) {
      C_Lexique_omnibus_5F_lexique * scanner = NULL ;
      macroMyNew (scanner, C_Lexique_omnibus_5F_lexique (inCompiler, filePath COMMA_HERE)) ;
      if (scanner->sourceText ().isValid ()) {
        const bool ok = scanner->performBottomUpParsing (gActionTable_omnibus_target_grammar, gNonTerminalNames_omnibus_target_grammar,
                                                         gActionTableIndex_omnibus_target_grammar, gSuccessorTable_omnibus_target_grammar,
                                                         gProductionsTable_omnibus_target_grammar) ;
        if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
          cGrammar_omnibus_5F_target_5F_grammar grammar ;
          grammar.nt_configuration_5F_start_5F_symbol_ (parameter_1, parameter_2, parameter_3, scanner) ;
        }
      }else{
        C_String message ;
        message << "the '" << filePath << "' file exists, but cannot be read" ;
        const GALGAS_location errorLocation (inFilePath.readProperty_location ()) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      C_String message ;
      message << "the '" << filePath << "' file does not exist" ;
      const GALGAS_location errorLocation (inFilePath.readProperty_location ()) ;
      inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_omnibus_5F_target_5F_grammar::_performSourceStringParsing_ (C_Compiler * inCompiler,
                                GALGAS_string inSourceString,
                                GALGAS_string inNameString,
                                GALGAS_ast &  parameter_1,
                                GALGAS_lstringlist &  parameter_2,
                                GALGAS_location &  parameter_3
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inSourceString.isValid () && inNameString.isValid ()) {
    const C_String sourceString = inSourceString.stringValue () ;
    const C_String nameString = inNameString.stringValue () ;
    C_Lexique_omnibus_5F_lexique * scanner = NULL ;
    macroMyNew (scanner, C_Lexique_omnibus_5F_lexique (inCompiler, sourceString, nameString COMMA_HERE)) ;
    if (scanner->sourceText ().isValid ()) {
      const bool ok = scanner->performBottomUpParsing (gActionTable_omnibus_target_grammar, gNonTerminalNames_omnibus_target_grammar,
                                                       gActionTableIndex_omnibus_target_grammar, gSuccessorTable_omnibus_target_grammar,
                                                       gProductionsTable_omnibus_target_grammar) ;
      if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
        cGrammar_omnibus_5F_target_5F_grammar grammar ;
        grammar.nt_configuration_5F_start_5F_symbol_ (parameter_1, parameter_2, parameter_3, scanner) ;
      }
    }
    macroDetachSharedObject (scanner) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 'interruptConfigList' non terminal implementation                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_omnibus_5F_target_5F_grammar::nt_interruptConfigList_parse (C_Lexique_omnibus_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 3 :
      rule_omnibus_5F_target_5F_specific_5F_syntax_interruptConfigList_i3_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_omnibus_5F_target_5F_grammar::nt_interruptConfigList_ (GALGAS_interruptionConfigurationList &  parameter_1,
                                GALGAS_enumerationConstantList &  parameter_2,
                                C_Lexique_omnibus_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 3 :
      rule_omnibus_5F_target_5F_specific_5F_syntax_interruptConfigList_i3_(parameter_1, parameter_2, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                   'select_omnibus_5F_target_5F_specific_5F_syntax_0' non terminal implementation                     
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_omnibus_5F_target_5F_grammar::select_omnibus_5F_target_5F_specific_5F_syntax_0 (C_Lexique_omnibus_5F_lexique * inLexique) {
// Productions numbers : 4 5
  return inLexique->nextProductionIndex () - 3 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                   'select_omnibus_5F_target_5F_specific_5F_syntax_1' non terminal implementation                     
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_omnibus_5F_target_5F_grammar::select_omnibus_5F_target_5F_specific_5F_syntax_1 (C_Lexique_omnibus_5F_lexique * inLexique) {
// Productions numbers : 6 7
  return inLexique->nextProductionIndex () - 5 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                   'select_omnibus_5F_target_5F_specific_5F_syntax_2' non terminal implementation                     
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_omnibus_5F_target_5F_grammar::select_omnibus_5F_target_5F_specific_5F_syntax_2 (C_Lexique_omnibus_5F_lexique * inLexique) {
// Productions numbers : 8 9
  return inLexique->nextProductionIndex () - 7 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                   'select_omnibus_5F_target_5F_specific_5F_syntax_3' non terminal implementation                     
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_omnibus_5F_target_5F_grammar::select_omnibus_5F_target_5F_specific_5F_syntax_3 (C_Lexique_omnibus_5F_lexique * inLexique) {
// Productions numbers : 10 11
  return inLexique->nextProductionIndex () - 9 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                   'select_omnibus_5F_target_5F_specific_5F_syntax_4' non terminal implementation                     
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_omnibus_5F_target_5F_grammar::select_omnibus_5F_target_5F_specific_5F_syntax_4 (C_Lexique_omnibus_5F_lexique * inLexique) {
// Productions numbers : 12 13
  return inLexique->nextProductionIndex () - 11 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                   'select_omnibus_5F_target_5F_specific_5F_syntax_5' non terminal implementation                     
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_omnibus_5F_target_5F_grammar::select_omnibus_5F_target_5F_specific_5F_syntax_5 (C_Lexique_omnibus_5F_lexique * inLexique) {
// Productions numbers : 14 15
  return inLexique->nextProductionIndex () - 13 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                   'select_omnibus_5F_target_5F_specific_5F_syntax_6' non terminal implementation                     
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_omnibus_5F_target_5F_grammar::select_omnibus_5F_target_5F_specific_5F_syntax_6 (C_Lexique_omnibus_5F_lexique * inLexique) {
// Productions numbers : 16 17
  return inLexique->nextProductionIndex () - 15 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                   'select_omnibus_5F_target_5F_specific_5F_syntax_7' non terminal implementation                     
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_omnibus_5F_target_5F_grammar::select_omnibus_5F_target_5F_specific_5F_syntax_7 (C_Lexique_omnibus_5F_lexique * inLexique) {
// Productions numbers : 18 19
  return inLexique->nextProductionIndex () - 17 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                   'select_omnibus_5F_target_5F_specific_5F_syntax_8' non terminal implementation                     
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_omnibus_5F_target_5F_grammar::select_omnibus_5F_target_5F_specific_5F_syntax_8 (C_Lexique_omnibus_5F_lexique * inLexique) {
// Productions numbers : 20 21
  return inLexique->nextProductionIndex () - 19 ;
}

//---------------------------------------------------------------------------------------------------------------------*

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ast::GALGAS_ast (void) :
mProperty_mDeclarationListAST (),
mProperty_mExtendStaticArrayDeclarationAST (),
mProperty_mRequiredFunctionListAST (),
mProperty_mExternFunctionListAST (),
mProperty_mTargetListAST (),
mProperty_mTaskListAST (),
mProperty_mCheckTargetListAST (),
mProperty_mDriverDeclarationListAST (),
mProperty_mRequiredDriverListAST (),
mProperty_mTypeDeclarationIndex (),
mProperty_mControlRegisterUserAccesMapAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ast::~ GALGAS_ast (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ast::GALGAS_ast (const GALGAS_declarationListAST & inOperand0,
                        const GALGAS_extendStaticArrayDeclarationDictAST & inOperand1,
                        const GALGAS_requiredFunctionDeclarationListAST & inOperand2,
                        const GALGAS_externFunctionDeclarationListAST & inOperand3,
                        const GALGAS_lstringlist & inOperand4,
                        const GALGAS_taskListAST & inOperand5,
                        const GALGAS_checkTargetListAST & inOperand6,
                        const GALGAS_driverDeclarationListAST & inOperand7,
                        const GALGAS_driverInstanciationListAST & inOperand8,
                        const GALGAS_uint & inOperand9,
                        const GALGAS_controlRegisterUserAccesMapAST & inOperand10) :
mProperty_mDeclarationListAST (inOperand0),
mProperty_mExtendStaticArrayDeclarationAST (inOperand1),
mProperty_mRequiredFunctionListAST (inOperand2),
mProperty_mExternFunctionListAST (inOperand3),
mProperty_mTargetListAST (inOperand4),
mProperty_mTaskListAST (inOperand5),
mProperty_mCheckTargetListAST (inOperand6),
mProperty_mDriverDeclarationListAST (inOperand7),
mProperty_mRequiredDriverListAST (inOperand8),
mProperty_mTypeDeclarationIndex (inOperand9),
mProperty_mControlRegisterUserAccesMapAST (inOperand10) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ast GALGAS_ast::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_ast (GALGAS_declarationListAST::constructor_emptyList (HERE),
                     GALGAS_extendStaticArrayDeclarationDictAST::constructor_emptyDict (HERE),
                     GALGAS_requiredFunctionDeclarationListAST::constructor_emptyList (HERE),
                     GALGAS_externFunctionDeclarationListAST::constructor_emptyList (HERE),
                     GALGAS_lstringlist::constructor_emptyList (HERE),
                     GALGAS_taskListAST::constructor_emptyList (HERE),
                     GALGAS_checkTargetListAST::constructor_emptyList (HERE),
                     GALGAS_driverDeclarationListAST::constructor_emptyList (HERE),
                     GALGAS_driverInstanciationListAST::constructor_emptyList (HERE),
                     GALGAS_uint::constructor_default (HERE),
                     GALGAS_controlRegisterUserAccesMapAST::constructor_emptyMap (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ast GALGAS_ast::constructor_new (const GALGAS_declarationListAST & inOperand0,
                                        const GALGAS_extendStaticArrayDeclarationDictAST & inOperand1,
                                        const GALGAS_requiredFunctionDeclarationListAST & inOperand2,
                                        const GALGAS_externFunctionDeclarationListAST & inOperand3,
                                        const GALGAS_lstringlist & inOperand4,
                                        const GALGAS_taskListAST & inOperand5,
                                        const GALGAS_checkTargetListAST & inOperand6,
                                        const GALGAS_driverDeclarationListAST & inOperand7,
                                        const GALGAS_driverInstanciationListAST & inOperand8,
                                        const GALGAS_uint & inOperand9,
                                        const GALGAS_controlRegisterUserAccesMapAST & inOperand10 
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ast result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
    result = GALGAS_ast (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ast::objectCompare (const GALGAS_ast & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mDeclarationListAST.objectCompare (inOperand.mProperty_mDeclarationListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExtendStaticArrayDeclarationAST.objectCompare (inOperand.mProperty_mExtendStaticArrayDeclarationAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRequiredFunctionListAST.objectCompare (inOperand.mProperty_mRequiredFunctionListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExternFunctionListAST.objectCompare (inOperand.mProperty_mExternFunctionListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTargetListAST.objectCompare (inOperand.mProperty_mTargetListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTaskListAST.objectCompare (inOperand.mProperty_mTaskListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mCheckTargetListAST.objectCompare (inOperand.mProperty_mCheckTargetListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDriverDeclarationListAST.objectCompare (inOperand.mProperty_mDriverDeclarationListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRequiredDriverListAST.objectCompare (inOperand.mProperty_mRequiredDriverListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTypeDeclarationIndex.objectCompare (inOperand.mProperty_mTypeDeclarationIndex) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mControlRegisterUserAccesMapAST.objectCompare (inOperand.mProperty_mControlRegisterUserAccesMapAST) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_ast::isValid (void) const {
  return mProperty_mDeclarationListAST.isValid () && mProperty_mExtendStaticArrayDeclarationAST.isValid () && mProperty_mRequiredFunctionListAST.isValid () && mProperty_mExternFunctionListAST.isValid () && mProperty_mTargetListAST.isValid () && mProperty_mTaskListAST.isValid () && mProperty_mCheckTargetListAST.isValid () && mProperty_mDriverDeclarationListAST.isValid () && mProperty_mRequiredDriverListAST.isValid () && mProperty_mTypeDeclarationIndex.isValid () && mProperty_mControlRegisterUserAccesMapAST.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ast::drop (void) {
  mProperty_mDeclarationListAST.drop () ;
  mProperty_mExtendStaticArrayDeclarationAST.drop () ;
  mProperty_mRequiredFunctionListAST.drop () ;
  mProperty_mExternFunctionListAST.drop () ;
  mProperty_mTargetListAST.drop () ;
  mProperty_mTaskListAST.drop () ;
  mProperty_mCheckTargetListAST.drop () ;
  mProperty_mDriverDeclarationListAST.drop () ;
  mProperty_mRequiredDriverListAST.drop () ;
  mProperty_mTypeDeclarationIndex.drop () ;
  mProperty_mControlRegisterUserAccesMapAST.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ast::description (C_String & ioString,
                              const int32_t inIndentation) const {
  ioString << "<struct @ast:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mDeclarationListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExtendStaticArrayDeclarationAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRequiredFunctionListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExternFunctionListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTargetListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTaskListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mCheckTargetListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDriverDeclarationListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRequiredDriverListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTypeDeclarationIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mControlRegisterUserAccesMapAST.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@ast type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ast ("ast",
                            NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ast::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ast ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ast::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ast (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ast GALGAS_ast::extractObject (const GALGAS_object & inObject,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  GALGAS_ast result ;
  const GALGAS_ast * p = (const GALGAS_ast *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ast *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ast", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_universalValuedObjectMap::GALGAS_universalValuedObjectMap (void) :
mProperty_mInternalPropertyAndRoutineMap (),
mProperty_mScopeStack (),
mProperty_mLocalObjectList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_universalValuedObjectMap::~ GALGAS_universalValuedObjectMap (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_universalValuedObjectMap::GALGAS_universalValuedObjectMap (const GALGAS_flatValuedObjectMap & inOperand0,
                                                                  const GALGAS_scopeStack & inOperand1,
                                                                  const GALGAS_lstringlist & inOperand2) :
mProperty_mInternalPropertyAndRoutineMap (inOperand0),
mProperty_mScopeStack (inOperand1),
mProperty_mLocalObjectList (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_universalValuedObjectMap GALGAS_universalValuedObjectMap::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_universalValuedObjectMap (GALGAS_flatValuedObjectMap::constructor_emptyMap (HERE),
                                          GALGAS_scopeStack::constructor_emptyList (HERE),
                                          GALGAS_lstringlist::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_universalValuedObjectMap GALGAS_universalValuedObjectMap::constructor_new (const GALGAS_flatValuedObjectMap & inOperand0,
                                                                                  const GALGAS_scopeStack & inOperand1,
                                                                                  const GALGAS_lstringlist & inOperand2 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_universalValuedObjectMap result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_universalValuedObjectMap (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_universalValuedObjectMap::objectCompare (const GALGAS_universalValuedObjectMap & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInternalPropertyAndRoutineMap.objectCompare (inOperand.mProperty_mInternalPropertyAndRoutineMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mScopeStack.objectCompare (inOperand.mProperty_mScopeStack) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLocalObjectList.objectCompare (inOperand.mProperty_mLocalObjectList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_universalValuedObjectMap::isValid (void) const {
  return mProperty_mInternalPropertyAndRoutineMap.isValid () && mProperty_mScopeStack.isValid () && mProperty_mLocalObjectList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_universalValuedObjectMap::drop (void) {
  mProperty_mInternalPropertyAndRoutineMap.drop () ;
  mProperty_mScopeStack.drop () ;
  mProperty_mLocalObjectList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_universalValuedObjectMap::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @universalValuedObjectMap:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mInternalPropertyAndRoutineMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mScopeStack.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLocalObjectList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@universalValuedObjectMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_universalValuedObjectMap ("universalValuedObjectMap",
                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_universalValuedObjectMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_universalValuedObjectMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_universalValuedObjectMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_universalValuedObjectMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_universalValuedObjectMap GALGAS_universalValuedObjectMap::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_universalValuedObjectMap result ;
  const GALGAS_universalValuedObjectMap * p = (const GALGAS_universalValuedObjectMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_universalValuedObjectMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("universalValuedObjectMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap insertTask'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertTask (GALGAS_universalValuedObjectMap & ioObject,
                                 const GALGAS_lstring constinArgument_inTaskName,
                                 const GALGAS_omnibusType constinArgument_inTaskType,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_insertKey (constinArgument_inTaskName, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("universal-map.galgas", 21)), GALGAS_bool (false), GALGAS_valuedObject::constructor_task (constinArgument_inTaskType  COMMA_SOURCE_FILE ("universal-map.galgas", 23)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 19)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap insertDriver'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertDriver (GALGAS_universalValuedObjectMap & ioObject,
                                   const GALGAS_lstring constinArgument_inDriverName,
                                   const GALGAS_bool constinArgument_inIsInstancied,
                                   const GALGAS_omnibusType constinArgument_inDriverType,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_insertKey (constinArgument_inDriverName, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("universal-map.galgas", 36)), GALGAS_bool (false), GALGAS_valuedObject::constructor_driver (constinArgument_inDriverType, constinArgument_inIsInstancied  COMMA_SOURCE_FILE ("universal-map.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 34)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap insertGlobalConstant'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertGlobalConstant (GALGAS_universalValuedObjectMap & ioObject,
                                           const GALGAS_lstring constinArgument_inConstantName,
                                           const GALGAS_objectIR constinArgument_inConstantObjectIR,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_insertKey (constinArgument_inConstantName, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("universal-map.galgas", 50)), GALGAS_bool (false), GALGAS_valuedObject::constructor_globalConstant (constinArgument_inConstantObjectIR  COMMA_SOURCE_FILE ("universal-map.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 48)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap insertGlobalSyncInstance'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertGlobalSyncInstance (GALGAS_universalValuedObjectMap & ioObject,
                                               const GALGAS_lstring constinArgument_inSyncInstanceName,
                                               const GALGAS_omnibusType constinArgument_inType,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_insertKey (constinArgument_inSyncInstanceName, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("universal-map.galgas", 64)), GALGAS_bool (false), GALGAS_valuedObject::constructor_globalSyncInstance (constinArgument_inType, constinArgument_inSyncInstanceName  COMMA_SOURCE_FILE ("universal-map.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 62)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap insertLocalConstant'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertLocalConstant (GALGAS_universalValuedObjectMap & ioObject,
                                          const GALGAS_lstring constinArgument_inLocalConstantName,
                                          const GALGAS_bool constinArgument_inIsFormalInputArgument,
                                          const GALGAS_omnibusType constinArgument_inType,
                                          const GALGAS_lstring constinArgument_inOmnibusConstantName,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_insertKey (constinArgument_inLocalConstantName, GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 80)), GALGAS_bool (false), GALGAS_valuedObject::constructor_localConstant (constinArgument_inType, constinArgument_inOmnibusConstantName, constinArgument_inIsFormalInputArgument  COMMA_SOURCE_FILE ("universal-map.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 78)) ;
  }
  ioObject.mProperty_mLocalObjectList.addAssign_operation (constinArgument_inLocalConstantName  COMMA_SOURCE_FILE ("universal-map.galgas", 84)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap insertUsedLocalConstant'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertUsedLocalConstant (GALGAS_universalValuedObjectMap & ioObject,
                                              const GALGAS_lstring constinArgument_inLocalConstantName,
                                              const GALGAS_bool constinArgument_inIsFormalInputArgument,
                                              const GALGAS_omnibusType constinArgument_inType,
                                              const GALGAS_lstring constinArgument_inOmnibusConstantName,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_insertKey (constinArgument_inLocalConstantName, GALGAS_valuedObjectState::constructor_hasReadValue (SOURCE_FILE ("universal-map.galgas", 97)), GALGAS_bool (false), GALGAS_valuedObject::constructor_localConstant (constinArgument_inType, constinArgument_inOmnibusConstantName, constinArgument_inIsFormalInputArgument  COMMA_SOURCE_FILE ("universal-map.galgas", 99)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 95)) ;
  }
  ioObject.mProperty_mLocalObjectList.addAssign_operation (constinArgument_inLocalConstantName  COMMA_SOURCE_FILE ("universal-map.galgas", 101)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap insertLocalVariable'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertLocalVariable (GALGAS_universalValuedObjectMap & ioObject,
                                          const GALGAS_lstring constinArgument_inLocalVariableName,
                                          const GALGAS_omnibusType constinArgument_inType,
                                          const GALGAS_lstring constinArgument_inOmnibusName,
                                          const GALGAS_valuedObjectState constinArgument_inVariableInitialState,
                                          const GALGAS_bool constinArgument_inObjectShouldBeValuedAtEndOfScope,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_insertKey (constinArgument_inLocalVariableName, constinArgument_inVariableInitialState, constinArgument_inObjectShouldBeValuedAtEndOfScope, GALGAS_valuedObject::constructor_localVariable (constinArgument_inType, constinArgument_inOmnibusName  COMMA_SOURCE_FILE ("universal-map.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 113)) ;
  }
  ioObject.mProperty_mLocalObjectList.addAssign_operation (constinArgument_inLocalVariableName  COMMA_SOURCE_FILE ("universal-map.galgas", 119)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap searchEntity'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_searchEntity (const GALGAS_universalValuedObjectMap inObject,
                                   const GALGAS_lstring constinArgument_inValuedObjectName,
                                   GALGAS_valuedObject & outArgument_outEntity,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEntity.drop () ; // Release 'out' argument
  const GALGAS_universalValuedObjectMap temp_0 = inObject ;
  GALGAS_valuedObjectState joker_4451_2 ; // Joker input parameter
  GALGAS_bool joker_4451_1 ; // Joker input parameter
  temp_0.readProperty_mInternalPropertyAndRoutineMap ().method_searchKey (constinArgument_inValuedObjectName, joker_4451_2, joker_4451_1, outArgument_outEntity, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 130)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap searchValuedObject'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_searchValuedObject (const GALGAS_universalValuedObjectMap inObject,
                                         const GALGAS_lstring constinArgument_inValuedObjectName,
                                         const GALGAS_mode constinArgument_inMode,
                                         const GALGAS_stringset constinArgument_inInitializedDriverSet,
                                         GALGAS_objectIR & outArgument_outObjectIR,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outObjectIR.drop () ; // Release 'out' argument
  GALGAS_valuedObject var_entity_4850 ;
  const GALGAS_universalValuedObjectMap temp_0 = inObject ;
  GALGAS_valuedObjectState joker_4836_2 ; // Joker input parameter
  GALGAS_bool joker_4836_1 ; // Joker input parameter
  temp_0.readProperty_mInternalPropertyAndRoutineMap ().method_searchKey (constinArgument_inValuedObjectName, joker_4836_2, joker_4836_1, var_entity_4850, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 141)) ;
  switch (var_entity_4850.enumValue ()) {
  case GALGAS_valuedObject::kNotBuilt:
    break ;
  case GALGAS_valuedObject::kEnum_task:
    {
      const cEnumAssociatedValues_valuedObject_task * extractPtr_5144 = (const cEnumAssociatedValues_valuedObject_task *) (var_entity_4850.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_4898_type = extractPtr_5144->mAssociatedValue0 ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, constinArgument_inMode.objectCompare (GALGAS_mode::constructor_bootMode (SOURCE_FILE ("universal-map.galgas", 144)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GALGAS_string ("cannot call a task entry in a boot routine"), fixItArray2  COMMA_SOURCE_FILE ("universal-map.galgas", 145)) ;
          outArgument_outObjectIR.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_1) {
        outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_4898_type, function_llvmNameForGlobalVariable (constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 147))  COMMA_SOURCE_FILE ("universal-map.galgas", 147)) ;
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_driver:
    {
      const cEnumAssociatedValues_valuedObject_driver * extractPtr_5714 = (const cEnumAssociatedValues_valuedObject_driver *) (var_entity_4850.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_5177_type = extractPtr_5714->mAssociatedValue0 ;
      const GALGAS_bool extractedValue_5188_instancied = extractPtr_5714->mAssociatedValue1 ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, constinArgument_inMode.objectCompare (GALGAS_mode::constructor_bootMode (SOURCE_FILE ("universal-map.galgas", 150)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GALGAS_string ("cannot call a driver in a boot routine"), fixItArray4  COMMA_SOURCE_FILE ("universal-map.galgas", 151)) ;
          outArgument_outObjectIR.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_3) {
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = extractedValue_5188_instancied.operator_not (SOURCE_FILE ("universal-map.galgas", 152)).boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GALGAS_string ("the driver should be instancied"), fixItArray6  COMMA_SOURCE_FILE ("universal-map.galgas", 153)) ;
            outArgument_outObjectIR.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_5) {
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = constinArgument_inInitializedDriverSet.getter_hasKey (constinArgument_inValuedObjectName.readProperty_string () COMMA_SOURCE_FILE ("universal-map.galgas", 154)).operator_not (SOURCE_FILE ("universal-map.galgas", 154)).boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <C_FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GALGAS_string ("the driver should be named in driver dependence list"), fixItArray8  COMMA_SOURCE_FILE ("universal-map.galgas", 155)) ;
              outArgument_outObjectIR.drop () ; // Release error dropped variable
            }
          }
          if (kBoolFalse == test_7) {
            outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_5177_type, function_llvmNameForGlobalVariable (constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 157))  COMMA_SOURCE_FILE ("universal-map.galgas", 157)) ;
          }
        }
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalConstant:
    {
      const cEnumAssociatedValues_valuedObject_globalConstant * extractPtr_5786 = (const cEnumAssociatedValues_valuedObject_globalConstant *) (var_entity_4850.unsafePointer ()) ;
      const GALGAS_objectIR extractedValue_5756_objectIR = extractPtr_5786->mAssociatedValue0 ;
      outArgument_outObjectIR = extractedValue_5756_objectIR ;
    }
    break ;
  case GALGAS_valuedObject::kEnum_localConstant:
    {
      const cEnumAssociatedValues_valuedObject_localConstant * extractPtr_5944 = (const cEnumAssociatedValues_valuedObject_localConstant *) (var_entity_4850.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_5826_type = extractPtr_5944->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_5847_omnibusName = extractPtr_5944->mAssociatedValue1 ;
      outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_5826_type, function_llvmNameForLocalVariable (extractedValue_5847_omnibusName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 162))  COMMA_SOURCE_FILE ("universal-map.galgas", 162)) ;
    }
    break ;
  case GALGAS_valuedObject::kEnum_localVariable:
    {
      const cEnumAssociatedValues_valuedObject_localVariable * extractPtr_6100 = (const cEnumAssociatedValues_valuedObject_localVariable *) (var_entity_4850.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_5984_type = extractPtr_6100->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_6005_omnibusName = extractPtr_6100->mAssociatedValue1 ;
      outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_5984_type, function_llvmNameForLocalVariable (extractedValue_6005_omnibusName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 164))  COMMA_SOURCE_FILE ("universal-map.galgas", 164)) ;
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalSyncInstance:
    {
      const cEnumAssociatedValues_valuedObject_globalSyncInstance * extractPtr_6266 = (const cEnumAssociatedValues_valuedObject_globalSyncInstance *) (var_entity_4850.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_6145_type = extractPtr_6266->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_6166_omnibusName = extractPtr_6266->mAssociatedValue1 ;
      outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_6145_type, function_llvmNameForGlobalSyncInstance (extractedValue_6166_omnibusName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 166))  COMMA_SOURCE_FILE ("universal-map.galgas", 166)) ;
    }
    break ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap readAccess'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_readAccess (GALGAS_universalValuedObjectMap & ioObject,
                                 const GALGAS_lstring constinArgument_inValuedObjectName,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_valuedObjectState var_valueState_6563 ;
  GALGAS_valuedObject var_property_6580 ;
  const GALGAS_universalValuedObjectMap temp_0 = ioObject ;
  GALGAS_bool joker_6565 ; // Joker input parameter
  temp_0.readProperty_mInternalPropertyAndRoutineMap ().method_searchKey (constinArgument_inValuedObjectName, var_valueState_6563, joker_6565, var_property_6580, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 175)) ;
  switch (var_property_6580.enumValue ()) {
  case GALGAS_valuedObject::kNotBuilt:
    break ;
  case GALGAS_valuedObject::kEnum_task:
    {
    }
    break ;
  case GALGAS_valuedObject::kEnum_driver:
    {
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalConstant:
    {
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalSyncInstance:
    {
    }
    break ;
  case GALGAS_valuedObject::kEnum_localConstant:
    {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, var_valueState_6563.objectCompare (GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 182)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_setMObjectStateForKey (GALGAS_valuedObjectState::constructor_hasReadValue (SOURCE_FILE ("universal-map.galgas", 183)), constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 183)) ;
          }
        }
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_localVariable:
    {
      switch (var_valueState_6563.enumValue ()) {
      case GALGAS_valuedObjectState::kNotBuilt:
        break ;
      case GALGAS_valuedObjectState::kEnum_noValue:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GALGAS_string ("'").add_operation (constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 188)).add_operation (GALGAS_string ("' has no value"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 188)), fixItArray2  COMMA_SOURCE_FILE ("universal-map.galgas", 188)) ;
        }
        break ;
      case GALGAS_valuedObjectState::kEnum_hasUnreadValue:
        {
          {
          ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_setMObjectStateForKey (GALGAS_valuedObjectState::constructor_hasReadValue (SOURCE_FILE ("universal-map.galgas", 190)), constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 190)) ;
          }
        }
        break ;
      case GALGAS_valuedObjectState::kEnum_hasReadValue:
        {
        }
        break ;
      }
    }
    break ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap searchValuedObjectForReadAccess'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_searchValuedObjectForReadAccess (GALGAS_universalValuedObjectMap & ioObject,
                                                      const GALGAS_lstring constinArgument_inValuedObjectName,
                                                      GALGAS_objectIR & outArgument_outObjectIR,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outObjectIR.drop () ; // Release 'out' argument
  GALGAS_valuedObjectState var_valueState_7532 ;
  GALGAS_valuedObject var_property_7549 ;
  const GALGAS_universalValuedObjectMap temp_0 = ioObject ;
  GALGAS_bool joker_7534 ; // Joker input parameter
  temp_0.readProperty_mInternalPropertyAndRoutineMap ().method_searchKey (constinArgument_inValuedObjectName, var_valueState_7532, joker_7534, var_property_7549, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 202)) ;
  switch (var_property_7549.enumValue ()) {
  case GALGAS_valuedObject::kNotBuilt:
    break ;
  case GALGAS_valuedObject::kEnum_task:
    {
      const cEnumAssociatedValues_valuedObject_task * extractPtr_7702 = (const cEnumAssociatedValues_valuedObject_task *) (var_property_7549.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_7599_type = extractPtr_7702->mAssociatedValue0 ;
      outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_7599_type, function_llvmNameForGlobalVariable (constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 205))  COMMA_SOURCE_FILE ("universal-map.galgas", 205)) ;
    }
    break ;
  case GALGAS_valuedObject::kEnum_driver:
    {
      const cEnumAssociatedValues_valuedObject_driver * extractPtr_7972 = (const cEnumAssociatedValues_valuedObject_driver *) (var_property_7549.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_7735_type = extractPtr_7972->mAssociatedValue0 ;
      const GALGAS_bool extractedValue_7746_instancied = extractPtr_7972->mAssociatedValue1 ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = extractedValue_7746_instancied.boolEnum () ;
        if (kBoolTrue == test_1) {
          outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_7735_type, function_llvmNameForGlobalVariable (constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 208))  COMMA_SOURCE_FILE ("universal-map.galgas", 208)) ;
        }
      }
      if (kBoolFalse == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GALGAS_string ("the driver should be instancied"), fixItArray2  COMMA_SOURCE_FILE ("universal-map.galgas", 210)) ;
        outArgument_outObjectIR.drop () ; // Release error dropped variable
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalConstant:
    {
      const cEnumAssociatedValues_valuedObject_globalConstant * extractPtr_8044 = (const cEnumAssociatedValues_valuedObject_globalConstant *) (var_property_7549.unsafePointer ()) ;
      const GALGAS_objectIR extractedValue_8014_objectIR = extractPtr_8044->mAssociatedValue0 ;
      outArgument_outObjectIR = extractedValue_8014_objectIR ;
    }
    break ;
  case GALGAS_valuedObject::kEnum_localConstant:
    {
      const cEnumAssociatedValues_valuedObject_localConstant * extractPtr_8364 = (const cEnumAssociatedValues_valuedObject_localConstant *) (var_property_7549.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_8084_type = extractPtr_8364->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_8105_omnibusName = extractPtr_8364->mAssociatedValue1 ;
      outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_8084_type, function_llvmNameForLocalVariable (extractedValue_8105_omnibusName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 215))  COMMA_SOURCE_FILE ("universal-map.galgas", 215)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, var_valueState_7532.objectCompare (GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 216)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          {
          ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_setMObjectStateForKey (GALGAS_valuedObjectState::constructor_hasReadValue (SOURCE_FILE ("universal-map.galgas", 217)), constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 217)) ;
          }
        }
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalSyncInstance:
    {
      const cEnumAssociatedValues_valuedObject_globalSyncInstance * extractPtr_8530 = (const cEnumAssociatedValues_valuedObject_globalSyncInstance *) (var_property_7549.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_8409_type = extractPtr_8530->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_8430_omnibusName = extractPtr_8530->mAssociatedValue1 ;
      outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_8409_type, function_llvmNameForGlobalSyncInstance (extractedValue_8430_omnibusName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 220))  COMMA_SOURCE_FILE ("universal-map.galgas", 220)) ;
    }
    break ;
  case GALGAS_valuedObject::kEnum_localVariable:
    {
      const cEnumAssociatedValues_valuedObject_localVariable * extractPtr_9076 = (const cEnumAssociatedValues_valuedObject_localVariable *) (var_property_7549.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_8570_type = extractPtr_9076->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_8591_omnibusName = extractPtr_9076->mAssociatedValue1 ;
      switch (var_valueState_7532.enumValue ()) {
      case GALGAS_valuedObjectState::kNotBuilt:
        break ;
      case GALGAS_valuedObjectState::kEnum_noValue:
        {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GALGAS_string ("'").add_operation (constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 224)).add_operation (GALGAS_string ("' has no value"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 224)), fixItArray4  COMMA_SOURCE_FILE ("universal-map.galgas", 224)) ;
          outArgument_outObjectIR.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_valuedObjectState::kEnum_hasUnreadValue:
        {
          {
          ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_setMObjectStateForKey (GALGAS_valuedObjectState::constructor_hasReadValue (SOURCE_FILE ("universal-map.galgas", 226)), constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 226)) ;
          }
          outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_8570_type, function_llvmNameForLocalVariable (extractedValue_8591_omnibusName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 227))  COMMA_SOURCE_FILE ("universal-map.galgas", 227)) ;
        }
        break ;
      case GALGAS_valuedObjectState::kEnum_hasReadValue:
        {
          outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_8570_type, function_llvmNameForLocalVariable (extractedValue_8591_omnibusName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 229))  COMMA_SOURCE_FILE ("universal-map.galgas", 229)) ;
        }
        break ;
      }
    }
    break ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap searchValuedObjectForWriteAccess'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_searchValuedObjectForWriteAccess (GALGAS_universalValuedObjectMap & ioObject,
                                                       const GALGAS_lstring constinArgument_inValuedObjectName,
                                                       GALGAS_objectIR & outArgument_outObjectIR,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outObjectIR.drop () ; // Release 'out' argument
  GALGAS_valuedObjectState var_valueState_9420 ;
  GALGAS_valuedObject var_property_9437 ;
  const GALGAS_universalValuedObjectMap temp_0 = ioObject ;
  GALGAS_bool joker_9422 ; // Joker input parameter
  temp_0.readProperty_mInternalPropertyAndRoutineMap ().method_searchKey (constinArgument_inValuedObjectName, var_valueState_9420, joker_9422, var_property_9437, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 240)) ;
  switch (var_property_9437.enumValue ()) {
  case GALGAS_valuedObject::kNotBuilt:
    break ;
  case GALGAS_valuedObject::kEnum_task:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GALGAS_string ("a task cannot be written"), fixItArray1  COMMA_SOURCE_FILE ("universal-map.galgas", 243)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_driver:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GALGAS_string ("a driver cannot be written"), fixItArray2  COMMA_SOURCE_FILE ("universal-map.galgas", 245)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalConstant:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GALGAS_string ("a constant cannot be written"), fixItArray3  COMMA_SOURCE_FILE ("universal-map.galgas", 247)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalSyncInstance:
    {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GALGAS_string ("a global sync instance cannot be written"), fixItArray4  COMMA_SOURCE_FILE ("universal-map.galgas", 249)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_localConstant:
    {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GALGAS_string ("a constant cannot be written"), fixItArray5  COMMA_SOURCE_FILE ("universal-map.galgas", 251)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_localVariable:
    {
      const cEnumAssociatedValues_valuedObject_localVariable * extractPtr_10430 = (const cEnumAssociatedValues_valuedObject_localVariable *) (var_property_9437.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_10011_type = extractPtr_10430->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_10032_omnibusName = extractPtr_10430->mAssociatedValue1 ;
      outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_10011_type, function_llvmNameForLocalVariable (extractedValue_10032_omnibusName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 253))  COMMA_SOURCE_FILE ("universal-map.galgas", 253)) ;
      switch (var_valueState_9420.enumValue ()) {
      case GALGAS_valuedObjectState::kNotBuilt:
        break ;
      case GALGAS_valuedObjectState::kEnum_noValue:
      case GALGAS_valuedObjectState::kEnum_hasReadValue:
        {
          {
          ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_setMObjectStateForKey (GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 256)), constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 256)) ;
          }
        }
        break ;
      case GALGAS_valuedObjectState::kEnum_hasUnreadValue:
        {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticWarning (constinArgument_inValuedObjectName.readProperty_location (), GALGAS_string ("previous '").add_operation (constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 258)).add_operation (GALGAS_string ("' value has not been read"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 258)), fixItArray6  COMMA_SOURCE_FILE ("universal-map.galgas", 258)) ;
        }
        break ;
      }
    }
    break ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap searchValuedObjectForReadWriteAccess'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_searchValuedObjectForReadWriteAccess (GALGAS_universalValuedObjectMap & ioObject,
                                                           const GALGAS_lstring constinArgument_inValuedObjectName,
                                                           GALGAS_objectIR & outArgument_outObjectIR,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outObjectIR.drop () ; // Release 'out' argument
  GALGAS_valuedObjectState var_valueState_10778 ;
  GALGAS_valuedObject var_property_10795 ;
  const GALGAS_universalValuedObjectMap temp_0 = ioObject ;
  GALGAS_bool joker_10780 ; // Joker input parameter
  temp_0.readProperty_mInternalPropertyAndRoutineMap ().method_searchKey (constinArgument_inValuedObjectName, var_valueState_10778, joker_10780, var_property_10795, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 269)) ;
  switch (var_property_10795.enumValue ()) {
  case GALGAS_valuedObject::kNotBuilt:
    break ;
  case GALGAS_valuedObject::kEnum_task:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GALGAS_string ("a task has no value"), fixItArray1  COMMA_SOURCE_FILE ("universal-map.galgas", 272)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_driver:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GALGAS_string ("a driver has no value"), fixItArray2  COMMA_SOURCE_FILE ("universal-map.galgas", 274)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalConstant:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GALGAS_string ("a constant cannot be written"), fixItArray3  COMMA_SOURCE_FILE ("universal-map.galgas", 276)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_localConstant:
    {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GALGAS_string ("a constant cannot be written"), fixItArray4  COMMA_SOURCE_FILE ("universal-map.galgas", 278)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalSyncInstance:
    {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GALGAS_string ("a global sync instance cannot be written"), fixItArray5  COMMA_SOURCE_FILE ("universal-map.galgas", 280)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_localVariable:
    {
      const cEnumAssociatedValues_valuedObject_localVariable * extractPtr_11863 = (const cEnumAssociatedValues_valuedObject_localVariable *) (var_property_10795.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_11359_type = extractPtr_11863->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_11380_omnibusName = extractPtr_11863->mAssociatedValue1 ;
      switch (var_valueState_10778.enumValue ()) {
      case GALGAS_valuedObjectState::kNotBuilt:
        break ;
      case GALGAS_valuedObjectState::kEnum_noValue:
        {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GALGAS_string ("object has no value"), fixItArray6  COMMA_SOURCE_FILE ("universal-map.galgas", 284)) ;
          outArgument_outObjectIR.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_valuedObjectState::kEnum_hasUnreadValue:
        {
          outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_11359_type, function_llvmNameForLocalVariable (extractedValue_11380_omnibusName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 286))  COMMA_SOURCE_FILE ("universal-map.galgas", 286)) ;
        }
        break ;
      case GALGAS_valuedObjectState::kEnum_hasReadValue:
        {
          {
          ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_setMObjectStateForKey (GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 288)), constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 288)) ;
          }
          outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_11359_type, function_llvmNameForLocalVariable (extractedValue_11380_omnibusName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 289))  COMMA_SOURCE_FILE ("universal-map.galgas", 289)) ;
        }
        break ;
      }
    }
    break ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap searchValuedObjectType'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_searchValuedObjectType (const GALGAS_universalValuedObjectMap inObject,
                                             const GALGAS_semanticContext constinArgument_inContext,
                                             const GALGAS_omnibusType constinArgument_inSelfType,
                                             const GALGAS_LValueAST constinArgument_inLValue,
                                             GALGAS_omnibusType & outArgument_outType,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, constinArgument_inLValue.readProperty_mIdentifier ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outType = constinArgument_inSelfType ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_valuedObject var_property_12372 ;
    const GALGAS_universalValuedObjectMap temp_1 = inObject ;
    GALGAS_valuedObjectState joker_12356_2 ; // Joker input parameter
    GALGAS_bool joker_12356_1 ; // Joker input parameter
    temp_1.readProperty_mInternalPropertyAndRoutineMap ().method_searchKey (constinArgument_inLValue.readProperty_mIdentifier (), joker_12356_2, joker_12356_1, var_property_12372, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 305)) ;
    switch (var_property_12372.enumValue ()) {
    case GALGAS_valuedObject::kNotBuilt:
      break ;
    case GALGAS_valuedObject::kEnum_task:
      {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (constinArgument_inLValue.readProperty_mIdentifier ().readProperty_location (), GALGAS_string ("undefined in this context"), fixItArray2  COMMA_SOURCE_FILE ("universal-map.galgas", 308)) ;
        outArgument_outType.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_driver:
      {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (constinArgument_inLValue.readProperty_mIdentifier ().readProperty_location (), GALGAS_string ("undefined in this context"), fixItArray3  COMMA_SOURCE_FILE ("universal-map.galgas", 310)) ;
        outArgument_outType.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_globalConstant:
      {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inLValue.readProperty_mIdentifier ().readProperty_location (), GALGAS_string ("undefined in this context"), fixItArray4  COMMA_SOURCE_FILE ("universal-map.galgas", 312)) ;
        outArgument_outType.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_localConstant:
      {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (constinArgument_inLValue.readProperty_mIdentifier ().readProperty_location (), GALGAS_string ("undefined in this context"), fixItArray5  COMMA_SOURCE_FILE ("universal-map.galgas", 314)) ;
        outArgument_outType.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_localVariable:
      {
        const cEnumAssociatedValues_valuedObject_localVariable * extractPtr_12857 = (const cEnumAssociatedValues_valuedObject_localVariable *) (var_property_12372.unsafePointer ()) ;
        const GALGAS_omnibusType extractedValue_12831_type = extractPtr_12857->mAssociatedValue0 ;
        outArgument_outType = extractedValue_12831_type ;
      }
      break ;
    case GALGAS_valuedObject::kEnum_globalSyncInstance:
      {
        const cEnumAssociatedValues_valuedObject_globalSyncInstance * extractPtr_12930 = (const cEnumAssociatedValues_valuedObject_globalSyncInstance *) (var_property_12372.unsafePointer ()) ;
        const GALGAS_omnibusType extractedValue_12904_type = extractPtr_12930->mAssociatedValue0 ;
        outArgument_outType = extractedValue_12904_type ;
      }
      break ;
    }
  }
  extensionMethod_getValuedObjectType (constinArgument_inLValue.readProperty_mOperand (), constinArgument_inContext, outArgument_outType, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 321)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@LValueOperandAST getValuedObjectType'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_getValuedObjectType (const GALGAS_LValueOperandAST inObject,
                                          const GALGAS_semanticContext constinArgument_inContext,
                                          GALGAS_omnibusType & ioArgument_ioType,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_LValueOperandAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_LValueOperandAST::kNotBuilt:
    break ;
  case GALGAS_LValueOperandAST::kEnum_noOperand:
    {
    }
    break ;
  case GALGAS_LValueOperandAST::kEnum_property:
    {
      const cEnumAssociatedValues_LValueOperandAST_property * extractPtr_13816 = (const cEnumAssociatedValues_LValueOperandAST_property *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_13334_propertyName = extractPtr_13816->mAssociatedValue0 ;
      const GALGAS_LValueOperandAST extractedValue_13357_next = extractPtr_13816->mAssociatedValue1 ;
      GALGAS_propertyGetterMap var_propertyGetterMap_13410 = extensionGetter_propertyGetterMap (constinArgument_inContext, ioArgument_ioType, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 334)) ;
      GALGAS_propertyGetterKind var_accessKind_13516 ;
      GALGAS_propertyVisibility joker_13499 ; // Joker input parameter
      var_propertyGetterMap_13410.method_searchKey (extractedValue_13334_propertyName, joker_13499, var_accessKind_13516, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 335)) ;
      switch (var_accessKind_13516.enumValue ()) {
      case GALGAS_propertyGetterKind::kNotBuilt:
        break ;
      case GALGAS_propertyGetterKind::kEnum_constantProperty:
        {
          const cEnumAssociatedValues_propertyGetterKind_constantProperty * extractPtr_13603 = (const cEnumAssociatedValues_propertyGetterKind_constantProperty *) (var_accessKind_13516.unsafePointer ()) ;
          const GALGAS_objectIR extractedValue_13572_value = extractPtr_13603->mAssociatedValue0 ;
          ioArgument_ioType = extensionGetter_type (extractedValue_13572_value, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 338)) ;
        }
        break ;
      case GALGAS_propertyGetterKind::kEnum_storedProperty:
        {
          const cEnumAssociatedValues_propertyGetterKind_storedProperty * extractPtr_13658 = (const cEnumAssociatedValues_propertyGetterKind_storedProperty *) (var_accessKind_13516.unsafePointer ()) ;
          const GALGAS_omnibusType extractedValue_13633_type = extractPtr_13658->mAssociatedValue0 ;
          ioArgument_ioType = extractedValue_13633_type ;
        }
        break ;
      case GALGAS_propertyGetterKind::kEnum_computedProperty:
        {
          const cEnumAssociatedValues_propertyGetterKind_computedProperty * extractPtr_13748 = (const cEnumAssociatedValues_propertyGetterKind_computedProperty *) (var_accessKind_13516.unsafePointer ()) ;
          const GALGAS_unifiedTypeMap_2D_entry extractedValue_13703_propertyTypeProxy = extractPtr_13748->mAssociatedValue0 ;
          ioArgument_ioType = extractedValue_13703_propertyTypeProxy.getter_type (inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 342)) ;
        }
        break ;
      }
      extensionMethod_getValuedObjectType (extractedValue_13357_next, constinArgument_inContext, ioArgument_ioType, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 344)) ;
    }
    break ;
  case GALGAS_LValueOperandAST::kEnum_arrayAccess:
    {
      const cEnumAssociatedValues_LValueOperandAST_arrayAccess * extractPtr_14092 = (const cEnumAssociatedValues_LValueOperandAST_arrayAccess *) (temp_0.unsafePointer ()) ;
      const GALGAS_LValueOperandAST extractedValue_13862_next = extractPtr_14092->mAssociatedValue3 ;
      switch (ioArgument_ioType.readProperty_subscript ().enumValue ()) {
      case GALGAS_subscript::kNotBuilt:
        break ;
      case GALGAS_subscript::kEnum_noSubscript:
        {
        }
        break ;
      case GALGAS_subscript::kEnum_literalString:
        {
        }
        break ;
      case GALGAS_subscript::kEnum_staticSubscript:
        {
          const cEnumAssociatedValues_subscript_staticSubscript * extractPtr_14024 = (const cEnumAssociatedValues_subscript_staticSubscript *) (ioArgument_ioType.readProperty_subscript ().unsafePointer ()) ;
          const GALGAS_omnibusType extractedValue_13992_elementType = extractPtr_14024->mAssociatedValue0 ;
          ioArgument_ioType = extractedValue_13992_elementType ;
        }
        break ;
      }
      extensionMethod_getValuedObjectType (extractedValue_13862_next, constinArgument_inContext, ioArgument_ioType, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 352)) ;
    }
    break ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap checkLocalVariableFinalState'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_checkLocalVariableFinalState (const GALGAS_universalValuedObjectMap inObject,
                                                   GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_universalValuedObjectMap temp_0 = inObject ;
  cEnumerator_flatValuedObjectMap enumerator_14527 (temp_0.readProperty_mInternalPropertyAndRoutineMap (), kENUMERATION_UP) ;
  while (enumerator_14527.hasCurrentObject ()) {
    switch (enumerator_14527.current (HERE).readProperty_mValuedObject ().enumValue ()) {
    case GALGAS_valuedObject::kNotBuilt:
      break ;
    case GALGAS_valuedObject::kEnum_task:
      {
      }
      break ;
    case GALGAS_valuedObject::kEnum_driver:
      {
      }
      break ;
    case GALGAS_valuedObject::kEnum_globalSyncInstance:
      {
      }
      break ;
    case GALGAS_valuedObject::kEnum_globalConstant:
      {
      }
      break ;
    case GALGAS_valuedObject::kEnum_localConstant:
      {
        const cEnumAssociatedValues_valuedObject_localConstant * extractPtr_15010 = (const cEnumAssociatedValues_valuedObject_localConstant *) (enumerator_14527.current (HERE).readProperty_mValuedObject ().unsafePointer ()) ;
        const GALGAS_omnibusType extractedValue_14712_type = extractPtr_15010->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_14733_omnibusName = extractPtr_15010->mAssociatedValue1 ;
        const GALGAS_bool extractedValue_14756_isFormalInputArg = extractPtr_15010->mAssociatedValue2 ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = extractedValue_14756_isFormalInputArg.operator_not (SOURCE_FILE ("universal-map.galgas", 372)).boolEnum () ;
          if (kBoolTrue == test_1) {
            {
            extensionSetter_generateRelease (ioArgument_ioInstructionGenerationList, extractedValue_14712_type, extractedValue_14733_omnibusName, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 373)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_valuedObject::kEnum_localVariable:
      {
        const cEnumAssociatedValues_valuedObject_localVariable * extractPtr_15338 = (const cEnumAssociatedValues_valuedObject_localVariable *) (enumerator_14527.current (HERE).readProperty_mValuedObject ().unsafePointer ()) ;
        const GALGAS_omnibusType extractedValue_15052_type = extractPtr_15338->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_15073_omnibusName = extractPtr_15338->mAssociatedValue1 ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          GALGAS_bool test_3 = GALGAS_bool (kIsEqual, enumerator_14527.current (HERE).readProperty_mObjectState ().objectCompare (GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("universal-map.galgas", 376)))) ;
          if (kBoolTrue == test_3.boolEnum ()) {
            test_3 = enumerator_14527.current (HERE).readProperty_mObjectShouldBeValuedAtEndOfScope () ;
          }
          test_2 = test_3.boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_14527.current (HERE).readProperty_lkey ().readProperty_location (), GALGAS_string ("'").add_operation (enumerator_14527.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 377)).add_operation (GALGAS_string ("' should be valued at the end of routine"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 377)), fixItArray4  COMMA_SOURCE_FILE ("universal-map.galgas", 377)) ;
          }
        }
        {
        extensionSetter_generateRelease (ioArgument_ioInstructionGenerationList, extractedValue_15052_type, extractedValue_15073_omnibusName, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 379)) ;
        }
      }
      break ;
    }
    enumerator_14527.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap openOverrideForSelectBlock'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_openOverrideForSelectBlock (GALGAS_universalValuedObjectMap & ioObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_referenceStateMap var_initialStateMap_15580 = GALGAS_referenceStateMap::constructor_emptyMap (SOURCE_FILE ("universal-map.galgas", 387)) ;
  const GALGAS_universalValuedObjectMap temp_0 = ioObject ;
  cEnumerator_flatValuedObjectMap enumerator_15636 (temp_0.readProperty_mInternalPropertyAndRoutineMap (), kENUMERATION_UP) ;
  while (enumerator_15636.hasCurrentObject ()) {
    switch (enumerator_15636.current (HERE).readProperty_mValuedObject ().enumValue ()) {
    case GALGAS_valuedObject::kNotBuilt:
      break ;
    case GALGAS_valuedObject::kEnum_task:
      {
      }
      break ;
    case GALGAS_valuedObject::kEnum_driver:
      {
      }
      break ;
    case GALGAS_valuedObject::kEnum_globalSyncInstance:
      {
      }
      break ;
    case GALGAS_valuedObject::kEnum_globalConstant:
      {
      }
      break ;
    case GALGAS_valuedObject::kEnum_localConstant:
      {
        {
        var_initialStateMap_15580.setter_insertKey (enumerator_15636.current (HERE).readProperty_lkey (), enumerator_15636.current (HERE).readProperty_mObjectState (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 395)) ;
        }
      }
      break ;
    case GALGAS_valuedObject::kEnum_localVariable:
      {
        {
        var_initialStateMap_15580.setter_insertKey (enumerator_15636.current (HERE).readProperty_lkey (), enumerator_15636.current (HERE).readProperty_mObjectState (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 397)) ;
        }
      }
      break ;
    }
    enumerator_15636.gotoNextObject () ;
  }
  const GALGAS_universalValuedObjectMap temp_1 = ioObject ;
  ioObject.mProperty_mScopeStack.addAssign_operation (GALGAS_scopeKind::constructor_selectScope (SOURCE_FILE ("universal-map.galgas", 400)), GALGAS_bool (true), var_initialStateMap_15580, GALGAS_referenceStateMap::constructor_emptyMap (SOURCE_FILE ("universal-map.galgas", 400)), temp_1.readProperty_mLocalObjectList ()  COMMA_SOURCE_FILE ("universal-map.galgas", 400)) ;
  ioObject.mProperty_mLocalObjectList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("universal-map.galgas", 401)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap openOverrideForRepeatBlock'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_openOverrideForRepeatBlock (GALGAS_universalValuedObjectMap & ioObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_referenceStateMap var_initialStateMap_16332 = GALGAS_referenceStateMap::constructor_emptyMap (SOURCE_FILE ("universal-map.galgas", 407)) ;
  const GALGAS_universalValuedObjectMap temp_0 = ioObject ;
  cEnumerator_flatValuedObjectMap enumerator_16388 (temp_0.readProperty_mInternalPropertyAndRoutineMap (), kENUMERATION_UP) ;
  while (enumerator_16388.hasCurrentObject ()) {
    switch (enumerator_16388.current (HERE).readProperty_mValuedObject ().enumValue ()) {
    case GALGAS_valuedObject::kNotBuilt:
      break ;
    case GALGAS_valuedObject::kEnum_task:
      {
      }
      break ;
    case GALGAS_valuedObject::kEnum_driver:
      {
      }
      break ;
    case GALGAS_valuedObject::kEnum_globalSyncInstance:
      {
      }
      break ;
    case GALGAS_valuedObject::kEnum_globalConstant:
      {
      }
      break ;
    case GALGAS_valuedObject::kEnum_localConstant:
      {
        {
        var_initialStateMap_16332.setter_insertKey (enumerator_16388.current (HERE).readProperty_lkey (), enumerator_16388.current (HERE).readProperty_mObjectState (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 415)) ;
        }
      }
      break ;
    case GALGAS_valuedObject::kEnum_localVariable:
      {
        {
        var_initialStateMap_16332.setter_insertKey (enumerator_16388.current (HERE).readProperty_lkey (), enumerator_16388.current (HERE).readProperty_mObjectState (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 417)) ;
        }
      }
      break ;
    }
    enumerator_16388.gotoNextObject () ;
  }
  const GALGAS_universalValuedObjectMap temp_1 = ioObject ;
  ioObject.mProperty_mScopeStack.addAssign_operation (GALGAS_scopeKind::constructor_repeatScope (SOURCE_FILE ("universal-map.galgas", 420)), GALGAS_bool (true), var_initialStateMap_16332, GALGAS_referenceStateMap::constructor_emptyMap (SOURCE_FILE ("universal-map.galgas", 420)), temp_1.readProperty_mLocalObjectList ()  COMMA_SOURCE_FILE ("universal-map.galgas", 420)) ;
  ioObject.mProperty_mLocalObjectList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("universal-map.galgas", 421)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap openBranch'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_openBranch (GALGAS_universalValuedObjectMap & ioObject,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_referenceStateMap var_initialStateMap_17080 ;
  const GALGAS_universalValuedObjectMap temp_0 = ioObject ;
  GALGAS_scopeKind joker_17055 ; // Joker input parameter
  GALGAS_bool joker_17058 ; // Joker input parameter
  GALGAS_referenceStateMap joker_17082_2 ; // Joker input parameter
  GALGAS_lstringlist joker_17082_1 ; // Joker input parameter
  temp_0.readProperty_mScopeStack ().method_last (joker_17055, joker_17058, var_initialStateMap_17080, joker_17082_2, joker_17082_1, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 427)) ;
  cEnumerator_referenceStateMap enumerator_17108 (var_initialStateMap_17080, kENUMERATION_UP) ;
  while (enumerator_17108.hasCurrentObject ()) {
    {
    ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_setMObjectStateForKey (enumerator_17108.current_mState (HERE), enumerator_17108.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 429)) ;
    }
    enumerator_17108.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap closeBranch'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_closeBranch (GALGAS_universalValuedObjectMap & ioObject,
                                  const GALGAS_location constinArgument_inErrorLocation,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_scopeKind var_scopeKind_17469 ;
  GALGAS_bool var_firstBranch_17486 ;
  GALGAS_referenceStateMap var_initialStateMap_17507 ;
  GALGAS_referenceStateMap var_referenceStateMap_17530 ;
  GALGAS_lstringlist var_localObjectList_17551 ;
  {
  ioObject.mProperty_mScopeStack.setter_popLast (var_scopeKind_17469, var_firstBranch_17486, var_initialStateMap_17507, var_referenceStateMap_17530, var_localObjectList_17551, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 436)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_firstBranch_17486.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_referenceStateMap var_newReferenceStateMap_17622 = GALGAS_referenceStateMap::constructor_emptyMap (SOURCE_FILE ("universal-map.galgas", 438)) ;
      const GALGAS_universalValuedObjectMap temp_1 = ioObject ;
      cEnumerator_flatValuedObjectMap enumerator_17680 (temp_1.readProperty_mInternalPropertyAndRoutineMap (), kENUMERATION_UP) ;
      while (enumerator_17680.hasCurrentObject ()) {
        switch (enumerator_17680.current (HERE).readProperty_mValuedObject ().enumValue ()) {
        case GALGAS_valuedObject::kNotBuilt:
          break ;
        case GALGAS_valuedObject::kEnum_task:
          {
          }
          break ;
        case GALGAS_valuedObject::kEnum_driver:
          {
          }
          break ;
        case GALGAS_valuedObject::kEnum_globalConstant:
          {
          }
          break ;
        case GALGAS_valuedObject::kEnum_globalSyncInstance:
          {
          }
          break ;
        case GALGAS_valuedObject::kEnum_localConstant:
          {
            {
            var_newReferenceStateMap_17622.setter_insertKey (enumerator_17680.current (HERE).readProperty_lkey (), enumerator_17680.current (HERE).readProperty_mObjectState (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 446)) ;
            }
          }
          break ;
        case GALGAS_valuedObject::kEnum_localVariable:
          {
            {
            var_newReferenceStateMap_17622.setter_insertKey (enumerator_17680.current (HERE).readProperty_lkey (), enumerator_17680.current (HERE).readProperty_mObjectState (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 448)) ;
            }
          }
          break ;
        }
        enumerator_17680.gotoNextObject () ;
      }
      ioObject.mProperty_mScopeStack.addAssign_operation (var_scopeKind_17469, GALGAS_bool (false), var_initialStateMap_17507, var_newReferenceStateMap_17622, var_localObjectList_17551  COMMA_SOURCE_FILE ("universal-map.galgas", 451)) ;
    }
  }
  if (kBoolFalse == test_0) {
    switch (var_scopeKind_17469.enumValue ()) {
    case GALGAS_scopeKind::kNotBuilt:
      break ;
    case GALGAS_scopeKind::kEnum_selectScope:
      {
        cEnumerator_referenceStateMap enumerator_18245 (var_referenceStateMap_17530, kENUMERATION_UP) ;
        while (enumerator_18245.hasCurrentObject ()) {
          GALGAS_valuedObjectState var_currentObjectState_18355 ;
          const GALGAS_universalValuedObjectMap temp_2 = ioObject ;
          GALGAS_bool joker_18357_2 ; // Joker input parameter
          GALGAS_valuedObject joker_18357_1 ; // Joker input parameter
          temp_2.readProperty_mInternalPropertyAndRoutineMap ().method_searchKey (enumerator_18245.current_lkey (HERE), var_currentObjectState_18355, joker_18357_2, joker_18357_1, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 456)) ;
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = GALGAS_bool (kIsEqual, enumerator_18245.current_mState (HERE).objectCompare (var_currentObjectState_18355)).boolEnum () ;
            if (kBoolTrue == test_3) {
            }
          }
          if (kBoolFalse == test_3) {
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = GALGAS_bool (kIsEqual, var_currentObjectState_18355.objectCompare (GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 458)))).operator_and (GALGAS_bool (kIsEqual, enumerator_18245.current_mState (HERE).objectCompare (GALGAS_valuedObjectState::constructor_hasReadValue (SOURCE_FILE ("universal-map.galgas", 458)))) COMMA_SOURCE_FILE ("universal-map.galgas", 458)).boolEnum () ;
              if (kBoolTrue == test_4) {
              }
            }
            if (kBoolFalse == test_4) {
              enumGalgasBool test_5 = kBoolTrue ;
              if (kBoolTrue == test_5) {
                test_5 = GALGAS_bool (kIsEqual, var_currentObjectState_18355.objectCompare (GALGAS_valuedObjectState::constructor_hasReadValue (SOURCE_FILE ("universal-map.galgas", 459)))).operator_and (GALGAS_bool (kIsEqual, enumerator_18245.current_mState (HERE).objectCompare (GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 459)))) COMMA_SOURCE_FILE ("universal-map.galgas", 459)).boolEnum () ;
                if (kBoolTrue == test_5) {
                  {
                  var_referenceStateMap_17530.setter_setMStateForKey (GALGAS_valuedObjectState::constructor_hasReadValue (SOURCE_FILE ("universal-map.galgas", 460)), enumerator_18245.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 460)) ;
                  }
                }
              }
              if (kBoolFalse == test_5) {
                TC_Array <C_FixItDescription> fixItArray6 ;
                inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid state for object '").add_operation (enumerator_18245.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 463)).add_operation (GALGAS_string ("': found "), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 463)).add_operation (extensionGetter_string (var_currentObjectState_18355, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 463)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 463)).add_operation (GALGAS_string (", required "), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 463)).add_operation (extensionGetter_string (enumerator_18245.current_mState (HERE), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 463)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 463)), fixItArray6  COMMA_SOURCE_FILE ("universal-map.galgas", 462)) ;
              }
            }
          }
          enumerator_18245.gotoNextObject () ;
        }
        ioObject.mProperty_mScopeStack.addAssign_operation (var_scopeKind_17469, GALGAS_bool (false), var_initialStateMap_17507, var_referenceStateMap_17530, var_localObjectList_17551  COMMA_SOURCE_FILE ("universal-map.galgas", 466)) ;
      }
      break ;
    case GALGAS_scopeKind::kEnum_repeatScope:
      {
        cEnumerator_referenceStateMap enumerator_19043 (var_referenceStateMap_17530, kENUMERATION_UP) ;
        while (enumerator_19043.hasCurrentObject ()) {
          GALGAS_valuedObjectState var_currentObjectState_19153 ;
          const GALGAS_universalValuedObjectMap temp_7 = ioObject ;
          GALGAS_bool joker_19155_2 ; // Joker input parameter
          GALGAS_valuedObject joker_19155_1 ; // Joker input parameter
          temp_7.readProperty_mInternalPropertyAndRoutineMap ().method_searchKey (enumerator_19043.current_lkey (HERE), var_currentObjectState_19153, joker_19155_2, joker_19155_1, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 469)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = GALGAS_bool (kIsNotEqual, enumerator_19043.current_mState (HERE).objectCompare (var_currentObjectState_19153)).boolEnum () ;
            if (kBoolTrue == test_8) {
              TC_Array <C_FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid state for object '").add_operation (enumerator_19043.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 472)).add_operation (GALGAS_string ("': found "), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 472)).add_operation (extensionGetter_string (var_currentObjectState_19153, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 472)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 472)).add_operation (GALGAS_string (", required "), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 472)).add_operation (extensionGetter_string (enumerator_19043.current_mState (HERE), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 472)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 472)), fixItArray9  COMMA_SOURCE_FILE ("universal-map.galgas", 471)) ;
            }
          }
          enumerator_19043.gotoNextObject () ;
        }
        ioObject.mProperty_mScopeStack.addAssign_operation (var_scopeKind_17469, GALGAS_bool (false), var_initialStateMap_17507, var_referenceStateMap_17530, var_localObjectList_17551  COMMA_SOURCE_FILE ("universal-map.galgas", 475)) ;
      }
      break ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap closeOverride'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_closeOverride (GALGAS_universalValuedObjectMap & ioObject,
                                    const GALGAS_location constinArgument_inErrorLocation,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_referenceStateMap var_referenceStateMap_19755 ;
  GALGAS_lstringlist var_localObjectList_19776 ;
  {
  GALGAS_scopeKind joker_19725 ; // Joker input parameter
  GALGAS_bool joker_19728 ; // Joker input parameter
  GALGAS_referenceStateMap joker_19731 ; // Joker input parameter
  ioObject.mProperty_mScopeStack.setter_popLast (joker_19725, joker_19728, joker_19731, var_referenceStateMap_19755, var_localObjectList_19776, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 483)) ;
  }
  cEnumerator_referenceStateMap enumerator_19832 (var_referenceStateMap_19755, kENUMERATION_UP) ;
  while (enumerator_19832.hasCurrentObject ()) {
    {
    ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_setMObjectStateForKey (enumerator_19832.current_mState (HERE), enumerator_19832.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 486)) ;
    }
    enumerator_19832.gotoNextObject () ;
  }
  const GALGAS_universalValuedObjectMap temp_0 = ioObject ;
  cEnumerator_lstringlist enumerator_20015 (temp_0.readProperty_mLocalObjectList (), kENUMERATION_UP) ;
  while (enumerator_20015.hasCurrentObject ()) {
    GALGAS_valuedObjectState var_currentObjectState_20137 ;
    GALGAS_bool var_objectShouldBeValuedAtEndOfScope_20181 ;
    GALGAS_valuedObject var_possibleValuedObject_20213 ;
    const GALGAS_universalValuedObjectMap temp_1 = ioObject ;
    temp_1.readProperty_mInternalPropertyAndRoutineMap ().method_searchKey (enumerator_20015.current_mValue (HERE), var_currentObjectState_20137, var_objectShouldBeValuedAtEndOfScope_20181, var_possibleValuedObject_20213, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 490)) ;
    switch (var_possibleValuedObject_20213.enumValue ()) {
    case GALGAS_valuedObject::kNotBuilt:
      break ;
    case GALGAS_valuedObject::kEnum_task:
      {
      }
      break ;
    case GALGAS_valuedObject::kEnum_driver:
      {
      }
      break ;
    case GALGAS_valuedObject::kEnum_globalSyncInstance:
      {
      }
      break ;
    case GALGAS_valuedObject::kEnum_globalConstant:
      {
      }
      break ;
    case GALGAS_valuedObject::kEnum_localConstant:
      {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsEqual, var_currentObjectState_20137.objectCompare (GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 502)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticWarning (constinArgument_inErrorLocation, GALGAS_string ("'").add_operation (enumerator_20015.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 503)).add_operation (GALGAS_string ("' is never read"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 503)), fixItArray3  COMMA_SOURCE_FILE ("universal-map.galgas", 503)) ;
          }
        }
      }
      break ;
    case GALGAS_valuedObject::kEnum_localVariable:
      {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          GALGAS_bool test_5 = GALGAS_bool (kIsEqual, var_currentObjectState_20137.objectCompare (GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("universal-map.galgas", 506)))) ;
          if (kBoolTrue == test_5.boolEnum ()) {
            test_5 = var_objectShouldBeValuedAtEndOfScope_20181 ;
          }
          test_4 = test_5.boolEnum () ;
          if (kBoolTrue == test_4) {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("'").add_operation (enumerator_20015.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 507)).add_operation (GALGAS_string ("' should be valued at the end of routine"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 507)), fixItArray6  COMMA_SOURCE_FILE ("universal-map.galgas", 507)) ;
          }
        }
      }
      break ;
    }
    enumerator_20015.gotoNextObject () ;
  }
  const GALGAS_universalValuedObjectMap temp_7 = ioObject ;
  cEnumerator_lstringlist enumerator_20787 (temp_7.readProperty_mLocalObjectList (), kENUMERATION_UP) ;
  while (enumerator_20787.hasCurrentObject ()) {
    {
    GALGAS_valuedObjectState joker_20877_3 ; // Joker input parameter
    GALGAS_bool joker_20877_2 ; // Joker input parameter
    GALGAS_valuedObject joker_20877_1 ; // Joker input parameter
    ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_removeKey (enumerator_20787.current_mValue (HERE), joker_20877_3, joker_20877_2, joker_20877_1, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 513)) ;
    }
    enumerator_20787.gotoNextObject () ;
  }
  ioObject.mProperty_mLocalObjectList = var_localObjectList_19776 ;
}


//----------------------------------------------------------------------------------------------------------------------
// @omnibusType reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_omnibusType::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_omnibusType * p = (const cPtr_omnibusType *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_omnibusType) ;
  if (kOperandEqual == result) {
    result = mProperty_subscript.objectCompare (p->mProperty_subscript) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_attributes.objectCompare (p->mProperty_attributes) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_omnibusTypeDescriptionName.objectCompare (p->mProperty_omnibusTypeDescriptionName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_kind.objectCompare (p->mProperty_kind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_llvmBaseTypeName.objectCompare (p->mProperty_llvmBaseTypeName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_omnibusType::objectCompare (const GALGAS_omnibusType & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType::GALGAS_omnibusType (void) :
AC_GALGAS_reference_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_omnibusType::constructor_default (LOCATION_ARGS) {
  return GALGAS_omnibusType::constructor_new (GALGAS_subscript::constructor_noSubscript (HERE),
                                              GALGAS_omnibusTypeAttributes::constructor_none (HERE),
                                              GALGAS_string::constructor_default (HERE),
                                              GALGAS_typeKind::constructor_void (HERE),
                                              GALGAS_string::constructor_default (HERE)
                                              COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType::GALGAS_omnibusType (const cPtr_omnibusType * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_omnibusType) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_omnibusType::constructor_new (const GALGAS_subscript & inAttribute_subscript,
                                                        const GALGAS_omnibusTypeAttributes & inAttribute_attributes,
                                                        const GALGAS_string & inAttribute_omnibusTypeDescriptionName,
                                                        const GALGAS_typeKind & inAttribute_kind,
                                                        const GALGAS_string & inAttribute_llvmBaseTypeName
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_omnibusType result ;
  if (inAttribute_subscript.isValid () && inAttribute_attributes.isValid () && inAttribute_omnibusTypeDescriptionName.isValid () && inAttribute_kind.isValid () && inAttribute_llvmBaseTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_omnibusType (inAttribute_subscript, inAttribute_attributes, inAttribute_omnibusTypeDescriptionName, inAttribute_kind, inAttribute_llvmBaseTypeName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_omnibusType::setter_setSubscript (GALGAS_subscript inValue
                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_omnibusType * p = (cPtr_omnibusType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_omnibusType) ;
    p->mProperty_subscript = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_omnibusType::setter_setAttributes (GALGAS_omnibusTypeAttributes inValue
                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_omnibusType * p = (cPtr_omnibusType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_omnibusType) ;
    p->mProperty_attributes = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_omnibusType::setter_setOmnibusTypeDescriptionName (GALGAS_string inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_omnibusType * p = (cPtr_omnibusType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_omnibusType) ;
    p->mProperty_omnibusTypeDescriptionName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_omnibusType::setter_setKind (GALGAS_typeKind inValue
                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_omnibusType * p = (cPtr_omnibusType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_omnibusType) ;
    p->mProperty_kind = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_omnibusType::setter_setLlvmBaseTypeName (GALGAS_string inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_omnibusType * p = (cPtr_omnibusType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_omnibusType) ;
    p->mProperty_llvmBaseTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_subscript GALGAS_omnibusType::readProperty_subscript (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_subscript () ;
  }else{
    cPtr_omnibusType * p = (cPtr_omnibusType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_omnibusType) ;
    return p->mProperty_subscript ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusTypeAttributes GALGAS_omnibusType::readProperty_attributes (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_omnibusTypeAttributes () ;
  }else{
    cPtr_omnibusType * p = (cPtr_omnibusType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_omnibusType) ;
    return p->mProperty_attributes ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_omnibusType::readProperty_omnibusTypeDescriptionName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_omnibusType * p = (cPtr_omnibusType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_omnibusType) ;
    return p->mProperty_omnibusTypeDescriptionName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_omnibusType::readProperty_kind (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_typeKind () ;
  }else{
    cPtr_omnibusType * p = (cPtr_omnibusType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_omnibusType) ;
    return p->mProperty_kind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_omnibusType::readProperty_llvmBaseTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_omnibusType * p = (cPtr_omnibusType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_omnibusType) ;
    return p->mProperty_llvmBaseTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @omnibusType class
//----------------------------------------------------------------------------------------------------------------------

cPtr_omnibusType::cPtr_omnibusType (const GALGAS_subscript & in_subscript,
                                    const GALGAS_omnibusTypeAttributes & in_attributes,
                                    const GALGAS_string & in_omnibusTypeDescriptionName,
                                    const GALGAS_typeKind & in_kind,
                                    const GALGAS_string & in_llvmBaseTypeName
                                    COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE),
mProperty_subscript (in_subscript),
mProperty_attributes (in_attributes),
mProperty_omnibusTypeDescriptionName (in_omnibusTypeDescriptionName),
mProperty_kind (in_kind),
mProperty_llvmBaseTypeName (in_llvmBaseTypeName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_omnibusType::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_omnibusType ;
}

void cPtr_omnibusType::description (C_String & ioString,
                                    const int32_t inIndentation) const {
  ioString << "[@omnibusType:" ;
  mProperty_subscript.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_attributes.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_omnibusTypeDescriptionName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_kind.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_llvmBaseTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_omnibusType::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_omnibusType (mProperty_subscript, mProperty_attributes, mProperty_omnibusTypeDescriptionName, mProperty_kind, mProperty_llvmBaseTypeName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@omnibusType type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_omnibusType ("omnibusType",
                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_omnibusType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_omnibusType ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_omnibusType::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_omnibusType (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_omnibusType::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_omnibusType result ;
  const GALGAS_omnibusType * p = (const GALGAS_omnibusType *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_omnibusType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("omnibusType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticEntityMap::GALGAS_staticEntityMap (void) :
mProperty_mStaticStringMap (),
mProperty_mGlobalStructuredConstantList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticEntityMap::~ GALGAS_staticEntityMap (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticEntityMap::GALGAS_staticEntityMap (const GALGAS_staticStringMap & inOperand0,
                                                const GALGAS_globalStructuredConstantList & inOperand1) :
mProperty_mStaticStringMap (inOperand0),
mProperty_mGlobalStructuredConstantList (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticEntityMap GALGAS_staticEntityMap::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_staticEntityMap (GALGAS_staticStringMap::constructor_emptyMap (HERE),
                                 GALGAS_globalStructuredConstantList::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticEntityMap GALGAS_staticEntityMap::constructor_new (const GALGAS_staticStringMap & inOperand0,
                                                                const GALGAS_globalStructuredConstantList & inOperand1 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_staticEntityMap result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_staticEntityMap (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_staticEntityMap::objectCompare (const GALGAS_staticEntityMap & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mStaticStringMap.objectCompare (inOperand.mProperty_mStaticStringMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGlobalStructuredConstantList.objectCompare (inOperand.mProperty_mGlobalStructuredConstantList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_staticEntityMap::isValid (void) const {
  return mProperty_mStaticStringMap.isValid () && mProperty_mGlobalStructuredConstantList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_staticEntityMap::drop (void) {
  mProperty_mStaticStringMap.drop () ;
  mProperty_mGlobalStructuredConstantList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_staticEntityMap::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "<struct @staticEntityMap:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mStaticStringMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGlobalStructuredConstantList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@staticEntityMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticEntityMap ("staticEntityMap",
                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_staticEntityMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticEntityMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_staticEntityMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticEntityMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticEntityMap GALGAS_staticEntityMap::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_staticEntityMap result ;
  const GALGAS_staticEntityMap * p = (const GALGAS_staticEntityMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_staticEntityMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticEntityMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@staticEntityMap findOrAddStaticString'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_findOrAddStaticString (GALGAS_staticEntityMap & ioObject,
                                            GALGAS_string inArgument_inString,
                                            GALGAS_uint & outArgument_outIndex,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outIndex.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_staticEntityMap temp_1 = ioObject ;
    test_0 = temp_1.readProperty_mStaticStringMap ().getter_hasKey (inArgument_inString COMMA_SOURCE_FILE ("context.galgas", 284)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_staticEntityMap temp_2 = ioObject ;
      temp_2.readProperty_mStaticStringMap ().method_searchKey (inArgument_inString.getter_nowhere (SOURCE_FILE ("context.galgas", 285)), outArgument_outIndex, inCompiler COMMA_SOURCE_FILE ("context.galgas", 285)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_staticEntityMap temp_3 = ioObject ;
    outArgument_outIndex = temp_3.readProperty_mStaticStringMap ().getter_count (SOURCE_FILE ("context.galgas", 287)) ;
    {
    ioObject.mProperty_mStaticStringMap.setter_insertKey (inArgument_inString.getter_nowhere (SOURCE_FILE ("context.galgas", 288)), outArgument_outIndex, inCompiler COMMA_SOURCE_FILE ("context.galgas", 288)) ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_omnibusType_2D_weak::objectCompare (const GALGAS_omnibusType_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType_2D_weak::GALGAS_omnibusType_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType_2D_weak & GALGAS_omnibusType_2D_weak::operator = (const GALGAS_omnibusType & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType_2D_weak::GALGAS_omnibusType_2D_weak (const GALGAS_omnibusType & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType_2D_weak GALGAS_omnibusType_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_omnibusType_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_omnibusType_2D_weak::bang_omnibusType_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_omnibusType result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_omnibusType) ;
      result = GALGAS_omnibusType ((cPtr_omnibusType *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@omnibusType-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_omnibusType_2D_weak ("omnibusType-weak",
                                            NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_omnibusType_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_omnibusType_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_omnibusType_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_omnibusType_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType_2D_weak GALGAS_omnibusType_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_omnibusType_2D_weak result ;
  const GALGAS_omnibusType_2D_weak * p = (const GALGAS_omnibusType_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_omnibusType_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("omnibusType-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType llvmTypeName'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_omnibusType_llvmTypeName> gExtensionGetterTable_omnibusType_llvmTypeName ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_llvmTypeName (const int32_t inClassIndex,
                                        enterExtensionGetter_omnibusType_llvmTypeName inGetter) {
  gExtensionGetterTable_omnibusType_llvmTypeName.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_llvmTypeName (const cPtr_omnibusType * inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_omnibusType) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_omnibusType_llvmTypeName f = NULL ;
    if (classIndex < gExtensionGetterTable_omnibusType_llvmTypeName.count ()) {
      f = gExtensionGetterTable_omnibusType_llvmTypeName (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_omnibusType_llvmTypeName.count ()) {
           f = gExtensionGetterTable_omnibusType_llvmTypeName (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_omnibusType_llvmTypeName.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_omnibusType_llvmTypeName (const cPtr_omnibusType * inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_omnibusType * object = inObject ;
  macroValidSharedObject (object, cPtr_omnibusType) ;
  const GALGAS_omnibusType temp_0 = object ;
  switch (temp_0.readProperty_kind ().enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_void:
    {
      result_result = GALGAS_string ("void") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_boolean:
    {
      result_result = GALGAS_string ("i1") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_literalString:
    {
      result_result = GALGAS_string ("i8*") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
      const cEnumAssociatedValues_typeKind_enumeration * extractPtr_2463 = (const cEnumAssociatedValues_typeKind_enumeration *) (temp_0.readProperty_kind ().unsafePointer ()) ;
      const GALGAS_uint extractedValue_2432_bitCount = extractPtr_2463->mAssociatedValue0 ;
      result_result = GALGAS_string ("i").add_operation (extractedValue_2432_bitCount.getter_string (SOURCE_FILE ("types.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 67)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      const GALGAS_omnibusType temp_1 = object ;
      result_result = GALGAS_string ("%").add_operation (temp_1.readProperty_llvmBaseTypeName ().getter_assemblerRepresentation (SOURCE_FILE ("types.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 69)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_syncTool:
    {
      const GALGAS_omnibusType temp_2 = object ;
      result_result = GALGAS_string ("%").add_operation (temp_2.readProperty_llvmBaseTypeName ().getter_assemblerRepresentation (SOURCE_FILE ("types.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 71)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_2706 = (const cEnumAssociatedValues_typeKind_integer *) (temp_0.readProperty_kind ().unsafePointer ()) ;
      const GALGAS_uint extractedValue_2675_bitCount = extractPtr_2706->mAssociatedValue3 ;
      result_result = GALGAS_string ("i").add_operation (extractedValue_2675_bitCount.getter_string (SOURCE_FILE ("types.galgas", 73)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 73)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_compileTimeBool:
  case GALGAS_typeKind::kEnum_compileTimeInteger:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_typeKind::kEnum_generic:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_typeKind::kEnum_llvmType:
    {
      const GALGAS_omnibusType temp_3 = object ;
      result_result = temp_3.readProperty_llvmBaseTypeName () ;
    }
    break ;
  case GALGAS_typeKind::kEnum_opaque:
    {
      const cEnumAssociatedValues_typeKind_opaque * extractPtr_2993 = (const cEnumAssociatedValues_typeKind_opaque *) (temp_0.readProperty_kind ().unsafePointer ()) ;
      const GALGAS_bigint extractedValue_2962_bitCount = extractPtr_2993->mAssociatedValue0 ;
      result_result = GALGAS_string ("i").add_operation (extractedValue_2962_bitCount.getter_string (SOURCE_FILE ("types.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 81)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_staticArrayType:
    {
      const GALGAS_omnibusType temp_4 = object ;
      result_result = GALGAS_string ("%").add_operation (temp_4.readProperty_llvmBaseTypeName ().getter_assemblerRepresentation (SOURCE_FILE ("types.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 83)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dynamicArrayType:
    {
      result_result = GALGAS_string ("%ptrtype") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_function:
    {
      const cEnumAssociatedValues_typeKind_function * extractPtr_3648 = (const cEnumAssociatedValues_typeKind_function *) (temp_0.readProperty_kind ().unsafePointer ()) ;
      const GALGAS_routineTypedSignature extractedValue_3190_signature = extractPtr_3648->mAssociatedValue1 ;
      const GALGAS_unifiedTypeMap_2D_entry extractedValue_3206_returnTypeProxy = extractPtr_3648->mAssociatedValue2 ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (kIsEqual, extractedValue_3206_returnTypeProxy.objectCompare (GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("types.galgas", 87)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          result_result = GALGAS_string ("void") ;
        }
      }
      if (kBoolFalse == test_5) {
        result_result = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extractedValue_3206_returnTypeProxy.getter_type (inCompiler COMMA_SOURCE_FILE ("types.galgas", 90)).ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 90)) ;
      }
      result_result.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 92)) ;
      cEnumerator_routineTypedSignature enumerator_3407 (extractedValue_3190_signature, kENUMERATION_UP) ;
      while (enumerator_3407.hasCurrentObject ()) {
        result_result.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_3407.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("types.galgas", 95)).ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 95)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 95)) ;
        switch (enumerator_3407.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
        case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
        case GALGAS_procFormalArgumentPassingMode::kEnum_output:
          {
            result_result.plusAssign_operation(GALGAS_string ("*"), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 97)) ;
          }
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_input:
          {
          }
          break ;
        }
        if (enumerator_3407.hasNextObject ()) {
          result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 100)) ;
        }
        enumerator_3407.gotoNextObject () ;
      }
      result_result.plusAssign_operation(GALGAS_string (")*"), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 102)) ;
    }
    break ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_omnibusType_llvmTypeName (void) {
  enterExtensionGetter_llvmTypeName (kTypeDescriptor_GALGAS_omnibusType.mSlotID,
                                     extensionGetter_omnibusType_llvmTypeName) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_omnibusType_llvmTypeName (void) {
  gExtensionGetterTable_omnibusType_llvmTypeName.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_omnibusType_llvmTypeName (defineExtensionGetter_omnibusType_llvmTypeName,
                                                     freeExtensionGetter_omnibusType_llvmTypeName) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@omnibusType checkIsCompileTimeType'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_omnibusType_checkIsCompileTimeType> gExtensionMethodTable_omnibusType_checkIsCompileTimeType ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_checkIsCompileTimeType (const int32_t inClassIndex,
                                                  extensionMethodSignature_omnibusType_checkIsCompileTimeType inMethod) {
  gExtensionMethodTable_omnibusType_checkIsCompileTimeType.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_checkIsCompileTimeType (const cPtr_omnibusType * inObject,
                                                 const GALGAS_location constin_inErrorLocation,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_omnibusType) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_omnibusType_checkIsCompileTimeType f = NULL ;
    if (classIndex < gExtensionMethodTable_omnibusType_checkIsCompileTimeType.count ()) {
      f = gExtensionMethodTable_omnibusType_checkIsCompileTimeType (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_omnibusType_checkIsCompileTimeType.count ()) {
           f = gExtensionMethodTable_omnibusType_checkIsCompileTimeType (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_omnibusType_checkIsCompileTimeType.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inErrorLocation, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_omnibusType_checkIsCompileTimeType (const cPtr_omnibusType * inObject,
                                                                const GALGAS_location constinArgument_inErrorLocation,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  auto object = (cPtr_omnibusType *) inObject ; // A
  macroValidSharedObject (object, cPtr_omnibusType) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_omnibusType temp_1 = object ;
    const GALGAS_omnibusType temp_2 = object ;
    test_0 = temp_1.readProperty_kind ().getter_isCompileTimeBool (SOURCE_FILE ("types.galgas", 109)).operator_or (temp_2.readProperty_kind ().getter_isCompileTimeInteger (SOURCE_FILE ("types.galgas", 109)) COMMA_SOURCE_FILE ("types.galgas", 109)).operator_not (SOURCE_FILE ("types.galgas", 109)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this type should be a compile time type"), fixItArray3  COMMA_SOURCE_FILE ("types.galgas", 110)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_omnibusType_checkIsCompileTimeType (void) {
  enterExtensionMethod_checkIsCompileTimeType (kTypeDescriptor_GALGAS_omnibusType.mSlotID,
                                               extensionMethod_omnibusType_checkIsCompileTimeType) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_omnibusType_checkIsCompileTimeType (void) {
  gExtensionMethodTable_omnibusType_checkIsCompileTimeType.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_omnibusType_checkIsCompileTimeType (defineExtensionMethod_omnibusType_checkIsCompileTimeType,
                                                               freeExtensionMethod_omnibusType_checkIsCompileTimeType) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@omnibusType checkIsNotCompileTimeType'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_omnibusType_checkIsNotCompileTimeType> gExtensionMethodTable_omnibusType_checkIsNotCompileTimeType ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_checkIsNotCompileTimeType (const int32_t inClassIndex,
                                                     extensionMethodSignature_omnibusType_checkIsNotCompileTimeType inMethod) {
  gExtensionMethodTable_omnibusType_checkIsNotCompileTimeType.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_checkIsNotCompileTimeType (const cPtr_omnibusType * inObject,
                                                    const GALGAS_location constin_inErrorLocation,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_omnibusType) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_omnibusType_checkIsNotCompileTimeType f = NULL ;
    if (classIndex < gExtensionMethodTable_omnibusType_checkIsNotCompileTimeType.count ()) {
      f = gExtensionMethodTable_omnibusType_checkIsNotCompileTimeType (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_omnibusType_checkIsNotCompileTimeType.count ()) {
           f = gExtensionMethodTable_omnibusType_checkIsNotCompileTimeType (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_omnibusType_checkIsNotCompileTimeType.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inErrorLocation, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_omnibusType_checkIsNotCompileTimeType (const cPtr_omnibusType * inObject,
                                                                   const GALGAS_location constinArgument_inErrorLocation,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  auto object = (cPtr_omnibusType *) inObject ; // A
  macroValidSharedObject (object, cPtr_omnibusType) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_omnibusType temp_1 = object ;
    const GALGAS_omnibusType temp_2 = object ;
    test_0 = temp_1.readProperty_kind ().getter_isCompileTimeBool (SOURCE_FILE ("types.galgas", 117)).operator_or (temp_2.readProperty_kind ().getter_isCompileTimeInteger (SOURCE_FILE ("types.galgas", 117)) COMMA_SOURCE_FILE ("types.galgas", 117)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this type should not be a compile time type"), fixItArray3  COMMA_SOURCE_FILE ("types.galgas", 118)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_omnibusType_checkIsNotCompileTimeType (void) {
  enterExtensionMethod_checkIsNotCompileTimeType (kTypeDescriptor_GALGAS_omnibusType.mSlotID,
                                                  extensionMethod_omnibusType_checkIsNotCompileTimeType) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_omnibusType_checkIsNotCompileTimeType (void) {
  gExtensionMethodTable_omnibusType_checkIsNotCompileTimeType.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_omnibusType_checkIsNotCompileTimeType (defineExtensionMethod_omnibusType_checkIsNotCompileTimeType,
                                                                  freeExtensionMethod_omnibusType_checkIsNotCompileTimeType) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType isCompileTimeType'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_omnibusType_isCompileTimeType> gExtensionGetterTable_omnibusType_isCompileTimeType ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_isCompileTimeType (const int32_t inClassIndex,
                                             enterExtensionGetter_omnibusType_isCompileTimeType inGetter) {
  gExtensionGetterTable_omnibusType_isCompileTimeType.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_isCompileTimeType (const cPtr_omnibusType * inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_omnibusType) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_omnibusType_isCompileTimeType f = NULL ;
    if (classIndex < gExtensionGetterTable_omnibusType_isCompileTimeType.count ()) {
      f = gExtensionGetterTable_omnibusType_isCompileTimeType (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_omnibusType_isCompileTimeType.count ()) {
           f = gExtensionGetterTable_omnibusType_isCompileTimeType (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_omnibusType_isCompileTimeType.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_omnibusType_isCompileTimeType (const cPtr_omnibusType * inObject,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_omnibusType * object = inObject ;
  macroValidSharedObject (object, cPtr_omnibusType) ;
  const GALGAS_omnibusType temp_0 = object ;
  const GALGAS_omnibusType temp_1 = object ;
  result_result = temp_0.readProperty_kind ().getter_isCompileTimeBool (SOURCE_FILE ("types.galgas", 125)).operator_or (temp_1.readProperty_kind ().getter_isCompileTimeInteger (SOURCE_FILE ("types.galgas", 125)) COMMA_SOURCE_FILE ("types.galgas", 125)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_omnibusType_isCompileTimeType (void) {
  enterExtensionGetter_isCompileTimeType (kTypeDescriptor_GALGAS_omnibusType.mSlotID,
                                          extensionGetter_omnibusType_isCompileTimeType) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_omnibusType_isCompileTimeType (void) {
  gExtensionGetterTable_omnibusType_isCompileTimeType.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_omnibusType_isCompileTimeType (defineExtensionGetter_omnibusType_isCompileTimeType,
                                                          freeExtensionGetter_omnibusType_isCompileTimeType) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType instanciable'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_omnibusType_instanciable> gExtensionGetterTable_omnibusType_instanciable ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_instanciable (const int32_t inClassIndex,
                                        enterExtensionGetter_omnibusType_instanciable inGetter) {
  gExtensionGetterTable_omnibusType_instanciable.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_instanciable (const cPtr_omnibusType * inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_omnibusType) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_omnibusType_instanciable f = NULL ;
    if (classIndex < gExtensionGetterTable_omnibusType_instanciable.count ()) {
      f = gExtensionGetterTable_omnibusType_instanciable (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_omnibusType_instanciable.count ()) {
           f = gExtensionGetterTable_omnibusType_instanciable (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_omnibusType_instanciable.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_omnibusType_instanciable (const cPtr_omnibusType * inObject,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_omnibusType * object = inObject ;
  macroValidSharedObject (object, cPtr_omnibusType) ;
  const GALGAS_omnibusType temp_0 = object ;
  result_result = temp_0.readProperty_attributes ().getter_instanciable (SOURCE_FILE ("types.galgas", 191)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_omnibusType_instanciable (void) {
  enterExtensionGetter_instanciable (kTypeDescriptor_GALGAS_omnibusType.mSlotID,
                                     extensionGetter_omnibusType_instanciable) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_omnibusType_instanciable (void) {
  gExtensionGetterTable_omnibusType_instanciable.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_omnibusType_instanciable (defineExtensionGetter_omnibusType_instanciable,
                                                     freeExtensionGetter_omnibusType_instanciable) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType copyable'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_omnibusType_copyable> gExtensionGetterTable_omnibusType_copyable ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_copyable (const int32_t inClassIndex,
                                    enterExtensionGetter_omnibusType_copyable inGetter) {
  gExtensionGetterTable_omnibusType_copyable.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_copyable (const cPtr_omnibusType * inObject,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_omnibusType) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_omnibusType_copyable f = NULL ;
    if (classIndex < gExtensionGetterTable_omnibusType_copyable.count ()) {
      f = gExtensionGetterTable_omnibusType_copyable (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_omnibusType_copyable.count ()) {
           f = gExtensionGetterTable_omnibusType_copyable (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_omnibusType_copyable.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_omnibusType_copyable (const cPtr_omnibusType * inObject,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_omnibusType * object = inObject ;
  macroValidSharedObject (object, cPtr_omnibusType) ;
  const GALGAS_omnibusType temp_0 = object ;
  result_result = temp_0.readProperty_attributes ().getter_copyable (SOURCE_FILE ("types.galgas", 197)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_omnibusType_copyable (void) {
  enterExtensionGetter_copyable (kTypeDescriptor_GALGAS_omnibusType.mSlotID,
                                 extensionGetter_omnibusType_copyable) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_omnibusType_copyable (void) {
  gExtensionGetterTable_omnibusType_copyable.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_omnibusType_copyable (defineExtensionGetter_omnibusType_copyable,
                                                 freeExtensionGetter_omnibusType_copyable) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@omnibusType generateRetain'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_omnibusType_generateRetain> gExtensionMethodTable_omnibusType_generateRetain ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_generateRetain (const int32_t inClassIndex,
                                          extensionMethodSignature_omnibusType_generateRetain inMethod) {
  gExtensionMethodTable_omnibusType_generateRetain.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_generateRetain (const cPtr_omnibusType * inObject,
                                         const GALGAS_string constin_inOmnibusName,
                                         GALGAS_string & io_ioLLVMcode,
                                         GALGAS_generationAdds & io_ioGenerationAdds,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_omnibusType) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_omnibusType_generateRetain f = NULL ;
    if (classIndex < gExtensionMethodTable_omnibusType_generateRetain.count ()) {
      f = gExtensionMethodTable_omnibusType_generateRetain (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_omnibusType_generateRetain.count ()) {
           f = gExtensionMethodTable_omnibusType_generateRetain (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_omnibusType_generateRetain.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inOmnibusName, io_ioLLVMcode, io_ioGenerationAdds, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_omnibusType_generateRetain (const cPtr_omnibusType * inObject,
                                                        const GALGAS_string constinArgument_inOmnibusName,
                                                        GALGAS_string & ioArgument_ioLLVMcode,
                                                        GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  auto object = (cPtr_omnibusType *) inObject ; // A
  macroValidSharedObject (object, cPtr_omnibusType) ;
  const GALGAS_omnibusType temp_0 = object ;
  GALGAS_string var_llvmTypeName_7133 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 207)) ;
  GALGAS_string var_LLVMVariable_7174 = function_llvmNameForLocalVariable (constinArgument_inOmnibusName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 208)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_omnibusType temp_2 = object ;
    test_1 = temp_2.readProperty_kind ().getter_isDynamicArrayType (SOURCE_FILE ("types.galgas", 209)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string var_tempLLVMVariable_7285 = GALGAS_string ("%temp.").add_operation (constinArgument_inOmnibusName.getter_assemblerRepresentation (SOURCE_FILE ("types.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 210)).add_operation (GALGAS_string (".loaded."), inCompiler COMMA_SOURCE_FILE ("types.galgas", 210)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("types.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 210)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("types.galgas", 211)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_tempLLVMVariable_7285, inCompiler COMMA_SOURCE_FILE ("types.galgas", 212)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 212)).add_operation (var_llvmTypeName_7133, inCompiler COMMA_SOURCE_FILE ("types.galgas", 212)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 212)).add_operation (var_llvmTypeName_7133, inCompiler COMMA_SOURCE_FILE ("types.galgas", 212)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 212)).add_operation (var_LLVMVariable_7174, inCompiler COMMA_SOURCE_FILE ("types.galgas", 212)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 212)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.retain (").add_operation (var_llvmTypeName_7133, inCompiler COMMA_SOURCE_FILE ("types.galgas", 213)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 213)).add_operation (var_tempLLVMVariable_7285, inCompiler COMMA_SOURCE_FILE ("types.galgas", 213)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 213)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_omnibusType temp_3 = object ;
    GALGAS_arcAssignmentList var_arcAssignmentList_7668 = callExtensionGetter_arcList ((const cPtr_omnibusType *) temp_3.ptr (), GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("types.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 215)) ;
    cEnumerator_arcAssignmentList enumerator_7734 (var_arcAssignmentList_7668, kENUMERATION_UP) ;
    while (enumerator_7734.hasCurrentObject ()) {
      GALGAS_string var_llvmVarName_7782 = GALGAS_string ("%arc.retain.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("types.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 217)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("types.galgas", 218)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmVarName_7782, inCompiler COMMA_SOURCE_FILE ("types.galgas", 219)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 219)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_llvmTypeName_7133.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 220)).add_operation (var_llvmTypeName_7133, inCompiler COMMA_SOURCE_FILE ("types.galgas", 220)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 220)).add_operation (var_LLVMVariable_7174, inCompiler COMMA_SOURCE_FILE ("types.galgas", 220)).add_operation (GALGAS_string (", i32 0"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 220)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 220)) ;
      cEnumerator_uintlist enumerator_8044 (enumerator_7734.current_mPropertyIndexPath (HERE), kENUMERATION_UP) ;
      while (enumerator_8044.hasCurrentObject ()) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_8044.current_mValue (HERE).getter_string (SOURCE_FILE ("types.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 222)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 222)) ;
        enumerator_8044.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ; ").add_operation (enumerator_7734.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("types.galgas", 224)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 224)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 224)) ;
      GALGAS_string var_propertyTypeLLVMName_8187 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_7734.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 225)) ;
      GALGAS_string var_llvmLoadedVarName_8245 = var_llvmVarName_7782.add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 226)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmLoadedVarName_8245, inCompiler COMMA_SOURCE_FILE ("types.galgas", 227)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 227)).add_operation (var_propertyTypeLLVMName_8187, inCompiler COMMA_SOURCE_FILE ("types.galgas", 227)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 227)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 227)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_propertyTypeLLVMName_8187.add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 228)).add_operation (var_llvmVarName_7782, inCompiler COMMA_SOURCE_FILE ("types.galgas", 228)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 228)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 228)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.retain (").add_operation (var_propertyTypeLLVMName_8187, inCompiler COMMA_SOURCE_FILE ("types.galgas", 229)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 229)).add_operation (var_llvmLoadedVarName_8245, inCompiler COMMA_SOURCE_FILE ("types.galgas", 229)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 229)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 229)) ;
      enumerator_7734.gotoNextObject () ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_omnibusType_generateRetain (void) {
  enterExtensionMethod_generateRetain (kTypeDescriptor_GALGAS_omnibusType.mSlotID,
                                       extensionMethod_omnibusType_generateRetain) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_omnibusType_generateRetain (void) {
  gExtensionMethodTable_omnibusType_generateRetain.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_omnibusType_generateRetain (defineExtensionMethod_omnibusType_generateRetain,
                                                       freeExtensionMethod_omnibusType_generateRetain) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@omnibusType generateInsulate'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_omnibusType_generateInsulate> gExtensionMethodTable_omnibusType_generateInsulate ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_generateInsulate (const int32_t inClassIndex,
                                            extensionMethodSignature_omnibusType_generateInsulate inMethod) {
  gExtensionMethodTable_omnibusType_generateInsulate.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_generateInsulate (const cPtr_omnibusType * inObject,
                                           const GALGAS_string constin_inOmnibusName,
                                           GALGAS_string & io_ioLLVMcode,
                                           GALGAS_generationAdds & io_ioGenerationAdds,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_omnibusType) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_omnibusType_generateInsulate f = NULL ;
    if (classIndex < gExtensionMethodTable_omnibusType_generateInsulate.count ()) {
      f = gExtensionMethodTable_omnibusType_generateInsulate (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_omnibusType_generateInsulate.count ()) {
           f = gExtensionMethodTable_omnibusType_generateInsulate (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_omnibusType_generateInsulate.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inOmnibusName, io_ioLLVMcode, io_ioGenerationAdds, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_omnibusType_generateInsulate (const cPtr_omnibusType * inObject,
                                                          const GALGAS_string constinArgument_inOmnibusName,
                                                          GALGAS_string & ioArgument_ioLLVMcode,
                                                          GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  auto object = (cPtr_omnibusType *) inObject ; // A
  macroValidSharedObject (object, cPtr_omnibusType) ;
  const GALGAS_omnibusType temp_0 = object ;
  GALGAS_string var_llvmTypeName_8821 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 241)) ;
  GALGAS_string var_LLVMVariable_8862 = function_llvmNameForLocalVariable (constinArgument_inOmnibusName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 242)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_omnibusType temp_2 = object ;
    test_1 = temp_2.readProperty_kind ().getter_isDynamicArrayType (SOURCE_FILE ("types.galgas", 243)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string var_loadedVar_8966 = GALGAS_string ("%temp.").add_operation (constinArgument_inOmnibusName.getter_assemblerRepresentation (SOURCE_FILE ("types.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 244)).add_operation (GALGAS_string (".loaded."), inCompiler COMMA_SOURCE_FILE ("types.galgas", 244)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("types.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 244)) ;
      GALGAS_string var_insulatedVar_9088 = GALGAS_string ("%temp.").add_operation (constinArgument_inOmnibusName.getter_assemblerRepresentation (SOURCE_FILE ("types.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 245)).add_operation (GALGAS_string (".insulated."), inCompiler COMMA_SOURCE_FILE ("types.galgas", 245)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("types.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 245)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("types.galgas", 246)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_loadedVar_8966, inCompiler COMMA_SOURCE_FILE ("types.galgas", 247)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 247)).add_operation (var_llvmTypeName_8821, inCompiler COMMA_SOURCE_FILE ("types.galgas", 247)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 247)).add_operation (var_llvmTypeName_8821, inCompiler COMMA_SOURCE_FILE ("types.galgas", 247)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 247)).add_operation (var_LLVMVariable_8862, inCompiler COMMA_SOURCE_FILE ("types.galgas", 247)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 247)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 247)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_insulatedVar_9088, inCompiler COMMA_SOURCE_FILE ("types.galgas", 248)).add_operation (GALGAS_string (" = call "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 248)).add_operation (var_llvmTypeName_8821, inCompiler COMMA_SOURCE_FILE ("types.galgas", 248)).add_operation (GALGAS_string (" @arc.insulate ("), inCompiler COMMA_SOURCE_FILE ("types.galgas", 248)).add_operation (var_llvmTypeName_8821, inCompiler COMMA_SOURCE_FILE ("types.galgas", 248)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 248)).add_operation (var_loadedVar_8966, inCompiler COMMA_SOURCE_FILE ("types.galgas", 248)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 248)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 248)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmTypeName_8821, inCompiler COMMA_SOURCE_FILE ("types.galgas", 249)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 249)).add_operation (var_insulatedVar_9088, inCompiler COMMA_SOURCE_FILE ("types.galgas", 249)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 249)).add_operation (var_llvmTypeName_8821, inCompiler COMMA_SOURCE_FILE ("types.galgas", 249)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 249)).add_operation (var_LLVMVariable_8862, inCompiler COMMA_SOURCE_FILE ("types.galgas", 249)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 249)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 249)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_omnibusType temp_3 = object ;
    GALGAS_arcAssignmentList var_arcAssignmentList_9620 = callExtensionGetter_arcList ((const cPtr_omnibusType *) temp_3.ptr (), GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("types.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 251)) ;
    cEnumerator_arcAssignmentList enumerator_9686 (var_arcAssignmentList_9620, kENUMERATION_UP) ;
    while (enumerator_9686.hasCurrentObject ()) {
      GALGAS_string var_llvmVarName_9734 = GALGAS_string ("%arc.release.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("types.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 253)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("types.galgas", 254)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmVarName_9734, inCompiler COMMA_SOURCE_FILE ("types.galgas", 255)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 255)).add_operation (var_llvmTypeName_8821, inCompiler COMMA_SOURCE_FILE ("types.galgas", 255)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 255)).add_operation (var_llvmTypeName_8821, inCompiler COMMA_SOURCE_FILE ("types.galgas", 255)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 255)).add_operation (var_LLVMVariable_8862, inCompiler COMMA_SOURCE_FILE ("types.galgas", 255)).add_operation (GALGAS_string (", i32 0"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 255)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 255)) ;
      cEnumerator_uintlist enumerator_9979 (enumerator_9686.current_mPropertyIndexPath (HERE), kENUMERATION_UP) ;
      while (enumerator_9979.hasCurrentObject ()) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_9979.current_mValue (HERE).getter_string (SOURCE_FILE ("types.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 257)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 257)) ;
        enumerator_9979.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ; ").add_operation (enumerator_9686.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("types.galgas", 259)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 259)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 259)) ;
      GALGAS_string var_propertyTypeLLVMName_10122 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_9686.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 260)) ;
      GALGAS_string var_loadedVar_10172 = var_llvmVarName_9734.add_operation (GALGAS_string (".loaded."), inCompiler COMMA_SOURCE_FILE ("types.galgas", 261)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("types.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 261)) ;
      GALGAS_string var_insulatedVar_10255 = var_llvmVarName_9734.add_operation (GALGAS_string (".insulated."), inCompiler COMMA_SOURCE_FILE ("types.galgas", 262)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("types.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 262)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("types.galgas", 263)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_loadedVar_10172, inCompiler COMMA_SOURCE_FILE ("types.galgas", 264)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 264)).add_operation (var_propertyTypeLLVMName_10122, inCompiler COMMA_SOURCE_FILE ("types.galgas", 264)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 264)).add_operation (var_propertyTypeLLVMName_10122, inCompiler COMMA_SOURCE_FILE ("types.galgas", 264)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 264)).add_operation (var_llvmVarName_9734, inCompiler COMMA_SOURCE_FILE ("types.galgas", 264)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 264)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 264)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_insulatedVar_10255, inCompiler COMMA_SOURCE_FILE ("types.galgas", 265)).add_operation (GALGAS_string (" = call "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 265)).add_operation (var_propertyTypeLLVMName_10122, inCompiler COMMA_SOURCE_FILE ("types.galgas", 265)).add_operation (GALGAS_string (" @arc.insulate ("), inCompiler COMMA_SOURCE_FILE ("types.galgas", 265)).add_operation (var_propertyTypeLLVMName_10122, inCompiler COMMA_SOURCE_FILE ("types.galgas", 265)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 265)).add_operation (var_loadedVar_10172, inCompiler COMMA_SOURCE_FILE ("types.galgas", 265)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 265)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 265)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_propertyTypeLLVMName_10122, inCompiler COMMA_SOURCE_FILE ("types.galgas", 266)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 266)).add_operation (var_insulatedVar_10255, inCompiler COMMA_SOURCE_FILE ("types.galgas", 266)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 266)).add_operation (var_propertyTypeLLVMName_10122, inCompiler COMMA_SOURCE_FILE ("types.galgas", 266)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 266)).add_operation (var_llvmVarName_9734, inCompiler COMMA_SOURCE_FILE ("types.galgas", 266)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 266)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 266)) ;
      enumerator_9686.gotoNextObject () ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_omnibusType_generateInsulate (void) {
  enterExtensionMethod_generateInsulate (kTypeDescriptor_GALGAS_omnibusType.mSlotID,
                                         extensionMethod_omnibusType_generateInsulate) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_omnibusType_generateInsulate (void) {
  gExtensionMethodTable_omnibusType_generateInsulate.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_omnibusType_generateInsulate (defineExtensionMethod_omnibusType_generateInsulate,
                                                         freeExtensionMethod_omnibusType_generateInsulate) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@omnibusType generateRelease'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_omnibusType_generateRelease> gExtensionMethodTable_omnibusType_generateRelease ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_generateRelease (const int32_t inClassIndex,
                                           extensionMethodSignature_omnibusType_generateRelease inMethod) {
  gExtensionMethodTable_omnibusType_generateRelease.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_generateRelease (const cPtr_omnibusType * inObject,
                                          const GALGAS_string constin_inOmnibusName,
                                          GALGAS_string & io_ioLLVMcode,
                                          GALGAS_generationAdds & io_ioGenerationAdds,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_omnibusType) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_omnibusType_generateRelease f = NULL ;
    if (classIndex < gExtensionMethodTable_omnibusType_generateRelease.count ()) {
      f = gExtensionMethodTable_omnibusType_generateRelease (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_omnibusType_generateRelease.count ()) {
           f = gExtensionMethodTable_omnibusType_generateRelease (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_omnibusType_generateRelease.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inOmnibusName, io_ioLLVMcode, io_ioGenerationAdds, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_omnibusType_generateRelease (const cPtr_omnibusType * inObject,
                                                         const GALGAS_string constinArgument_inOmnibusName,
                                                         GALGAS_string & ioArgument_ioLLVMcode,
                                                         GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  auto object = (cPtr_omnibusType *) inObject ; // A
  macroValidSharedObject (object, cPtr_omnibusType) ;
  const GALGAS_omnibusType temp_0 = object ;
  GALGAS_string var_llvmTypeName_11054 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 278)) ;
  GALGAS_string var_LLVMVariable_11095 = function_llvmNameForLocalVariable (constinArgument_inOmnibusName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 279)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_omnibusType temp_2 = object ;
    test_1 = temp_2.readProperty_kind ().getter_isDynamicArrayType (SOURCE_FILE ("types.galgas", 280)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string var_tempLLVMVariable_11206 = GALGAS_string ("%temp.").add_operation (constinArgument_inOmnibusName.getter_assemblerRepresentation (SOURCE_FILE ("types.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 281)).add_operation (GALGAS_string (".loaded."), inCompiler COMMA_SOURCE_FILE ("types.galgas", 281)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("types.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 281)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("types.galgas", 282)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_tempLLVMVariable_11206, inCompiler COMMA_SOURCE_FILE ("types.galgas", 283)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 283)).add_operation (var_llvmTypeName_11054, inCompiler COMMA_SOURCE_FILE ("types.galgas", 283)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 283)).add_operation (var_llvmTypeName_11054, inCompiler COMMA_SOURCE_FILE ("types.galgas", 283)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 283)).add_operation (var_LLVMVariable_11095, inCompiler COMMA_SOURCE_FILE ("types.galgas", 283)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 283)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 283)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.release (").add_operation (var_llvmTypeName_11054, inCompiler COMMA_SOURCE_FILE ("types.galgas", 284)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 284)).add_operation (var_tempLLVMVariable_11206, inCompiler COMMA_SOURCE_FILE ("types.galgas", 284)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 284)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 284)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_omnibusType temp_3 = object ;
    GALGAS_arcAssignmentList var_arcAssignmentList_11595 = callExtensionGetter_arcList ((const cPtr_omnibusType *) temp_3.ptr (), GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("types.galgas", 286)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 286)) ;
    cEnumerator_arcAssignmentList enumerator_11661 (var_arcAssignmentList_11595, kENUMERATION_UP) ;
    while (enumerator_11661.hasCurrentObject ()) {
      GALGAS_string var_llvmVarName_11709 = GALGAS_string ("%arc.release.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("types.galgas", 288)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 288)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("types.galgas", 289)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmVarName_11709, inCompiler COMMA_SOURCE_FILE ("types.galgas", 290)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 290)).add_operation (var_llvmTypeName_11054, inCompiler COMMA_SOURCE_FILE ("types.galgas", 290)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 290)).add_operation (var_llvmTypeName_11054, inCompiler COMMA_SOURCE_FILE ("types.galgas", 290)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 290)).add_operation (var_LLVMVariable_11095, inCompiler COMMA_SOURCE_FILE ("types.galgas", 290)).add_operation (GALGAS_string (", i32 0"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 290)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 290)) ;
      cEnumerator_uintlist enumerator_11954 (enumerator_11661.current_mPropertyIndexPath (HERE), kENUMERATION_UP) ;
      while (enumerator_11954.hasCurrentObject ()) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_11954.current_mValue (HERE).getter_string (SOURCE_FILE ("types.galgas", 292)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 292)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 292)) ;
        enumerator_11954.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ; ").add_operation (enumerator_11661.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("types.galgas", 294)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 294)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 294)) ;
      GALGAS_string var_propertyTypeLLVMName_12097 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_11661.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 295)) ;
      GALGAS_string var_llvmLoadedVarName_12155 = var_llvmVarName_11709.add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 296)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmLoadedVarName_12155, inCompiler COMMA_SOURCE_FILE ("types.galgas", 297)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 297)).add_operation (var_propertyTypeLLVMName_12097, inCompiler COMMA_SOURCE_FILE ("types.galgas", 297)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 297)).add_operation (var_propertyTypeLLVMName_12097, inCompiler COMMA_SOURCE_FILE ("types.galgas", 297)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 297)).add_operation (var_llvmVarName_11709, inCompiler COMMA_SOURCE_FILE ("types.galgas", 297)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 297)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 297)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.release (").add_operation (var_propertyTypeLLVMName_12097, inCompiler COMMA_SOURCE_FILE ("types.galgas", 298)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 298)).add_operation (var_llvmLoadedVarName_12155, inCompiler COMMA_SOURCE_FILE ("types.galgas", 298)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 298)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 298)) ;
      enumerator_11661.gotoNextObject () ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_omnibusType_generateRelease (void) {
  enterExtensionMethod_generateRelease (kTypeDescriptor_GALGAS_omnibusType.mSlotID,
                                        extensionMethod_omnibusType_generateRelease) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_omnibusType_generateRelease (void) {
  gExtensionMethodTable_omnibusType_generateRelease.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_omnibusType_generateRelease (defineExtensionMethod_omnibusType_generateRelease,
                                                        freeExtensionMethod_omnibusType_generateRelease) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType descriptionForHTMLFile'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_omnibusType_descriptionForHTMLFile> gExtensionGetterTable_omnibusType_descriptionForHTMLFile ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_descriptionForHTMLFile (const int32_t inClassIndex,
                                                  enterExtensionGetter_omnibusType_descriptionForHTMLFile inGetter) {
  gExtensionGetterTable_omnibusType_descriptionForHTMLFile.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_descriptionForHTMLFile (const cPtr_omnibusType * inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_omnibusType) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_omnibusType_descriptionForHTMLFile f = NULL ;
    if (classIndex < gExtensionGetterTable_omnibusType_descriptionForHTMLFile.count ()) {
      f = gExtensionGetterTable_omnibusType_descriptionForHTMLFile (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_omnibusType_descriptionForHTMLFile.count ()) {
           f = gExtensionGetterTable_omnibusType_descriptionForHTMLFile (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_omnibusType_descriptionForHTMLFile.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_omnibusType_descriptionForHTMLFile (const cPtr_omnibusType * inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_omnibusType * object = inObject ;
  macroValidSharedObject (object, cPtr_omnibusType) ;
  const GALGAS_omnibusType temp_0 = object ;
  switch (temp_0.readProperty_kind ().enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_void:
    {
      result_result = GALGAS_string ("Void") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_boolean:
    {
      result_result = GALGAS_string ("Boolean") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_literalString:
    {
      result_result = GALGAS_string ("Literal String") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
      result_result = GALGAS_string ("Enumeration") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      result_result = GALGAS_string ("Structure") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_syncTool:
    {
      result_result = GALGAS_string ("Synchronization tool") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_13132 = (const cEnumAssociatedValues_typeKind_integer *) (temp_0.readProperty_kind ().unsafePointer ()) ;
      const GALGAS_bool extractedValue_12958_unsigned = extractPtr_13132->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_12973_bitCount = extractPtr_13132->mAssociatedValue3 ;
      GALGAS_string temp_1 ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, extractedValue_12973_bitCount.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        temp_1 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_2) {
        temp_1 = GALGAS_string::makeEmptyString () ;
      }
      GALGAS_string temp_3 ;
      const enumGalgasBool test_4 = extractedValue_12958_unsigned.boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = GALGAS_string ("unsigned") ;
      }else if (kBoolFalse == test_4) {
        temp_3 = GALGAS_string ("signed") ;
      }
      result_result = GALGAS_string ("Integer (").add_operation (extractedValue_12973_bitCount.getter_string (SOURCE_FILE ("types.galgas", 320)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 320)).add_operation (GALGAS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 320)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("types.galgas", 320)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 320)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("types.galgas", 321)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 321)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_compileTimeBool:
    {
      result_result = GALGAS_string ("Compile Time Bool") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_compileTimeInteger:
    {
      result_result = GALGAS_string ("Compile Time Integer") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_generic:
    {
      result_result = GALGAS_string ("Generic Type") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_llvmType:
    {
      result_result = GALGAS_string ("LLVM Type") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_opaque:
    {
      const cEnumAssociatedValues_typeKind_opaque * extractPtr_13432 = (const cEnumAssociatedValues_typeKind_opaque *) (temp_0.readProperty_kind ().unsafePointer ()) ;
      const GALGAS_bigint extractedValue_13383_bitCount = extractPtr_13432->mAssociatedValue0 ;
      result_result = GALGAS_string ("Opaque (").add_operation (extractedValue_13383_bitCount.getter_string (SOURCE_FILE ("types.galgas", 331)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 331)).add_operation (GALGAS_string (" bits)"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 331)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_staticArrayType:
    {
      result_result = GALGAS_string ("Static array") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dynamicArrayType:
    {
      result_result = GALGAS_string ("Dynamic array") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_function:
    {
      result_result = GALGAS_string ("Function") ;
    }
    break ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_omnibusType_descriptionForHTMLFile (void) {
  enterExtensionGetter_descriptionForHTMLFile (kTypeDescriptor_GALGAS_omnibusType.mSlotID,
                                               extensionGetter_omnibusType_descriptionForHTMLFile) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_omnibusType_descriptionForHTMLFile (void) {
  gExtensionGetterTable_omnibusType_descriptionForHTMLFile.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_omnibusType_descriptionForHTMLFile (defineExtensionGetter_omnibusType_descriptionForHTMLFile,
                                                               freeExtensionGetter_omnibusType_descriptionForHTMLFile) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType arcList'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_omnibusType_arcList> gExtensionGetterTable_omnibusType_arcList ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_arcList (const int32_t inClassIndex,
                                   enterExtensionGetter_omnibusType_arcList inGetter) {
  gExtensionGetterTable_omnibusType_arcList.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arcAssignmentList callExtensionGetter_arcList (const cPtr_omnibusType * inObject,
                                                      const GALGAS_uintlist in_inPropertyIndexPath,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_arcAssignmentList result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_omnibusType) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_omnibusType_arcList f = NULL ;
    if (classIndex < gExtensionGetterTable_omnibusType_arcList.count ()) {
      f = gExtensionGetterTable_omnibusType_arcList (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_omnibusType_arcList.count ()) {
           f = gExtensionGetterTable_omnibusType_arcList (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_omnibusType_arcList.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inPropertyIndexPath, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_arcAssignmentList extensionGetter_omnibusType_arcList (const cPtr_omnibusType * inObject,
                                                                     const GALGAS_uintlist constinArgument_inPropertyIndexPath,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_arcAssignmentList result_result ; // Returned variable
  const cPtr_omnibusType * object = inObject ;
  macroValidSharedObject (object, cPtr_omnibusType) ;
  result_result = GALGAS_arcAssignmentList::constructor_emptyList (SOURCE_FILE ("types.galgas", 352)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_omnibusType temp_1 = object ;
    test_0 = temp_1.readProperty_kind ().getter_isDynamicArrayType (SOURCE_FILE ("types.galgas", 353)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_omnibusType temp_2 = object ;
      result_result.addAssign_operation (GALGAS_string::makeEmptyString (), temp_2, constinArgument_inPropertyIndexPath  COMMA_SOURCE_FILE ("types.galgas", 354)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_omnibusType temp_4 = object ;
      test_3 = temp_4.readProperty_kind ().getter_isStructure (SOURCE_FILE ("types.galgas", 355)).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_propertyList var_propertyList_14290 ;
        const GALGAS_omnibusType temp_5 = object ;
        temp_5.readProperty_kind ().method_structure (var_propertyList_14290, inCompiler COMMA_SOURCE_FILE ("types.galgas", 356)) ;
        cEnumerator_propertyList enumerator_14315 (var_propertyList_14290, kENUMERATION_UP) ;
        GALGAS_uint index_14299 ((uint32_t) 0) ;
        while (enumerator_14315.hasCurrentObject ()) {
          GALGAS_uintlist temp_6 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("types.galgas", 358)) ;
          temp_6.addAssign_operation (index_14299  COMMA_SOURCE_FILE ("types.galgas", 358)) ;
          GALGAS_uintlist var_indexPath_14361 = constinArgument_inPropertyIndexPath.add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("types.galgas", 358)) ;
          result_result.plusAssign_operation(callExtensionGetter_arcList ((const cPtr_omnibusType *) enumerator_14315.current_mType (HERE).ptr (), var_indexPath_14361, inCompiler COMMA_SOURCE_FILE ("types.galgas", 359)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 359)) ;
          enumerator_14315.gotoNextObject () ;
          index_14299.increment_operation (inCompiler  COMMA_SOURCE_FILE ("types.galgas", 357)) ;
        }
      }
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_omnibusType_arcList (void) {
  enterExtensionGetter_arcList (kTypeDescriptor_GALGAS_omnibusType.mSlotID,
                                extensionGetter_omnibusType_arcList) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_omnibusType_arcList (void) {
  gExtensionGetterTable_omnibusType_arcList.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_omnibusType_arcList (defineExtensionGetter_omnibusType_arcList,
                                                freeExtensionGetter_omnibusType_arcList) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType deinitNeeded'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_omnibusType_deinitNeeded> gExtensionGetterTable_omnibusType_deinitNeeded ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_deinitNeeded (const int32_t inClassIndex,
                                        enterExtensionGetter_omnibusType_deinitNeeded inGetter) {
  gExtensionGetterTable_omnibusType_deinitNeeded.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_deinitNeeded (const cPtr_omnibusType * inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_omnibusType) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_omnibusType_deinitNeeded f = NULL ;
    if (classIndex < gExtensionGetterTable_omnibusType_deinitNeeded.count ()) {
      f = gExtensionGetterTable_omnibusType_deinitNeeded (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_omnibusType_deinitNeeded.count ()) {
           f = gExtensionGetterTable_omnibusType_deinitNeeded (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_omnibusType_deinitNeeded.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_omnibusType_deinitNeeded (const cPtr_omnibusType * inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_omnibusType * object = inObject ;
  macroValidSharedObject (object, cPtr_omnibusType) ;
  const GALGAS_omnibusType temp_0 = object ;
  result_result = temp_0.readProperty_kind ().getter_isDynamicArrayType (SOURCE_FILE ("types.galgas", 367)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_omnibusType temp_2 = object ;
    test_1 = temp_2.readProperty_kind ().getter_isStructure (SOURCE_FILE ("types.galgas", 368)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_propertyList var_propertyList_14771 ;
      const GALGAS_omnibusType temp_3 = object ;
      temp_3.readProperty_kind ().method_structure (var_propertyList_14771, inCompiler COMMA_SOURCE_FILE ("types.galgas", 369)) ;
      cEnumerator_propertyList enumerator_14796 (var_propertyList_14771, kENUMERATION_UP) ;
      bool bool_4 = result_result.operator_not (SOURCE_FILE ("types.galgas", 370)).isValidAndTrue () ;
      if (enumerator_14796.hasCurrentObject () && bool_4) {
        while (enumerator_14796.hasCurrentObject () && bool_4) {
          result_result = callExtensionGetter_deinitNeeded ((const cPtr_omnibusType *) enumerator_14796.current_mType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 371)) ;
          enumerator_14796.gotoNextObject () ;
          if (enumerator_14796.hasCurrentObject ()) {
            bool_4 = result_result.operator_not (SOURCE_FILE ("types.galgas", 370)).isValidAndTrue () ;
          }
        }
      }
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_omnibusType_deinitNeeded (void) {
  enterExtensionGetter_deinitNeeded (kTypeDescriptor_GALGAS_omnibusType.mSlotID,
                                     extensionGetter_omnibusType_deinitNeeded) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_omnibusType_deinitNeeded (void) {
  gExtensionGetterTable_omnibusType_deinitNeeded.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_omnibusType_deinitNeeded (defineExtensionGetter_omnibusType_deinitNeeded,
                                                     freeExtensionGetter_omnibusType_deinitNeeded) ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticTemporariesStruct::GALGAS_semanticTemporariesStruct (void) :
mProperty_mTemporaryIndex (),
mProperty_mPanicSetupRoutinePriorityMap (),
mProperty_mPanicLoopRoutinePriorityMap (),
mProperty_mStaticArrayMapForTemporaries (),
mProperty_mInitializedDriverSet () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticTemporariesStruct::~ GALGAS_semanticTemporariesStruct (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticTemporariesStruct::GALGAS_semanticTemporariesStruct (const GALGAS_uint & inOperand0,
                                                                    const GALGAS_panicRoutinePriorityMap & inOperand1,
                                                                    const GALGAS_panicRoutinePriorityMap & inOperand2,
                                                                    const GALGAS_staticListInvokedFunctionSetMap & inOperand3,
                                                                    const GALGAS_stringset & inOperand4) :
mProperty_mTemporaryIndex (inOperand0),
mProperty_mPanicSetupRoutinePriorityMap (inOperand1),
mProperty_mPanicLoopRoutinePriorityMap (inOperand2),
mProperty_mStaticArrayMapForTemporaries (inOperand3),
mProperty_mInitializedDriverSet (inOperand4) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticTemporariesStruct GALGAS_semanticTemporariesStruct::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_semanticTemporariesStruct (GALGAS_uint::constructor_default (HERE),
                                           GALGAS_panicRoutinePriorityMap::constructor_emptyMap (HERE),
                                           GALGAS_panicRoutinePriorityMap::constructor_emptyMap (HERE),
                                           GALGAS_staticListInvokedFunctionSetMap::constructor_emptyMap (HERE),
                                           GALGAS_stringset::constructor_emptySet (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticTemporariesStruct GALGAS_semanticTemporariesStruct::constructor_new (const GALGAS_uint & inOperand0,
                                                                                    const GALGAS_panicRoutinePriorityMap & inOperand1,
                                                                                    const GALGAS_panicRoutinePriorityMap & inOperand2,
                                                                                    const GALGAS_staticListInvokedFunctionSetMap & inOperand3,
                                                                                    const GALGAS_stringset & inOperand4 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticTemporariesStruct result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_semanticTemporariesStruct (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_semanticTemporariesStruct::objectCompare (const GALGAS_semanticTemporariesStruct & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTemporaryIndex.objectCompare (inOperand.mProperty_mTemporaryIndex) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPanicSetupRoutinePriorityMap.objectCompare (inOperand.mProperty_mPanicSetupRoutinePriorityMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPanicLoopRoutinePriorityMap.objectCompare (inOperand.mProperty_mPanicLoopRoutinePriorityMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStaticArrayMapForTemporaries.objectCompare (inOperand.mProperty_mStaticArrayMapForTemporaries) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInitializedDriverSet.objectCompare (inOperand.mProperty_mInitializedDriverSet) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_semanticTemporariesStruct::isValid (void) const {
  return mProperty_mTemporaryIndex.isValid () && mProperty_mPanicSetupRoutinePriorityMap.isValid () && mProperty_mPanicLoopRoutinePriorityMap.isValid () && mProperty_mStaticArrayMapForTemporaries.isValid () && mProperty_mInitializedDriverSet.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticTemporariesStruct::drop (void) {
  mProperty_mTemporaryIndex.drop () ;
  mProperty_mPanicSetupRoutinePriorityMap.drop () ;
  mProperty_mPanicLoopRoutinePriorityMap.drop () ;
  mProperty_mStaticArrayMapForTemporaries.drop () ;
  mProperty_mInitializedDriverSet.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticTemporariesStruct::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @semanticTemporariesStruct:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mTemporaryIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPanicSetupRoutinePriorityMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPanicLoopRoutinePriorityMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStaticArrayMapForTemporaries.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInitializedDriverSet.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@semanticTemporariesStruct type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticTemporariesStruct ("semanticTemporariesStruct",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticTemporariesStruct::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticTemporariesStruct ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticTemporariesStruct::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticTemporariesStruct (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticTemporariesStruct GALGAS_semanticTemporariesStruct::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_semanticTemporariesStruct result ;
  const GALGAS_semanticTemporariesStruct * p = (const GALGAS_semanticTemporariesStruct *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticTemporariesStruct *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticTemporariesStruct", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@semanticTemporariesStruct newTempLLVMVar'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_newTempLLVMVar (GALGAS_semanticTemporariesStruct & ioObject,
                                     GALGAS_string & outArgument_outTempLLVMVar,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTempLLVMVar.drop () ; // Release 'out' argument
  const GALGAS_semanticTemporariesStruct temp_0 = ioObject ;
  outArgument_outTempLLVMVar = GALGAS_string ("%temp.").add_operation (temp_0.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("semantic-analysis.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 90)) ;
  ioObject.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 91)) ;
}


//----------------------------------------------------------------------------------------------------------------------
// @compileTimeBoolImplicitConverterToBoolean reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeBoolImplicitConverterToBoolean::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_compileTimeBoolImplicitConverterToBoolean::objectCompare (const GALGAS_compileTimeBoolImplicitConverterToBoolean & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolImplicitConverterToBoolean::GALGAS_compileTimeBoolImplicitConverterToBoolean (void) :
GALGAS_abstractImplicitConverterToBoolean () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolImplicitConverterToBoolean GALGAS_compileTimeBoolImplicitConverterToBoolean::constructor_default (LOCATION_ARGS) {
  return GALGAS_compileTimeBoolImplicitConverterToBoolean::constructor_new (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolImplicitConverterToBoolean::GALGAS_compileTimeBoolImplicitConverterToBoolean (const cPtr_compileTimeBoolImplicitConverterToBoolean * inSourcePtr) :
GALGAS_abstractImplicitConverterToBoolean (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeBoolImplicitConverterToBoolean) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolImplicitConverterToBoolean GALGAS_compileTimeBoolImplicitConverterToBoolean::constructor_new (LOCATION_ARGS) {
  GALGAS_compileTimeBoolImplicitConverterToBoolean result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeBoolImplicitConverterToBoolean (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeBoolImplicitConverterToBoolean class
//----------------------------------------------------------------------------------------------------------------------

cPtr_compileTimeBoolImplicitConverterToBoolean::cPtr_compileTimeBoolImplicitConverterToBoolean (LOCATION_ARGS) :
cPtr_abstractImplicitConverterToBoolean (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeBoolImplicitConverterToBoolean::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeBoolImplicitConverterToBoolean ;
}

void cPtr_compileTimeBoolImplicitConverterToBoolean::description (C_String & ioString,
                                                                  const int32_t /* inIndentation */) const {
  ioString << "[@compileTimeBoolImplicitConverterToBoolean]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeBoolImplicitConverterToBoolean::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_compileTimeBoolImplicitConverterToBoolean (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@compileTimeBoolImplicitConverterToBoolean type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeBoolImplicitConverterToBoolean ("compileTimeBoolImplicitConverterToBoolean",
                                                                  & kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeBoolImplicitConverterToBoolean::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeBoolImplicitConverterToBoolean ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeBoolImplicitConverterToBoolean::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeBoolImplicitConverterToBoolean (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolImplicitConverterToBoolean GALGAS_compileTimeBoolImplicitConverterToBoolean::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeBoolImplicitConverterToBoolean result ;
  const GALGAS_compileTimeBoolImplicitConverterToBoolean * p = (const GALGAS_compileTimeBoolImplicitConverterToBoolean *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compileTimeBoolImplicitConverterToBoolean *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeBoolImplicitConverterToBoolean", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak::objectCompare (const GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak::GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak (void) :
GALGAS_abstractImplicitConverterToBoolean_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak & GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak::operator = (const GALGAS_compileTimeBoolImplicitConverterToBoolean & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak::GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak (const GALGAS_compileTimeBoolImplicitConverterToBoolean & inSource) :
GALGAS_abstractImplicitConverterToBoolean_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolImplicitConverterToBoolean GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak::bang_compileTimeBoolImplicitConverterToBoolean_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeBoolImplicitConverterToBoolean result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeBoolImplicitConverterToBoolean) ;
      result = GALGAS_compileTimeBoolImplicitConverterToBoolean ((cPtr_compileTimeBoolImplicitConverterToBoolean *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@compileTimeBoolImplicitConverterToBoolean-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak ("compileTimeBoolImplicitConverterToBoolean-weak",
                                                                          & kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak result ;
  const GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak * p = (const GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeBoolImplicitConverterToBoolean-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @compileTimeBoolNotOperator reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeBoolNotOperator::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_compileTimeBoolNotOperator::objectCompare (const GALGAS_compileTimeBoolNotOperator & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolNotOperator::GALGAS_compileTimeBoolNotOperator (void) :
GALGAS_prefixOperatorUsage () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolNotOperator GALGAS_compileTimeBoolNotOperator::constructor_default (LOCATION_ARGS) {
  return GALGAS_compileTimeBoolNotOperator::constructor_new (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolNotOperator::GALGAS_compileTimeBoolNotOperator (const cPtr_compileTimeBoolNotOperator * inSourcePtr) :
GALGAS_prefixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeBoolNotOperator) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolNotOperator GALGAS_compileTimeBoolNotOperator::constructor_new (LOCATION_ARGS) {
  GALGAS_compileTimeBoolNotOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeBoolNotOperator (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeBoolNotOperator class
//----------------------------------------------------------------------------------------------------------------------

cPtr_compileTimeBoolNotOperator::cPtr_compileTimeBoolNotOperator (LOCATION_ARGS) :
cPtr_prefixOperatorUsage (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeBoolNotOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeBoolNotOperator ;
}

void cPtr_compileTimeBoolNotOperator::description (C_String & ioString,
                                                   const int32_t /* inIndentation */) const {
  ioString << "[@compileTimeBoolNotOperator]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeBoolNotOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_compileTimeBoolNotOperator (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@compileTimeBoolNotOperator type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeBoolNotOperator ("compileTimeBoolNotOperator",
                                                   & kTypeDescriptor_GALGAS_prefixOperatorUsage) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeBoolNotOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeBoolNotOperator ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeBoolNotOperator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeBoolNotOperator (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolNotOperator GALGAS_compileTimeBoolNotOperator::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeBoolNotOperator result ;
  const GALGAS_compileTimeBoolNotOperator * p = (const GALGAS_compileTimeBoolNotOperator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compileTimeBoolNotOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeBoolNotOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_compileTimeBoolNotOperator_2D_weak::objectCompare (const GALGAS_compileTimeBoolNotOperator_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolNotOperator_2D_weak::GALGAS_compileTimeBoolNotOperator_2D_weak (void) :
GALGAS_prefixOperatorUsage_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolNotOperator_2D_weak & GALGAS_compileTimeBoolNotOperator_2D_weak::operator = (const GALGAS_compileTimeBoolNotOperator & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolNotOperator_2D_weak::GALGAS_compileTimeBoolNotOperator_2D_weak (const GALGAS_compileTimeBoolNotOperator & inSource) :
GALGAS_prefixOperatorUsage_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolNotOperator_2D_weak GALGAS_compileTimeBoolNotOperator_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_compileTimeBoolNotOperator_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolNotOperator GALGAS_compileTimeBoolNotOperator_2D_weak::bang_compileTimeBoolNotOperator_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeBoolNotOperator result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeBoolNotOperator) ;
      result = GALGAS_compileTimeBoolNotOperator ((cPtr_compileTimeBoolNotOperator *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@compileTimeBoolNotOperator-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeBoolNotOperator_2D_weak ("compileTimeBoolNotOperator-weak",
                                                           & kTypeDescriptor_GALGAS_prefixOperatorUsage_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeBoolNotOperator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeBoolNotOperator_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeBoolNotOperator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeBoolNotOperator_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolNotOperator_2D_weak GALGAS_compileTimeBoolNotOperator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeBoolNotOperator_2D_weak result ;
  const GALGAS_compileTimeBoolNotOperator_2D_weak * p = (const GALGAS_compileTimeBoolNotOperator_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compileTimeBoolNotOperator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeBoolNotOperator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @compileTimeBoolEqualOperator reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeBoolEqualOperator::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_compileTimeBoolEqualOperator::objectCompare (const GALGAS_compileTimeBoolEqualOperator & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolEqualOperator::GALGAS_compileTimeBoolEqualOperator (void) :
GALGAS_omnibusInfixOperatorUsage () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolEqualOperator GALGAS_compileTimeBoolEqualOperator::constructor_default (LOCATION_ARGS) {
  return GALGAS_compileTimeBoolEqualOperator::constructor_new (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolEqualOperator::GALGAS_compileTimeBoolEqualOperator (const cPtr_compileTimeBoolEqualOperator * inSourcePtr) :
GALGAS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeBoolEqualOperator) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolEqualOperator GALGAS_compileTimeBoolEqualOperator::constructor_new (LOCATION_ARGS) {
  GALGAS_compileTimeBoolEqualOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeBoolEqualOperator (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeBoolEqualOperator class
//----------------------------------------------------------------------------------------------------------------------

cPtr_compileTimeBoolEqualOperator::cPtr_compileTimeBoolEqualOperator (LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeBoolEqualOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeBoolEqualOperator ;
}

void cPtr_compileTimeBoolEqualOperator::description (C_String & ioString,
                                                     const int32_t /* inIndentation */) const {
  ioString << "[@compileTimeBoolEqualOperator]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeBoolEqualOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_compileTimeBoolEqualOperator (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@compileTimeBoolEqualOperator type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeBoolEqualOperator ("compileTimeBoolEqualOperator",
                                                     & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeBoolEqualOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeBoolEqualOperator ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeBoolEqualOperator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeBoolEqualOperator (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolEqualOperator GALGAS_compileTimeBoolEqualOperator::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeBoolEqualOperator result ;
  const GALGAS_compileTimeBoolEqualOperator * p = (const GALGAS_compileTimeBoolEqualOperator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compileTimeBoolEqualOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeBoolEqualOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_compileTimeBoolEqualOperator_2D_weak::objectCompare (const GALGAS_compileTimeBoolEqualOperator_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolEqualOperator_2D_weak::GALGAS_compileTimeBoolEqualOperator_2D_weak (void) :
GALGAS_omnibusInfixOperatorUsage_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolEqualOperator_2D_weak & GALGAS_compileTimeBoolEqualOperator_2D_weak::operator = (const GALGAS_compileTimeBoolEqualOperator & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolEqualOperator_2D_weak::GALGAS_compileTimeBoolEqualOperator_2D_weak (const GALGAS_compileTimeBoolEqualOperator & inSource) :
GALGAS_omnibusInfixOperatorUsage_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolEqualOperator_2D_weak GALGAS_compileTimeBoolEqualOperator_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_compileTimeBoolEqualOperator_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolEqualOperator GALGAS_compileTimeBoolEqualOperator_2D_weak::bang_compileTimeBoolEqualOperator_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeBoolEqualOperator result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeBoolEqualOperator) ;
      result = GALGAS_compileTimeBoolEqualOperator ((cPtr_compileTimeBoolEqualOperator *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@compileTimeBoolEqualOperator-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeBoolEqualOperator_2D_weak ("compileTimeBoolEqualOperator-weak",
                                                             & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeBoolEqualOperator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeBoolEqualOperator_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeBoolEqualOperator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeBoolEqualOperator_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolEqualOperator_2D_weak GALGAS_compileTimeBoolEqualOperator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeBoolEqualOperator_2D_weak result ;
  const GALGAS_compileTimeBoolEqualOperator_2D_weak * p = (const GALGAS_compileTimeBoolEqualOperator_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compileTimeBoolEqualOperator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeBoolEqualOperator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @typeAliasDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_typeAliasDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_typeAliasDeclarationAST * p = (const cPtr_typeAliasDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_typeAliasDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mAliasTypeName.objectCompare (p->mProperty_mAliasTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOriginalTypeName.objectCompare (p->mProperty_mOriginalTypeName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_typeAliasDeclarationAST::objectCompare (const GALGAS_typeAliasDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeAliasDeclarationAST::GALGAS_typeAliasDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeAliasDeclarationAST GALGAS_typeAliasDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_typeAliasDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_lstring::constructor_default (HERE)
                                                          COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeAliasDeclarationAST::GALGAS_typeAliasDeclarationAST (const cPtr_typeAliasDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typeAliasDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeAliasDeclarationAST GALGAS_typeAliasDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mAliasTypeName,
                                                                                const GALGAS_lstring & inAttribute_mOriginalTypeName
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_typeAliasDeclarationAST result ;
  if (inAttribute_mAliasTypeName.isValid () && inAttribute_mOriginalTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_typeAliasDeclarationAST (inAttribute_mAliasTypeName, inAttribute_mOriginalTypeName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeAliasDeclarationAST::setter_setMAliasTypeName (GALGAS_lstring inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_typeAliasDeclarationAST * p = (cPtr_typeAliasDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeAliasDeclarationAST) ;
    p->mProperty_mAliasTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeAliasDeclarationAST::setter_setMOriginalTypeName (GALGAS_lstring inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_typeAliasDeclarationAST * p = (cPtr_typeAliasDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeAliasDeclarationAST) ;
    p->mProperty_mOriginalTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_typeAliasDeclarationAST::readProperty_mAliasTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_typeAliasDeclarationAST * p = (cPtr_typeAliasDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeAliasDeclarationAST) ;
    return p->mProperty_mAliasTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_typeAliasDeclarationAST::readProperty_mOriginalTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_typeAliasDeclarationAST * p = (cPtr_typeAliasDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeAliasDeclarationAST) ;
    return p->mProperty_mOriginalTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @typeAliasDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_typeAliasDeclarationAST::cPtr_typeAliasDeclarationAST (const GALGAS_lstring & in_mAliasTypeName,
                                                            const GALGAS_lstring & in_mOriginalTypeName
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mAliasTypeName (in_mAliasTypeName),
mProperty_mOriginalTypeName (in_mOriginalTypeName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_typeAliasDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeAliasDeclarationAST ;
}

void cPtr_typeAliasDeclarationAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@typeAliasDeclarationAST:" ;
  mProperty_mAliasTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOriginalTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_typeAliasDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_typeAliasDeclarationAST (mProperty_mAliasTypeName, mProperty_mOriginalTypeName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@typeAliasDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeAliasDeclarationAST ("typeAliasDeclarationAST",
                                                & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeAliasDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeAliasDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeAliasDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeAliasDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeAliasDeclarationAST GALGAS_typeAliasDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_typeAliasDeclarationAST result ;
  const GALGAS_typeAliasDeclarationAST * p = (const GALGAS_typeAliasDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeAliasDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeAliasDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_typeAliasDeclarationAST_2D_weak::objectCompare (const GALGAS_typeAliasDeclarationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeAliasDeclarationAST_2D_weak::GALGAS_typeAliasDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeAliasDeclarationAST_2D_weak & GALGAS_typeAliasDeclarationAST_2D_weak::operator = (const GALGAS_typeAliasDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeAliasDeclarationAST_2D_weak::GALGAS_typeAliasDeclarationAST_2D_weak (const GALGAS_typeAliasDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeAliasDeclarationAST_2D_weak GALGAS_typeAliasDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_typeAliasDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeAliasDeclarationAST GALGAS_typeAliasDeclarationAST_2D_weak::bang_typeAliasDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_typeAliasDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_typeAliasDeclarationAST) ;
      result = GALGAS_typeAliasDeclarationAST ((cPtr_typeAliasDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@typeAliasDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeAliasDeclarationAST_2D_weak ("typeAliasDeclarationAST-weak",
                                                        & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeAliasDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeAliasDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeAliasDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeAliasDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeAliasDeclarationAST_2D_weak GALGAS_typeAliasDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_typeAliasDeclarationAST_2D_weak result ;
  const GALGAS_typeAliasDeclarationAST_2D_weak * p = (const GALGAS_typeAliasDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeAliasDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeAliasDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @fixedSizeArrayTypeDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_fixedSizeArrayTypeDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_fixedSizeArrayTypeDeclarationAST * p = (const cPtr_fixedSizeArrayTypeDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_fixedSizeArrayTypeDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mFixedSizeArrayType.objectCompare (p->mProperty_mFixedSizeArrayType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementTypeName.objectCompare (p->mProperty_mElementTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSizeExpression.objectCompare (p->mProperty_mSizeExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSizeExpressionLocation.objectCompare (p->mProperty_mSizeExpressionLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_fixedSizeArrayTypeDeclarationAST::objectCompare (const GALGAS_fixedSizeArrayTypeDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixedSizeArrayTypeDeclarationAST::GALGAS_fixedSizeArrayTypeDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixedSizeArrayTypeDeclarationAST::GALGAS_fixedSizeArrayTypeDeclarationAST (const cPtr_fixedSizeArrayTypeDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_fixedSizeArrayTypeDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixedSizeArrayTypeDeclarationAST GALGAS_fixedSizeArrayTypeDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mFixedSizeArrayType,
                                                                                                  const GALGAS_lstring & inAttribute_mElementTypeName,
                                                                                                  const GALGAS_expressionAST & inAttribute_mSizeExpression,
                                                                                                  const GALGAS_location & inAttribute_mSizeExpressionLocation
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_fixedSizeArrayTypeDeclarationAST result ;
  if (inAttribute_mFixedSizeArrayType.isValid () && inAttribute_mElementTypeName.isValid () && inAttribute_mSizeExpression.isValid () && inAttribute_mSizeExpressionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_fixedSizeArrayTypeDeclarationAST (inAttribute_mFixedSizeArrayType, inAttribute_mElementTypeName, inAttribute_mSizeExpression, inAttribute_mSizeExpressionLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fixedSizeArrayTypeDeclarationAST::setter_setMFixedSizeArrayType (GALGAS_lstring inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_fixedSizeArrayTypeDeclarationAST * p = (cPtr_fixedSizeArrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayTypeDeclarationAST) ;
    p->mProperty_mFixedSizeArrayType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fixedSizeArrayTypeDeclarationAST::setter_setMElementTypeName (GALGAS_lstring inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_fixedSizeArrayTypeDeclarationAST * p = (cPtr_fixedSizeArrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayTypeDeclarationAST) ;
    p->mProperty_mElementTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fixedSizeArrayTypeDeclarationAST::setter_setMSizeExpression (GALGAS_expressionAST inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_fixedSizeArrayTypeDeclarationAST * p = (cPtr_fixedSizeArrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayTypeDeclarationAST) ;
    p->mProperty_mSizeExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fixedSizeArrayTypeDeclarationAST::setter_setMSizeExpressionLocation (GALGAS_location inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_fixedSizeArrayTypeDeclarationAST * p = (cPtr_fixedSizeArrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayTypeDeclarationAST) ;
    p->mProperty_mSizeExpressionLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_fixedSizeArrayTypeDeclarationAST::readProperty_mFixedSizeArrayType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_fixedSizeArrayTypeDeclarationAST * p = (cPtr_fixedSizeArrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayTypeDeclarationAST) ;
    return p->mProperty_mFixedSizeArrayType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_fixedSizeArrayTypeDeclarationAST::readProperty_mElementTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_fixedSizeArrayTypeDeclarationAST * p = (cPtr_fixedSizeArrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayTypeDeclarationAST) ;
    return p->mProperty_mElementTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_fixedSizeArrayTypeDeclarationAST::readProperty_mSizeExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_fixedSizeArrayTypeDeclarationAST * p = (cPtr_fixedSizeArrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayTypeDeclarationAST) ;
    return p->mProperty_mSizeExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_fixedSizeArrayTypeDeclarationAST::readProperty_mSizeExpressionLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_fixedSizeArrayTypeDeclarationAST * p = (cPtr_fixedSizeArrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayTypeDeclarationAST) ;
    return p->mProperty_mSizeExpressionLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @fixedSizeArrayTypeDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_fixedSizeArrayTypeDeclarationAST::cPtr_fixedSizeArrayTypeDeclarationAST (const GALGAS_lstring & in_mFixedSizeArrayType,
                                                                              const GALGAS_lstring & in_mElementTypeName,
                                                                              const GALGAS_expressionAST & in_mSizeExpression,
                                                                              const GALGAS_location & in_mSizeExpressionLocation
                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mFixedSizeArrayType (in_mFixedSizeArrayType),
mProperty_mElementTypeName (in_mElementTypeName),
mProperty_mSizeExpression (in_mSizeExpression),
mProperty_mSizeExpressionLocation (in_mSizeExpressionLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_fixedSizeArrayTypeDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixedSizeArrayTypeDeclarationAST ;
}

void cPtr_fixedSizeArrayTypeDeclarationAST::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@fixedSizeArrayTypeDeclarationAST:" ;
  mProperty_mFixedSizeArrayType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSizeExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSizeExpressionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_fixedSizeArrayTypeDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_fixedSizeArrayTypeDeclarationAST (mProperty_mFixedSizeArrayType, mProperty_mElementTypeName, mProperty_mSizeExpression, mProperty_mSizeExpressionLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@fixedSizeArrayTypeDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_fixedSizeArrayTypeDeclarationAST ("fixedSizeArrayTypeDeclarationAST",
                                                         & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_fixedSizeArrayTypeDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixedSizeArrayTypeDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_fixedSizeArrayTypeDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fixedSizeArrayTypeDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixedSizeArrayTypeDeclarationAST GALGAS_fixedSizeArrayTypeDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_fixedSizeArrayTypeDeclarationAST result ;
  const GALGAS_fixedSizeArrayTypeDeclarationAST * p = (const GALGAS_fixedSizeArrayTypeDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_fixedSizeArrayTypeDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixedSizeArrayTypeDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak::objectCompare (const GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak::GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak & GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak::operator = (const GALGAS_fixedSizeArrayTypeDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak::GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak (const GALGAS_fixedSizeArrayTypeDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixedSizeArrayTypeDeclarationAST GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak::bang_fixedSizeArrayTypeDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_fixedSizeArrayTypeDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_fixedSizeArrayTypeDeclarationAST) ;
      result = GALGAS_fixedSizeArrayTypeDeclarationAST ((cPtr_fixedSizeArrayTypeDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@fixedSizeArrayTypeDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak ("fixedSizeArrayTypeDeclarationAST-weak",
                                                                 & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak result ;
  const GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak * p = (const GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixedSizeArrayTypeDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @userLLVMStaticArrayTypeDefinitionIR reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_userLLVMStaticArrayTypeDefinitionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_userLLVMStaticArrayTypeDefinitionIR * p = (const cPtr_userLLVMStaticArrayTypeDefinitionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_userLLVMStaticArrayTypeDefinitionIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mLLVMDefinedTypeName.objectCompare (p->mProperty_mLLVMDefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementType.objectCompare (p->mProperty_mElementType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSize.objectCompare (p->mProperty_mSize) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_userLLVMStaticArrayTypeDefinitionIR::objectCompare (const GALGAS_userLLVMStaticArrayTypeDefinitionIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMStaticArrayTypeDefinitionIR::GALGAS_userLLVMStaticArrayTypeDefinitionIR (void) :
GALGAS_userLLVMTypeDefinitionIR () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMStaticArrayTypeDefinitionIR GALGAS_userLLVMStaticArrayTypeDefinitionIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_userLLVMStaticArrayTypeDefinitionIR::constructor_new (GALGAS_string::constructor_default (HERE),
                                                                      GALGAS_omnibusType::constructor_default (HERE),
                                                                      GALGAS_bigint::constructor_zero (HERE)
                                                                      COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMStaticArrayTypeDefinitionIR::GALGAS_userLLVMStaticArrayTypeDefinitionIR (const cPtr_userLLVMStaticArrayTypeDefinitionIR * inSourcePtr) :
GALGAS_userLLVMTypeDefinitionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_userLLVMStaticArrayTypeDefinitionIR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMStaticArrayTypeDefinitionIR GALGAS_userLLVMStaticArrayTypeDefinitionIR::constructor_new (const GALGAS_string & inAttribute_mLLVMDefinedTypeName,
                                                                                                        const GALGAS_omnibusType & inAttribute_mElementType,
                                                                                                        const GALGAS_bigint & inAttribute_mSize
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_userLLVMStaticArrayTypeDefinitionIR result ;
  if (inAttribute_mLLVMDefinedTypeName.isValid () && inAttribute_mElementType.isValid () && inAttribute_mSize.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_userLLVMStaticArrayTypeDefinitionIR (inAttribute_mLLVMDefinedTypeName, inAttribute_mElementType, inAttribute_mSize COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_userLLVMStaticArrayTypeDefinitionIR::setter_setMElementType (GALGAS_omnibusType inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_userLLVMStaticArrayTypeDefinitionIR * p = (cPtr_userLLVMStaticArrayTypeDefinitionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_userLLVMStaticArrayTypeDefinitionIR) ;
    p->mProperty_mElementType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_userLLVMStaticArrayTypeDefinitionIR::setter_setMSize (GALGAS_bigint inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_userLLVMStaticArrayTypeDefinitionIR * p = (cPtr_userLLVMStaticArrayTypeDefinitionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_userLLVMStaticArrayTypeDefinitionIR) ;
    p->mProperty_mSize = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_userLLVMStaticArrayTypeDefinitionIR::readProperty_mElementType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_userLLVMStaticArrayTypeDefinitionIR * p = (cPtr_userLLVMStaticArrayTypeDefinitionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_userLLVMStaticArrayTypeDefinitionIR) ;
    return p->mProperty_mElementType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint GALGAS_userLLVMStaticArrayTypeDefinitionIR::readProperty_mSize (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bigint () ;
  }else{
    cPtr_userLLVMStaticArrayTypeDefinitionIR * p = (cPtr_userLLVMStaticArrayTypeDefinitionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_userLLVMStaticArrayTypeDefinitionIR) ;
    return p->mProperty_mSize ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @userLLVMStaticArrayTypeDefinitionIR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_userLLVMStaticArrayTypeDefinitionIR::cPtr_userLLVMStaticArrayTypeDefinitionIR (const GALGAS_string & in_mLLVMDefinedTypeName,
                                                                                    const GALGAS_omnibusType & in_mElementType,
                                                                                    const GALGAS_bigint & in_mSize
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_userLLVMTypeDefinitionIR (in_mLLVMDefinedTypeName COMMA_THERE),
mProperty_mElementType (in_mElementType),
mProperty_mSize (in_mSize) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_userLLVMStaticArrayTypeDefinitionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_userLLVMStaticArrayTypeDefinitionIR ;
}

void cPtr_userLLVMStaticArrayTypeDefinitionIR::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@userLLVMStaticArrayTypeDefinitionIR:" ;
  mProperty_mLLVMDefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSize.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_userLLVMStaticArrayTypeDefinitionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_userLLVMStaticArrayTypeDefinitionIR (mProperty_mLLVMDefinedTypeName, mProperty_mElementType, mProperty_mSize COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@userLLVMStaticArrayTypeDefinitionIR type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_userLLVMStaticArrayTypeDefinitionIR ("userLLVMStaticArrayTypeDefinitionIR",
                                                            & kTypeDescriptor_GALGAS_userLLVMTypeDefinitionIR) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_userLLVMStaticArrayTypeDefinitionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_userLLVMStaticArrayTypeDefinitionIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_userLLVMStaticArrayTypeDefinitionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_userLLVMStaticArrayTypeDefinitionIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMStaticArrayTypeDefinitionIR GALGAS_userLLVMStaticArrayTypeDefinitionIR::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_userLLVMStaticArrayTypeDefinitionIR result ;
  const GALGAS_userLLVMStaticArrayTypeDefinitionIR * p = (const GALGAS_userLLVMStaticArrayTypeDefinitionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_userLLVMStaticArrayTypeDefinitionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("userLLVMStaticArrayTypeDefinitionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak::objectCompare (const GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak::GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak (void) :
GALGAS_userLLVMTypeDefinitionIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak & GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak::operator = (const GALGAS_userLLVMStaticArrayTypeDefinitionIR & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak::GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak (const GALGAS_userLLVMStaticArrayTypeDefinitionIR & inSource) :
GALGAS_userLLVMTypeDefinitionIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMStaticArrayTypeDefinitionIR GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak::bang_userLLVMStaticArrayTypeDefinitionIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_userLLVMStaticArrayTypeDefinitionIR result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_userLLVMStaticArrayTypeDefinitionIR) ;
      result = GALGAS_userLLVMStaticArrayTypeDefinitionIR ((cPtr_userLLVMStaticArrayTypeDefinitionIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@userLLVMStaticArrayTypeDefinitionIR-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak ("userLLVMStaticArrayTypeDefinitionIR-weak",
                                                                    & kTypeDescriptor_GALGAS_userLLVMTypeDefinitionIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak result ;
  const GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak * p = (const GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("userLLVMStaticArrayTypeDefinitionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @fixedSizeArrayAssignmentOperatorUsage reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_fixedSizeArrayAssignmentOperatorUsage::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_fixedSizeArrayAssignmentOperatorUsage * p = (const cPtr_fixedSizeArrayAssignmentOperatorUsage *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_fixedSizeArrayAssignmentOperatorUsage) ;
  if (kOperandEqual == result) {
    result = mProperty_mElementType.objectCompare (p->mProperty_mElementType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArraySize.objectCompare (p->mProperty_mArraySize) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAssignValueToElements_5F_functionName.objectCompare (p->mProperty_mAssignValueToElements_5F_functionName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_fixedSizeArrayAssignmentOperatorUsage::objectCompare (const GALGAS_fixedSizeArrayAssignmentOperatorUsage & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixedSizeArrayAssignmentOperatorUsage::GALGAS_fixedSizeArrayAssignmentOperatorUsage (void) :
GALGAS_abstractAssignmentOperatorUsage () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixedSizeArrayAssignmentOperatorUsage GALGAS_fixedSizeArrayAssignmentOperatorUsage::constructor_default (LOCATION_ARGS) {
  return GALGAS_fixedSizeArrayAssignmentOperatorUsage::constructor_new (GALGAS_omnibusType::constructor_default (HERE),
                                                                        GALGAS_uint::constructor_default (HERE),
                                                                        GALGAS_string::constructor_default (HERE)
                                                                        COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixedSizeArrayAssignmentOperatorUsage::GALGAS_fixedSizeArrayAssignmentOperatorUsage (const cPtr_fixedSizeArrayAssignmentOperatorUsage * inSourcePtr) :
GALGAS_abstractAssignmentOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_fixedSizeArrayAssignmentOperatorUsage) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixedSizeArrayAssignmentOperatorUsage GALGAS_fixedSizeArrayAssignmentOperatorUsage::constructor_new (const GALGAS_omnibusType & inAttribute_mElementType,
                                                                                                            const GALGAS_uint & inAttribute_mArraySize,
                                                                                                            const GALGAS_string & inAttribute_mAssignValueToElements_5F_functionName
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_fixedSizeArrayAssignmentOperatorUsage result ;
  if (inAttribute_mElementType.isValid () && inAttribute_mArraySize.isValid () && inAttribute_mAssignValueToElements_5F_functionName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_fixedSizeArrayAssignmentOperatorUsage (inAttribute_mElementType, inAttribute_mArraySize, inAttribute_mAssignValueToElements_5F_functionName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fixedSizeArrayAssignmentOperatorUsage::setter_setMElementType (GALGAS_omnibusType inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_fixedSizeArrayAssignmentOperatorUsage * p = (cPtr_fixedSizeArrayAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayAssignmentOperatorUsage) ;
    p->mProperty_mElementType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fixedSizeArrayAssignmentOperatorUsage::setter_setMArraySize (GALGAS_uint inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_fixedSizeArrayAssignmentOperatorUsage * p = (cPtr_fixedSizeArrayAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayAssignmentOperatorUsage) ;
    p->mProperty_mArraySize = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fixedSizeArrayAssignmentOperatorUsage::setter_setMAssignValueToElements_5F_functionName (GALGAS_string inValue
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_fixedSizeArrayAssignmentOperatorUsage * p = (cPtr_fixedSizeArrayAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayAssignmentOperatorUsage) ;
    p->mProperty_mAssignValueToElements_5F_functionName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_fixedSizeArrayAssignmentOperatorUsage::readProperty_mElementType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_fixedSizeArrayAssignmentOperatorUsage * p = (cPtr_fixedSizeArrayAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayAssignmentOperatorUsage) ;
    return p->mProperty_mElementType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_fixedSizeArrayAssignmentOperatorUsage::readProperty_mArraySize (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_fixedSizeArrayAssignmentOperatorUsage * p = (cPtr_fixedSizeArrayAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayAssignmentOperatorUsage) ;
    return p->mProperty_mArraySize ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_fixedSizeArrayAssignmentOperatorUsage::readProperty_mAssignValueToElements_5F_functionName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_fixedSizeArrayAssignmentOperatorUsage * p = (cPtr_fixedSizeArrayAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayAssignmentOperatorUsage) ;
    return p->mProperty_mAssignValueToElements_5F_functionName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @fixedSizeArrayAssignmentOperatorUsage class
//----------------------------------------------------------------------------------------------------------------------

cPtr_fixedSizeArrayAssignmentOperatorUsage::cPtr_fixedSizeArrayAssignmentOperatorUsage (const GALGAS_omnibusType & in_mElementType,
                                                                                        const GALGAS_uint & in_mArraySize,
                                                                                        const GALGAS_string & in_mAssignValueToElements_5F_functionName
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractAssignmentOperatorUsage (THERE),
mProperty_mElementType (in_mElementType),
mProperty_mArraySize (in_mArraySize),
mProperty_mAssignValueToElements_5F_functionName (in_mAssignValueToElements_5F_functionName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_fixedSizeArrayAssignmentOperatorUsage::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixedSizeArrayAssignmentOperatorUsage ;
}

void cPtr_fixedSizeArrayAssignmentOperatorUsage::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@fixedSizeArrayAssignmentOperatorUsage:" ;
  mProperty_mElementType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArraySize.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAssignValueToElements_5F_functionName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_fixedSizeArrayAssignmentOperatorUsage::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_fixedSizeArrayAssignmentOperatorUsage (mProperty_mElementType, mProperty_mArraySize, mProperty_mAssignValueToElements_5F_functionName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@fixedSizeArrayAssignmentOperatorUsage type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_fixedSizeArrayAssignmentOperatorUsage ("fixedSizeArrayAssignmentOperatorUsage",
                                                              & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_fixedSizeArrayAssignmentOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixedSizeArrayAssignmentOperatorUsage ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_fixedSizeArrayAssignmentOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fixedSizeArrayAssignmentOperatorUsage (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixedSizeArrayAssignmentOperatorUsage GALGAS_fixedSizeArrayAssignmentOperatorUsage::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_fixedSizeArrayAssignmentOperatorUsage result ;
  const GALGAS_fixedSizeArrayAssignmentOperatorUsage * p = (const GALGAS_fixedSizeArrayAssignmentOperatorUsage *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_fixedSizeArrayAssignmentOperatorUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixedSizeArrayAssignmentOperatorUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak::objectCompare (const GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak::GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak (void) :
GALGAS_abstractAssignmentOperatorUsage_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak & GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak::operator = (const GALGAS_fixedSizeArrayAssignmentOperatorUsage & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak::GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak (const GALGAS_fixedSizeArrayAssignmentOperatorUsage & inSource) :
GALGAS_abstractAssignmentOperatorUsage_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixedSizeArrayAssignmentOperatorUsage GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak::bang_fixedSizeArrayAssignmentOperatorUsage_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_fixedSizeArrayAssignmentOperatorUsage result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_fixedSizeArrayAssignmentOperatorUsage) ;
      result = GALGAS_fixedSizeArrayAssignmentOperatorUsage ((cPtr_fixedSizeArrayAssignmentOperatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@fixedSizeArrayAssignmentOperatorUsage-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak ("fixedSizeArrayAssignmentOperatorUsage-weak",
                                                                      & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak result ;
  const GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak * p = (const GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixedSizeArrayAssignmentOperatorUsage-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @abstractRoutineIR reference class
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_abstractRoutineIR::objectCompare (const GALGAS_abstractRoutineIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractRoutineIR::GALGAS_abstractRoutineIR (void) :
AC_GALGAS_reference_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractRoutineIR::GALGAS_abstractRoutineIR (const cPtr_abstractRoutineIR * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractRoutineIR) ;
}
//----------------------------------------------------------------------------------------------------------------------

void GALGAS_abstractRoutineIR::setter_setMRoutineMangledName (GALGAS_lstring inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_abstractRoutineIR * p = (cPtr_abstractRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractRoutineIR) ;
    p->mProperty_mRoutineMangledName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_abstractRoutineIR::setter_setIsRequired (GALGAS_bool inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_abstractRoutineIR * p = (cPtr_abstractRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractRoutineIR) ;
    p->mProperty_isRequired = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_abstractRoutineIR::setter_setWarnsIfUnused (GALGAS_bool inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_abstractRoutineIR * p = (cPtr_abstractRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractRoutineIR) ;
    p->mProperty_warnsIfUnused = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_abstractRoutineIR::readProperty_mRoutineMangledName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_abstractRoutineIR * p = (cPtr_abstractRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractRoutineIR) ;
    return p->mProperty_mRoutineMangledName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_abstractRoutineIR::readProperty_isRequired (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_abstractRoutineIR * p = (cPtr_abstractRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractRoutineIR) ;
    return p->mProperty_isRequired ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_abstractRoutineIR::readProperty_warnsIfUnused (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_abstractRoutineIR * p = (cPtr_abstractRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractRoutineIR) ;
    return p->mProperty_warnsIfUnused ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @abstractRoutineIR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_abstractRoutineIR::cPtr_abstractRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                const GALGAS_bool & in_isRequired,
                                                const GALGAS_bool & in_warnsIfUnused
                                                COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE),
mProperty_mRoutineMangledName (in_mRoutineMangledName),
mProperty_isRequired (in_isRequired),
mProperty_warnsIfUnused (in_warnsIfUnused) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@abstractRoutineIR type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractRoutineIR ("abstractRoutineIR",
                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractRoutineIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractRoutineIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractRoutineIR GALGAS_abstractRoutineIR::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_abstractRoutineIR result ;
  const GALGAS_abstractRoutineIR * p = (const GALGAS_abstractRoutineIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_abstractRoutineIR_2D_weak::objectCompare (const GALGAS_abstractRoutineIR_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractRoutineIR_2D_weak::GALGAS_abstractRoutineIR_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractRoutineIR_2D_weak & GALGAS_abstractRoutineIR_2D_weak::operator = (const GALGAS_abstractRoutineIR & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractRoutineIR_2D_weak::GALGAS_abstractRoutineIR_2D_weak (const GALGAS_abstractRoutineIR & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractRoutineIR_2D_weak GALGAS_abstractRoutineIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_abstractRoutineIR_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractRoutineIR GALGAS_abstractRoutineIR_2D_weak::bang_abstractRoutineIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractRoutineIR result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractRoutineIR) ;
      result = GALGAS_abstractRoutineIR ((cPtr_abstractRoutineIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@abstractRoutineIR-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak ("abstractRoutineIR-weak",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractRoutineIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractRoutineIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractRoutineIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractRoutineIR_2D_weak GALGAS_abstractRoutineIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_abstractRoutineIR_2D_weak result ;
  const GALGAS_abstractRoutineIR_2D_weak * p = (const GALGAS_abstractRoutineIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractRoutineIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractRoutineIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @staticArrayTypeAssignFunctionIR reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_staticArrayTypeAssignFunctionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_staticArrayTypeAssignFunctionIR * p = (const cPtr_staticArrayTypeAssignFunctionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_staticArrayTypeAssignFunctionIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mRoutineMangledName.objectCompare (p->mProperty_mRoutineMangledName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_isRequired.objectCompare (p->mProperty_isRequired) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_warnsIfUnused.objectCompare (p->mProperty_warnsIfUnused) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFixedSizeArrayType.objectCompare (p->mProperty_mFixedSizeArrayType) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_staticArrayTypeAssignFunctionIR::objectCompare (const GALGAS_staticArrayTypeAssignFunctionIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticArrayTypeAssignFunctionIR::GALGAS_staticArrayTypeAssignFunctionIR (void) :
GALGAS_abstractRoutineIR () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticArrayTypeAssignFunctionIR GALGAS_staticArrayTypeAssignFunctionIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_staticArrayTypeAssignFunctionIR::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                  GALGAS_bool::constructor_default (HERE),
                                                                  GALGAS_bool::constructor_default (HERE),
                                                                  GALGAS_omnibusType::constructor_default (HERE)
                                                                  COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticArrayTypeAssignFunctionIR::GALGAS_staticArrayTypeAssignFunctionIR (const cPtr_staticArrayTypeAssignFunctionIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_staticArrayTypeAssignFunctionIR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticArrayTypeAssignFunctionIR GALGAS_staticArrayTypeAssignFunctionIR::constructor_new (const GALGAS_lstring & inAttribute_mRoutineMangledName,
                                                                                                const GALGAS_bool & inAttribute_isRequired,
                                                                                                const GALGAS_bool & inAttribute_warnsIfUnused,
                                                                                                const GALGAS_omnibusType & inAttribute_mFixedSizeArrayType
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_staticArrayTypeAssignFunctionIR result ;
  if (inAttribute_mRoutineMangledName.isValid () && inAttribute_isRequired.isValid () && inAttribute_warnsIfUnused.isValid () && inAttribute_mFixedSizeArrayType.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_staticArrayTypeAssignFunctionIR (inAttribute_mRoutineMangledName, inAttribute_isRequired, inAttribute_warnsIfUnused, inAttribute_mFixedSizeArrayType COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_staticArrayTypeAssignFunctionIR::setter_setMFixedSizeArrayType (GALGAS_omnibusType inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_staticArrayTypeAssignFunctionIR * p = (cPtr_staticArrayTypeAssignFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticArrayTypeAssignFunctionIR) ;
    p->mProperty_mFixedSizeArrayType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_staticArrayTypeAssignFunctionIR::readProperty_mFixedSizeArrayType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_staticArrayTypeAssignFunctionIR * p = (cPtr_staticArrayTypeAssignFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticArrayTypeAssignFunctionIR) ;
    return p->mProperty_mFixedSizeArrayType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @staticArrayTypeAssignFunctionIR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_staticArrayTypeAssignFunctionIR::cPtr_staticArrayTypeAssignFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                                            const GALGAS_bool & in_isRequired,
                                                                            const GALGAS_bool & in_warnsIfUnused,
                                                                            const GALGAS_omnibusType & in_mFixedSizeArrayType
                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
mProperty_mFixedSizeArrayType (in_mFixedSizeArrayType) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_staticArrayTypeAssignFunctionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticArrayTypeAssignFunctionIR ;
}

void cPtr_staticArrayTypeAssignFunctionIR::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@staticArrayTypeAssignFunctionIR:" ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFixedSizeArrayType.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_staticArrayTypeAssignFunctionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_staticArrayTypeAssignFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mFixedSizeArrayType COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@staticArrayTypeAssignFunctionIR type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticArrayTypeAssignFunctionIR ("staticArrayTypeAssignFunctionIR",
                                                        & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_staticArrayTypeAssignFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticArrayTypeAssignFunctionIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_staticArrayTypeAssignFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticArrayTypeAssignFunctionIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticArrayTypeAssignFunctionIR GALGAS_staticArrayTypeAssignFunctionIR::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_staticArrayTypeAssignFunctionIR result ;
  const GALGAS_staticArrayTypeAssignFunctionIR * p = (const GALGAS_staticArrayTypeAssignFunctionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_staticArrayTypeAssignFunctionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticArrayTypeAssignFunctionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_staticArrayTypeAssignFunctionIR_2D_weak::objectCompare (const GALGAS_staticArrayTypeAssignFunctionIR_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticArrayTypeAssignFunctionIR_2D_weak::GALGAS_staticArrayTypeAssignFunctionIR_2D_weak (void) :
GALGAS_abstractRoutineIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticArrayTypeAssignFunctionIR_2D_weak & GALGAS_staticArrayTypeAssignFunctionIR_2D_weak::operator = (const GALGAS_staticArrayTypeAssignFunctionIR & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticArrayTypeAssignFunctionIR_2D_weak::GALGAS_staticArrayTypeAssignFunctionIR_2D_weak (const GALGAS_staticArrayTypeAssignFunctionIR & inSource) :
GALGAS_abstractRoutineIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticArrayTypeAssignFunctionIR_2D_weak GALGAS_staticArrayTypeAssignFunctionIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_staticArrayTypeAssignFunctionIR_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticArrayTypeAssignFunctionIR GALGAS_staticArrayTypeAssignFunctionIR_2D_weak::bang_staticArrayTypeAssignFunctionIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_staticArrayTypeAssignFunctionIR result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_staticArrayTypeAssignFunctionIR) ;
      result = GALGAS_staticArrayTypeAssignFunctionIR ((cPtr_staticArrayTypeAssignFunctionIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@staticArrayTypeAssignFunctionIR-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticArrayTypeAssignFunctionIR_2D_weak ("staticArrayTypeAssignFunctionIR-weak",
                                                                & kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_staticArrayTypeAssignFunctionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticArrayTypeAssignFunctionIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_staticArrayTypeAssignFunctionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticArrayTypeAssignFunctionIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticArrayTypeAssignFunctionIR_2D_weak GALGAS_staticArrayTypeAssignFunctionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_staticArrayTypeAssignFunctionIR_2D_weak result ;
  const GALGAS_staticArrayTypeAssignFunctionIR_2D_weak * p = (const GALGAS_staticArrayTypeAssignFunctionIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_staticArrayTypeAssignFunctionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticArrayTypeAssignFunctionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @typeDynamicArrayDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_typeDynamicArrayDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_typeDynamicArrayDeclarationAST * p = (const cPtr_typeDynamicArrayDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_typeDynamicArrayDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mDynamicArrayTypeName.objectCompare (p->mProperty_mDynamicArrayTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementTypeName.objectCompare (p->mProperty_mElementTypeName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_typeDynamicArrayDeclarationAST::objectCompare (const GALGAS_typeDynamicArrayDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeDynamicArrayDeclarationAST::GALGAS_typeDynamicArrayDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeDynamicArrayDeclarationAST GALGAS_typeDynamicArrayDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_typeDynamicArrayDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                 GALGAS_lstring::constructor_default (HERE)
                                                                 COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeDynamicArrayDeclarationAST::GALGAS_typeDynamicArrayDeclarationAST (const cPtr_typeDynamicArrayDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typeDynamicArrayDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeDynamicArrayDeclarationAST GALGAS_typeDynamicArrayDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mDynamicArrayTypeName,
                                                                                              const GALGAS_lstring & inAttribute_mElementTypeName
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_typeDynamicArrayDeclarationAST result ;
  if (inAttribute_mDynamicArrayTypeName.isValid () && inAttribute_mElementTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_typeDynamicArrayDeclarationAST (inAttribute_mDynamicArrayTypeName, inAttribute_mElementTypeName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeDynamicArrayDeclarationAST::setter_setMDynamicArrayTypeName (GALGAS_lstring inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_typeDynamicArrayDeclarationAST * p = (cPtr_typeDynamicArrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeDynamicArrayDeclarationAST) ;
    p->mProperty_mDynamicArrayTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeDynamicArrayDeclarationAST::setter_setMElementTypeName (GALGAS_lstring inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_typeDynamicArrayDeclarationAST * p = (cPtr_typeDynamicArrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeDynamicArrayDeclarationAST) ;
    p->mProperty_mElementTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_typeDynamicArrayDeclarationAST::readProperty_mDynamicArrayTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_typeDynamicArrayDeclarationAST * p = (cPtr_typeDynamicArrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeDynamicArrayDeclarationAST) ;
    return p->mProperty_mDynamicArrayTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_typeDynamicArrayDeclarationAST::readProperty_mElementTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_typeDynamicArrayDeclarationAST * p = (cPtr_typeDynamicArrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeDynamicArrayDeclarationAST) ;
    return p->mProperty_mElementTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @typeDynamicArrayDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_typeDynamicArrayDeclarationAST::cPtr_typeDynamicArrayDeclarationAST (const GALGAS_lstring & in_mDynamicArrayTypeName,
                                                                          const GALGAS_lstring & in_mElementTypeName
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mDynamicArrayTypeName (in_mDynamicArrayTypeName),
mProperty_mElementTypeName (in_mElementTypeName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_typeDynamicArrayDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST ;
}

void cPtr_typeDynamicArrayDeclarationAST::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@typeDynamicArrayDeclarationAST:" ;
  mProperty_mDynamicArrayTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_typeDynamicArrayDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_typeDynamicArrayDeclarationAST (mProperty_mDynamicArrayTypeName, mProperty_mElementTypeName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@typeDynamicArrayDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST ("typeDynamicArrayDeclarationAST",
                                                       & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeDynamicArrayDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeDynamicArrayDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeDynamicArrayDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeDynamicArrayDeclarationAST GALGAS_typeDynamicArrayDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_typeDynamicArrayDeclarationAST result ;
  const GALGAS_typeDynamicArrayDeclarationAST * p = (const GALGAS_typeDynamicArrayDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeDynamicArrayDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeDynamicArrayDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_typeDynamicArrayDeclarationAST_2D_weak::objectCompare (const GALGAS_typeDynamicArrayDeclarationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeDynamicArrayDeclarationAST_2D_weak::GALGAS_typeDynamicArrayDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeDynamicArrayDeclarationAST_2D_weak & GALGAS_typeDynamicArrayDeclarationAST_2D_weak::operator = (const GALGAS_typeDynamicArrayDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeDynamicArrayDeclarationAST_2D_weak::GALGAS_typeDynamicArrayDeclarationAST_2D_weak (const GALGAS_typeDynamicArrayDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeDynamicArrayDeclarationAST_2D_weak GALGAS_typeDynamicArrayDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_typeDynamicArrayDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeDynamicArrayDeclarationAST GALGAS_typeDynamicArrayDeclarationAST_2D_weak::bang_typeDynamicArrayDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_typeDynamicArrayDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_typeDynamicArrayDeclarationAST) ;
      result = GALGAS_typeDynamicArrayDeclarationAST ((cPtr_typeDynamicArrayDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@typeDynamicArrayDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST_2D_weak ("typeDynamicArrayDeclarationAST-weak",
                                                               & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeDynamicArrayDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeDynamicArrayDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeDynamicArrayDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeDynamicArrayDeclarationAST_2D_weak GALGAS_typeDynamicArrayDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_typeDynamicArrayDeclarationAST_2D_weak result ;
  const GALGAS_typeDynamicArrayDeclarationAST_2D_weak * p = (const GALGAS_typeDynamicArrayDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeDynamicArrayDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeDynamicArrayDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @dynArrayRemoveAllFunctionIR reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_dynArrayRemoveAllFunctionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_dynArrayRemoveAllFunctionIR * p = (const cPtr_dynArrayRemoveAllFunctionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_dynArrayRemoveAllFunctionIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mRoutineMangledName.objectCompare (p->mProperty_mRoutineMangledName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_isRequired.objectCompare (p->mProperty_isRequired) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_warnsIfUnused.objectCompare (p->mProperty_warnsIfUnused) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_dynArrayRemoveAllFunctionIR::objectCompare (const GALGAS_dynArrayRemoveAllFunctionIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayRemoveAllFunctionIR::GALGAS_dynArrayRemoveAllFunctionIR (void) :
GALGAS_abstractRoutineIR () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayRemoveAllFunctionIR GALGAS_dynArrayRemoveAllFunctionIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_dynArrayRemoveAllFunctionIR::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_bool::constructor_default (HERE),
                                                              GALGAS_bool::constructor_default (HERE)
                                                              COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayRemoveAllFunctionIR::GALGAS_dynArrayRemoveAllFunctionIR (const cPtr_dynArrayRemoveAllFunctionIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dynArrayRemoveAllFunctionIR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayRemoveAllFunctionIR GALGAS_dynArrayRemoveAllFunctionIR::constructor_new (const GALGAS_lstring & inAttribute_mRoutineMangledName,
                                                                                        const GALGAS_bool & inAttribute_isRequired,
                                                                                        const GALGAS_bool & inAttribute_warnsIfUnused
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_dynArrayRemoveAllFunctionIR result ;
  if (inAttribute_mRoutineMangledName.isValid () && inAttribute_isRequired.isValid () && inAttribute_warnsIfUnused.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_dynArrayRemoveAllFunctionIR (inAttribute_mRoutineMangledName, inAttribute_isRequired, inAttribute_warnsIfUnused COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @dynArrayRemoveAllFunctionIR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_dynArrayRemoveAllFunctionIR::cPtr_dynArrayRemoveAllFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                                    const GALGAS_bool & in_isRequired,
                                                                    const GALGAS_bool & in_warnsIfUnused
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_dynArrayRemoveAllFunctionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayRemoveAllFunctionIR ;
}

void cPtr_dynArrayRemoveAllFunctionIR::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@dynArrayRemoveAllFunctionIR:" ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_dynArrayRemoveAllFunctionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_dynArrayRemoveAllFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@dynArrayRemoveAllFunctionIR type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dynArrayRemoveAllFunctionIR ("dynArrayRemoveAllFunctionIR",
                                                    & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dynArrayRemoveAllFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayRemoveAllFunctionIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dynArrayRemoveAllFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dynArrayRemoveAllFunctionIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayRemoveAllFunctionIR GALGAS_dynArrayRemoveAllFunctionIR::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_dynArrayRemoveAllFunctionIR result ;
  const GALGAS_dynArrayRemoveAllFunctionIR * p = (const GALGAS_dynArrayRemoveAllFunctionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_dynArrayRemoveAllFunctionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynArrayRemoveAllFunctionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_dynArrayRemoveAllFunctionIR_2D_weak::objectCompare (const GALGAS_dynArrayRemoveAllFunctionIR_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayRemoveAllFunctionIR_2D_weak::GALGAS_dynArrayRemoveAllFunctionIR_2D_weak (void) :
GALGAS_abstractRoutineIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayRemoveAllFunctionIR_2D_weak & GALGAS_dynArrayRemoveAllFunctionIR_2D_weak::operator = (const GALGAS_dynArrayRemoveAllFunctionIR & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayRemoveAllFunctionIR_2D_weak::GALGAS_dynArrayRemoveAllFunctionIR_2D_weak (const GALGAS_dynArrayRemoveAllFunctionIR & inSource) :
GALGAS_abstractRoutineIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayRemoveAllFunctionIR_2D_weak GALGAS_dynArrayRemoveAllFunctionIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_dynArrayRemoveAllFunctionIR_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayRemoveAllFunctionIR GALGAS_dynArrayRemoveAllFunctionIR_2D_weak::bang_dynArrayRemoveAllFunctionIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_dynArrayRemoveAllFunctionIR result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dynArrayRemoveAllFunctionIR) ;
      result = GALGAS_dynArrayRemoveAllFunctionIR ((cPtr_dynArrayRemoveAllFunctionIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@dynArrayRemoveAllFunctionIR-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dynArrayRemoveAllFunctionIR_2D_weak ("dynArrayRemoveAllFunctionIR-weak",
                                                            & kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dynArrayRemoveAllFunctionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayRemoveAllFunctionIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dynArrayRemoveAllFunctionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dynArrayRemoveAllFunctionIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayRemoveAllFunctionIR_2D_weak GALGAS_dynArrayRemoveAllFunctionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_dynArrayRemoveAllFunctionIR_2D_weak result ;
  const GALGAS_dynArrayRemoveAllFunctionIR_2D_weak * p = (const GALGAS_dynArrayRemoveAllFunctionIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_dynArrayRemoveAllFunctionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynArrayRemoveAllFunctionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @dynArrayLengthFunctionIR reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_dynArrayLengthFunctionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_dynArrayLengthFunctionIR * p = (const cPtr_dynArrayLengthFunctionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_dynArrayLengthFunctionIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mRoutineMangledName.objectCompare (p->mProperty_mRoutineMangledName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_isRequired.objectCompare (p->mProperty_isRequired) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_warnsIfUnused.objectCompare (p->mProperty_warnsIfUnused) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_dynArrayLengthFunctionIR::objectCompare (const GALGAS_dynArrayLengthFunctionIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayLengthFunctionIR::GALGAS_dynArrayLengthFunctionIR (void) :
GALGAS_abstractRoutineIR () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayLengthFunctionIR GALGAS_dynArrayLengthFunctionIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_dynArrayLengthFunctionIR::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_bool::constructor_default (HERE),
                                                           GALGAS_bool::constructor_default (HERE)
                                                           COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayLengthFunctionIR::GALGAS_dynArrayLengthFunctionIR (const cPtr_dynArrayLengthFunctionIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dynArrayLengthFunctionIR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayLengthFunctionIR GALGAS_dynArrayLengthFunctionIR::constructor_new (const GALGAS_lstring & inAttribute_mRoutineMangledName,
                                                                                  const GALGAS_bool & inAttribute_isRequired,
                                                                                  const GALGAS_bool & inAttribute_warnsIfUnused
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_dynArrayLengthFunctionIR result ;
  if (inAttribute_mRoutineMangledName.isValid () && inAttribute_isRequired.isValid () && inAttribute_warnsIfUnused.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_dynArrayLengthFunctionIR (inAttribute_mRoutineMangledName, inAttribute_isRequired, inAttribute_warnsIfUnused COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @dynArrayLengthFunctionIR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_dynArrayLengthFunctionIR::cPtr_dynArrayLengthFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                              const GALGAS_bool & in_isRequired,
                                                              const GALGAS_bool & in_warnsIfUnused
                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_dynArrayLengthFunctionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayLengthFunctionIR ;
}

void cPtr_dynArrayLengthFunctionIR::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@dynArrayLengthFunctionIR:" ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_dynArrayLengthFunctionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_dynArrayLengthFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@dynArrayLengthFunctionIR type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dynArrayLengthFunctionIR ("dynArrayLengthFunctionIR",
                                                 & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dynArrayLengthFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayLengthFunctionIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dynArrayLengthFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dynArrayLengthFunctionIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayLengthFunctionIR GALGAS_dynArrayLengthFunctionIR::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_dynArrayLengthFunctionIR result ;
  const GALGAS_dynArrayLengthFunctionIR * p = (const GALGAS_dynArrayLengthFunctionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_dynArrayLengthFunctionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynArrayLengthFunctionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_dynArrayLengthFunctionIR_2D_weak::objectCompare (const GALGAS_dynArrayLengthFunctionIR_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayLengthFunctionIR_2D_weak::GALGAS_dynArrayLengthFunctionIR_2D_weak (void) :
GALGAS_abstractRoutineIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayLengthFunctionIR_2D_weak & GALGAS_dynArrayLengthFunctionIR_2D_weak::operator = (const GALGAS_dynArrayLengthFunctionIR & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayLengthFunctionIR_2D_weak::GALGAS_dynArrayLengthFunctionIR_2D_weak (const GALGAS_dynArrayLengthFunctionIR & inSource) :
GALGAS_abstractRoutineIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayLengthFunctionIR_2D_weak GALGAS_dynArrayLengthFunctionIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_dynArrayLengthFunctionIR_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayLengthFunctionIR GALGAS_dynArrayLengthFunctionIR_2D_weak::bang_dynArrayLengthFunctionIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_dynArrayLengthFunctionIR result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dynArrayLengthFunctionIR) ;
      result = GALGAS_dynArrayLengthFunctionIR ((cPtr_dynArrayLengthFunctionIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@dynArrayLengthFunctionIR-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dynArrayLengthFunctionIR_2D_weak ("dynArrayLengthFunctionIR-weak",
                                                         & kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dynArrayLengthFunctionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayLengthFunctionIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dynArrayLengthFunctionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dynArrayLengthFunctionIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayLengthFunctionIR_2D_weak GALGAS_dynArrayLengthFunctionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_dynArrayLengthFunctionIR_2D_weak result ;
  const GALGAS_dynArrayLengthFunctionIR_2D_weak * p = (const GALGAS_dynArrayLengthFunctionIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_dynArrayLengthFunctionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynArrayLengthFunctionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @dynArrayAppendFunctionIR reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_dynArrayAppendFunctionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_dynArrayAppendFunctionIR * p = (const cPtr_dynArrayAppendFunctionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_dynArrayAppendFunctionIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mRoutineMangledName.objectCompare (p->mProperty_mRoutineMangledName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_isRequired.objectCompare (p->mProperty_isRequired) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_warnsIfUnused.objectCompare (p->mProperty_warnsIfUnused) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArrayTypeProxy.objectCompare (p->mProperty_mArrayTypeProxy) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementTypeProxy.objectCompare (p->mProperty_mElementTypeProxy) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInsertFunctionMangledName.objectCompare (p->mProperty_mInsertFunctionMangledName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_dynArrayAppendFunctionIR::objectCompare (const GALGAS_dynArrayAppendFunctionIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayAppendFunctionIR::GALGAS_dynArrayAppendFunctionIR (void) :
GALGAS_abstractRoutineIR () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayAppendFunctionIR GALGAS_dynArrayAppendFunctionIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_dynArrayAppendFunctionIR::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_bool::constructor_default (HERE),
                                                           GALGAS_bool::constructor_default (HERE),
                                                           GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                           GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                           GALGAS_string::constructor_default (HERE)
                                                           COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayAppendFunctionIR::GALGAS_dynArrayAppendFunctionIR (const cPtr_dynArrayAppendFunctionIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dynArrayAppendFunctionIR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayAppendFunctionIR GALGAS_dynArrayAppendFunctionIR::constructor_new (const GALGAS_lstring & inAttribute_mRoutineMangledName,
                                                                                  const GALGAS_bool & inAttribute_isRequired,
                                                                                  const GALGAS_bool & inAttribute_warnsIfUnused,
                                                                                  const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mArrayTypeProxy,
                                                                                  const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mElementTypeProxy,
                                                                                  const GALGAS_string & inAttribute_mInsertFunctionMangledName
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_dynArrayAppendFunctionIR result ;
  if (inAttribute_mRoutineMangledName.isValid () && inAttribute_isRequired.isValid () && inAttribute_warnsIfUnused.isValid () && inAttribute_mArrayTypeProxy.isValid () && inAttribute_mElementTypeProxy.isValid () && inAttribute_mInsertFunctionMangledName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_dynArrayAppendFunctionIR (inAttribute_mRoutineMangledName, inAttribute_isRequired, inAttribute_warnsIfUnused, inAttribute_mArrayTypeProxy, inAttribute_mElementTypeProxy, inAttribute_mInsertFunctionMangledName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_dynArrayAppendFunctionIR::setter_setMArrayTypeProxy (GALGAS_unifiedTypeMap_2D_entry inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_dynArrayAppendFunctionIR * p = (cPtr_dynArrayAppendFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynArrayAppendFunctionIR) ;
    p->mProperty_mArrayTypeProxy = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_dynArrayAppendFunctionIR::setter_setMElementTypeProxy (GALGAS_unifiedTypeMap_2D_entry inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_dynArrayAppendFunctionIR * p = (cPtr_dynArrayAppendFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynArrayAppendFunctionIR) ;
    p->mProperty_mElementTypeProxy = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_dynArrayAppendFunctionIR::setter_setMInsertFunctionMangledName (GALGAS_string inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_dynArrayAppendFunctionIR * p = (cPtr_dynArrayAppendFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynArrayAppendFunctionIR) ;
    p->mProperty_mInsertFunctionMangledName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_dynArrayAppendFunctionIR::readProperty_mArrayTypeProxy (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_dynArrayAppendFunctionIR * p = (cPtr_dynArrayAppendFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynArrayAppendFunctionIR) ;
    return p->mProperty_mArrayTypeProxy ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_dynArrayAppendFunctionIR::readProperty_mElementTypeProxy (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_dynArrayAppendFunctionIR * p = (cPtr_dynArrayAppendFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynArrayAppendFunctionIR) ;
    return p->mProperty_mElementTypeProxy ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_dynArrayAppendFunctionIR::readProperty_mInsertFunctionMangledName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_dynArrayAppendFunctionIR * p = (cPtr_dynArrayAppendFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynArrayAppendFunctionIR) ;
    return p->mProperty_mInsertFunctionMangledName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @dynArrayAppendFunctionIR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_dynArrayAppendFunctionIR::cPtr_dynArrayAppendFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                              const GALGAS_bool & in_isRequired,
                                                              const GALGAS_bool & in_warnsIfUnused,
                                                              const GALGAS_unifiedTypeMap_2D_entry & in_mArrayTypeProxy,
                                                              const GALGAS_unifiedTypeMap_2D_entry & in_mElementTypeProxy,
                                                              const GALGAS_string & in_mInsertFunctionMangledName
                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
mProperty_mArrayTypeProxy (in_mArrayTypeProxy),
mProperty_mElementTypeProxy (in_mElementTypeProxy),
mProperty_mInsertFunctionMangledName (in_mInsertFunctionMangledName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_dynArrayAppendFunctionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayAppendFunctionIR ;
}

void cPtr_dynArrayAppendFunctionIR::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@dynArrayAppendFunctionIR:" ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArrayTypeProxy.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementTypeProxy.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInsertFunctionMangledName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_dynArrayAppendFunctionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_dynArrayAppendFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mArrayTypeProxy, mProperty_mElementTypeProxy, mProperty_mInsertFunctionMangledName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@dynArrayAppendFunctionIR type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dynArrayAppendFunctionIR ("dynArrayAppendFunctionIR",
                                                 & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dynArrayAppendFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayAppendFunctionIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dynArrayAppendFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dynArrayAppendFunctionIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayAppendFunctionIR GALGAS_dynArrayAppendFunctionIR::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_dynArrayAppendFunctionIR result ;
  const GALGAS_dynArrayAppendFunctionIR * p = (const GALGAS_dynArrayAppendFunctionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_dynArrayAppendFunctionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynArrayAppendFunctionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_dynArrayAppendFunctionIR_2D_weak::objectCompare (const GALGAS_dynArrayAppendFunctionIR_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayAppendFunctionIR_2D_weak::GALGAS_dynArrayAppendFunctionIR_2D_weak (void) :
GALGAS_abstractRoutineIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayAppendFunctionIR_2D_weak & GALGAS_dynArrayAppendFunctionIR_2D_weak::operator = (const GALGAS_dynArrayAppendFunctionIR & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayAppendFunctionIR_2D_weak::GALGAS_dynArrayAppendFunctionIR_2D_weak (const GALGAS_dynArrayAppendFunctionIR & inSource) :
GALGAS_abstractRoutineIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayAppendFunctionIR_2D_weak GALGAS_dynArrayAppendFunctionIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_dynArrayAppendFunctionIR_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayAppendFunctionIR GALGAS_dynArrayAppendFunctionIR_2D_weak::bang_dynArrayAppendFunctionIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_dynArrayAppendFunctionIR result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dynArrayAppendFunctionIR) ;
      result = GALGAS_dynArrayAppendFunctionIR ((cPtr_dynArrayAppendFunctionIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@dynArrayAppendFunctionIR-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dynArrayAppendFunctionIR_2D_weak ("dynArrayAppendFunctionIR-weak",
                                                         & kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dynArrayAppendFunctionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayAppendFunctionIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dynArrayAppendFunctionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dynArrayAppendFunctionIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayAppendFunctionIR_2D_weak GALGAS_dynArrayAppendFunctionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_dynArrayAppendFunctionIR_2D_weak result ;
  const GALGAS_dynArrayAppendFunctionIR_2D_weak * p = (const GALGAS_dynArrayAppendFunctionIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_dynArrayAppendFunctionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynArrayAppendFunctionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @dynArrayInsertFunctionIR reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_dynArrayInsertFunctionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_dynArrayInsertFunctionIR * p = (const cPtr_dynArrayInsertFunctionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_dynArrayInsertFunctionIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mRoutineMangledName.objectCompare (p->mProperty_mRoutineMangledName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_isRequired.objectCompare (p->mProperty_isRequired) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_warnsIfUnused.objectCompare (p->mProperty_warnsIfUnused) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementTypeProxy.objectCompare (p->mProperty_mElementTypeProxy) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_dynArrayInsertFunctionIR::objectCompare (const GALGAS_dynArrayInsertFunctionIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayInsertFunctionIR::GALGAS_dynArrayInsertFunctionIR (void) :
GALGAS_abstractRoutineIR () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayInsertFunctionIR GALGAS_dynArrayInsertFunctionIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_dynArrayInsertFunctionIR::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_bool::constructor_default (HERE),
                                                           GALGAS_bool::constructor_default (HERE),
                                                           GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE)
                                                           COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayInsertFunctionIR::GALGAS_dynArrayInsertFunctionIR (const cPtr_dynArrayInsertFunctionIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dynArrayInsertFunctionIR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayInsertFunctionIR GALGAS_dynArrayInsertFunctionIR::constructor_new (const GALGAS_lstring & inAttribute_mRoutineMangledName,
                                                                                  const GALGAS_bool & inAttribute_isRequired,
                                                                                  const GALGAS_bool & inAttribute_warnsIfUnused,
                                                                                  const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mElementTypeProxy
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_dynArrayInsertFunctionIR result ;
  if (inAttribute_mRoutineMangledName.isValid () && inAttribute_isRequired.isValid () && inAttribute_warnsIfUnused.isValid () && inAttribute_mElementTypeProxy.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_dynArrayInsertFunctionIR (inAttribute_mRoutineMangledName, inAttribute_isRequired, inAttribute_warnsIfUnused, inAttribute_mElementTypeProxy COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_dynArrayInsertFunctionIR::setter_setMElementTypeProxy (GALGAS_unifiedTypeMap_2D_entry inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_dynArrayInsertFunctionIR * p = (cPtr_dynArrayInsertFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynArrayInsertFunctionIR) ;
    p->mProperty_mElementTypeProxy = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_dynArrayInsertFunctionIR::readProperty_mElementTypeProxy (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_dynArrayInsertFunctionIR * p = (cPtr_dynArrayInsertFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynArrayInsertFunctionIR) ;
    return p->mProperty_mElementTypeProxy ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @dynArrayInsertFunctionIR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_dynArrayInsertFunctionIR::cPtr_dynArrayInsertFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                              const GALGAS_bool & in_isRequired,
                                                              const GALGAS_bool & in_warnsIfUnused,
                                                              const GALGAS_unifiedTypeMap_2D_entry & in_mElementTypeProxy
                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
mProperty_mElementTypeProxy (in_mElementTypeProxy) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_dynArrayInsertFunctionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayInsertFunctionIR ;
}

void cPtr_dynArrayInsertFunctionIR::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@dynArrayInsertFunctionIR:" ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementTypeProxy.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_dynArrayInsertFunctionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_dynArrayInsertFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mElementTypeProxy COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@dynArrayInsertFunctionIR type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dynArrayInsertFunctionIR ("dynArrayInsertFunctionIR",
                                                 & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dynArrayInsertFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayInsertFunctionIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dynArrayInsertFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dynArrayInsertFunctionIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayInsertFunctionIR GALGAS_dynArrayInsertFunctionIR::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_dynArrayInsertFunctionIR result ;
  const GALGAS_dynArrayInsertFunctionIR * p = (const GALGAS_dynArrayInsertFunctionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_dynArrayInsertFunctionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynArrayInsertFunctionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_dynArrayInsertFunctionIR_2D_weak::objectCompare (const GALGAS_dynArrayInsertFunctionIR_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayInsertFunctionIR_2D_weak::GALGAS_dynArrayInsertFunctionIR_2D_weak (void) :
GALGAS_abstractRoutineIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayInsertFunctionIR_2D_weak & GALGAS_dynArrayInsertFunctionIR_2D_weak::operator = (const GALGAS_dynArrayInsertFunctionIR & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayInsertFunctionIR_2D_weak::GALGAS_dynArrayInsertFunctionIR_2D_weak (const GALGAS_dynArrayInsertFunctionIR & inSource) :
GALGAS_abstractRoutineIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayInsertFunctionIR_2D_weak GALGAS_dynArrayInsertFunctionIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_dynArrayInsertFunctionIR_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayInsertFunctionIR GALGAS_dynArrayInsertFunctionIR_2D_weak::bang_dynArrayInsertFunctionIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_dynArrayInsertFunctionIR result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dynArrayInsertFunctionIR) ;
      result = GALGAS_dynArrayInsertFunctionIR ((cPtr_dynArrayInsertFunctionIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@dynArrayInsertFunctionIR-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dynArrayInsertFunctionIR_2D_weak ("dynArrayInsertFunctionIR-weak",
                                                         & kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dynArrayInsertFunctionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayInsertFunctionIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dynArrayInsertFunctionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dynArrayInsertFunctionIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayInsertFunctionIR_2D_weak GALGAS_dynArrayInsertFunctionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_dynArrayInsertFunctionIR_2D_weak result ;
  const GALGAS_dynArrayInsertFunctionIR_2D_weak * p = (const GALGAS_dynArrayInsertFunctionIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_dynArrayInsertFunctionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynArrayInsertFunctionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @dynamicArrayTypeAssignUsage reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_dynamicArrayTypeAssignUsage::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_dynamicArrayTypeAssignUsage * p = (const cPtr_dynamicArrayTypeAssignUsage *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_dynamicArrayTypeAssignUsage) ;
  if (kOperandEqual == result) {
    result = mProperty_mDynamicArrayType.objectCompare (p->mProperty_mDynamicArrayType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAssignFunctionName.objectCompare (p->mProperty_mAssignFunctionName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_dynamicArrayTypeAssignUsage::objectCompare (const GALGAS_dynamicArrayTypeAssignUsage & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignUsage::GALGAS_dynamicArrayTypeAssignUsage (void) :
GALGAS_abstractAssignmentOperatorUsage () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignUsage GALGAS_dynamicArrayTypeAssignUsage::constructor_default (LOCATION_ARGS) {
  return GALGAS_dynamicArrayTypeAssignUsage::constructor_new (GALGAS_omnibusType::constructor_default (HERE),
                                                              GALGAS_string::constructor_default (HERE)
                                                              COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignUsage::GALGAS_dynamicArrayTypeAssignUsage (const cPtr_dynamicArrayTypeAssignUsage * inSourcePtr) :
GALGAS_abstractAssignmentOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dynamicArrayTypeAssignUsage) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignUsage GALGAS_dynamicArrayTypeAssignUsage::constructor_new (const GALGAS_omnibusType & inAttribute_mDynamicArrayType,
                                                                                        const GALGAS_string & inAttribute_mAssignFunctionName
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_dynamicArrayTypeAssignUsage result ;
  if (inAttribute_mDynamicArrayType.isValid () && inAttribute_mAssignFunctionName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_dynamicArrayTypeAssignUsage (inAttribute_mDynamicArrayType, inAttribute_mAssignFunctionName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_dynamicArrayTypeAssignUsage::setter_setMDynamicArrayType (GALGAS_omnibusType inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_dynamicArrayTypeAssignUsage * p = (cPtr_dynamicArrayTypeAssignUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynamicArrayTypeAssignUsage) ;
    p->mProperty_mDynamicArrayType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_dynamicArrayTypeAssignUsage::setter_setMAssignFunctionName (GALGAS_string inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_dynamicArrayTypeAssignUsage * p = (cPtr_dynamicArrayTypeAssignUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynamicArrayTypeAssignUsage) ;
    p->mProperty_mAssignFunctionName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_dynamicArrayTypeAssignUsage::readProperty_mDynamicArrayType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_dynamicArrayTypeAssignUsage * p = (cPtr_dynamicArrayTypeAssignUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynamicArrayTypeAssignUsage) ;
    return p->mProperty_mDynamicArrayType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_dynamicArrayTypeAssignUsage::readProperty_mAssignFunctionName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_dynamicArrayTypeAssignUsage * p = (cPtr_dynamicArrayTypeAssignUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynamicArrayTypeAssignUsage) ;
    return p->mProperty_mAssignFunctionName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @dynamicArrayTypeAssignUsage class
//----------------------------------------------------------------------------------------------------------------------

cPtr_dynamicArrayTypeAssignUsage::cPtr_dynamicArrayTypeAssignUsage (const GALGAS_omnibusType & in_mDynamicArrayType,
                                                                    const GALGAS_string & in_mAssignFunctionName
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractAssignmentOperatorUsage (THERE),
mProperty_mDynamicArrayType (in_mDynamicArrayType),
mProperty_mAssignFunctionName (in_mAssignFunctionName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_dynamicArrayTypeAssignUsage::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynamicArrayTypeAssignUsage ;
}

void cPtr_dynamicArrayTypeAssignUsage::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@dynamicArrayTypeAssignUsage:" ;
  mProperty_mDynamicArrayType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAssignFunctionName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_dynamicArrayTypeAssignUsage::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_dynamicArrayTypeAssignUsage (mProperty_mDynamicArrayType, mProperty_mAssignFunctionName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@dynamicArrayTypeAssignUsage type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dynamicArrayTypeAssignUsage ("dynamicArrayTypeAssignUsage",
                                                    & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dynamicArrayTypeAssignUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynamicArrayTypeAssignUsage ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dynamicArrayTypeAssignUsage::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dynamicArrayTypeAssignUsage (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignUsage GALGAS_dynamicArrayTypeAssignUsage::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_dynamicArrayTypeAssignUsage result ;
  const GALGAS_dynamicArrayTypeAssignUsage * p = (const GALGAS_dynamicArrayTypeAssignUsage *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_dynamicArrayTypeAssignUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynamicArrayTypeAssignUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_dynamicArrayTypeAssignUsage_2D_weak::objectCompare (const GALGAS_dynamicArrayTypeAssignUsage_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignUsage_2D_weak::GALGAS_dynamicArrayTypeAssignUsage_2D_weak (void) :
GALGAS_abstractAssignmentOperatorUsage_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignUsage_2D_weak & GALGAS_dynamicArrayTypeAssignUsage_2D_weak::operator = (const GALGAS_dynamicArrayTypeAssignUsage & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignUsage_2D_weak::GALGAS_dynamicArrayTypeAssignUsage_2D_weak (const GALGAS_dynamicArrayTypeAssignUsage & inSource) :
GALGAS_abstractAssignmentOperatorUsage_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignUsage_2D_weak GALGAS_dynamicArrayTypeAssignUsage_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_dynamicArrayTypeAssignUsage_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignUsage GALGAS_dynamicArrayTypeAssignUsage_2D_weak::bang_dynamicArrayTypeAssignUsage_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_dynamicArrayTypeAssignUsage result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dynamicArrayTypeAssignUsage) ;
      result = GALGAS_dynamicArrayTypeAssignUsage ((cPtr_dynamicArrayTypeAssignUsage *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@dynamicArrayTypeAssignUsage-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dynamicArrayTypeAssignUsage_2D_weak ("dynamicArrayTypeAssignUsage-weak",
                                                            & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dynamicArrayTypeAssignUsage_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynamicArrayTypeAssignUsage_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dynamicArrayTypeAssignUsage_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dynamicArrayTypeAssignUsage_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignUsage_2D_weak GALGAS_dynamicArrayTypeAssignUsage_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_dynamicArrayTypeAssignUsage_2D_weak result ;
  const GALGAS_dynamicArrayTypeAssignUsage_2D_weak * p = (const GALGAS_dynamicArrayTypeAssignUsage_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_dynamicArrayTypeAssignUsage_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynamicArrayTypeAssignUsage-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @dynamicArrayTypeAssignGenericFunctionIR reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_dynamicArrayTypeAssignGenericFunctionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_dynamicArrayTypeAssignGenericFunctionIR * p = (const cPtr_dynamicArrayTypeAssignGenericFunctionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_dynamicArrayTypeAssignGenericFunctionIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mRoutineMangledName.objectCompare (p->mProperty_mRoutineMangledName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_isRequired.objectCompare (p->mProperty_isRequired) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_warnsIfUnused.objectCompare (p->mProperty_warnsIfUnused) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_dynamicArrayTypeAssignGenericFunctionIR::objectCompare (const GALGAS_dynamicArrayTypeAssignGenericFunctionIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignGenericFunctionIR::GALGAS_dynamicArrayTypeAssignGenericFunctionIR (void) :
GALGAS_abstractRoutineIR () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignGenericFunctionIR GALGAS_dynamicArrayTypeAssignGenericFunctionIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_dynamicArrayTypeAssignGenericFunctionIR::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                          GALGAS_bool::constructor_default (HERE),
                                                                          GALGAS_bool::constructor_default (HERE)
                                                                          COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignGenericFunctionIR::GALGAS_dynamicArrayTypeAssignGenericFunctionIR (const cPtr_dynamicArrayTypeAssignGenericFunctionIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dynamicArrayTypeAssignGenericFunctionIR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignGenericFunctionIR GALGAS_dynamicArrayTypeAssignGenericFunctionIR::constructor_new (const GALGAS_lstring & inAttribute_mRoutineMangledName,
                                                                                                                const GALGAS_bool & inAttribute_isRequired,
                                                                                                                const GALGAS_bool & inAttribute_warnsIfUnused
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_dynamicArrayTypeAssignGenericFunctionIR result ;
  if (inAttribute_mRoutineMangledName.isValid () && inAttribute_isRequired.isValid () && inAttribute_warnsIfUnused.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_dynamicArrayTypeAssignGenericFunctionIR (inAttribute_mRoutineMangledName, inAttribute_isRequired, inAttribute_warnsIfUnused COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @dynamicArrayTypeAssignGenericFunctionIR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_dynamicArrayTypeAssignGenericFunctionIR::cPtr_dynamicArrayTypeAssignGenericFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                                                            const GALGAS_bool & in_isRequired,
                                                                                            const GALGAS_bool & in_warnsIfUnused
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_dynamicArrayTypeAssignGenericFunctionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynamicArrayTypeAssignGenericFunctionIR ;
}

void cPtr_dynamicArrayTypeAssignGenericFunctionIR::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "[@dynamicArrayTypeAssignGenericFunctionIR:" ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_dynamicArrayTypeAssignGenericFunctionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_dynamicArrayTypeAssignGenericFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@dynamicArrayTypeAssignGenericFunctionIR type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dynamicArrayTypeAssignGenericFunctionIR ("dynamicArrayTypeAssignGenericFunctionIR",
                                                                & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dynamicArrayTypeAssignGenericFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynamicArrayTypeAssignGenericFunctionIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dynamicArrayTypeAssignGenericFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dynamicArrayTypeAssignGenericFunctionIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignGenericFunctionIR GALGAS_dynamicArrayTypeAssignGenericFunctionIR::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_dynamicArrayTypeAssignGenericFunctionIR result ;
  const GALGAS_dynamicArrayTypeAssignGenericFunctionIR * p = (const GALGAS_dynamicArrayTypeAssignGenericFunctionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_dynamicArrayTypeAssignGenericFunctionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynamicArrayTypeAssignGenericFunctionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak::objectCompare (const GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak::GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak (void) :
GALGAS_abstractRoutineIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak & GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak::operator = (const GALGAS_dynamicArrayTypeAssignGenericFunctionIR & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak::GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak (const GALGAS_dynamicArrayTypeAssignGenericFunctionIR & inSource) :
GALGAS_abstractRoutineIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignGenericFunctionIR GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak::bang_dynamicArrayTypeAssignGenericFunctionIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_dynamicArrayTypeAssignGenericFunctionIR result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dynamicArrayTypeAssignGenericFunctionIR) ;
      result = GALGAS_dynamicArrayTypeAssignGenericFunctionIR ((cPtr_dynamicArrayTypeAssignGenericFunctionIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@dynamicArrayTypeAssignGenericFunctionIR-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak ("dynamicArrayTypeAssignGenericFunctionIR-weak",
                                                                        & kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak result ;
  const GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak * p = (const GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynamicArrayTypeAssignGenericFunctionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @enumerationDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_enumerationDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_enumerationDeclarationAST * p = (const cPtr_enumerationDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_enumerationDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mEnumerationName.objectCompare (p->mProperty_mEnumerationName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCaseNameList.objectCompare (p->mProperty_mCaseNameList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_enumerationDeclarationAST::objectCompare (const GALGAS_enumerationDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDeclarationAST::GALGAS_enumerationDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDeclarationAST GALGAS_enumerationDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_enumerationDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                            GALGAS_enumerationConstantList::constructor_emptyList (HERE)
                                                            COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDeclarationAST::GALGAS_enumerationDeclarationAST (const cPtr_enumerationDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumerationDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDeclarationAST GALGAS_enumerationDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mEnumerationName,
                                                                                    const GALGAS_enumerationConstantList & inAttribute_mCaseNameList
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_enumerationDeclarationAST result ;
  if (inAttribute_mEnumerationName.isValid () && inAttribute_mCaseNameList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_enumerationDeclarationAST (inAttribute_mEnumerationName, inAttribute_mCaseNameList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationDeclarationAST::setter_setMEnumerationName (GALGAS_lstring inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_enumerationDeclarationAST * p = (cPtr_enumerationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumerationDeclarationAST) ;
    p->mProperty_mEnumerationName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationDeclarationAST::setter_setMCaseNameList (GALGAS_enumerationConstantList inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_enumerationDeclarationAST * p = (cPtr_enumerationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumerationDeclarationAST) ;
    p->mProperty_mCaseNameList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_enumerationDeclarationAST::readProperty_mEnumerationName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_enumerationDeclarationAST * p = (cPtr_enumerationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumerationDeclarationAST) ;
    return p->mProperty_mEnumerationName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationConstantList GALGAS_enumerationDeclarationAST::readProperty_mCaseNameList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_enumerationConstantList () ;
  }else{
    cPtr_enumerationDeclarationAST * p = (cPtr_enumerationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumerationDeclarationAST) ;
    return p->mProperty_mCaseNameList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @enumerationDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_enumerationDeclarationAST::cPtr_enumerationDeclarationAST (const GALGAS_lstring & in_mEnumerationName,
                                                                const GALGAS_enumerationConstantList & in_mCaseNameList
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mEnumerationName (in_mEnumerationName),
mProperty_mCaseNameList (in_mCaseNameList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_enumerationDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDeclarationAST ;
}

void cPtr_enumerationDeclarationAST::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@enumerationDeclarationAST:" ;
  mProperty_mEnumerationName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCaseNameList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_enumerationDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_enumerationDeclarationAST (mProperty_mEnumerationName, mProperty_mCaseNameList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@enumerationDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumerationDeclarationAST ("enumerationDeclarationAST",
                                                  & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumerationDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumerationDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumerationDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDeclarationAST GALGAS_enumerationDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_enumerationDeclarationAST result ;
  const GALGAS_enumerationDeclarationAST * p = (const GALGAS_enumerationDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumerationDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_enumerationDeclarationAST_2D_weak::objectCompare (const GALGAS_enumerationDeclarationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDeclarationAST_2D_weak::GALGAS_enumerationDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDeclarationAST_2D_weak & GALGAS_enumerationDeclarationAST_2D_weak::operator = (const GALGAS_enumerationDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDeclarationAST_2D_weak::GALGAS_enumerationDeclarationAST_2D_weak (const GALGAS_enumerationDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDeclarationAST_2D_weak GALGAS_enumerationDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_enumerationDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDeclarationAST GALGAS_enumerationDeclarationAST_2D_weak::bang_enumerationDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_enumerationDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_enumerationDeclarationAST) ;
      result = GALGAS_enumerationDeclarationAST ((cPtr_enumerationDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@enumerationDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumerationDeclarationAST_2D_weak ("enumerationDeclarationAST-weak",
                                                          & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumerationDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumerationDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumerationDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDeclarationAST_2D_weak GALGAS_enumerationDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_enumerationDeclarationAST_2D_weak result ;
  const GALGAS_enumerationDeclarationAST_2D_weak * p = (const GALGAS_enumerationDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumerationDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @enumToUintRoutineIR reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_enumToUintRoutineIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_enumToUintRoutineIR * p = (const cPtr_enumToUintRoutineIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_enumToUintRoutineIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mRoutineMangledName.objectCompare (p->mProperty_mRoutineMangledName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_isRequired.objectCompare (p->mProperty_isRequired) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_warnsIfUnused.objectCompare (p->mProperty_warnsIfUnused) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEnumerationLLVMTypeName.objectCompare (p->mProperty_mEnumerationLLVMTypeName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_enumToUintRoutineIR::objectCompare (const GALGAS_enumToUintRoutineIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumToUintRoutineIR::GALGAS_enumToUintRoutineIR (void) :
GALGAS_abstractRoutineIR () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumToUintRoutineIR GALGAS_enumToUintRoutineIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_enumToUintRoutineIR::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_string::constructor_default (HERE)
                                                      COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumToUintRoutineIR::GALGAS_enumToUintRoutineIR (const cPtr_enumToUintRoutineIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumToUintRoutineIR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumToUintRoutineIR GALGAS_enumToUintRoutineIR::constructor_new (const GALGAS_lstring & inAttribute_mRoutineMangledName,
                                                                        const GALGAS_bool & inAttribute_isRequired,
                                                                        const GALGAS_bool & inAttribute_warnsIfUnused,
                                                                        const GALGAS_string & inAttribute_mEnumerationLLVMTypeName
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_enumToUintRoutineIR result ;
  if (inAttribute_mRoutineMangledName.isValid () && inAttribute_isRequired.isValid () && inAttribute_warnsIfUnused.isValid () && inAttribute_mEnumerationLLVMTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_enumToUintRoutineIR (inAttribute_mRoutineMangledName, inAttribute_isRequired, inAttribute_warnsIfUnused, inAttribute_mEnumerationLLVMTypeName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumToUintRoutineIR::setter_setMEnumerationLLVMTypeName (GALGAS_string inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_enumToUintRoutineIR * p = (cPtr_enumToUintRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumToUintRoutineIR) ;
    p->mProperty_mEnumerationLLVMTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_enumToUintRoutineIR::readProperty_mEnumerationLLVMTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_enumToUintRoutineIR * p = (cPtr_enumToUintRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumToUintRoutineIR) ;
    return p->mProperty_mEnumerationLLVMTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @enumToUintRoutineIR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_enumToUintRoutineIR::cPtr_enumToUintRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                    const GALGAS_bool & in_isRequired,
                                                    const GALGAS_bool & in_warnsIfUnused,
                                                    const GALGAS_string & in_mEnumerationLLVMTypeName
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
mProperty_mEnumerationLLVMTypeName (in_mEnumerationLLVMTypeName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_enumToUintRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumToUintRoutineIR ;
}

void cPtr_enumToUintRoutineIR::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@enumToUintRoutineIR:" ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEnumerationLLVMTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_enumToUintRoutineIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_enumToUintRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mEnumerationLLVMTypeName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@enumToUintRoutineIR type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumToUintRoutineIR ("enumToUintRoutineIR",
                                            & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumToUintRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumToUintRoutineIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumToUintRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumToUintRoutineIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumToUintRoutineIR GALGAS_enumToUintRoutineIR::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_enumToUintRoutineIR result ;
  const GALGAS_enumToUintRoutineIR * p = (const GALGAS_enumToUintRoutineIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumToUintRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumToUintRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_enumToUintRoutineIR_2D_weak::objectCompare (const GALGAS_enumToUintRoutineIR_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumToUintRoutineIR_2D_weak::GALGAS_enumToUintRoutineIR_2D_weak (void) :
GALGAS_abstractRoutineIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumToUintRoutineIR_2D_weak & GALGAS_enumToUintRoutineIR_2D_weak::operator = (const GALGAS_enumToUintRoutineIR & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumToUintRoutineIR_2D_weak::GALGAS_enumToUintRoutineIR_2D_weak (const GALGAS_enumToUintRoutineIR & inSource) :
GALGAS_abstractRoutineIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumToUintRoutineIR_2D_weak GALGAS_enumToUintRoutineIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_enumToUintRoutineIR_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumToUintRoutineIR GALGAS_enumToUintRoutineIR_2D_weak::bang_enumToUintRoutineIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_enumToUintRoutineIR result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_enumToUintRoutineIR) ;
      result = GALGAS_enumToUintRoutineIR ((cPtr_enumToUintRoutineIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@enumToUintRoutineIR-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumToUintRoutineIR_2D_weak ("enumToUintRoutineIR-weak",
                                                    & kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumToUintRoutineIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumToUintRoutineIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumToUintRoutineIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumToUintRoutineIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumToUintRoutineIR_2D_weak GALGAS_enumToUintRoutineIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_enumToUintRoutineIR_2D_weak result ;
  const GALGAS_enumToUintRoutineIR_2D_weak * p = (const GALGAS_enumToUintRoutineIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumToUintRoutineIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumToUintRoutineIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @structureDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_structureDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_structureDeclarationAST * p = (const cPtr_structureDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mReceiverTypeName.objectCompare (p->mProperty_mReceiverTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOmnibusTypeSpecificName.objectCompare (p->mProperty_mOmnibusTypeSpecificName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLLVMBaseTypeName.objectCompare (p->mProperty_mLLVMBaseTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAttributeListAST.objectCompare (p->mProperty_mAttributeListAST) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGenerateAssignmentRoutine.objectCompare (p->mProperty_mGenerateAssignmentRoutine) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStructurePropertyListAST.objectCompare (p->mProperty_mStructurePropertyListAST) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMayImplementDeinit.objectCompare (p->mProperty_mMayImplementDeinit) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_structureDeclarationAST::objectCompare (const GALGAS_structureDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structureDeclarationAST::GALGAS_structureDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structureDeclarationAST GALGAS_structureDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_structureDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_lstringlist::constructor_emptyList (HERE),
                                                          GALGAS_bool::constructor_default (HERE),
                                                          GALGAS_structurePropertyListAST::constructor_emptyList (HERE),
                                                          GALGAS_bool::constructor_default (HERE)
                                                          COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structureDeclarationAST::GALGAS_structureDeclarationAST (const cPtr_structureDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structureDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_structureDeclarationAST GALGAS_structureDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mReceiverTypeName,
                                                                                const GALGAS_lstring & inAttribute_mOmnibusTypeSpecificName,
                                                                                const GALGAS_lstring & inAttribute_mLLVMBaseTypeName,
                                                                                const GALGAS_lstringlist & inAttribute_mAttributeListAST,
                                                                                const GALGAS_bool & inAttribute_mGenerateAssignmentRoutine,
                                                                                const GALGAS_structurePropertyListAST & inAttribute_mStructurePropertyListAST,
                                                                                const GALGAS_bool & inAttribute_mMayImplementDeinit
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_structureDeclarationAST result ;
  if (inAttribute_mReceiverTypeName.isValid () && inAttribute_mOmnibusTypeSpecificName.isValid () && inAttribute_mLLVMBaseTypeName.isValid () && inAttribute_mAttributeListAST.isValid () && inAttribute_mGenerateAssignmentRoutine.isValid () && inAttribute_mStructurePropertyListAST.isValid () && inAttribute_mMayImplementDeinit.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_structureDeclarationAST (inAttribute_mReceiverTypeName, inAttribute_mOmnibusTypeSpecificName, inAttribute_mLLVMBaseTypeName, inAttribute_mAttributeListAST, inAttribute_mGenerateAssignmentRoutine, inAttribute_mStructurePropertyListAST, inAttribute_mMayImplementDeinit COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structureDeclarationAST::setter_setMReceiverTypeName (GALGAS_lstring inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_structureDeclarationAST * p = (cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    p->mProperty_mReceiverTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structureDeclarationAST::setter_setMOmnibusTypeSpecificName (GALGAS_lstring inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_structureDeclarationAST * p = (cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    p->mProperty_mOmnibusTypeSpecificName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structureDeclarationAST::setter_setMLLVMBaseTypeName (GALGAS_lstring inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_structureDeclarationAST * p = (cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    p->mProperty_mLLVMBaseTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structureDeclarationAST::setter_setMAttributeListAST (GALGAS_lstringlist inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_structureDeclarationAST * p = (cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    p->mProperty_mAttributeListAST = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structureDeclarationAST::setter_setMGenerateAssignmentRoutine (GALGAS_bool inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_structureDeclarationAST * p = (cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    p->mProperty_mGenerateAssignmentRoutine = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structureDeclarationAST::setter_setMStructurePropertyListAST (GALGAS_structurePropertyListAST inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_structureDeclarationAST * p = (cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    p->mProperty_mStructurePropertyListAST = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structureDeclarationAST::setter_setMMayImplementDeinit (GALGAS_bool inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_structureDeclarationAST * p = (cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    p->mProperty_mMayImplementDeinit = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_structureDeclarationAST::readProperty_mReceiverTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_structureDeclarationAST * p = (cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    return p->mProperty_mReceiverTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_structureDeclarationAST::readProperty_mOmnibusTypeSpecificName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_structureDeclarationAST * p = (cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    return p->mProperty_mOmnibusTypeSpecificName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_structureDeclarationAST::readProperty_mLLVMBaseTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_structureDeclarationAST * p = (cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    return p->mProperty_mLLVMBaseTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_structureDeclarationAST::readProperty_mAttributeListAST (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_structureDeclarationAST * p = (cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    return p->mProperty_mAttributeListAST ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_structureDeclarationAST::readProperty_mGenerateAssignmentRoutine (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_structureDeclarationAST * p = (cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    return p->mProperty_mGenerateAssignmentRoutine ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structurePropertyListAST GALGAS_structureDeclarationAST::readProperty_mStructurePropertyListAST (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_structurePropertyListAST () ;
  }else{
    cPtr_structureDeclarationAST * p = (cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    return p->mProperty_mStructurePropertyListAST ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_structureDeclarationAST::readProperty_mMayImplementDeinit (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_structureDeclarationAST * p = (cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    return p->mProperty_mMayImplementDeinit ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @structureDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_structureDeclarationAST::cPtr_structureDeclarationAST (const GALGAS_lstring & in_mReceiverTypeName,
                                                            const GALGAS_lstring & in_mOmnibusTypeSpecificName,
                                                            const GALGAS_lstring & in_mLLVMBaseTypeName,
                                                            const GALGAS_lstringlist & in_mAttributeListAST,
                                                            const GALGAS_bool & in_mGenerateAssignmentRoutine,
                                                            const GALGAS_structurePropertyListAST & in_mStructurePropertyListAST,
                                                            const GALGAS_bool & in_mMayImplementDeinit
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mReceiverTypeName (in_mReceiverTypeName),
mProperty_mOmnibusTypeSpecificName (in_mOmnibusTypeSpecificName),
mProperty_mLLVMBaseTypeName (in_mLLVMBaseTypeName),
mProperty_mAttributeListAST (in_mAttributeListAST),
mProperty_mGenerateAssignmentRoutine (in_mGenerateAssignmentRoutine),
mProperty_mStructurePropertyListAST (in_mStructurePropertyListAST),
mProperty_mMayImplementDeinit (in_mMayImplementDeinit) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_structureDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structureDeclarationAST ;
}

void cPtr_structureDeclarationAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@structureDeclarationAST:" ;
  mProperty_mReceiverTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOmnibusTypeSpecificName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLLVMBaseTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAttributeListAST.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGenerateAssignmentRoutine.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStructurePropertyListAST.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMayImplementDeinit.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_structureDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_structureDeclarationAST (mProperty_mReceiverTypeName, mProperty_mOmnibusTypeSpecificName, mProperty_mLLVMBaseTypeName, mProperty_mAttributeListAST, mProperty_mGenerateAssignmentRoutine, mProperty_mStructurePropertyListAST, mProperty_mMayImplementDeinit COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@structureDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structureDeclarationAST ("structureDeclarationAST",
                                                & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_structureDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structureDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_structureDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structureDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structureDeclarationAST GALGAS_structureDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_structureDeclarationAST result ;
  const GALGAS_structureDeclarationAST * p = (const GALGAS_structureDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structureDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structureDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_structureDeclarationAST_2D_weak::objectCompare (const GALGAS_structureDeclarationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structureDeclarationAST_2D_weak::GALGAS_structureDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structureDeclarationAST_2D_weak & GALGAS_structureDeclarationAST_2D_weak::operator = (const GALGAS_structureDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structureDeclarationAST_2D_weak::GALGAS_structureDeclarationAST_2D_weak (const GALGAS_structureDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structureDeclarationAST_2D_weak GALGAS_structureDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_structureDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structureDeclarationAST GALGAS_structureDeclarationAST_2D_weak::bang_structureDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_structureDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_structureDeclarationAST) ;
      result = GALGAS_structureDeclarationAST ((cPtr_structureDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@structureDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structureDeclarationAST_2D_weak ("structureDeclarationAST-weak",
                                                        & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_structureDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structureDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_structureDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structureDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structureDeclarationAST_2D_weak GALGAS_structureDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_structureDeclarationAST_2D_weak result ;
  const GALGAS_structureDeclarationAST_2D_weak * p = (const GALGAS_structureDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structureDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structureDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structurePropertyListAST_2D_element::GALGAS_structurePropertyListAST_2D_element (void) :
mProperty_mPropertyName (),
mProperty_mPropertyAttributeList (),
mProperty_mVisibility (),
mProperty_mPropertyTypeName (),
mProperty_mPropertyKind () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structurePropertyListAST_2D_element::~ GALGAS_structurePropertyListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structurePropertyListAST_2D_element::GALGAS_structurePropertyListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_propertyAttributeList & inOperand1,
                                                                                        const GALGAS_propertyVisibility & inOperand2,
                                                                                        const GALGAS_lstring & inOperand3,
                                                                                        const GALGAS_propertyKindAST & inOperand4) :
mProperty_mPropertyName (inOperand0),
mProperty_mPropertyAttributeList (inOperand1),
mProperty_mVisibility (inOperand2),
mProperty_mPropertyTypeName (inOperand3),
mProperty_mPropertyKind (inOperand4) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structurePropertyListAST_2D_element GALGAS_structurePropertyListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_propertyAttributeList & inOperand1,
                                                                                                        const GALGAS_propertyVisibility & inOperand2,
                                                                                                        const GALGAS_lstring & inOperand3,
                                                                                                        const GALGAS_propertyKindAST & inOperand4 
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_structurePropertyListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_structurePropertyListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_structurePropertyListAST_2D_element::objectCompare (const GALGAS_structurePropertyListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mPropertyName.objectCompare (inOperand.mProperty_mPropertyName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPropertyAttributeList.objectCompare (inOperand.mProperty_mPropertyAttributeList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mVisibility.objectCompare (inOperand.mProperty_mVisibility) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPropertyTypeName.objectCompare (inOperand.mProperty_mPropertyTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPropertyKind.objectCompare (inOperand.mProperty_mPropertyKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_structurePropertyListAST_2D_element::isValid (void) const {
  return mProperty_mPropertyName.isValid () && mProperty_mPropertyAttributeList.isValid () && mProperty_mVisibility.isValid () && mProperty_mPropertyTypeName.isValid () && mProperty_mPropertyKind.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structurePropertyListAST_2D_element::drop (void) {
  mProperty_mPropertyName.drop () ;
  mProperty_mPropertyAttributeList.drop () ;
  mProperty_mVisibility.drop () ;
  mProperty_mPropertyTypeName.drop () ;
  mProperty_mPropertyKind.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structurePropertyListAST_2D_element::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "<struct @structurePropertyListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mPropertyName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPropertyAttributeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mVisibility.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPropertyTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPropertyKind.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@structurePropertyListAST-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structurePropertyListAST_2D_element ("structurePropertyListAST-element",
                                                            NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_structurePropertyListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structurePropertyListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_structurePropertyListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structurePropertyListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structurePropertyListAST_2D_element GALGAS_structurePropertyListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_structurePropertyListAST_2D_element result ;
  const GALGAS_structurePropertyListAST_2D_element * p = (const GALGAS_structurePropertyListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structurePropertyListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structurePropertyListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @structureAssignmentOperatorUsage reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_structureAssignmentOperatorUsage::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_structureAssignmentOperatorUsage * p = (const cPtr_structureAssignmentOperatorUsage *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_structureAssignmentOperatorUsage) ;
  if (kOperandEqual == result) {
    result = mProperty_mStructureType.objectCompare (p->mProperty_mStructureType) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_structureAssignmentOperatorUsage::objectCompare (const GALGAS_structureAssignmentOperatorUsage & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structureAssignmentOperatorUsage::GALGAS_structureAssignmentOperatorUsage (void) :
GALGAS_abstractAssignmentOperatorUsage () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structureAssignmentOperatorUsage GALGAS_structureAssignmentOperatorUsage::constructor_default (LOCATION_ARGS) {
  return GALGAS_structureAssignmentOperatorUsage::constructor_new (GALGAS_omnibusType::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structureAssignmentOperatorUsage::GALGAS_structureAssignmentOperatorUsage (const cPtr_structureAssignmentOperatorUsage * inSourcePtr) :
GALGAS_abstractAssignmentOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structureAssignmentOperatorUsage) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_structureAssignmentOperatorUsage GALGAS_structureAssignmentOperatorUsage::constructor_new (const GALGAS_omnibusType & inAttribute_mStructureType
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_structureAssignmentOperatorUsage result ;
  if (inAttribute_mStructureType.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_structureAssignmentOperatorUsage (inAttribute_mStructureType COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structureAssignmentOperatorUsage::setter_setMStructureType (GALGAS_omnibusType inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_structureAssignmentOperatorUsage * p = (cPtr_structureAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureAssignmentOperatorUsage) ;
    p->mProperty_mStructureType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_structureAssignmentOperatorUsage::readProperty_mStructureType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_structureAssignmentOperatorUsage * p = (cPtr_structureAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureAssignmentOperatorUsage) ;
    return p->mProperty_mStructureType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @structureAssignmentOperatorUsage class
//----------------------------------------------------------------------------------------------------------------------

cPtr_structureAssignmentOperatorUsage::cPtr_structureAssignmentOperatorUsage (const GALGAS_omnibusType & in_mStructureType
                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractAssignmentOperatorUsage (THERE),
mProperty_mStructureType (in_mStructureType) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_structureAssignmentOperatorUsage::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structureAssignmentOperatorUsage ;
}

void cPtr_structureAssignmentOperatorUsage::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@structureAssignmentOperatorUsage:" ;
  mProperty_mStructureType.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_structureAssignmentOperatorUsage::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_structureAssignmentOperatorUsage (mProperty_mStructureType COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@structureAssignmentOperatorUsage type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structureAssignmentOperatorUsage ("structureAssignmentOperatorUsage",
                                                         & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_structureAssignmentOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structureAssignmentOperatorUsage ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_structureAssignmentOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structureAssignmentOperatorUsage (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structureAssignmentOperatorUsage GALGAS_structureAssignmentOperatorUsage::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_structureAssignmentOperatorUsage result ;
  const GALGAS_structureAssignmentOperatorUsage * p = (const GALGAS_structureAssignmentOperatorUsage *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structureAssignmentOperatorUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structureAssignmentOperatorUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_structureAssignmentOperatorUsage_2D_weak::objectCompare (const GALGAS_structureAssignmentOperatorUsage_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structureAssignmentOperatorUsage_2D_weak::GALGAS_structureAssignmentOperatorUsage_2D_weak (void) :
GALGAS_abstractAssignmentOperatorUsage_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structureAssignmentOperatorUsage_2D_weak & GALGAS_structureAssignmentOperatorUsage_2D_weak::operator = (const GALGAS_structureAssignmentOperatorUsage & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structureAssignmentOperatorUsage_2D_weak::GALGAS_structureAssignmentOperatorUsage_2D_weak (const GALGAS_structureAssignmentOperatorUsage & inSource) :
GALGAS_abstractAssignmentOperatorUsage_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structureAssignmentOperatorUsage_2D_weak GALGAS_structureAssignmentOperatorUsage_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_structureAssignmentOperatorUsage_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structureAssignmentOperatorUsage GALGAS_structureAssignmentOperatorUsage_2D_weak::bang_structureAssignmentOperatorUsage_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_structureAssignmentOperatorUsage result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_structureAssignmentOperatorUsage) ;
      result = GALGAS_structureAssignmentOperatorUsage ((cPtr_structureAssignmentOperatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@structureAssignmentOperatorUsage-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structureAssignmentOperatorUsage_2D_weak ("structureAssignmentOperatorUsage-weak",
                                                                 & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_structureAssignmentOperatorUsage_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structureAssignmentOperatorUsage_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_structureAssignmentOperatorUsage_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structureAssignmentOperatorUsage_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structureAssignmentOperatorUsage_2D_weak GALGAS_structureAssignmentOperatorUsage_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_structureAssignmentOperatorUsage_2D_weak result ;
  const GALGAS_structureAssignmentOperatorUsage_2D_weak * p = (const GALGAS_structureAssignmentOperatorUsage_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structureAssignmentOperatorUsage_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structureAssignmentOperatorUsage-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @structureTypeAssignFunctionIR reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_structureTypeAssignFunctionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_structureTypeAssignFunctionIR * p = (const cPtr_structureTypeAssignFunctionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_structureTypeAssignFunctionIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mRoutineMangledName.objectCompare (p->mProperty_mRoutineMangledName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_isRequired.objectCompare (p->mProperty_isRequired) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_warnsIfUnused.objectCompare (p->mProperty_warnsIfUnused) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStructureType.objectCompare (p->mProperty_mStructureType) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_structureTypeAssignFunctionIR::objectCompare (const GALGAS_structureTypeAssignFunctionIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structureTypeAssignFunctionIR::GALGAS_structureTypeAssignFunctionIR (void) :
GALGAS_abstractRoutineIR () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structureTypeAssignFunctionIR GALGAS_structureTypeAssignFunctionIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_structureTypeAssignFunctionIR::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_bool::constructor_default (HERE),
                                                                GALGAS_bool::constructor_default (HERE),
                                                                GALGAS_omnibusType::constructor_default (HERE)
                                                                COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structureTypeAssignFunctionIR::GALGAS_structureTypeAssignFunctionIR (const cPtr_structureTypeAssignFunctionIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structureTypeAssignFunctionIR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_structureTypeAssignFunctionIR GALGAS_structureTypeAssignFunctionIR::constructor_new (const GALGAS_lstring & inAttribute_mRoutineMangledName,
                                                                                            const GALGAS_bool & inAttribute_isRequired,
                                                                                            const GALGAS_bool & inAttribute_warnsIfUnused,
                                                                                            const GALGAS_omnibusType & inAttribute_mStructureType
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_structureTypeAssignFunctionIR result ;
  if (inAttribute_mRoutineMangledName.isValid () && inAttribute_isRequired.isValid () && inAttribute_warnsIfUnused.isValid () && inAttribute_mStructureType.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_structureTypeAssignFunctionIR (inAttribute_mRoutineMangledName, inAttribute_isRequired, inAttribute_warnsIfUnused, inAttribute_mStructureType COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structureTypeAssignFunctionIR::setter_setMStructureType (GALGAS_omnibusType inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_structureTypeAssignFunctionIR * p = (cPtr_structureTypeAssignFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureTypeAssignFunctionIR) ;
    p->mProperty_mStructureType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_structureTypeAssignFunctionIR::readProperty_mStructureType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_structureTypeAssignFunctionIR * p = (cPtr_structureTypeAssignFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureTypeAssignFunctionIR) ;
    return p->mProperty_mStructureType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @structureTypeAssignFunctionIR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_structureTypeAssignFunctionIR::cPtr_structureTypeAssignFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                                        const GALGAS_bool & in_isRequired,
                                                                        const GALGAS_bool & in_warnsIfUnused,
                                                                        const GALGAS_omnibusType & in_mStructureType
                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
mProperty_mStructureType (in_mStructureType) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_structureTypeAssignFunctionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structureTypeAssignFunctionIR ;
}

void cPtr_structureTypeAssignFunctionIR::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@structureTypeAssignFunctionIR:" ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStructureType.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_structureTypeAssignFunctionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_structureTypeAssignFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mStructureType COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@structureTypeAssignFunctionIR type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structureTypeAssignFunctionIR ("structureTypeAssignFunctionIR",
                                                      & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_structureTypeAssignFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structureTypeAssignFunctionIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_structureTypeAssignFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structureTypeAssignFunctionIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structureTypeAssignFunctionIR GALGAS_structureTypeAssignFunctionIR::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_structureTypeAssignFunctionIR result ;
  const GALGAS_structureTypeAssignFunctionIR * p = (const GALGAS_structureTypeAssignFunctionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structureTypeAssignFunctionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structureTypeAssignFunctionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_structureTypeAssignFunctionIR_2D_weak::objectCompare (const GALGAS_structureTypeAssignFunctionIR_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structureTypeAssignFunctionIR_2D_weak::GALGAS_structureTypeAssignFunctionIR_2D_weak (void) :
GALGAS_abstractRoutineIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structureTypeAssignFunctionIR_2D_weak & GALGAS_structureTypeAssignFunctionIR_2D_weak::operator = (const GALGAS_structureTypeAssignFunctionIR & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structureTypeAssignFunctionIR_2D_weak::GALGAS_structureTypeAssignFunctionIR_2D_weak (const GALGAS_structureTypeAssignFunctionIR & inSource) :
GALGAS_abstractRoutineIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structureTypeAssignFunctionIR_2D_weak GALGAS_structureTypeAssignFunctionIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_structureTypeAssignFunctionIR_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structureTypeAssignFunctionIR GALGAS_structureTypeAssignFunctionIR_2D_weak::bang_structureTypeAssignFunctionIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_structureTypeAssignFunctionIR result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_structureTypeAssignFunctionIR) ;
      result = GALGAS_structureTypeAssignFunctionIR ((cPtr_structureTypeAssignFunctionIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@structureTypeAssignFunctionIR-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structureTypeAssignFunctionIR_2D_weak ("structureTypeAssignFunctionIR-weak",
                                                              & kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_structureTypeAssignFunctionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structureTypeAssignFunctionIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_structureTypeAssignFunctionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structureTypeAssignFunctionIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structureTypeAssignFunctionIR_2D_weak GALGAS_structureTypeAssignFunctionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_structureTypeAssignFunctionIR_2D_weak result ;
  const GALGAS_structureTypeAssignFunctionIR_2D_weak * p = (const GALGAS_structureTypeAssignFunctionIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structureTypeAssignFunctionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structureTypeAssignFunctionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @syncDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_syncDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_syncDeclarationAST * p = (const cPtr_syncDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_syncDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mSyncToolName.objectCompare (p->mProperty_mSyncToolName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStructurePropertyListAST.objectCompare (p->mProperty_mStructurePropertyListAST) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_syncDeclarationAST::objectCompare (const GALGAS_syncDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syncDeclarationAST::GALGAS_syncDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syncDeclarationAST GALGAS_syncDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_syncDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_structurePropertyListAST::constructor_emptyList (HERE)
                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syncDeclarationAST::GALGAS_syncDeclarationAST (const cPtr_syncDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syncDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_syncDeclarationAST GALGAS_syncDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mSyncToolName,
                                                                      const GALGAS_structurePropertyListAST & inAttribute_mStructurePropertyListAST
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_syncDeclarationAST result ;
  if (inAttribute_mSyncToolName.isValid () && inAttribute_mStructurePropertyListAST.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_syncDeclarationAST (inAttribute_mSyncToolName, inAttribute_mStructurePropertyListAST COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syncDeclarationAST::setter_setMSyncToolName (GALGAS_lstring inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_syncDeclarationAST * p = (cPtr_syncDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncDeclarationAST) ;
    p->mProperty_mSyncToolName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syncDeclarationAST::setter_setMStructurePropertyListAST (GALGAS_structurePropertyListAST inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_syncDeclarationAST * p = (cPtr_syncDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncDeclarationAST) ;
    p->mProperty_mStructurePropertyListAST = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_syncDeclarationAST::readProperty_mSyncToolName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_syncDeclarationAST * p = (cPtr_syncDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncDeclarationAST) ;
    return p->mProperty_mSyncToolName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structurePropertyListAST GALGAS_syncDeclarationAST::readProperty_mStructurePropertyListAST (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_structurePropertyListAST () ;
  }else{
    cPtr_syncDeclarationAST * p = (cPtr_syncDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncDeclarationAST) ;
    return p->mProperty_mStructurePropertyListAST ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @syncDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_syncDeclarationAST::cPtr_syncDeclarationAST (const GALGAS_lstring & in_mSyncToolName,
                                                  const GALGAS_structurePropertyListAST & in_mStructurePropertyListAST
                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mSyncToolName (in_mSyncToolName),
mProperty_mStructurePropertyListAST (in_mStructurePropertyListAST) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_syncDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncDeclarationAST ;
}

void cPtr_syncDeclarationAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@syncDeclarationAST:" ;
  mProperty_mSyncToolName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStructurePropertyListAST.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_syncDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_syncDeclarationAST (mProperty_mSyncToolName, mProperty_mStructurePropertyListAST COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@syncDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syncDeclarationAST ("syncDeclarationAST",
                                           & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syncDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syncDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syncDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syncDeclarationAST GALGAS_syncDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_syncDeclarationAST result ;
  const GALGAS_syncDeclarationAST * p = (const GALGAS_syncDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syncDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syncDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_syncDeclarationAST_2D_weak::objectCompare (const GALGAS_syncDeclarationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syncDeclarationAST_2D_weak::GALGAS_syncDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syncDeclarationAST_2D_weak & GALGAS_syncDeclarationAST_2D_weak::operator = (const GALGAS_syncDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syncDeclarationAST_2D_weak::GALGAS_syncDeclarationAST_2D_weak (const GALGAS_syncDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syncDeclarationAST_2D_weak GALGAS_syncDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_syncDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syncDeclarationAST GALGAS_syncDeclarationAST_2D_weak::bang_syncDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_syncDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_syncDeclarationAST) ;
      result = GALGAS_syncDeclarationAST ((cPtr_syncDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@syncDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syncDeclarationAST_2D_weak ("syncDeclarationAST-weak",
                                                   & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syncDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syncDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syncDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syncDeclarationAST_2D_weak GALGAS_syncDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_syncDeclarationAST_2D_weak result ;
  const GALGAS_syncDeclarationAST_2D_weak * p = (const GALGAS_syncDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syncDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syncDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @integerBuiltinFunctionIR reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_integerBuiltinFunctionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_integerBuiltinFunctionIR * p = (const cPtr_integerBuiltinFunctionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_integerBuiltinFunctionIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mRoutineMangledName.objectCompare (p->mProperty_mRoutineMangledName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_isRequired.objectCompare (p->mProperty_isRequired) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_warnsIfUnused.objectCompare (p->mProperty_warnsIfUnused) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLLVMTypeName.objectCompare (p->mProperty_mLLVMTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIntrinsicName.objectCompare (p->mProperty_mIntrinsicName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_integerBuiltinFunctionIR::objectCompare (const GALGAS_integerBuiltinFunctionIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_integerBuiltinFunctionIR::GALGAS_integerBuiltinFunctionIR (void) :
GALGAS_abstractRoutineIR () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_integerBuiltinFunctionIR GALGAS_integerBuiltinFunctionIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_integerBuiltinFunctionIR::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_bool::constructor_default (HERE),
                                                           GALGAS_bool::constructor_default (HERE),
                                                           GALGAS_string::constructor_default (HERE),
                                                           GALGAS_string::constructor_default (HERE)
                                                           COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_integerBuiltinFunctionIR::GALGAS_integerBuiltinFunctionIR (const cPtr_integerBuiltinFunctionIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_integerBuiltinFunctionIR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_integerBuiltinFunctionIR GALGAS_integerBuiltinFunctionIR::constructor_new (const GALGAS_lstring & inAttribute_mRoutineMangledName,
                                                                                  const GALGAS_bool & inAttribute_isRequired,
                                                                                  const GALGAS_bool & inAttribute_warnsIfUnused,
                                                                                  const GALGAS_string & inAttribute_mLLVMTypeName,
                                                                                  const GALGAS_string & inAttribute_mIntrinsicName
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_integerBuiltinFunctionIR result ;
  if (inAttribute_mRoutineMangledName.isValid () && inAttribute_isRequired.isValid () && inAttribute_warnsIfUnused.isValid () && inAttribute_mLLVMTypeName.isValid () && inAttribute_mIntrinsicName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_integerBuiltinFunctionIR (inAttribute_mRoutineMangledName, inAttribute_isRequired, inAttribute_warnsIfUnused, inAttribute_mLLVMTypeName, inAttribute_mIntrinsicName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_integerBuiltinFunctionIR::setter_setMLLVMTypeName (GALGAS_string inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_integerBuiltinFunctionIR * p = (cPtr_integerBuiltinFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerBuiltinFunctionIR) ;
    p->mProperty_mLLVMTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_integerBuiltinFunctionIR::setter_setMIntrinsicName (GALGAS_string inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_integerBuiltinFunctionIR * p = (cPtr_integerBuiltinFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerBuiltinFunctionIR) ;
    p->mProperty_mIntrinsicName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_integerBuiltinFunctionIR::readProperty_mLLVMTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_integerBuiltinFunctionIR * p = (cPtr_integerBuiltinFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerBuiltinFunctionIR) ;
    return p->mProperty_mLLVMTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_integerBuiltinFunctionIR::readProperty_mIntrinsicName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_integerBuiltinFunctionIR * p = (cPtr_integerBuiltinFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerBuiltinFunctionIR) ;
    return p->mProperty_mIntrinsicName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @integerBuiltinFunctionIR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_integerBuiltinFunctionIR::cPtr_integerBuiltinFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                              const GALGAS_bool & in_isRequired,
                                                              const GALGAS_bool & in_warnsIfUnused,
                                                              const GALGAS_string & in_mLLVMTypeName,
                                                              const GALGAS_string & in_mIntrinsicName
                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
mProperty_mLLVMTypeName (in_mLLVMTypeName),
mProperty_mIntrinsicName (in_mIntrinsicName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_integerBuiltinFunctionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerBuiltinFunctionIR ;
}

void cPtr_integerBuiltinFunctionIR::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@integerBuiltinFunctionIR:" ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLLVMTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIntrinsicName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_integerBuiltinFunctionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_integerBuiltinFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mLLVMTypeName, mProperty_mIntrinsicName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@integerBuiltinFunctionIR type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_integerBuiltinFunctionIR ("integerBuiltinFunctionIR",
                                                 & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_integerBuiltinFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerBuiltinFunctionIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_integerBuiltinFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_integerBuiltinFunctionIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_integerBuiltinFunctionIR GALGAS_integerBuiltinFunctionIR::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_integerBuiltinFunctionIR result ;
  const GALGAS_integerBuiltinFunctionIR * p = (const GALGAS_integerBuiltinFunctionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_integerBuiltinFunctionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("integerBuiltinFunctionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_integerBuiltinFunctionIR_2D_weak::objectCompare (const GALGAS_integerBuiltinFunctionIR_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_integerBuiltinFunctionIR_2D_weak::GALGAS_integerBuiltinFunctionIR_2D_weak (void) :
GALGAS_abstractRoutineIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_integerBuiltinFunctionIR_2D_weak & GALGAS_integerBuiltinFunctionIR_2D_weak::operator = (const GALGAS_integerBuiltinFunctionIR & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_integerBuiltinFunctionIR_2D_weak::GALGAS_integerBuiltinFunctionIR_2D_weak (const GALGAS_integerBuiltinFunctionIR & inSource) :
GALGAS_abstractRoutineIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_integerBuiltinFunctionIR_2D_weak GALGAS_integerBuiltinFunctionIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_integerBuiltinFunctionIR_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_integerBuiltinFunctionIR GALGAS_integerBuiltinFunctionIR_2D_weak::bang_integerBuiltinFunctionIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_integerBuiltinFunctionIR result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_integerBuiltinFunctionIR) ;
      result = GALGAS_integerBuiltinFunctionIR ((cPtr_integerBuiltinFunctionIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@integerBuiltinFunctionIR-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_integerBuiltinFunctionIR_2D_weak ("integerBuiltinFunctionIR-weak",
                                                         & kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_integerBuiltinFunctionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerBuiltinFunctionIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_integerBuiltinFunctionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_integerBuiltinFunctionIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_integerBuiltinFunctionIR_2D_weak GALGAS_integerBuiltinFunctionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_integerBuiltinFunctionIR_2D_weak result ;
  const GALGAS_integerBuiltinFunctionIR_2D_weak * p = (const GALGAS_integerBuiltinFunctionIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_integerBuiltinFunctionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("integerBuiltinFunctionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @typeOpaqueDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_typeOpaqueDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_typeOpaqueDeclarationAST * p = (const cPtr_typeOpaqueDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_typeOpaqueDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOpaqueTypeName.objectCompare (p->mProperty_mOpaqueTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSizeExpression.objectCompare (p->mProperty_mSizeExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSizeExpressionLocation.objectCompare (p->mProperty_mSizeExpressionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAttributeList.objectCompare (p->mProperty_mAttributeList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_typeOpaqueDeclarationAST::objectCompare (const GALGAS_typeOpaqueDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeOpaqueDeclarationAST::GALGAS_typeOpaqueDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeOpaqueDeclarationAST::GALGAS_typeOpaqueDeclarationAST (const cPtr_typeOpaqueDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typeOpaqueDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeOpaqueDeclarationAST GALGAS_typeOpaqueDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mOpaqueTypeName,
                                                                                  const GALGAS_expressionAST & inAttribute_mSizeExpression,
                                                                                  const GALGAS_location & inAttribute_mSizeExpressionLocation,
                                                                                  const GALGAS_lstringlist & inAttribute_mAttributeList
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_typeOpaqueDeclarationAST result ;
  if (inAttribute_mOpaqueTypeName.isValid () && inAttribute_mSizeExpression.isValid () && inAttribute_mSizeExpressionLocation.isValid () && inAttribute_mAttributeList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_typeOpaqueDeclarationAST (inAttribute_mOpaqueTypeName, inAttribute_mSizeExpression, inAttribute_mSizeExpressionLocation, inAttribute_mAttributeList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeOpaqueDeclarationAST::setter_setMOpaqueTypeName (GALGAS_lstring inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_typeOpaqueDeclarationAST * p = (cPtr_typeOpaqueDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeOpaqueDeclarationAST) ;
    p->mProperty_mOpaqueTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeOpaqueDeclarationAST::setter_setMSizeExpression (GALGAS_expressionAST inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_typeOpaqueDeclarationAST * p = (cPtr_typeOpaqueDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeOpaqueDeclarationAST) ;
    p->mProperty_mSizeExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeOpaqueDeclarationAST::setter_setMSizeExpressionLocation (GALGAS_location inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_typeOpaqueDeclarationAST * p = (cPtr_typeOpaqueDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeOpaqueDeclarationAST) ;
    p->mProperty_mSizeExpressionLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeOpaqueDeclarationAST::setter_setMAttributeList (GALGAS_lstringlist inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_typeOpaqueDeclarationAST * p = (cPtr_typeOpaqueDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeOpaqueDeclarationAST) ;
    p->mProperty_mAttributeList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_typeOpaqueDeclarationAST::readProperty_mOpaqueTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_typeOpaqueDeclarationAST * p = (cPtr_typeOpaqueDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeOpaqueDeclarationAST) ;
    return p->mProperty_mOpaqueTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_typeOpaqueDeclarationAST::readProperty_mSizeExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_typeOpaqueDeclarationAST * p = (cPtr_typeOpaqueDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeOpaqueDeclarationAST) ;
    return p->mProperty_mSizeExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_typeOpaqueDeclarationAST::readProperty_mSizeExpressionLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_typeOpaqueDeclarationAST * p = (cPtr_typeOpaqueDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeOpaqueDeclarationAST) ;
    return p->mProperty_mSizeExpressionLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_typeOpaqueDeclarationAST::readProperty_mAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_typeOpaqueDeclarationAST * p = (cPtr_typeOpaqueDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeOpaqueDeclarationAST) ;
    return p->mProperty_mAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @typeOpaqueDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_typeOpaqueDeclarationAST::cPtr_typeOpaqueDeclarationAST (const GALGAS_lstring & in_mOpaqueTypeName,
                                                              const GALGAS_expressionAST & in_mSizeExpression,
                                                              const GALGAS_location & in_mSizeExpressionLocation,
                                                              const GALGAS_lstringlist & in_mAttributeList
                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mOpaqueTypeName (in_mOpaqueTypeName),
mProperty_mSizeExpression (in_mSizeExpression),
mProperty_mSizeExpressionLocation (in_mSizeExpressionLocation),
mProperty_mAttributeList (in_mAttributeList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_typeOpaqueDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeOpaqueDeclarationAST ;
}

void cPtr_typeOpaqueDeclarationAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@typeOpaqueDeclarationAST:" ;
  mProperty_mOpaqueTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSizeExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSizeExpressionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAttributeList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_typeOpaqueDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_typeOpaqueDeclarationAST (mProperty_mOpaqueTypeName, mProperty_mSizeExpression, mProperty_mSizeExpressionLocation, mProperty_mAttributeList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@typeOpaqueDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeOpaqueDeclarationAST ("typeOpaqueDeclarationAST",
                                                 & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeOpaqueDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeOpaqueDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeOpaqueDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeOpaqueDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeOpaqueDeclarationAST GALGAS_typeOpaqueDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_typeOpaqueDeclarationAST result ;
  const GALGAS_typeOpaqueDeclarationAST * p = (const GALGAS_typeOpaqueDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeOpaqueDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeOpaqueDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_typeOpaqueDeclarationAST_2D_weak::objectCompare (const GALGAS_typeOpaqueDeclarationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeOpaqueDeclarationAST_2D_weak::GALGAS_typeOpaqueDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeOpaqueDeclarationAST_2D_weak & GALGAS_typeOpaqueDeclarationAST_2D_weak::operator = (const GALGAS_typeOpaqueDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeOpaqueDeclarationAST_2D_weak::GALGAS_typeOpaqueDeclarationAST_2D_weak (const GALGAS_typeOpaqueDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeOpaqueDeclarationAST_2D_weak GALGAS_typeOpaqueDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_typeOpaqueDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeOpaqueDeclarationAST GALGAS_typeOpaqueDeclarationAST_2D_weak::bang_typeOpaqueDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_typeOpaqueDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_typeOpaqueDeclarationAST) ;
      result = GALGAS_typeOpaqueDeclarationAST ((cPtr_typeOpaqueDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@typeOpaqueDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeOpaqueDeclarationAST_2D_weak ("typeOpaqueDeclarationAST-weak",
                                                         & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeOpaqueDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeOpaqueDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeOpaqueDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeOpaqueDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeOpaqueDeclarationAST_2D_weak GALGAS_typeOpaqueDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_typeOpaqueDeclarationAST_2D_weak result ;
  const GALGAS_typeOpaqueDeclarationAST_2D_weak * p = (const GALGAS_typeOpaqueDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeOpaqueDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeOpaqueDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@typeOpaqueDeclarationAST noteTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_typeOpaqueDeclarationAST_noteTypesInPrecedenceGraph> gExtensionMethodTable_typeOpaqueDeclarationAST_noteTypesInPrecedenceGraph ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_noteTypesInPrecedenceGraph (const int32_t inClassIndex,
                                                      extensionMethodSignature_typeOpaqueDeclarationAST_noteTypesInPrecedenceGraph inMethod) {
  gExtensionMethodTable_typeOpaqueDeclarationAST_noteTypesInPrecedenceGraph.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_noteTypesInPrecedenceGraph (const cPtr_typeOpaqueDeclarationAST * inObject,
                                                     GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_typeOpaqueDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_typeOpaqueDeclarationAST_noteTypesInPrecedenceGraph f = NULL ;
    if (classIndex < gExtensionMethodTable_typeOpaqueDeclarationAST_noteTypesInPrecedenceGraph.count ()) {
      f = gExtensionMethodTable_typeOpaqueDeclarationAST_noteTypesInPrecedenceGraph (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_typeOpaqueDeclarationAST_noteTypesInPrecedenceGraph.count ()) {
           f = gExtensionMethodTable_typeOpaqueDeclarationAST_noteTypesInPrecedenceGraph (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_typeOpaqueDeclarationAST_noteTypesInPrecedenceGraph.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioGraph, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_typeOpaqueDeclarationAST_noteTypesInPrecedenceGraph (const cPtr_typeOpaqueDeclarationAST * inObject,
                                                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  auto object = (cPtr_typeOpaqueDeclarationAST *) inObject ; // A
  macroValidSharedObject (object, cPtr_typeOpaqueDeclarationAST) ;
  {
  const GALGAS_typeOpaqueDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_noteNode (temp_0.readProperty_mOpaqueTypeName () COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 50)) ;
  }
  const GALGAS_typeOpaqueDeclarationAST temp_1 = object ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) temp_1.readProperty_mSizeExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 51)) ;
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_typeOpaqueDeclarationAST_noteTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_typeOpaqueDeclarationAST.mSlotID,
                                                   extensionMethod_typeOpaqueDeclarationAST_noteTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_typeOpaqueDeclarationAST_noteTypesInPrecedenceGraph (void) {
  gExtensionMethodTable_typeOpaqueDeclarationAST_noteTypesInPrecedenceGraph.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_typeOpaqueDeclarationAST_noteTypesInPrecedenceGraph (defineExtensionMethod_typeOpaqueDeclarationAST_noteTypesInPrecedenceGraph,
                                                                                freeExtensionMethod_typeOpaqueDeclarationAST_noteTypesInPrecedenceGraph) ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterDeclarationList_2D_element::GALGAS_controlRegisterDeclarationList_2D_element (void) :
mProperty_mRegisterArrayList (),
mProperty_mRegisterTypeName (),
mProperty_mRegisterBitSliceList (),
mProperty_mRegisterBitSliceListLocation () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterDeclarationList_2D_element::~ GALGAS_controlRegisterDeclarationList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterDeclarationList_2D_element::GALGAS_controlRegisterDeclarationList_2D_element (const GALGAS_controlRegisterNameListAST & inOperand0,
                                                                                                    const GALGAS_lstring & inOperand1,
                                                                                                    const GALGAS_controlRegisterBitSliceList & inOperand2,
                                                                                                    const GALGAS_location & inOperand3) :
mProperty_mRegisterArrayList (inOperand0),
mProperty_mRegisterTypeName (inOperand1),
mProperty_mRegisterBitSliceList (inOperand2),
mProperty_mRegisterBitSliceListLocation (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterDeclarationList_2D_element GALGAS_controlRegisterDeclarationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_controlRegisterDeclarationList_2D_element (GALGAS_controlRegisterNameListAST::constructor_emptyList (HERE),
                                                           GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_controlRegisterBitSliceList::constructor_emptyList (HERE),
                                                           GALGAS_location::constructor_nowhere (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterDeclarationList_2D_element GALGAS_controlRegisterDeclarationList_2D_element::constructor_new (const GALGAS_controlRegisterNameListAST & inOperand0,
                                                                                                                    const GALGAS_lstring & inOperand1,
                                                                                                                    const GALGAS_controlRegisterBitSliceList & inOperand2,
                                                                                                                    const GALGAS_location & inOperand3 
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterDeclarationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_controlRegisterDeclarationList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_controlRegisterDeclarationList_2D_element::objectCompare (const GALGAS_controlRegisterDeclarationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mRegisterArrayList.objectCompare (inOperand.mProperty_mRegisterArrayList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegisterTypeName.objectCompare (inOperand.mProperty_mRegisterTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegisterBitSliceList.objectCompare (inOperand.mProperty_mRegisterBitSliceList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegisterBitSliceListLocation.objectCompare (inOperand.mProperty_mRegisterBitSliceListLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_controlRegisterDeclarationList_2D_element::isValid (void) const {
  return mProperty_mRegisterArrayList.isValid () && mProperty_mRegisterTypeName.isValid () && mProperty_mRegisterBitSliceList.isValid () && mProperty_mRegisterBitSliceListLocation.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterDeclarationList_2D_element::drop (void) {
  mProperty_mRegisterArrayList.drop () ;
  mProperty_mRegisterTypeName.drop () ;
  mProperty_mRegisterBitSliceList.drop () ;
  mProperty_mRegisterBitSliceListLocation.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterDeclarationList_2D_element::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "<struct @controlRegisterDeclarationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mRegisterArrayList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRegisterTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRegisterBitSliceList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRegisterBitSliceListLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@controlRegisterDeclarationList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterDeclarationList_2D_element ("controlRegisterDeclarationList-element",
                                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterDeclarationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterDeclarationList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterDeclarationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterDeclarationList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterDeclarationList_2D_element GALGAS_controlRegisterDeclarationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterDeclarationList_2D_element result ;
  const GALGAS_controlRegisterDeclarationList_2D_element * p = (const GALGAS_controlRegisterDeclarationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterDeclarationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterDeclarationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @decoratedControlRegisterArrayGroupDeclaration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_decoratedControlRegisterArrayGroupDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_decoratedControlRegisterArrayGroupDeclaration * p = (const cPtr_decoratedControlRegisterArrayGroupDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_decoratedControlRegisterArrayGroupDeclaration) ;
  if (kOperandEqual == result) {
    result = mProperty_mGroupName.objectCompare (p->mProperty_mGroupName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBaseAddresses.objectCompare (p->mProperty_mBaseAddresses) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_decoratedControlRegisterArrayGroupDeclaration::objectCompare (const GALGAS_decoratedControlRegisterArrayGroupDeclaration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedControlRegisterArrayGroupDeclaration::GALGAS_decoratedControlRegisterArrayGroupDeclaration (void) :
GALGAS_abstractDecoratedDeclaration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedControlRegisterArrayGroupDeclaration GALGAS_decoratedControlRegisterArrayGroupDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_decoratedControlRegisterArrayGroupDeclaration::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                                GALGAS_lbigintlist::constructor_emptyList (HERE)
                                                                                COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedControlRegisterArrayGroupDeclaration::GALGAS_decoratedControlRegisterArrayGroupDeclaration (const cPtr_decoratedControlRegisterArrayGroupDeclaration * inSourcePtr) :
GALGAS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedControlRegisterArrayGroupDeclaration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedControlRegisterArrayGroupDeclaration GALGAS_decoratedControlRegisterArrayGroupDeclaration::constructor_new (const GALGAS_lstring & inAttribute_mGroupName,
                                                                                                                            const GALGAS_lbigintlist & inAttribute_mBaseAddresses
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_decoratedControlRegisterArrayGroupDeclaration result ;
  if (inAttribute_mGroupName.isValid () && inAttribute_mBaseAddresses.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_decoratedControlRegisterArrayGroupDeclaration (inAttribute_mGroupName, inAttribute_mBaseAddresses COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedControlRegisterArrayGroupDeclaration::setter_setMGroupName (GALGAS_lstring inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_decoratedControlRegisterArrayGroupDeclaration * p = (cPtr_decoratedControlRegisterArrayGroupDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedControlRegisterArrayGroupDeclaration) ;
    p->mProperty_mGroupName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedControlRegisterArrayGroupDeclaration::setter_setMBaseAddresses (GALGAS_lbigintlist inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_decoratedControlRegisterArrayGroupDeclaration * p = (cPtr_decoratedControlRegisterArrayGroupDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedControlRegisterArrayGroupDeclaration) ;
    p->mProperty_mBaseAddresses = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_decoratedControlRegisterArrayGroupDeclaration::readProperty_mGroupName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_decoratedControlRegisterArrayGroupDeclaration * p = (cPtr_decoratedControlRegisterArrayGroupDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedControlRegisterArrayGroupDeclaration) ;
    return p->mProperty_mGroupName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lbigintlist GALGAS_decoratedControlRegisterArrayGroupDeclaration::readProperty_mBaseAddresses (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lbigintlist () ;
  }else{
    cPtr_decoratedControlRegisterArrayGroupDeclaration * p = (cPtr_decoratedControlRegisterArrayGroupDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedControlRegisterArrayGroupDeclaration) ;
    return p->mProperty_mBaseAddresses ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @decoratedControlRegisterArrayGroupDeclaration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_decoratedControlRegisterArrayGroupDeclaration::cPtr_decoratedControlRegisterArrayGroupDeclaration (const GALGAS_lstring & in_mGroupName,
                                                                                                        const GALGAS_lbigintlist & in_mBaseAddresses
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (THERE),
mProperty_mGroupName (in_mGroupName),
mProperty_mBaseAddresses (in_mBaseAddresses) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_decoratedControlRegisterArrayGroupDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedControlRegisterArrayGroupDeclaration ;
}

void cPtr_decoratedControlRegisterArrayGroupDeclaration::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "[@decoratedControlRegisterArrayGroupDeclaration:" ;
  mProperty_mGroupName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBaseAddresses.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_decoratedControlRegisterArrayGroupDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_decoratedControlRegisterArrayGroupDeclaration (mProperty_mGroupName, mProperty_mBaseAddresses COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@decoratedControlRegisterArrayGroupDeclaration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedControlRegisterArrayGroupDeclaration ("decoratedControlRegisterArrayGroupDeclaration",
                                                                      & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedControlRegisterArrayGroupDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedControlRegisterArrayGroupDeclaration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedControlRegisterArrayGroupDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedControlRegisterArrayGroupDeclaration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedControlRegisterArrayGroupDeclaration GALGAS_decoratedControlRegisterArrayGroupDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_decoratedControlRegisterArrayGroupDeclaration result ;
  const GALGAS_decoratedControlRegisterArrayGroupDeclaration * p = (const GALGAS_decoratedControlRegisterArrayGroupDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedControlRegisterArrayGroupDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedControlRegisterArrayGroupDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak::objectCompare (const GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak::GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak (void) :
GALGAS_abstractDecoratedDeclaration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak & GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak::operator = (const GALGAS_decoratedControlRegisterArrayGroupDeclaration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak::GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak (const GALGAS_decoratedControlRegisterArrayGroupDeclaration & inSource) :
GALGAS_abstractDecoratedDeclaration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedControlRegisterArrayGroupDeclaration GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak::bang_decoratedControlRegisterArrayGroupDeclaration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedControlRegisterArrayGroupDeclaration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_decoratedControlRegisterArrayGroupDeclaration) ;
      result = GALGAS_decoratedControlRegisterArrayGroupDeclaration ((cPtr_decoratedControlRegisterArrayGroupDeclaration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@decoratedControlRegisterArrayGroupDeclaration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak ("decoratedControlRegisterArrayGroupDeclaration-weak",
                                                                              & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                          C_Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak result ;
  const GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak * p = (const GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedControlRegisterArrayGroupDeclaration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@controlRegisterGroupArrayList generateLLVMcode'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_generateLLVMcode (const GALGAS_controlRegisterGroupArrayList inObject,
                                       GALGAS_string & ioArgument_ioLLVMcode,
                                       const GALGAS_uint constinArgument_inPointerSize,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_controlRegisterGroupArrayList temp_1 = inObject ;
    test_0 = GALGAS_bool (kIsStrictSup, temp_1.getter_length (SOURCE_FILE ("declaration-control-register.galgas", 674)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Control Register Group Arraies"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 675)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 675)) ;
      GALGAS_string var_int_28172 = GALGAS_string ("i").add_operation (constinArgument_inPointerSize.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 676)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 676)) ;
      const GALGAS_controlRegisterGroupArrayList temp_2 = inObject ;
      cEnumerator_controlRegisterGroupArrayList enumerator_28227 (temp_2, kENUMERATION_UP) ;
      while (enumerator_28227.hasCurrentObject ()) {
        ioArgument_ioLLVMcode.plusAssign_operation(function_registerGroupAddressArrayLLVMname (enumerator_28227.current_mGroupName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 678)).add_operation (GALGAS_string (" = private unnamed_addr constant ["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 678)).add_operation (enumerator_28227.current_mBaseAddresses (HERE).getter_length (SOURCE_FILE ("declaration-control-register.galgas", 679)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 679)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 679)).add_operation (GALGAS_string (" x "), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 679)).add_operation (var_int_28172, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 679)).add_operation (GALGAS_string ("] ["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 679)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 678)) ;
        cEnumerator_lbigintlist enumerator_28425 (enumerator_28227.current_mBaseAddresses (HERE), kENUMERATION_UP) ;
        while (enumerator_28425.hasCurrentObject ()) {
          ioArgument_ioLLVMcode.plusAssign_operation(var_int_28172.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 682)).add_operation (enumerator_28425.current_mValue (HERE).readProperty_bigint ().getter_string (SOURCE_FILE ("declaration-control-register.galgas", 682)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 682)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 682)) ;
          if (enumerator_28425.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 684)) ;
          }
          enumerator_28425.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("] ; "), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 686)) ;
        cEnumerator_lbigintlist enumerator_28601 (enumerator_28227.current_mBaseAddresses (HERE), kENUMERATION_UP) ;
        while (enumerator_28601.hasCurrentObject ()) {
          ioArgument_ioLLVMcode.plusAssign_operation(enumerator_28601.current_mValue (HERE).readProperty_bigint ().getter_hexString (SOURCE_FILE ("declaration-control-register.galgas", 689)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 689)) ;
          if (enumerator_28601.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 691)) ;
          }
          enumerator_28601.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 693)) ;
        enumerator_28227.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 695)) ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
// @globalConstantDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_globalConstantDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_globalConstantDeclarationAST * p = (const cPtr_globalConstantDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_globalConstantDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mConstantName.objectCompare (p->mProperty_mConstantName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAttributeList.objectCompare (p->mProperty_mAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConstantTypeName.objectCompare (p->mProperty_mConstantTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_globalConstantDeclarationAST::objectCompare (const GALGAS_globalConstantDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalConstantDeclarationAST::GALGAS_globalConstantDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalConstantDeclarationAST::GALGAS_globalConstantDeclarationAST (const cPtr_globalConstantDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_globalConstantDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalConstantDeclarationAST GALGAS_globalConstantDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mConstantName,
                                                                                          const GALGAS_lstringlist & inAttribute_mAttributeList,
                                                                                          const GALGAS_lstring & inAttribute_mConstantTypeName,
                                                                                          const GALGAS_expressionAST & inAttribute_mSourceExpression
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_globalConstantDeclarationAST result ;
  if (inAttribute_mConstantName.isValid () && inAttribute_mAttributeList.isValid () && inAttribute_mConstantTypeName.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_globalConstantDeclarationAST (inAttribute_mConstantName, inAttribute_mAttributeList, inAttribute_mConstantTypeName, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_globalConstantDeclarationAST::setter_setMConstantName (GALGAS_lstring inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_globalConstantDeclarationAST * p = (cPtr_globalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_globalConstantDeclarationAST) ;
    p->mProperty_mConstantName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_globalConstantDeclarationAST::setter_setMAttributeList (GALGAS_lstringlist inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_globalConstantDeclarationAST * p = (cPtr_globalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_globalConstantDeclarationAST) ;
    p->mProperty_mAttributeList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_globalConstantDeclarationAST::setter_setMConstantTypeName (GALGAS_lstring inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_globalConstantDeclarationAST * p = (cPtr_globalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_globalConstantDeclarationAST) ;
    p->mProperty_mConstantTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_globalConstantDeclarationAST::setter_setMSourceExpression (GALGAS_expressionAST inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_globalConstantDeclarationAST * p = (cPtr_globalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_globalConstantDeclarationAST) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_globalConstantDeclarationAST::readProperty_mConstantName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_globalConstantDeclarationAST * p = (cPtr_globalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_globalConstantDeclarationAST) ;
    return p->mProperty_mConstantName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_globalConstantDeclarationAST::readProperty_mAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_globalConstantDeclarationAST * p = (cPtr_globalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_globalConstantDeclarationAST) ;
    return p->mProperty_mAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_globalConstantDeclarationAST::readProperty_mConstantTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_globalConstantDeclarationAST * p = (cPtr_globalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_globalConstantDeclarationAST) ;
    return p->mProperty_mConstantTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_globalConstantDeclarationAST::readProperty_mSourceExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_globalConstantDeclarationAST * p = (cPtr_globalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_globalConstantDeclarationAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @globalConstantDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_globalConstantDeclarationAST::cPtr_globalConstantDeclarationAST (const GALGAS_lstring & in_mConstantName,
                                                                      const GALGAS_lstringlist & in_mAttributeList,
                                                                      const GALGAS_lstring & in_mConstantTypeName,
                                                                      const GALGAS_expressionAST & in_mSourceExpression
                                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mConstantName (in_mConstantName),
mProperty_mAttributeList (in_mAttributeList),
mProperty_mConstantTypeName (in_mConstantTypeName),
mProperty_mSourceExpression (in_mSourceExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_globalConstantDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalConstantDeclarationAST ;
}

void cPtr_globalConstantDeclarationAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@globalConstantDeclarationAST:" ;
  mProperty_mConstantName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mConstantTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_globalConstantDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_globalConstantDeclarationAST (mProperty_mConstantName, mProperty_mAttributeList, mProperty_mConstantTypeName, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@globalConstantDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalConstantDeclarationAST ("globalConstantDeclarationAST",
                                                     & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_globalConstantDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalConstantDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_globalConstantDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalConstantDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalConstantDeclarationAST GALGAS_globalConstantDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_globalConstantDeclarationAST result ;
  const GALGAS_globalConstantDeclarationAST * p = (const GALGAS_globalConstantDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_globalConstantDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalConstantDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_globalConstantDeclarationAST_2D_weak::objectCompare (const GALGAS_globalConstantDeclarationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalConstantDeclarationAST_2D_weak::GALGAS_globalConstantDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalConstantDeclarationAST_2D_weak & GALGAS_globalConstantDeclarationAST_2D_weak::operator = (const GALGAS_globalConstantDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalConstantDeclarationAST_2D_weak::GALGAS_globalConstantDeclarationAST_2D_weak (const GALGAS_globalConstantDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalConstantDeclarationAST_2D_weak GALGAS_globalConstantDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_globalConstantDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalConstantDeclarationAST GALGAS_globalConstantDeclarationAST_2D_weak::bang_globalConstantDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_globalConstantDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_globalConstantDeclarationAST) ;
      result = GALGAS_globalConstantDeclarationAST ((cPtr_globalConstantDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@globalConstantDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalConstantDeclarationAST_2D_weak ("globalConstantDeclarationAST-weak",
                                                             & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_globalConstantDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalConstantDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_globalConstantDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalConstantDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalConstantDeclarationAST_2D_weak GALGAS_globalConstantDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_globalConstantDeclarationAST_2D_weak result ;
  const GALGAS_globalConstantDeclarationAST_2D_weak * p = (const GALGAS_globalConstantDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_globalConstantDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalConstantDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @syncToolInstanceDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_syncToolInstanceDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_syncToolInstanceDeclarationAST * p = (const cPtr_syncToolInstanceDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_syncToolInstanceDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mSyncTypeName.objectCompare (p->mProperty_mSyncTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSyncInstanceName.objectCompare (p->mProperty_mSyncInstanceName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_syncToolInstanceDeclarationAST::objectCompare (const GALGAS_syncToolInstanceDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syncToolInstanceDeclarationAST::GALGAS_syncToolInstanceDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syncToolInstanceDeclarationAST::GALGAS_syncToolInstanceDeclarationAST (const cPtr_syncToolInstanceDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syncToolInstanceDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_syncToolInstanceDeclarationAST GALGAS_syncToolInstanceDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mSyncTypeName,
                                                                                              const GALGAS_lstring & inAttribute_mSyncInstanceName,
                                                                                              const GALGAS_expressionAST & inAttribute_mSourceExpression
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_syncToolInstanceDeclarationAST result ;
  if (inAttribute_mSyncTypeName.isValid () && inAttribute_mSyncInstanceName.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_syncToolInstanceDeclarationAST (inAttribute_mSyncTypeName, inAttribute_mSyncInstanceName, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syncToolInstanceDeclarationAST::setter_setMSyncTypeName (GALGAS_lstring inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_syncToolInstanceDeclarationAST * p = (cPtr_syncToolInstanceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncToolInstanceDeclarationAST) ;
    p->mProperty_mSyncTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syncToolInstanceDeclarationAST::setter_setMSyncInstanceName (GALGAS_lstring inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_syncToolInstanceDeclarationAST * p = (cPtr_syncToolInstanceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncToolInstanceDeclarationAST) ;
    p->mProperty_mSyncInstanceName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syncToolInstanceDeclarationAST::setter_setMSourceExpression (GALGAS_expressionAST inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_syncToolInstanceDeclarationAST * p = (cPtr_syncToolInstanceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncToolInstanceDeclarationAST) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_syncToolInstanceDeclarationAST::readProperty_mSyncTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_syncToolInstanceDeclarationAST * p = (cPtr_syncToolInstanceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncToolInstanceDeclarationAST) ;
    return p->mProperty_mSyncTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_syncToolInstanceDeclarationAST::readProperty_mSyncInstanceName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_syncToolInstanceDeclarationAST * p = (cPtr_syncToolInstanceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncToolInstanceDeclarationAST) ;
    return p->mProperty_mSyncInstanceName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_syncToolInstanceDeclarationAST::readProperty_mSourceExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_syncToolInstanceDeclarationAST * p = (cPtr_syncToolInstanceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncToolInstanceDeclarationAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @syncToolInstanceDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_syncToolInstanceDeclarationAST::cPtr_syncToolInstanceDeclarationAST (const GALGAS_lstring & in_mSyncTypeName,
                                                                          const GALGAS_lstring & in_mSyncInstanceName,
                                                                          const GALGAS_expressionAST & in_mSourceExpression
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mSyncTypeName (in_mSyncTypeName),
mProperty_mSyncInstanceName (in_mSyncInstanceName),
mProperty_mSourceExpression (in_mSourceExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_syncToolInstanceDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST ;
}

void cPtr_syncToolInstanceDeclarationAST::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@syncToolInstanceDeclarationAST:" ;
  mProperty_mSyncTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSyncInstanceName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_syncToolInstanceDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_syncToolInstanceDeclarationAST (mProperty_mSyncTypeName, mProperty_mSyncInstanceName, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@syncToolInstanceDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST ("syncToolInstanceDeclarationAST",
                                                       & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syncToolInstanceDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syncToolInstanceDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syncToolInstanceDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syncToolInstanceDeclarationAST GALGAS_syncToolInstanceDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_syncToolInstanceDeclarationAST result ;
  const GALGAS_syncToolInstanceDeclarationAST * p = (const GALGAS_syncToolInstanceDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syncToolInstanceDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syncToolInstanceDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_syncToolInstanceDeclarationAST_2D_weak::objectCompare (const GALGAS_syncToolInstanceDeclarationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syncToolInstanceDeclarationAST_2D_weak::GALGAS_syncToolInstanceDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syncToolInstanceDeclarationAST_2D_weak & GALGAS_syncToolInstanceDeclarationAST_2D_weak::operator = (const GALGAS_syncToolInstanceDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syncToolInstanceDeclarationAST_2D_weak::GALGAS_syncToolInstanceDeclarationAST_2D_weak (const GALGAS_syncToolInstanceDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syncToolInstanceDeclarationAST_2D_weak GALGAS_syncToolInstanceDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_syncToolInstanceDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syncToolInstanceDeclarationAST GALGAS_syncToolInstanceDeclarationAST_2D_weak::bang_syncToolInstanceDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_syncToolInstanceDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_syncToolInstanceDeclarationAST) ;
      result = GALGAS_syncToolInstanceDeclarationAST ((cPtr_syncToolInstanceDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@syncToolInstanceDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST_2D_weak ("syncToolInstanceDeclarationAST-weak",
                                                               & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syncToolInstanceDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syncToolInstanceDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syncToolInstanceDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syncToolInstanceDeclarationAST_2D_weak GALGAS_syncToolInstanceDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_syncToolInstanceDeclarationAST_2D_weak result ;
  const GALGAS_syncToolInstanceDeclarationAST_2D_weak * p = (const GALGAS_syncToolInstanceDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syncToolInstanceDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syncToolInstanceDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @decoratedSyncInstance reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_decoratedSyncInstance::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_decoratedSyncInstance * p = (const cPtr_decoratedSyncInstance *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_decoratedSyncInstance) ;
  if (kOperandEqual == result) {
    result = mProperty_mSyncInstanceName.objectCompare (p->mProperty_mSyncInstanceName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpressionGeneratedCode.objectCompare (p->mProperty_mExpressionGeneratedCode) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_decoratedSyncInstance::objectCompare (const GALGAS_decoratedSyncInstance & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedSyncInstance::GALGAS_decoratedSyncInstance (void) :
GALGAS_abstractDecoratedDeclaration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedSyncInstance::GALGAS_decoratedSyncInstance (const cPtr_decoratedSyncInstance * inSourcePtr) :
GALGAS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedSyncInstance) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedSyncInstance GALGAS_decoratedSyncInstance::constructor_new (const GALGAS_lstring & inAttribute_mSyncInstanceName,
                                                                            const GALGAS_objectIR & inAttribute_mExpressionGeneratedCode
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_decoratedSyncInstance result ;
  if (inAttribute_mSyncInstanceName.isValid () && inAttribute_mExpressionGeneratedCode.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_decoratedSyncInstance (inAttribute_mSyncInstanceName, inAttribute_mExpressionGeneratedCode COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedSyncInstance::setter_setMSyncInstanceName (GALGAS_lstring inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_decoratedSyncInstance * p = (cPtr_decoratedSyncInstance *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedSyncInstance) ;
    p->mProperty_mSyncInstanceName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedSyncInstance::setter_setMExpressionGeneratedCode (GALGAS_objectIR inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_decoratedSyncInstance * p = (cPtr_decoratedSyncInstance *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedSyncInstance) ;
    p->mProperty_mExpressionGeneratedCode = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_decoratedSyncInstance::readProperty_mSyncInstanceName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_decoratedSyncInstance * p = (cPtr_decoratedSyncInstance *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedSyncInstance) ;
    return p->mProperty_mSyncInstanceName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_decoratedSyncInstance::readProperty_mExpressionGeneratedCode (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_decoratedSyncInstance * p = (cPtr_decoratedSyncInstance *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedSyncInstance) ;
    return p->mProperty_mExpressionGeneratedCode ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @decoratedSyncInstance class
//----------------------------------------------------------------------------------------------------------------------

cPtr_decoratedSyncInstance::cPtr_decoratedSyncInstance (const GALGAS_lstring & in_mSyncInstanceName,
                                                        const GALGAS_objectIR & in_mExpressionGeneratedCode
                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (THERE),
mProperty_mSyncInstanceName (in_mSyncInstanceName),
mProperty_mExpressionGeneratedCode (in_mExpressionGeneratedCode) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_decoratedSyncInstance::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedSyncInstance ;
}

void cPtr_decoratedSyncInstance::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@decoratedSyncInstance:" ;
  mProperty_mSyncInstanceName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpressionGeneratedCode.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_decoratedSyncInstance::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_decoratedSyncInstance (mProperty_mSyncInstanceName, mProperty_mExpressionGeneratedCode COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@decoratedSyncInstance type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedSyncInstance ("decoratedSyncInstance",
                                              & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedSyncInstance::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedSyncInstance ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedSyncInstance::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedSyncInstance (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedSyncInstance GALGAS_decoratedSyncInstance::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_decoratedSyncInstance result ;
  const GALGAS_decoratedSyncInstance * p = (const GALGAS_decoratedSyncInstance *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedSyncInstance *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedSyncInstance", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_decoratedSyncInstance_2D_weak::objectCompare (const GALGAS_decoratedSyncInstance_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedSyncInstance_2D_weak::GALGAS_decoratedSyncInstance_2D_weak (void) :
GALGAS_abstractDecoratedDeclaration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedSyncInstance_2D_weak & GALGAS_decoratedSyncInstance_2D_weak::operator = (const GALGAS_decoratedSyncInstance & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedSyncInstance_2D_weak::GALGAS_decoratedSyncInstance_2D_weak (const GALGAS_decoratedSyncInstance & inSource) :
GALGAS_abstractDecoratedDeclaration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedSyncInstance_2D_weak GALGAS_decoratedSyncInstance_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_decoratedSyncInstance_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedSyncInstance GALGAS_decoratedSyncInstance_2D_weak::bang_decoratedSyncInstance_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedSyncInstance result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_decoratedSyncInstance) ;
      result = GALGAS_decoratedSyncInstance ((cPtr_decoratedSyncInstance *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@decoratedSyncInstance-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedSyncInstance_2D_weak ("decoratedSyncInstance-weak",
                                                      & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedSyncInstance_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedSyncInstance_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedSyncInstance_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedSyncInstance_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedSyncInstance_2D_weak GALGAS_decoratedSyncInstance_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_decoratedSyncInstance_2D_weak result ;
  const GALGAS_decoratedSyncInstance_2D_weak * p = (const GALGAS_decoratedSyncInstance_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedSyncInstance_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedSyncInstance-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMapIR_2D_element::GALGAS_globalSyncInstanceMapIR_2D_element (void) :
mProperty_lkey (),
mProperty_mInitialValue () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMapIR_2D_element::~ GALGAS_globalSyncInstanceMapIR_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMapIR_2D_element::GALGAS_globalSyncInstanceMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_objectIR & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mInitialValue (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMapIR_2D_element GALGAS_globalSyncInstanceMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_objectIR & inOperand1 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_globalSyncInstanceMapIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_globalSyncInstanceMapIR_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_globalSyncInstanceMapIR_2D_element::objectCompare (const GALGAS_globalSyncInstanceMapIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInitialValue.objectCompare (inOperand.mProperty_mInitialValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_globalSyncInstanceMapIR_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInitialValue.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_globalSyncInstanceMapIR_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mInitialValue.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_globalSyncInstanceMapIR_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @globalSyncInstanceMapIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInitialValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@globalSyncInstanceMapIR-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalSyncInstanceMapIR_2D_element ("globalSyncInstanceMapIR-element",
                                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_globalSyncInstanceMapIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalSyncInstanceMapIR_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_globalSyncInstanceMapIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalSyncInstanceMapIR_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMapIR_2D_element GALGAS_globalSyncInstanceMapIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_globalSyncInstanceMapIR_2D_element result ;
  const GALGAS_globalSyncInstanceMapIR_2D_element * p = (const GALGAS_globalSyncInstanceMapIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_globalSyncInstanceMapIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalSyncInstanceMapIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationAST::GALGAS_driverDeclarationAST (void) :
mProperty_mDriverName (),
mProperty_mDriverDependanceList (),
mProperty_mPropertyListAST (),
mProperty_mBootLocation (),
mProperty_mBootInstructionList (),
mProperty_mBootEndLocation (),
mProperty_mStartupLocation (),
mProperty_mStartupInstructionList (),
mProperty_mStartupEndLocation () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationAST::~ GALGAS_driverDeclarationAST (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationAST::GALGAS_driverDeclarationAST (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_lstringlist & inOperand1,
                                                          const GALGAS_structurePropertyListAST & inOperand2,
                                                          const GALGAS_location & inOperand3,
                                                          const GALGAS_instructionListAST & inOperand4,
                                                          const GALGAS_location & inOperand5,
                                                          const GALGAS_location & inOperand6,
                                                          const GALGAS_instructionListAST & inOperand7,
                                                          const GALGAS_location & inOperand8) :
mProperty_mDriverName (inOperand0),
mProperty_mDriverDependanceList (inOperand1),
mProperty_mPropertyListAST (inOperand2),
mProperty_mBootLocation (inOperand3),
mProperty_mBootInstructionList (inOperand4),
mProperty_mBootEndLocation (inOperand5),
mProperty_mStartupLocation (inOperand6),
mProperty_mStartupInstructionList (inOperand7),
mProperty_mStartupEndLocation (inOperand8) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationAST GALGAS_driverDeclarationAST::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_driverDeclarationAST (GALGAS_lstring::constructor_default (HERE),
                                      GALGAS_lstringlist::constructor_emptyList (HERE),
                                      GALGAS_structurePropertyListAST::constructor_emptyList (HERE),
                                      GALGAS_location::constructor_nowhere (HERE),
                                      GALGAS_instructionListAST::constructor_emptyList (HERE),
                                      GALGAS_location::constructor_nowhere (HERE),
                                      GALGAS_location::constructor_nowhere (HERE),
                                      GALGAS_instructionListAST::constructor_emptyList (HERE),
                                      GALGAS_location::constructor_nowhere (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationAST GALGAS_driverDeclarationAST::constructor_new (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_lstringlist & inOperand1,
                                                                          const GALGAS_structurePropertyListAST & inOperand2,
                                                                          const GALGAS_location & inOperand3,
                                                                          const GALGAS_instructionListAST & inOperand4,
                                                                          const GALGAS_location & inOperand5,
                                                                          const GALGAS_location & inOperand6,
                                                                          const GALGAS_instructionListAST & inOperand7,
                                                                          const GALGAS_location & inOperand8 
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_driverDeclarationAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid ()) {
    result = GALGAS_driverDeclarationAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_driverDeclarationAST::objectCompare (const GALGAS_driverDeclarationAST & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mDriverName.objectCompare (inOperand.mProperty_mDriverName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDriverDependanceList.objectCompare (inOperand.mProperty_mDriverDependanceList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPropertyListAST.objectCompare (inOperand.mProperty_mPropertyListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBootLocation.objectCompare (inOperand.mProperty_mBootLocation) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBootInstructionList.objectCompare (inOperand.mProperty_mBootInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBootEndLocation.objectCompare (inOperand.mProperty_mBootEndLocation) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStartupLocation.objectCompare (inOperand.mProperty_mStartupLocation) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStartupInstructionList.objectCompare (inOperand.mProperty_mStartupInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStartupEndLocation.objectCompare (inOperand.mProperty_mStartupEndLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_driverDeclarationAST::isValid (void) const {
  return mProperty_mDriverName.isValid () && mProperty_mDriverDependanceList.isValid () && mProperty_mPropertyListAST.isValid () && mProperty_mBootLocation.isValid () && mProperty_mBootInstructionList.isValid () && mProperty_mBootEndLocation.isValid () && mProperty_mStartupLocation.isValid () && mProperty_mStartupInstructionList.isValid () && mProperty_mStartupEndLocation.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverDeclarationAST::drop (void) {
  mProperty_mDriverName.drop () ;
  mProperty_mDriverDependanceList.drop () ;
  mProperty_mPropertyListAST.drop () ;
  mProperty_mBootLocation.drop () ;
  mProperty_mBootInstructionList.drop () ;
  mProperty_mBootEndLocation.drop () ;
  mProperty_mStartupLocation.drop () ;
  mProperty_mStartupInstructionList.drop () ;
  mProperty_mStartupEndLocation.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverDeclarationAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<struct @driverDeclarationAST:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mDriverName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDriverDependanceList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPropertyListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBootLocation.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBootInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBootEndLocation.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStartupLocation.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStartupInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStartupEndLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@driverDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_driverDeclarationAST ("driverDeclarationAST",
                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_driverDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_driverDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_driverDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationAST GALGAS_driverDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_driverDeclarationAST result ;
  const GALGAS_driverDeclarationAST * p = (const GALGAS_driverDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_driverDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @implementedDriverAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_implementedDriverAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_implementedDriverAST * p = (const cPtr_implementedDriverAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_implementedDriverAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mDriverName.objectCompare (p->mProperty_mDriverName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDriverDependanceList.objectCompare (p->mProperty_mDriverDependanceList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsInstancied.objectCompare (p->mProperty_mIsInstancied) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBootLocation.objectCompare (p->mProperty_mBootLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBootInstructionList.objectCompare (p->mProperty_mBootInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBootEndLocation.objectCompare (p->mProperty_mBootEndLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStartupLocation.objectCompare (p->mProperty_mStartupLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStartupInstructionList.objectCompare (p->mProperty_mStartupInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStartupEndLocation.objectCompare (p->mProperty_mStartupEndLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_implementedDriverAST::objectCompare (const GALGAS_implementedDriverAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_implementedDriverAST::GALGAS_implementedDriverAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_implementedDriverAST GALGAS_implementedDriverAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_implementedDriverAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_lstringlist::constructor_emptyList (HERE),
                                                       GALGAS_bool::constructor_default (HERE),
                                                       GALGAS_location::constructor_nowhere (HERE),
                                                       GALGAS_instructionListAST::constructor_emptyList (HERE),
                                                       GALGAS_location::constructor_nowhere (HERE),
                                                       GALGAS_location::constructor_nowhere (HERE),
                                                       GALGAS_instructionListAST::constructor_emptyList (HERE),
                                                       GALGAS_location::constructor_nowhere (HERE)
                                                       COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_implementedDriverAST::GALGAS_implementedDriverAST (const cPtr_implementedDriverAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_implementedDriverAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_implementedDriverAST GALGAS_implementedDriverAST::constructor_new (const GALGAS_lstring & inAttribute_mDriverName,
                                                                          const GALGAS_lstringlist & inAttribute_mDriverDependanceList,
                                                                          const GALGAS_bool & inAttribute_mIsInstancied,
                                                                          const GALGAS_location & inAttribute_mBootLocation,
                                                                          const GALGAS_instructionListAST & inAttribute_mBootInstructionList,
                                                                          const GALGAS_location & inAttribute_mBootEndLocation,
                                                                          const GALGAS_location & inAttribute_mStartupLocation,
                                                                          const GALGAS_instructionListAST & inAttribute_mStartupInstructionList,
                                                                          const GALGAS_location & inAttribute_mStartupEndLocation
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_implementedDriverAST result ;
  if (inAttribute_mDriverName.isValid () && inAttribute_mDriverDependanceList.isValid () && inAttribute_mIsInstancied.isValid () && inAttribute_mBootLocation.isValid () && inAttribute_mBootInstructionList.isValid () && inAttribute_mBootEndLocation.isValid () && inAttribute_mStartupLocation.isValid () && inAttribute_mStartupInstructionList.isValid () && inAttribute_mStartupEndLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_implementedDriverAST (inAttribute_mDriverName, inAttribute_mDriverDependanceList, inAttribute_mIsInstancied, inAttribute_mBootLocation, inAttribute_mBootInstructionList, inAttribute_mBootEndLocation, inAttribute_mStartupLocation, inAttribute_mStartupInstructionList, inAttribute_mStartupEndLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_implementedDriverAST::setter_setMDriverName (GALGAS_lstring inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    p->mProperty_mDriverName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_implementedDriverAST::setter_setMDriverDependanceList (GALGAS_lstringlist inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    p->mProperty_mDriverDependanceList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_implementedDriverAST::setter_setMIsInstancied (GALGAS_bool inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    p->mProperty_mIsInstancied = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_implementedDriverAST::setter_setMBootLocation (GALGAS_location inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    p->mProperty_mBootLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_implementedDriverAST::setter_setMBootInstructionList (GALGAS_instructionListAST inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    p->mProperty_mBootInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_implementedDriverAST::setter_setMBootEndLocation (GALGAS_location inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    p->mProperty_mBootEndLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_implementedDriverAST::setter_setMStartupLocation (GALGAS_location inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    p->mProperty_mStartupLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_implementedDriverAST::setter_setMStartupInstructionList (GALGAS_instructionListAST inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    p->mProperty_mStartupInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_implementedDriverAST::setter_setMStartupEndLocation (GALGAS_location inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    p->mProperty_mStartupEndLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_implementedDriverAST::readProperty_mDriverName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    return p->mProperty_mDriverName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_implementedDriverAST::readProperty_mDriverDependanceList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    return p->mProperty_mDriverDependanceList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_implementedDriverAST::readProperty_mIsInstancied (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    return p->mProperty_mIsInstancied ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_implementedDriverAST::readProperty_mBootLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    return p->mProperty_mBootLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instructionListAST GALGAS_implementedDriverAST::readProperty_mBootInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_instructionListAST () ;
  }else{
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    return p->mProperty_mBootInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_implementedDriverAST::readProperty_mBootEndLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    return p->mProperty_mBootEndLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_implementedDriverAST::readProperty_mStartupLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    return p->mProperty_mStartupLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instructionListAST GALGAS_implementedDriverAST::readProperty_mStartupInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_instructionListAST () ;
  }else{
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    return p->mProperty_mStartupInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_implementedDriverAST::readProperty_mStartupEndLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    return p->mProperty_mStartupEndLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @implementedDriverAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_implementedDriverAST::cPtr_implementedDriverAST (const GALGAS_lstring & in_mDriverName,
                                                      const GALGAS_lstringlist & in_mDriverDependanceList,
                                                      const GALGAS_bool & in_mIsInstancied,
                                                      const GALGAS_location & in_mBootLocation,
                                                      const GALGAS_instructionListAST & in_mBootInstructionList,
                                                      const GALGAS_location & in_mBootEndLocation,
                                                      const GALGAS_location & in_mStartupLocation,
                                                      const GALGAS_instructionListAST & in_mStartupInstructionList,
                                                      const GALGAS_location & in_mStartupEndLocation
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mDriverName (in_mDriverName),
mProperty_mDriverDependanceList (in_mDriverDependanceList),
mProperty_mIsInstancied (in_mIsInstancied),
mProperty_mBootLocation (in_mBootLocation),
mProperty_mBootInstructionList (in_mBootInstructionList),
mProperty_mBootEndLocation (in_mBootEndLocation),
mProperty_mStartupLocation (in_mStartupLocation),
mProperty_mStartupInstructionList (in_mStartupInstructionList),
mProperty_mStartupEndLocation (in_mStartupEndLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_implementedDriverAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implementedDriverAST ;
}

void cPtr_implementedDriverAST::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@implementedDriverAST:" ;
  mProperty_mDriverName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDriverDependanceList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsInstancied.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBootLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBootInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBootEndLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStartupLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStartupInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStartupEndLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_implementedDriverAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_implementedDriverAST (mProperty_mDriverName, mProperty_mDriverDependanceList, mProperty_mIsInstancied, mProperty_mBootLocation, mProperty_mBootInstructionList, mProperty_mBootEndLocation, mProperty_mStartupLocation, mProperty_mStartupInstructionList, mProperty_mStartupEndLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@implementedDriverAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_implementedDriverAST ("implementedDriverAST",
                                             & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_implementedDriverAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implementedDriverAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_implementedDriverAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_implementedDriverAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_implementedDriverAST GALGAS_implementedDriverAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_implementedDriverAST result ;
  const GALGAS_implementedDriverAST * p = (const GALGAS_implementedDriverAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_implementedDriverAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("implementedDriverAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_implementedDriverAST_2D_weak::objectCompare (const GALGAS_implementedDriverAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_implementedDriverAST_2D_weak::GALGAS_implementedDriverAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_implementedDriverAST_2D_weak & GALGAS_implementedDriverAST_2D_weak::operator = (const GALGAS_implementedDriverAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_implementedDriverAST_2D_weak::GALGAS_implementedDriverAST_2D_weak (const GALGAS_implementedDriverAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_implementedDriverAST_2D_weak GALGAS_implementedDriverAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_implementedDriverAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_implementedDriverAST GALGAS_implementedDriverAST_2D_weak::bang_implementedDriverAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_implementedDriverAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_implementedDriverAST) ;
      result = GALGAS_implementedDriverAST ((cPtr_implementedDriverAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@implementedDriverAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_implementedDriverAST_2D_weak ("implementedDriverAST-weak",
                                                     & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_implementedDriverAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implementedDriverAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_implementedDriverAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_implementedDriverAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_implementedDriverAST_2D_weak GALGAS_implementedDriverAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_implementedDriverAST_2D_weak result ;
  const GALGAS_implementedDriverAST_2D_weak * p = (const GALGAS_implementedDriverAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_implementedDriverAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("implementedDriverAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @decoratedRequiredDriver reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_decoratedRequiredDriver::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_decoratedRequiredDriver * p = (const cPtr_decoratedRequiredDriver *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_decoratedRequiredDriver) ;
  if (kOperandEqual == result) {
    result = mProperty_mDriverName.objectCompare (p->mProperty_mDriverName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_decoratedRequiredDriver::objectCompare (const GALGAS_decoratedRequiredDriver & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedRequiredDriver::GALGAS_decoratedRequiredDriver (void) :
GALGAS_abstractDecoratedDeclaration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedRequiredDriver GALGAS_decoratedRequiredDriver::constructor_default (LOCATION_ARGS) {
  return GALGAS_decoratedRequiredDriver::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                          COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedRequiredDriver::GALGAS_decoratedRequiredDriver (const cPtr_decoratedRequiredDriver * inSourcePtr) :
GALGAS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedRequiredDriver) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedRequiredDriver GALGAS_decoratedRequiredDriver::constructor_new (const GALGAS_lstring & inAttribute_mDriverName
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_decoratedRequiredDriver result ;
  if (inAttribute_mDriverName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_decoratedRequiredDriver (inAttribute_mDriverName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedRequiredDriver::setter_setMDriverName (GALGAS_lstring inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_decoratedRequiredDriver * p = (cPtr_decoratedRequiredDriver *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedRequiredDriver) ;
    p->mProperty_mDriverName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_decoratedRequiredDriver::readProperty_mDriverName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_decoratedRequiredDriver * p = (cPtr_decoratedRequiredDriver *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedRequiredDriver) ;
    return p->mProperty_mDriverName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @decoratedRequiredDriver class
//----------------------------------------------------------------------------------------------------------------------

cPtr_decoratedRequiredDriver::cPtr_decoratedRequiredDriver (const GALGAS_lstring & in_mDriverName
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (THERE),
mProperty_mDriverName (in_mDriverName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_decoratedRequiredDriver::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedRequiredDriver ;
}

void cPtr_decoratedRequiredDriver::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@decoratedRequiredDriver:" ;
  mProperty_mDriverName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_decoratedRequiredDriver::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_decoratedRequiredDriver (mProperty_mDriverName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@decoratedRequiredDriver type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedRequiredDriver ("decoratedRequiredDriver",
                                                & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedRequiredDriver::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedRequiredDriver ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedRequiredDriver::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedRequiredDriver (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedRequiredDriver GALGAS_decoratedRequiredDriver::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_decoratedRequiredDriver result ;
  const GALGAS_decoratedRequiredDriver * p = (const GALGAS_decoratedRequiredDriver *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedRequiredDriver *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedRequiredDriver", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_decoratedRequiredDriver_2D_weak::objectCompare (const GALGAS_decoratedRequiredDriver_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedRequiredDriver_2D_weak::GALGAS_decoratedRequiredDriver_2D_weak (void) :
GALGAS_abstractDecoratedDeclaration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedRequiredDriver_2D_weak & GALGAS_decoratedRequiredDriver_2D_weak::operator = (const GALGAS_decoratedRequiredDriver & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedRequiredDriver_2D_weak::GALGAS_decoratedRequiredDriver_2D_weak (const GALGAS_decoratedRequiredDriver & inSource) :
GALGAS_abstractDecoratedDeclaration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedRequiredDriver_2D_weak GALGAS_decoratedRequiredDriver_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_decoratedRequiredDriver_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedRequiredDriver GALGAS_decoratedRequiredDriver_2D_weak::bang_decoratedRequiredDriver_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedRequiredDriver result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_decoratedRequiredDriver) ;
      result = GALGAS_decoratedRequiredDriver ((cPtr_decoratedRequiredDriver *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@decoratedRequiredDriver-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedRequiredDriver_2D_weak ("decoratedRequiredDriver-weak",
                                                        & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedRequiredDriver_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedRequiredDriver_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedRequiredDriver_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedRequiredDriver_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedRequiredDriver_2D_weak GALGAS_decoratedRequiredDriver_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_decoratedRequiredDriver_2D_weak result ;
  const GALGAS_decoratedRequiredDriver_2D_weak * p = (const GALGAS_decoratedRequiredDriver_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedRequiredDriver_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedRequiredDriver-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverListIR_2D_element::GALGAS_driverListIR_2D_element (void) :
mProperty_mDriverName (),
mProperty_mType (),
mProperty_mInitialValueList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverListIR_2D_element::~ GALGAS_driverListIR_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverListIR_2D_element::GALGAS_driverListIR_2D_element (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_omnibusType & inOperand1,
                                                                const GALGAS_operandIRList & inOperand2) :
mProperty_mDriverName (inOperand0),
mProperty_mType (inOperand1),
mProperty_mInitialValueList (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverListIR_2D_element GALGAS_driverListIR_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_driverListIR_2D_element (GALGAS_lstring::constructor_default (HERE),
                                         GALGAS_omnibusType::constructor_default (HERE),
                                         GALGAS_operandIRList::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverListIR_2D_element GALGAS_driverListIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_omnibusType & inOperand1,
                                                                                const GALGAS_operandIRList & inOperand2 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_driverListIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_driverListIR_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_driverListIR_2D_element::objectCompare (const GALGAS_driverListIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mDriverName.objectCompare (inOperand.mProperty_mDriverName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInitialValueList.objectCompare (inOperand.mProperty_mInitialValueList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_driverListIR_2D_element::isValid (void) const {
  return mProperty_mDriverName.isValid () && mProperty_mType.isValid () && mProperty_mInitialValueList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverListIR_2D_element::drop (void) {
  mProperty_mDriverName.drop () ;
  mProperty_mType.drop () ;
  mProperty_mInitialValueList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_driverListIR_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @driverListIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mDriverName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInitialValueList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@driverListIR-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_driverListIR_2D_element ("driverListIR-element",
                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_driverListIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverListIR_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_driverListIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_driverListIR_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_driverListIR_2D_element GALGAS_driverListIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_driverListIR_2D_element result ;
  const GALGAS_driverListIR_2D_element * p = (const GALGAS_driverListIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_driverListIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverListIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @staticListAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_staticListAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_staticListAST * p = (const cPtr_staticListAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_staticListAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mStaticListName.objectCompare (p->mProperty_mStaticListName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyList.objectCompare (p->mProperty_mPropertyList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mValueList.objectCompare (p->mProperty_mValueList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_staticListAST::objectCompare (const GALGAS_staticListAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListAST::GALGAS_staticListAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListAST GALGAS_staticListAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_staticListAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                GALGAS_staticListPropertyListAST::constructor_emptyList (HERE),
                                                GALGAS_staticListValueListAST::constructor_emptyList (HERE)
                                                COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListAST::GALGAS_staticListAST (const cPtr_staticListAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_staticListAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListAST GALGAS_staticListAST::constructor_new (const GALGAS_lstring & inAttribute_mStaticListName,
                                                            const GALGAS_staticListPropertyListAST & inAttribute_mPropertyList,
                                                            const GALGAS_staticListValueListAST & inAttribute_mValueList
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_staticListAST result ;
  if (inAttribute_mStaticListName.isValid () && inAttribute_mPropertyList.isValid () && inAttribute_mValueList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_staticListAST (inAttribute_mStaticListName, inAttribute_mPropertyList, inAttribute_mValueList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_staticListAST::setter_setMStaticListName (GALGAS_lstring inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_staticListAST * p = (cPtr_staticListAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListAST) ;
    p->mProperty_mStaticListName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_staticListAST::setter_setMPropertyList (GALGAS_staticListPropertyListAST inValue
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_staticListAST * p = (cPtr_staticListAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListAST) ;
    p->mProperty_mPropertyList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_staticListAST::setter_setMValueList (GALGAS_staticListValueListAST inValue
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_staticListAST * p = (cPtr_staticListAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListAST) ;
    p->mProperty_mValueList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_staticListAST::readProperty_mStaticListName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_staticListAST * p = (cPtr_staticListAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListAST) ;
    return p->mProperty_mStaticListName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyListAST GALGAS_staticListAST::readProperty_mPropertyList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_staticListPropertyListAST () ;
  }else{
    cPtr_staticListAST * p = (cPtr_staticListAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListAST) ;
    return p->mProperty_mPropertyList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListValueListAST GALGAS_staticListAST::readProperty_mValueList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_staticListValueListAST () ;
  }else{
    cPtr_staticListAST * p = (cPtr_staticListAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListAST) ;
    return p->mProperty_mValueList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @staticListAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_staticListAST::cPtr_staticListAST (const GALGAS_lstring & in_mStaticListName,
                                        const GALGAS_staticListPropertyListAST & in_mPropertyList,
                                        const GALGAS_staticListValueListAST & in_mValueList
                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mStaticListName (in_mStaticListName),
mProperty_mPropertyList (in_mPropertyList),
mProperty_mValueList (in_mValueList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_staticListAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListAST ;
}

void cPtr_staticListAST::description (C_String & ioString,
                                      const int32_t inIndentation) const {
  ioString << "[@staticListAST:" ;
  mProperty_mStaticListName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPropertyList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mValueList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_staticListAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_staticListAST (mProperty_mStaticListName, mProperty_mPropertyList, mProperty_mValueList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@staticListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticListAST ("staticListAST",
                                      & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_staticListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_staticListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListAST GALGAS_staticListAST::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_staticListAST result ;
  const GALGAS_staticListAST * p = (const GALGAS_staticListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_staticListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

