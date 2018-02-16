#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-6.h"


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

static const char * gNonTerminalNames_plm_target_grammar [14] = {
  "<configuration_key>",// Index 0
  "<python_utility_tool_list>",// Index 1
  "<configuration_start_symbol>",// Index 2
  "<interruptConfigList>",// Index 3
  "<select_plm_5F_target_5F_specific_5F_syntax_0>",// Index 4
  "<select_plm_5F_target_5F_specific_5F_syntax_1>",// Index 5
  "<select_plm_5F_target_5F_specific_5F_syntax_2>",// Index 6
  "<select_plm_5F_target_5F_specific_5F_syntax_3>",// Index 7
  "<select_plm_5F_target_5F_specific_5F_syntax_4>",// Index 8
  "<select_plm_5F_target_5F_specific_5F_syntax_5>",// Index 9
  "<select_plm_5F_target_5F_specific_5F_syntax_6>",// Index 10
  "<select_plm_5F_target_5F_specific_5F_syntax_7>",// Index 11
  "<select_plm_5F_target_5F_specific_5F_syntax_8>",// Index 12
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

static const int16_t gActionTable_plm_target_grammar [] = {
// State S0 (index = 0)
  C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S1 (index = 3)
, C_Lexique_plm_5F_lexique::kToken__3A_, SHIFT (5)
, END
// State S2 (index = 6)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (4)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (6)
, END
// State S3 (index = 11)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S4 (index = 14)
, C_Lexique_plm_5F_lexique::kToken_, ACCEPT
, END
// State S5 (index = 17)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (0)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, REDUCE (0)
, C_Lexique_plm_5F_lexique::kToken__24_type, REDUCE (0)
, C_Lexique_plm_5F_lexique::kToken_integer, REDUCE (0)
, C_Lexique_plm_5F_lexique::kToken_yes, REDUCE (0)
, C_Lexique_plm_5F_lexique::kToken_no, REDUCE (0)
, C_Lexique_plm_5F_lexique::kToken_, REDUCE (0)
, END
// State S6 (index = 32)
, C_Lexique_plm_5F_lexique::kToken__2D__3E_, SHIFT (9)
, END
// State S7 (index = 35)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (1)
, END
// State S8 (index = 38)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (10)
, END
// State S9 (index = 41)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (11)
, END
// State S10 (index = 44)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S11 (index = 47)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (4)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (6)
, END
// State S12 (index = 52)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (14)
, END
// State S13 (index = 55)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (5)
, END
// State S14 (index = 58)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S15 (index = 61)
, C_Lexique_plm_5F_lexique::kToken__24_type, SHIFT (16)
, END
// State S16 (index = 64)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S17 (index = 67)
, C_Lexique_plm_5F_lexique::kToken__24_type, SHIFT (18)
, END
// State S18 (index = 70)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S19 (index = 73)
, C_Lexique_plm_5F_lexique::kToken_integer, SHIFT (20)
, END
// State S20 (index = 76)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S21 (index = 79)
, C_Lexique_plm_5F_lexique::kToken_yes, SHIFT (22)
, C_Lexique_plm_5F_lexique::kToken_no, SHIFT (23)
, END
// State S22 (index = 84)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (6)
, END
// State S23 (index = 87)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (7)
, END
// State S24 (index = 90)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S25 (index = 93)
, C_Lexique_plm_5F_lexique::kToken_integer, SHIFT (26)
, END
// State S26 (index = 96)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S27 (index = 99)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (28)
, END
// State S28 (index = 102)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S29 (index = 105)
, C_Lexique_plm_5F_lexique::kToken_integer, SHIFT (30)
, C_Lexique_plm_5F_lexique::kToken_no, SHIFT (31)
, END
// State S30 (index = 110)
, C_Lexique_plm_5F_lexique::kToken_integer, SHIFT (33)
, END
// State S31 (index = 113)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (8)
, END
// State S32 (index = 116)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S33 (index = 119)
, C_Lexique_plm_5F_lexique::kToken_integer, SHIFT (35)
, END
// State S34 (index = 122)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (36)
, END
// State S35 (index = 125)
, C_Lexique_plm_5F_lexique::kToken_integer, SHIFT (37)
, END
// State S36 (index = 128)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S37 (index = 131)
, C_Lexique_plm_5F_lexique::kToken_integer, SHIFT (39)
, END
// State S38 (index = 134)
, C_Lexique_plm_5F_lexique::kToken_integer, SHIFT (40)
, END
// State S39 (index = 137)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (9)
, END
// State S40 (index = 140)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S41 (index = 143)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (42)
, END
// State S42 (index = 146)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S43 (index = 149)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (44)
, END
// State S44 (index = 152)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S45 (index = 155)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (46)
, END
// State S46 (index = 158)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S47 (index = 161)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (48)
, END
// State S48 (index = 164)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S49 (index = 167)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (50)
, END
// State S50 (index = 170)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S51 (index = 173)
, C_Lexique_plm_5F_lexique::kToken_integer, SHIFT (52)
, END
// State S52 (index = 176)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S53 (index = 179)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (54)
, END
// State S54 (index = 182)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S55 (index = 185)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (56)
, END
// State S56 (index = 188)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S57 (index = 191)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (58)
, END
// State S58 (index = 194)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S59 (index = 197)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (60)
, END
// State S60 (index = 200)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S61 (index = 203)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (62)
, END
// State S62 (index = 206)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S63 (index = 209)
, C_Lexique_plm_5F_lexique::kToken_integer, SHIFT (64)
, END
// State S64 (index = 212)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S65 (index = 215)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (66)
, END
// State S66 (index = 218)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S67 (index = 221)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (10)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (68)
, END
// State S68 (index = 226)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (10)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (68)
, END
// State S69 (index = 231)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S70 (index = 234)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (11)
, END
// State S71 (index = 237)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (12)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (72)
, END
// State S72 (index = 242)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (12)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (72)
, END
// State S73 (index = 247)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S74 (index = 250)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (13)
, END
// State S75 (index = 253)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (14)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (76)
, END
// State S76 (index = 258)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (14)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (76)
, END
// State S77 (index = 263)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S78 (index = 266)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (15)
, END
// State S79 (index = 269)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (16)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (80)
, END
// State S80 (index = 274)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (16)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (80)
, END
// State S81 (index = 279)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S82 (index = 282)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (17)
, END
// State S83 (index = 285)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (85)
, C_Lexique_plm_5F_lexique::kToken_, REDUCE (18)
, END
// State S84 (index = 290)
, C_Lexique_plm_5F_lexique::kToken_, REDUCE (2)
, END
// State S85 (index = 293)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (20)
, C_Lexique_plm_5F_lexique::kToken__2D__3E_, SHIFT (87)
, C_Lexique_plm_5F_lexique::kToken_, REDUCE (20)
, END
// State S86 (index = 300)
, C_Lexique_plm_5F_lexique::kToken_, REDUCE (3)
, END
// State S87 (index = 303)
, C_Lexique_plm_5F_lexique::kToken_integer, SHIFT (89)
, END
// State S88 (index = 306)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (85)
, C_Lexique_plm_5F_lexique::kToken_, REDUCE (18)
, END
// State S89 (index = 311)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (21)
, C_Lexique_plm_5F_lexique::kToken_, REDUCE (21)
, END
// State S90 (index = 316)
, C_Lexique_plm_5F_lexique::kToken_, REDUCE (19)
, END} ;

static const uint32_t gActionTableIndex_plm_target_grammar [91] = {
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

static const int16_t gSuccessorTable_plm_target_grammar_0 [7] = {0, 2,
  1, 3,
  2, 4, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_2 [3] = {4, 7, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_3 [3] = {0, 8, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_10 [3] = {0, 12, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_11 [3] = {4, 13, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_14 [3] = {0, 15, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_16 [3] = {0, 17, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_18 [3] = {0, 19, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_20 [3] = {0, 21, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_21 [3] = {5, 24, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_24 [3] = {0, 25, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_26 [3] = {0, 27, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_28 [3] = {0, 29, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_29 [3] = {6, 32, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_32 [3] = {0, 34, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_36 [3] = {0, 38, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_40 [3] = {0, 41, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_42 [3] = {0, 43, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_44 [3] = {0, 45, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_46 [3] = {0, 47, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_48 [3] = {0, 49, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_50 [3] = {0, 51, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_52 [3] = {0, 53, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_54 [3] = {0, 55, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_56 [3] = {0, 57, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_58 [3] = {0, 59, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_60 [3] = {0, 61, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_62 [3] = {0, 63, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_64 [3] = {0, 65, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_66 [3] = {0, 67, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_67 [3] = {7, 69, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_68 [3] = {7, 70, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_69 [3] = {0, 71, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_71 [3] = {8, 73, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_72 [3] = {8, 74, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_73 [3] = {0, 75, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_75 [3] = {9, 77, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_76 [3] = {9, 78, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_77 [3] = {0, 79, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_79 [3] = {10, 81, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_80 [3] = {10, 82, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_81 [5] = {0, 83,
  3, 84, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_83 [3] = {11, 86, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_85 [3] = {12, 88, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_88 [3] = {11, 90, -1} ;

static const int16_t * gSuccessorTable_plm_target_grammar [91] = {
gSuccessorTable_plm_target_grammar_0, NULL, gSuccessorTable_plm_target_grammar_2, gSuccessorTable_plm_target_grammar_3, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_plm_target_grammar_10, gSuccessorTable_plm_target_grammar_11, 
  NULL, NULL, gSuccessorTable_plm_target_grammar_14, NULL, 
  gSuccessorTable_plm_target_grammar_16, NULL, gSuccessorTable_plm_target_grammar_18, NULL, 
  gSuccessorTable_plm_target_grammar_20, gSuccessorTable_plm_target_grammar_21, NULL, NULL, 
  gSuccessorTable_plm_target_grammar_24, NULL, gSuccessorTable_plm_target_grammar_26, NULL, 
  gSuccessorTable_plm_target_grammar_28, gSuccessorTable_plm_target_grammar_29, NULL, NULL, 
  gSuccessorTable_plm_target_grammar_32, NULL, NULL, NULL, 
  gSuccessorTable_plm_target_grammar_36, NULL, NULL, NULL, 
  gSuccessorTable_plm_target_grammar_40, NULL, gSuccessorTable_plm_target_grammar_42, NULL, 
  gSuccessorTable_plm_target_grammar_44, NULL, gSuccessorTable_plm_target_grammar_46, NULL, 
  gSuccessorTable_plm_target_grammar_48, NULL, gSuccessorTable_plm_target_grammar_50, NULL, 
  gSuccessorTable_plm_target_grammar_52, NULL, gSuccessorTable_plm_target_grammar_54, NULL, 
  gSuccessorTable_plm_target_grammar_56, NULL, gSuccessorTable_plm_target_grammar_58, NULL, 
  gSuccessorTable_plm_target_grammar_60, NULL, gSuccessorTable_plm_target_grammar_62, NULL, 
  gSuccessorTable_plm_target_grammar_64, NULL, gSuccessorTable_plm_target_grammar_66, gSuccessorTable_plm_target_grammar_67, 
  gSuccessorTable_plm_target_grammar_68, gSuccessorTable_plm_target_grammar_69, NULL, gSuccessorTable_plm_target_grammar_71, 
  gSuccessorTable_plm_target_grammar_72, gSuccessorTable_plm_target_grammar_73, NULL, gSuccessorTable_plm_target_grammar_75, 
  gSuccessorTable_plm_target_grammar_76, gSuccessorTable_plm_target_grammar_77, NULL, gSuccessorTable_plm_target_grammar_79, 
  gSuccessorTable_plm_target_grammar_80, gSuccessorTable_plm_target_grammar_81, NULL, gSuccessorTable_plm_target_grammar_83, 
  NULL, gSuccessorTable_plm_target_grammar_85, NULL, NULL, 
  gSuccessorTable_plm_target_grammar_88, NULL, NULL} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                          Production rules infos (left non terminal, size of right string)                            
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gProductionsTable_plm_target_grammar [23 * 2] = {
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

void cGrammar_plm_5F_target_5F_grammar::nt_configuration_5F_key_parse (C_Lexique_plm_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 0 :
      rule_plm_5F_target_5F_specific_5F_syntax_configuration_5F_key_i0_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_plm_5F_target_5F_grammar::nt_configuration_5F_key_ (const GALGAS_string  parameter_1,
                                C_Lexique_plm_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 0 :
      rule_plm_5F_target_5F_specific_5F_syntax_configuration_5F_key_i0_(parameter_1, inLexique) ;
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

void cGrammar_plm_5F_target_5F_grammar::nt_python_5F_utility_5F_tool_5F_list_parse (C_Lexique_plm_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
      rule_plm_5F_target_5F_specific_5F_syntax_python_5F_utility_5F_tool_5F_list_i1_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_plm_5F_target_5F_grammar::nt_python_5F_utility_5F_tool_5F_list_ (GALGAS__32_lstringlist &  parameter_1,
                                C_Lexique_plm_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
      rule_plm_5F_target_5F_specific_5F_syntax_python_5F_utility_5F_tool_5F_list_i1_(parameter_1, inLexique) ;
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

void cGrammar_plm_5F_target_5F_grammar::nt_configuration_5F_start_5F_symbol_parse (C_Lexique_plm_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 2 :
      rule_plm_5F_target_5F_specific_5F_syntax_configuration_5F_start_5F_symbol_i2_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_plm_5F_target_5F_grammar::nt_configuration_5F_start_5F_symbol_ (GALGAS_ast &  parameter_1,
                                GALGAS_lstringlist &  parameter_2,
                                GALGAS_location &  parameter_3,
                                C_Lexique_plm_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 2 :
      rule_plm_5F_target_5F_specific_5F_syntax_configuration_5F_start_5F_symbol_i2_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_plm_5F_target_5F_grammar::performIndexing (C_Compiler * /* inCompiler */,
             const C_String & /* inSourceFilePath */) {
}

void cGrammar_plm_5F_target_5F_grammar::performOnlyLexicalAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_plm_5F_lexique * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_plm_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_plm_5F_target_5F_grammar::performOnlySyntaxAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_plm_5F_lexique * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_plm_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performBottomUpParsing (gActionTable_plm_target_grammar, gNonTerminalNames_plm_target_grammar,
                                     gActionTableIndex_plm_target_grammar, gSuccessorTable_plm_target_grammar,
                                     gProductionsTable_plm_target_grammar) ;
  }
  macroDetachSharedObject (scanner) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                        Grammar start symbol implementation                                           
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_plm_5F_target_5F_grammar::_performSourceFileParsing_ (C_Compiler * inCompiler,
                                GALGAS_lstring inFilePath,
                                GALGAS_ast &  parameter_1,
                                GALGAS_lstringlist &  parameter_2,
                                GALGAS_location &  parameter_3
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GALGAS_string filePathAsString = inFilePath.getter_string (HERE) ;
    C_String filePath = filePathAsString.stringValue () ;
    if (! C_FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().stringByDeletingLastPathComponent ().stringByAppendingPathComponent (filePath) ;
    }
    if (C_FileManager::fileExistsAtPath (filePath)) {
      C_Lexique_plm_5F_lexique * scanner = NULL ;
      macroMyNew (scanner, C_Lexique_plm_5F_lexique (inCompiler, filePath COMMA_HERE)) ;
      if (scanner->sourceText ().isValid ()) {
        const bool ok = scanner->performBottomUpParsing (gActionTable_plm_target_grammar, gNonTerminalNames_plm_target_grammar,
                                                         gActionTableIndex_plm_target_grammar, gSuccessorTable_plm_target_grammar,
                                                         gProductionsTable_plm_target_grammar) ;
        if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
          cGrammar_plm_5F_target_5F_grammar grammar ;
          grammar.nt_configuration_5F_start_5F_symbol_ (parameter_1, parameter_2, parameter_3, scanner) ;
        }
      }else{
        C_String message ;
        message << "the '" << filePath << "' file exists, but cannot be read" ;
        const GALGAS_location errorLocation (inFilePath.getter_location (THERE)) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      C_String message ;
      message << "the '" << filePath << "' file does not exist" ;
      const GALGAS_location errorLocation (inFilePath.getter_location (THERE)) ;
      inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_plm_5F_target_5F_grammar::_performSourceStringParsing_ (C_Compiler * inCompiler,
                                GALGAS_string inSourceString,
                                GALGAS_string inNameString,
                                GALGAS_ast &  parameter_1,
                                GALGAS_lstringlist &  parameter_2,
                                GALGAS_location &  parameter_3
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inSourceString.isValid () && inNameString.isValid ()) {
    const C_String sourceString = inSourceString.stringValue () ;
    const C_String nameString = inNameString.stringValue () ;
    C_Lexique_plm_5F_lexique * scanner = NULL ;
    macroMyNew (scanner, C_Lexique_plm_5F_lexique (inCompiler, sourceString, nameString COMMA_HERE)) ;
    if (scanner->sourceText ().isValid ()) {
      const bool ok = scanner->performBottomUpParsing (gActionTable_plm_target_grammar, gNonTerminalNames_plm_target_grammar,
                                                       gActionTableIndex_plm_target_grammar, gSuccessorTable_plm_target_grammar,
                                                       gProductionsTable_plm_target_grammar) ;
      if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
        cGrammar_plm_5F_target_5F_grammar grammar ;
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

void cGrammar_plm_5F_target_5F_grammar::nt_interruptConfigList_parse (C_Lexique_plm_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 3 :
      rule_plm_5F_target_5F_specific_5F_syntax_interruptConfigList_i3_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_plm_5F_target_5F_grammar::nt_interruptConfigList_ (GALGAS_interruptionConfigurationList &  parameter_1,
                                GALGAS_enumerationConstantList &  parameter_2,
                                C_Lexique_plm_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 3 :
      rule_plm_5F_target_5F_specific_5F_syntax_interruptConfigList_i3_(parameter_1, parameter_2, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_plm_5F_target_5F_specific_5F_syntax_0' non terminal implementation                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_plm_5F_target_5F_grammar::select_plm_5F_target_5F_specific_5F_syntax_0 (C_Lexique_plm_5F_lexique * inLexique) {
// Productions numbers : 4 5
  return inLexique->nextProductionIndex () - 3 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_plm_5F_target_5F_specific_5F_syntax_1' non terminal implementation                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_plm_5F_target_5F_grammar::select_plm_5F_target_5F_specific_5F_syntax_1 (C_Lexique_plm_5F_lexique * inLexique) {
// Productions numbers : 6 7
  return inLexique->nextProductionIndex () - 5 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_plm_5F_target_5F_specific_5F_syntax_2' non terminal implementation                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_plm_5F_target_5F_grammar::select_plm_5F_target_5F_specific_5F_syntax_2 (C_Lexique_plm_5F_lexique * inLexique) {
// Productions numbers : 8 9
  return inLexique->nextProductionIndex () - 7 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_plm_5F_target_5F_specific_5F_syntax_3' non terminal implementation                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_plm_5F_target_5F_grammar::select_plm_5F_target_5F_specific_5F_syntax_3 (C_Lexique_plm_5F_lexique * inLexique) {
// Productions numbers : 10 11
  return inLexique->nextProductionIndex () - 9 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_plm_5F_target_5F_specific_5F_syntax_4' non terminal implementation                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_plm_5F_target_5F_grammar::select_plm_5F_target_5F_specific_5F_syntax_4 (C_Lexique_plm_5F_lexique * inLexique) {
// Productions numbers : 12 13
  return inLexique->nextProductionIndex () - 11 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_plm_5F_target_5F_specific_5F_syntax_5' non terminal implementation                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_plm_5F_target_5F_grammar::select_plm_5F_target_5F_specific_5F_syntax_5 (C_Lexique_plm_5F_lexique * inLexique) {
// Productions numbers : 14 15
  return inLexique->nextProductionIndex () - 13 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_plm_5F_target_5F_specific_5F_syntax_6' non terminal implementation                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_plm_5F_target_5F_grammar::select_plm_5F_target_5F_specific_5F_syntax_6 (C_Lexique_plm_5F_lexique * inLexique) {
// Productions numbers : 16 17
  return inLexique->nextProductionIndex () - 15 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_plm_5F_target_5F_specific_5F_syntax_7' non terminal implementation                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_plm_5F_target_5F_grammar::select_plm_5F_target_5F_specific_5F_syntax_7 (C_Lexique_plm_5F_lexique * inLexique) {
// Productions numbers : 18 19
  return inLexique->nextProductionIndex () - 17 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_plm_5F_target_5F_specific_5F_syntax_8' non terminal implementation                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_plm_5F_target_5F_grammar::select_plm_5F_target_5F_specific_5F_syntax_8 (C_Lexique_plm_5F_lexique * inLexique) {
// Productions numbers : 20 21
  return inLexique->nextProductionIndex () - 19 ;
}

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_newTypeDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_newTypeDeclaration * p = (const cPtr_newTypeDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_newTypeDeclaration) ;
  if (kOperandEqual == result) {
    result = mProperty_mAliasTypeName.objectCompare (p->mProperty_mAliasTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOriginalTypeName.objectCompare (p->mProperty_mOriginalTypeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_newTypeDeclaration::objectCompare (const GALGAS_newTypeDeclaration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_newTypeDeclaration::GALGAS_newTypeDeclaration (void) :
GALGAS_abstractDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_newTypeDeclaration GALGAS_newTypeDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_newTypeDeclaration::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE)
                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_newTypeDeclaration::GALGAS_newTypeDeclaration (const cPtr_newTypeDeclaration * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_newTypeDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_newTypeDeclaration GALGAS_newTypeDeclaration::constructor_new (const GALGAS_lstring & inAttribute_mAliasTypeName,
                                                                      const GALGAS_lstring & inAttribute_mOriginalTypeName
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_newTypeDeclaration result ;
  if (inAttribute_mAliasTypeName.isValid () && inAttribute_mOriginalTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_newTypeDeclaration (inAttribute_mAliasTypeName, inAttribute_mOriginalTypeName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_newTypeDeclaration::getter_mAliasTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_newTypeDeclaration * p = (const cPtr_newTypeDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_newTypeDeclaration) ;
    result = p->mProperty_mAliasTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_newTypeDeclaration::getter_mAliasTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAliasTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_newTypeDeclaration::getter_mOriginalTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_newTypeDeclaration * p = (const cPtr_newTypeDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_newTypeDeclaration) ;
    result = p->mProperty_mOriginalTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_newTypeDeclaration::getter_mOriginalTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOriginalTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @newTypeDeclaration class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_newTypeDeclaration::cPtr_newTypeDeclaration (const GALGAS_lstring & in_mAliasTypeName,
                                                  const GALGAS_lstring & in_mOriginalTypeName
                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mAliasTypeName (in_mAliasTypeName),
mProperty_mOriginalTypeName (in_mOriginalTypeName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_newTypeDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_newTypeDeclaration ;
}

void cPtr_newTypeDeclaration::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@newTypeDeclaration:" ;
  mProperty_mAliasTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOriginalTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_newTypeDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_newTypeDeclaration (mProperty_mAliasTypeName, mProperty_mOriginalTypeName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @newTypeDeclaration type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_newTypeDeclaration ("newTypeDeclaration",
                                           & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_newTypeDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_newTypeDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_newTypeDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_newTypeDeclaration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_newTypeDeclaration GALGAS_newTypeDeclaration::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_newTypeDeclaration result ;
  const GALGAS_newTypeDeclaration * p = (const GALGAS_newTypeDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_newTypeDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("newTypeDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_typeArrayDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_typeArrayDeclarationAST * p = (const cPtr_typeArrayDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_typeArrayDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mAnonymousArrayTypeName.objectCompare (p->mProperty_mAnonymousArrayTypeName) ;
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

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_typeArrayDeclarationAST::objectCompare (const GALGAS_typeArrayDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeArrayDeclarationAST::GALGAS_typeArrayDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeArrayDeclarationAST::GALGAS_typeArrayDeclarationAST (const cPtr_typeArrayDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typeArrayDeclarationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeArrayDeclarationAST GALGAS_typeArrayDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mAnonymousArrayTypeName,
                                                                                const GALGAS_lstring & inAttribute_mElementTypeName,
                                                                                const GALGAS_expressionAST & inAttribute_mSizeExpression,
                                                                                const GALGAS_location & inAttribute_mSizeExpressionLocation
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_typeArrayDeclarationAST result ;
  if (inAttribute_mAnonymousArrayTypeName.isValid () && inAttribute_mElementTypeName.isValid () && inAttribute_mSizeExpression.isValid () && inAttribute_mSizeExpressionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_typeArrayDeclarationAST (inAttribute_mAnonymousArrayTypeName, inAttribute_mElementTypeName, inAttribute_mSizeExpression, inAttribute_mSizeExpressionLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_typeArrayDeclarationAST::getter_mAnonymousArrayTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_typeArrayDeclarationAST * p = (const cPtr_typeArrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeArrayDeclarationAST) ;
    result = p->mProperty_mAnonymousArrayTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_typeArrayDeclarationAST::getter_mAnonymousArrayTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAnonymousArrayTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_typeArrayDeclarationAST::getter_mElementTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_typeArrayDeclarationAST * p = (const cPtr_typeArrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeArrayDeclarationAST) ;
    result = p->mProperty_mElementTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_typeArrayDeclarationAST::getter_mElementTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElementTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_typeArrayDeclarationAST::getter_mSizeExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_typeArrayDeclarationAST * p = (const cPtr_typeArrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeArrayDeclarationAST) ;
    result = p->mProperty_mSizeExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_typeArrayDeclarationAST::getter_mSizeExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSizeExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_typeArrayDeclarationAST::getter_mSizeExpressionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_typeArrayDeclarationAST * p = (const cPtr_typeArrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeArrayDeclarationAST) ;
    result = p->mProperty_mSizeExpressionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_typeArrayDeclarationAST::getter_mSizeExpressionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSizeExpressionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @typeArrayDeclarationAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_typeArrayDeclarationAST::cPtr_typeArrayDeclarationAST (const GALGAS_lstring & in_mAnonymousArrayTypeName,
                                                            const GALGAS_lstring & in_mElementTypeName,
                                                            const GALGAS_expressionAST & in_mSizeExpression,
                                                            const GALGAS_location & in_mSizeExpressionLocation
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mAnonymousArrayTypeName (in_mAnonymousArrayTypeName),
mProperty_mElementTypeName (in_mElementTypeName),
mProperty_mSizeExpression (in_mSizeExpression),
mProperty_mSizeExpressionLocation (in_mSizeExpressionLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_typeArrayDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeArrayDeclarationAST ;
}

void cPtr_typeArrayDeclarationAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@typeArrayDeclarationAST:" ;
  mProperty_mAnonymousArrayTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSizeExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSizeExpressionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_typeArrayDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_typeArrayDeclarationAST (mProperty_mAnonymousArrayTypeName, mProperty_mElementTypeName, mProperty_mSizeExpression, mProperty_mSizeExpressionLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @typeArrayDeclarationAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeArrayDeclarationAST ("typeArrayDeclarationAST",
                                                & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_typeArrayDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeArrayDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_typeArrayDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeArrayDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeArrayDeclarationAST GALGAS_typeArrayDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_typeArrayDeclarationAST result ;
  const GALGAS_typeArrayDeclarationAST * p = (const GALGAS_typeArrayDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeArrayDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeArrayDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_decoratedTypeArrayDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_decoratedTypeArrayDeclaration * p = (const cPtr_decoratedTypeArrayDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_decoratedTypeArrayDeclaration) ;
  if (kOperandEqual == result) {
    result = mProperty_mOriginalArrayTypeName.objectCompare (p->mProperty_mOriginalArrayTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArraySize.objectCompare (p->mProperty_mArraySize) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_decoratedTypeArrayDeclaration::objectCompare (const GALGAS_decoratedTypeArrayDeclaration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedTypeArrayDeclaration::GALGAS_decoratedTypeArrayDeclaration (void) :
GALGAS_abstractDecoratedDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedTypeArrayDeclaration GALGAS_decoratedTypeArrayDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_decoratedTypeArrayDeclaration::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_uint::constructor_default (HERE)
                                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedTypeArrayDeclaration::GALGAS_decoratedTypeArrayDeclaration (const cPtr_decoratedTypeArrayDeclaration * inSourcePtr) :
GALGAS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedTypeArrayDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedTypeArrayDeclaration GALGAS_decoratedTypeArrayDeclaration::constructor_new (const GALGAS_lstring & inAttribute_mOriginalArrayTypeName,
                                                                                            const GALGAS_uint & inAttribute_mArraySize
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_decoratedTypeArrayDeclaration result ;
  if (inAttribute_mOriginalArrayTypeName.isValid () && inAttribute_mArraySize.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_decoratedTypeArrayDeclaration (inAttribute_mOriginalArrayTypeName, inAttribute_mArraySize COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_decoratedTypeArrayDeclaration::getter_mOriginalArrayTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedTypeArrayDeclaration * p = (const cPtr_decoratedTypeArrayDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedTypeArrayDeclaration) ;
    result = p->mProperty_mOriginalArrayTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_decoratedTypeArrayDeclaration::getter_mOriginalArrayTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOriginalArrayTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_decoratedTypeArrayDeclaration::getter_mArraySize (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedTypeArrayDeclaration * p = (const cPtr_decoratedTypeArrayDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedTypeArrayDeclaration) ;
    result = p->mProperty_mArraySize ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_decoratedTypeArrayDeclaration::getter_mArraySize (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArraySize ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @decoratedTypeArrayDeclaration class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_decoratedTypeArrayDeclaration::cPtr_decoratedTypeArrayDeclaration (const GALGAS_lstring & in_mOriginalArrayTypeName,
                                                                        const GALGAS_uint & in_mArraySize
                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (THERE),
mProperty_mOriginalArrayTypeName (in_mOriginalArrayTypeName),
mProperty_mArraySize (in_mArraySize) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_decoratedTypeArrayDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedTypeArrayDeclaration ;
}

void cPtr_decoratedTypeArrayDeclaration::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@decoratedTypeArrayDeclaration:" ;
  mProperty_mOriginalArrayTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArraySize.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_decoratedTypeArrayDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_decoratedTypeArrayDeclaration (mProperty_mOriginalArrayTypeName, mProperty_mArraySize COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @decoratedTypeArrayDeclaration type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedTypeArrayDeclaration ("decoratedTypeArrayDeclaration",
                                                      & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_decoratedTypeArrayDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedTypeArrayDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_decoratedTypeArrayDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedTypeArrayDeclaration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedTypeArrayDeclaration GALGAS_decoratedTypeArrayDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_decoratedTypeArrayDeclaration result ;
  const GALGAS_decoratedTypeArrayDeclaration * p = (const GALGAS_decoratedTypeArrayDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedTypeArrayDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedTypeArrayDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_arrayIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_arrayIR * p = (const cPtr_arrayIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_arrayIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mOriginalArrayTypeName.objectCompare (p->mProperty_mOriginalArrayTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArraySize.objectCompare (p->mProperty_mArraySize) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_arrayIR::objectCompare (const GALGAS_arrayIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayIR::GALGAS_arrayIR (void) :
GALGAS_abstractGenerationIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayIR GALGAS_arrayIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_arrayIR::constructor_new (GALGAS_string::constructor_default (HERE),
                                          GALGAS_bigint::constructor_zero (HERE)
                                          COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayIR::GALGAS_arrayIR (const cPtr_arrayIR * inSourcePtr) :
GALGAS_abstractGenerationIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_arrayIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayIR GALGAS_arrayIR::constructor_new (const GALGAS_string & inAttribute_mOriginalArrayTypeName,
                                                const GALGAS_bigint & inAttribute_mArraySize
                                                COMMA_LOCATION_ARGS) {
  GALGAS_arrayIR result ;
  if (inAttribute_mOriginalArrayTypeName.isValid () && inAttribute_mArraySize.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_arrayIR (inAttribute_mOriginalArrayTypeName, inAttribute_mArraySize COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_arrayIR::getter_mOriginalArrayTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayIR * p = (const cPtr_arrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayIR) ;
    result = p->mProperty_mOriginalArrayTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_arrayIR::getter_mOriginalArrayTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOriginalArrayTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_arrayIR::getter_mArraySize (UNUSED_LOCATION_ARGS) const {
  GALGAS_bigint result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayIR * p = (const cPtr_arrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayIR) ;
    result = p->mProperty_mArraySize ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cPtr_arrayIR::getter_mArraySize (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArraySize ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                          Pointer class for @arrayIR class                                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_arrayIR::cPtr_arrayIR (const GALGAS_string & in_mOriginalArrayTypeName,
                            const GALGAS_bigint & in_mArraySize
                            COMMA_LOCATION_ARGS) :
cPtr_abstractGenerationIR (THERE),
mProperty_mOriginalArrayTypeName (in_mOriginalArrayTypeName),
mProperty_mArraySize (in_mArraySize) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_arrayIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayIR ;
}

void cPtr_arrayIR::description (C_String & ioString,
                                const int32_t inIndentation) const {
  ioString << "[@arrayIR:" ;
  mProperty_mOriginalArrayTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArraySize.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_arrayIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_arrayIR (mProperty_mOriginalArrayTypeName, mProperty_mArraySize COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @arrayIR type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayIR ("arrayIR",
                                & kTypeDescriptor_GALGAS_abstractGenerationIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_arrayIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_arrayIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayIR GALGAS_arrayIR::extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_arrayIR result ;
  const GALGAS_arrayIR * p = (const GALGAS_arrayIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_typeDynamicArrayDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_typeDynamicArrayDeclarationAST * p = (const cPtr_typeDynamicArrayDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_typeDynamicArrayDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mAnonymousDynamicArrayTypeName.objectCompare (p->mProperty_mAnonymousDynamicArrayTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementTypeName.objectCompare (p->mProperty_mElementTypeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_typeDynamicArrayDeclarationAST::objectCompare (const GALGAS_typeDynamicArrayDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeDynamicArrayDeclarationAST::GALGAS_typeDynamicArrayDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeDynamicArrayDeclarationAST GALGAS_typeDynamicArrayDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_typeDynamicArrayDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                 GALGAS_lstring::constructor_default (HERE)
                                                                 COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeDynamicArrayDeclarationAST::GALGAS_typeDynamicArrayDeclarationAST (const cPtr_typeDynamicArrayDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typeDynamicArrayDeclarationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeDynamicArrayDeclarationAST GALGAS_typeDynamicArrayDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mAnonymousDynamicArrayTypeName,
                                                                                              const GALGAS_lstring & inAttribute_mElementTypeName
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_typeDynamicArrayDeclarationAST result ;
  if (inAttribute_mAnonymousDynamicArrayTypeName.isValid () && inAttribute_mElementTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_typeDynamicArrayDeclarationAST (inAttribute_mAnonymousDynamicArrayTypeName, inAttribute_mElementTypeName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_typeDynamicArrayDeclarationAST::getter_mAnonymousDynamicArrayTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_typeDynamicArrayDeclarationAST * p = (const cPtr_typeDynamicArrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeDynamicArrayDeclarationAST) ;
    result = p->mProperty_mAnonymousDynamicArrayTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_typeDynamicArrayDeclarationAST::getter_mAnonymousDynamicArrayTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAnonymousDynamicArrayTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_typeDynamicArrayDeclarationAST::getter_mElementTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_typeDynamicArrayDeclarationAST * p = (const cPtr_typeDynamicArrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeDynamicArrayDeclarationAST) ;
    result = p->mProperty_mElementTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_typeDynamicArrayDeclarationAST::getter_mElementTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElementTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @typeDynamicArrayDeclarationAST class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_typeDynamicArrayDeclarationAST::cPtr_typeDynamicArrayDeclarationAST (const GALGAS_lstring & in_mAnonymousDynamicArrayTypeName,
                                                                          const GALGAS_lstring & in_mElementTypeName
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mAnonymousDynamicArrayTypeName (in_mAnonymousDynamicArrayTypeName),
mProperty_mElementTypeName (in_mElementTypeName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_typeDynamicArrayDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST ;
}

void cPtr_typeDynamicArrayDeclarationAST::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@typeDynamicArrayDeclarationAST:" ;
  mProperty_mAnonymousDynamicArrayTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_typeDynamicArrayDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_typeDynamicArrayDeclarationAST (mProperty_mAnonymousDynamicArrayTypeName, mProperty_mElementTypeName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @typeDynamicArrayDeclarationAST type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST ("typeDynamicArrayDeclarationAST",
                                                       & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_typeDynamicArrayDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_typeDynamicArrayDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeDynamicArrayDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType::GALGAS_PLMType (void) :
mProperty_propertyMap (),
mProperty_classConstantMap (),
mProperty_constructorMap (),
mProperty_guardMap (),
mProperty_attributes (),
mProperty_plmOriginalTypeName (),
mProperty_kind (),
mProperty_plmAliasedTypeName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType::~ GALGAS_PLMType (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType::GALGAS_PLMType (const GALGAS_propertyMap & inOperand0,
                                const GALGAS_classConstantMap & inOperand1,
                                const GALGAS_constructorMap & inOperand2,
                                const GALGAS_guardMapForContext & inOperand3,
                                const GALGAS_PLMTypeAttributes & inOperand4,
                                const GALGAS_string & inOperand5,
                                const GALGAS_typeKind & inOperand6,
                                const GALGAS_string & inOperand7) :
mProperty_propertyMap (inOperand0),
mProperty_classConstantMap (inOperand1),
mProperty_constructorMap (inOperand2),
mProperty_guardMap (inOperand3),
mProperty_attributes (inOperand4),
mProperty_plmOriginalTypeName (inOperand5),
mProperty_kind (inOperand6),
mProperty_plmAliasedTypeName (inOperand7) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_PLMType::constructor_new (const GALGAS_propertyMap & inOperand0,
                                                const GALGAS_classConstantMap & inOperand1,
                                                const GALGAS_constructorMap & inOperand2,
                                                const GALGAS_guardMapForContext & inOperand3,
                                                const GALGAS_PLMTypeAttributes & inOperand4,
                                                const GALGAS_string & inOperand5,
                                                const GALGAS_typeKind & inOperand6,
                                                const GALGAS_string & inOperand7 
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_PLMType (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_PLMType::objectCompare (const GALGAS_PLMType & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_propertyMap.objectCompare (inOperand.mProperty_propertyMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_classConstantMap.objectCompare (inOperand.mProperty_classConstantMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_constructorMap.objectCompare (inOperand.mProperty_constructorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_guardMap.objectCompare (inOperand.mProperty_guardMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_attributes.objectCompare (inOperand.mProperty_attributes) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_plmOriginalTypeName.objectCompare (inOperand.mProperty_plmOriginalTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_kind.objectCompare (inOperand.mProperty_kind) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_plmAliasedTypeName.objectCompare (inOperand.mProperty_plmAliasedTypeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_PLMType::isValid (void) const {
  return mProperty_propertyMap.isValid () && mProperty_classConstantMap.isValid () && mProperty_constructorMap.isValid () && mProperty_guardMap.isValid () && mProperty_attributes.isValid () && mProperty_plmOriginalTypeName.isValid () && mProperty_kind.isValid () && mProperty_plmAliasedTypeName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_PLMType::drop (void) {
  mProperty_propertyMap.drop () ;
  mProperty_classConstantMap.drop () ;
  mProperty_constructorMap.drop () ;
  mProperty_guardMap.drop () ;
  mProperty_attributes.drop () ;
  mProperty_plmOriginalTypeName.drop () ;
  mProperty_kind.drop () ;
  mProperty_plmAliasedTypeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_PLMType::description (C_String & ioString,
                                  const int32_t inIndentation) const {
  ioString << "<struct @PLMType:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_propertyMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_classConstantMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_constructorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_guardMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_attributes.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_plmOriginalTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_kind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_plmAliasedTypeName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMap GALGAS_PLMType::getter_propertyMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_propertyMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classConstantMap GALGAS_PLMType::getter_classConstantMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_classConstantMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap GALGAS_PLMType::getter_constructorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_constructorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapForContext GALGAS_PLMType::getter_guardMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_guardMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMTypeAttributes GALGAS_PLMType::getter_attributes (UNUSED_LOCATION_ARGS) const {
  return mProperty_attributes ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_PLMType::getter_plmOriginalTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_plmOriginalTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_PLMType::getter_kind (UNUSED_LOCATION_ARGS) const {
  return mProperty_kind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_PLMType::getter_plmAliasedTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_plmAliasedTypeName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @PLMType type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_PLMType ("PLMType",
                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_PLMType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_PLMType ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_PLMType::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_PLMType (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_PLMType::extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_PLMType result ;
  const GALGAS_PLMType * p = (const GALGAS_PLMType *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_PLMType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("PLMType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_dynamicArrayIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_dynamicArrayIR * p = (const cPtr_dynamicArrayIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_dynamicArrayIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mAnonymousDynamicArrayTypeName.objectCompare (p->mProperty_mAnonymousDynamicArrayTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPtrSize.objectCompare (p->mProperty_mPtrSize) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementType.objectCompare (p->mProperty_mElementType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_dynamicArrayIR::objectCompare (const GALGAS_dynamicArrayIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dynamicArrayIR::GALGAS_dynamicArrayIR (void) :
GALGAS_abstractGenerationIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dynamicArrayIR::GALGAS_dynamicArrayIR (const cPtr_dynamicArrayIR * inSourcePtr) :
GALGAS_abstractGenerationIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dynamicArrayIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dynamicArrayIR GALGAS_dynamicArrayIR::constructor_new (const GALGAS_string & inAttribute_mAnonymousDynamicArrayTypeName,
                                                              const GALGAS_uint & inAttribute_mPtrSize,
                                                              const GALGAS_PLMType & inAttribute_mElementType
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_dynamicArrayIR result ;
  if (inAttribute_mAnonymousDynamicArrayTypeName.isValid () && inAttribute_mPtrSize.isValid () && inAttribute_mElementType.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_dynamicArrayIR (inAttribute_mAnonymousDynamicArrayTypeName, inAttribute_mPtrSize, inAttribute_mElementType COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_dynamicArrayIR::getter_mAnonymousDynamicArrayTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_dynamicArrayIR * p = (const cPtr_dynamicArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynamicArrayIR) ;
    result = p->mProperty_mAnonymousDynamicArrayTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_dynamicArrayIR::getter_mAnonymousDynamicArrayTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAnonymousDynamicArrayTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_dynamicArrayIR::getter_mPtrSize (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_dynamicArrayIR * p = (const cPtr_dynamicArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynamicArrayIR) ;
    result = p->mProperty_mPtrSize ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_dynamicArrayIR::getter_mPtrSize (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPtrSize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_dynamicArrayIR::getter_mElementType (UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMType result ;
  if (NULL != mObjectPtr) {
    const cPtr_dynamicArrayIR * p = (const cPtr_dynamicArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynamicArrayIR) ;
    result = p->mProperty_mElementType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType cPtr_dynamicArrayIR::getter_mElementType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElementType ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                       Pointer class for @dynamicArrayIR class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_dynamicArrayIR::cPtr_dynamicArrayIR (const GALGAS_string & in_mAnonymousDynamicArrayTypeName,
                                          const GALGAS_uint & in_mPtrSize,
                                          const GALGAS_PLMType & in_mElementType
                                          COMMA_LOCATION_ARGS) :
cPtr_abstractGenerationIR (THERE),
mProperty_mAnonymousDynamicArrayTypeName (in_mAnonymousDynamicArrayTypeName),
mProperty_mPtrSize (in_mPtrSize),
mProperty_mElementType (in_mElementType) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_dynamicArrayIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynamicArrayIR ;
}

void cPtr_dynamicArrayIR::description (C_String & ioString,
                                       const int32_t inIndentation) const {
  ioString << "[@dynamicArrayIR:" ;
  mProperty_mAnonymousDynamicArrayTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPtrSize.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementType.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_dynamicArrayIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_dynamicArrayIR (mProperty_mAnonymousDynamicArrayTypeName, mProperty_mPtrSize, mProperty_mElementType COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @dynamicArrayIR type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dynamicArrayIR ("dynamicArrayIR",
                                       & kTypeDescriptor_GALGAS_abstractGenerationIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_dynamicArrayIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynamicArrayIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_dynamicArrayIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dynamicArrayIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dynamicArrayIR GALGAS_dynamicArrayIR::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_dynamicArrayIR result ;
  const GALGAS_dynamicArrayIR * p = (const GALGAS_dynamicArrayIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_dynamicArrayIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynamicArrayIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_booleanDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_booleanDeclarationAST * p = (const cPtr_booleanDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_booleanDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mBooleanTypeName.objectCompare (p->mProperty_mBooleanTypeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_booleanDeclarationAST::objectCompare (const GALGAS_booleanDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_booleanDeclarationAST::GALGAS_booleanDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_booleanDeclarationAST GALGAS_booleanDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_booleanDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_booleanDeclarationAST::GALGAS_booleanDeclarationAST (const cPtr_booleanDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_booleanDeclarationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_booleanDeclarationAST GALGAS_booleanDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mBooleanTypeName
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_booleanDeclarationAST result ;
  if (inAttribute_mBooleanTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_booleanDeclarationAST (inAttribute_mBooleanTypeName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_booleanDeclarationAST::getter_mBooleanTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_booleanDeclarationAST * p = (const cPtr_booleanDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_booleanDeclarationAST) ;
    result = p->mProperty_mBooleanTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_booleanDeclarationAST::getter_mBooleanTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBooleanTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @booleanDeclarationAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_booleanDeclarationAST::cPtr_booleanDeclarationAST (const GALGAS_lstring & in_mBooleanTypeName
                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mBooleanTypeName (in_mBooleanTypeName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_booleanDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_booleanDeclarationAST ;
}

void cPtr_booleanDeclarationAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@booleanDeclarationAST:" ;
  mProperty_mBooleanTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_booleanDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_booleanDeclarationAST (mProperty_mBooleanTypeName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @booleanDeclarationAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_booleanDeclarationAST ("booleanDeclarationAST",
                                              & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_booleanDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_booleanDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_booleanDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_booleanDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_booleanDeclarationAST GALGAS_booleanDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_booleanDeclarationAST result ;
  const GALGAS_booleanDeclarationAST * p = (const GALGAS_booleanDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_booleanDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("booleanDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_enumerationDeclarationAST::objectCompare (const GALGAS_enumerationDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDeclarationAST::GALGAS_enumerationDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDeclarationAST GALGAS_enumerationDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_enumerationDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                            GALGAS_enumerationConstantList::constructor_emptyList (HERE)
                                                            COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDeclarationAST::GALGAS_enumerationDeclarationAST (const cPtr_enumerationDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumerationDeclarationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDeclarationAST GALGAS_enumerationDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mEnumerationName,
                                                                                    const GALGAS_enumerationConstantList & inAttribute_mCaseNameList
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_enumerationDeclarationAST result ;
  if (inAttribute_mEnumerationName.isValid () && inAttribute_mCaseNameList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_enumerationDeclarationAST (inAttribute_mEnumerationName, inAttribute_mCaseNameList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_enumerationDeclarationAST::getter_mEnumerationName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumerationDeclarationAST * p = (const cPtr_enumerationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumerationDeclarationAST) ;
    result = p->mProperty_mEnumerationName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_enumerationDeclarationAST::getter_mEnumerationName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumerationName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationConstantList GALGAS_enumerationDeclarationAST::getter_mCaseNameList (UNUSED_LOCATION_ARGS) const {
  GALGAS_enumerationConstantList result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumerationDeclarationAST * p = (const cPtr_enumerationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumerationDeclarationAST) ;
    result = p->mProperty_mCaseNameList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationConstantList cPtr_enumerationDeclarationAST::getter_mCaseNameList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCaseNameList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @enumerationDeclarationAST class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_enumerationDeclarationAST::cPtr_enumerationDeclarationAST (const GALGAS_lstring & in_mEnumerationName,
                                                                const GALGAS_enumerationConstantList & in_mCaseNameList
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mEnumerationName (in_mEnumerationName),
mProperty_mCaseNameList (in_mCaseNameList) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_enumerationDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_enumerationDeclarationAST (mProperty_mEnumerationName, mProperty_mCaseNameList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @enumerationDeclarationAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumerationDeclarationAST ("enumerationDeclarationAST",
                                                  & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_enumerationDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_enumerationDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumerationDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_enumerationDecoratedDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_enumerationDecoratedDeclaration * p = (const cPtr_enumerationDecoratedDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_enumerationDecoratedDeclaration) ;
  if (kOperandEqual == result) {
    result = mProperty_mEnumerationName.objectCompare (p->mProperty_mEnumerationName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRepresentationBitCount.objectCompare (p->mProperty_mRepresentationBitCount) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_enumerationDecoratedDeclaration::objectCompare (const GALGAS_enumerationDecoratedDeclaration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDecoratedDeclaration::GALGAS_enumerationDecoratedDeclaration (void) :
GALGAS_abstractDecoratedDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDecoratedDeclaration GALGAS_enumerationDecoratedDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_enumerationDecoratedDeclaration::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                  GALGAS_uint::constructor_default (HERE)
                                                                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDecoratedDeclaration::GALGAS_enumerationDecoratedDeclaration (const cPtr_enumerationDecoratedDeclaration * inSourcePtr) :
GALGAS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumerationDecoratedDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDecoratedDeclaration GALGAS_enumerationDecoratedDeclaration::constructor_new (const GALGAS_lstring & inAttribute_mEnumerationName,
                                                                                                const GALGAS_uint & inAttribute_mRepresentationBitCount
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_enumerationDecoratedDeclaration result ;
  if (inAttribute_mEnumerationName.isValid () && inAttribute_mRepresentationBitCount.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_enumerationDecoratedDeclaration (inAttribute_mEnumerationName, inAttribute_mRepresentationBitCount COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_enumerationDecoratedDeclaration::getter_mEnumerationName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumerationDecoratedDeclaration * p = (const cPtr_enumerationDecoratedDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumerationDecoratedDeclaration) ;
    result = p->mProperty_mEnumerationName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_enumerationDecoratedDeclaration::getter_mEnumerationName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumerationName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_enumerationDecoratedDeclaration::getter_mRepresentationBitCount (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumerationDecoratedDeclaration * p = (const cPtr_enumerationDecoratedDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumerationDecoratedDeclaration) ;
    result = p->mProperty_mRepresentationBitCount ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_enumerationDecoratedDeclaration::getter_mRepresentationBitCount (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRepresentationBitCount ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @enumerationDecoratedDeclaration class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_enumerationDecoratedDeclaration::cPtr_enumerationDecoratedDeclaration (const GALGAS_lstring & in_mEnumerationName,
                                                                            const GALGAS_uint & in_mRepresentationBitCount
                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (THERE),
mProperty_mEnumerationName (in_mEnumerationName),
mProperty_mRepresentationBitCount (in_mRepresentationBitCount) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_enumerationDecoratedDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDecoratedDeclaration ;
}

void cPtr_enumerationDecoratedDeclaration::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@enumerationDecoratedDeclaration:" ;
  mProperty_mEnumerationName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRepresentationBitCount.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_enumerationDecoratedDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_enumerationDecoratedDeclaration (mProperty_mEnumerationName, mProperty_mRepresentationBitCount COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @enumerationDecoratedDeclaration type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumerationDecoratedDeclaration ("enumerationDecoratedDeclaration",
                                                        & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_enumerationDecoratedDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDecoratedDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_enumerationDecoratedDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumerationDecoratedDeclaration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDecoratedDeclaration GALGAS_enumerationDecoratedDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_enumerationDecoratedDeclaration result ;
  const GALGAS_enumerationDecoratedDeclaration * p = (const GALGAS_enumerationDecoratedDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumerationDecoratedDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationDecoratedDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_enumerationIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_enumerationIR * p = (const cPtr_enumerationIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_enumerationIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mEnumerationName.objectCompare (p->mProperty_mEnumerationName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitCount.objectCompare (p->mProperty_mBitCount) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_enumerationIR::objectCompare (const GALGAS_enumerationIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationIR::GALGAS_enumerationIR (void) :
GALGAS_abstractGenerationIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationIR GALGAS_enumerationIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_enumerationIR::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                GALGAS_uint::constructor_default (HERE)
                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationIR::GALGAS_enumerationIR (const cPtr_enumerationIR * inSourcePtr) :
GALGAS_abstractGenerationIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumerationIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationIR GALGAS_enumerationIR::constructor_new (const GALGAS_lstring & inAttribute_mEnumerationName,
                                                            const GALGAS_uint & inAttribute_mBitCount
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_enumerationIR result ;
  if (inAttribute_mEnumerationName.isValid () && inAttribute_mBitCount.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_enumerationIR (inAttribute_mEnumerationName, inAttribute_mBitCount COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_enumerationIR::getter_mEnumerationName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumerationIR * p = (const cPtr_enumerationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumerationIR) ;
    result = p->mProperty_mEnumerationName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_enumerationIR::getter_mEnumerationName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumerationName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_enumerationIR::getter_mBitCount (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumerationIR * p = (const cPtr_enumerationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumerationIR) ;
    result = p->mProperty_mBitCount ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_enumerationIR::getter_mBitCount (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBitCount ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                       Pointer class for @enumerationIR class                                        *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_enumerationIR::cPtr_enumerationIR (const GALGAS_lstring & in_mEnumerationName,
                                        const GALGAS_uint & in_mBitCount
                                        COMMA_LOCATION_ARGS) :
cPtr_abstractGenerationIR (THERE),
mProperty_mEnumerationName (in_mEnumerationName),
mProperty_mBitCount (in_mBitCount) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_enumerationIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationIR ;
}

void cPtr_enumerationIR::description (C_String & ioString,
                                      const int32_t inIndentation) const {
  ioString << "[@enumerationIR:" ;
  mProperty_mEnumerationName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBitCount.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_enumerationIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_enumerationIR (mProperty_mEnumerationName, mProperty_mBitCount COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @enumerationIR type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumerationIR ("enumerationIR",
                                      & kTypeDescriptor_GALGAS_abstractGenerationIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_enumerationIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_enumerationIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumerationIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationIR GALGAS_enumerationIR::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_enumerationIR result ;
  const GALGAS_enumerationIR * p = (const GALGAS_enumerationIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumerationIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_structureDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_structureDeclarationAST * p = (const cPtr_structureDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mStructureName.objectCompare (p->mProperty_mStructureName) ;
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
    result = mProperty_mFunctionDeclarationListAST.objectCompare (p->mProperty_mFunctionDeclarationListAST) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSystemRoutineListAST.objectCompare (p->mProperty_mSystemRoutineListAST) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGuardListAST.objectCompare (p->mProperty_mGuardListAST) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMayImplementDeinit.objectCompare (p->mProperty_mMayImplementDeinit) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_structureDeclarationAST::objectCompare (const GALGAS_structureDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureDeclarationAST::GALGAS_structureDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureDeclarationAST GALGAS_structureDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_structureDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_lstringlist::constructor_emptyList (HERE),
                                                          GALGAS_bool::constructor_default (HERE),
                                                          GALGAS_structurePropertyListAST::constructor_emptyList (HERE),
                                                          GALGAS_functionDeclarationListAST::constructor_emptyList (HERE),
                                                          GALGAS_systemRoutineDeclarationListAST::constructor_emptyList (HERE),
                                                          GALGAS_guardDeclarationListAST::constructor_emptyList (HERE),
                                                          GALGAS_bool::constructor_default (HERE)
                                                          COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureDeclarationAST::GALGAS_structureDeclarationAST (const cPtr_structureDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structureDeclarationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureDeclarationAST GALGAS_structureDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mStructureName,
                                                                                const GALGAS_lstringlist & inAttribute_mAttributeListAST,
                                                                                const GALGAS_bool & inAttribute_mGenerateAssignmentRoutine,
                                                                                const GALGAS_structurePropertyListAST & inAttribute_mStructurePropertyListAST,
                                                                                const GALGAS_functionDeclarationListAST & inAttribute_mFunctionDeclarationListAST,
                                                                                const GALGAS_systemRoutineDeclarationListAST & inAttribute_mSystemRoutineListAST,
                                                                                const GALGAS_guardDeclarationListAST & inAttribute_mGuardListAST,
                                                                                const GALGAS_bool & inAttribute_mMayImplementDeinit
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_structureDeclarationAST result ;
  if (inAttribute_mStructureName.isValid () && inAttribute_mAttributeListAST.isValid () && inAttribute_mGenerateAssignmentRoutine.isValid () && inAttribute_mStructurePropertyListAST.isValid () && inAttribute_mFunctionDeclarationListAST.isValid () && inAttribute_mSystemRoutineListAST.isValid () && inAttribute_mGuardListAST.isValid () && inAttribute_mMayImplementDeinit.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_structureDeclarationAST (inAttribute_mStructureName, inAttribute_mAttributeListAST, inAttribute_mGenerateAssignmentRoutine, inAttribute_mStructurePropertyListAST, inAttribute_mFunctionDeclarationListAST, inAttribute_mSystemRoutineListAST, inAttribute_mGuardListAST, inAttribute_mMayImplementDeinit COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_structureDeclarationAST::getter_mStructureName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_structureDeclarationAST * p = (const cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    result = p->mProperty_mStructureName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_structureDeclarationAST::getter_mStructureName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStructureName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_structureDeclarationAST::getter_mAttributeListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_structureDeclarationAST * p = (const cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    result = p->mProperty_mAttributeListAST ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_structureDeclarationAST::getter_mAttributeListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAttributeListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_structureDeclarationAST::getter_mGenerateAssignmentRoutine (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_structureDeclarationAST * p = (const cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    result = p->mProperty_mGenerateAssignmentRoutine ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_structureDeclarationAST::getter_mGenerateAssignmentRoutine (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGenerateAssignmentRoutine ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST GALGAS_structureDeclarationAST::getter_mStructurePropertyListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_structurePropertyListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_structureDeclarationAST * p = (const cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    result = p->mProperty_mStructurePropertyListAST ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST cPtr_structureDeclarationAST::getter_mStructurePropertyListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStructurePropertyListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST GALGAS_structureDeclarationAST::getter_mFunctionDeclarationListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_functionDeclarationListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_structureDeclarationAST * p = (const cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    result = p->mProperty_mFunctionDeclarationListAST ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST cPtr_structureDeclarationAST::getter_mFunctionDeclarationListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionDeclarationListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_systemRoutineDeclarationListAST GALGAS_structureDeclarationAST::getter_mSystemRoutineListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_systemRoutineDeclarationListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_structureDeclarationAST * p = (const cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    result = p->mProperty_mSystemRoutineListAST ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_systemRoutineDeclarationListAST cPtr_structureDeclarationAST::getter_mSystemRoutineListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSystemRoutineListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardDeclarationListAST GALGAS_structureDeclarationAST::getter_mGuardListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_guardDeclarationListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_structureDeclarationAST * p = (const cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    result = p->mProperty_mGuardListAST ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardDeclarationListAST cPtr_structureDeclarationAST::getter_mGuardListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_structureDeclarationAST::getter_mMayImplementDeinit (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_structureDeclarationAST * p = (const cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    result = p->mProperty_mMayImplementDeinit ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_structureDeclarationAST::getter_mMayImplementDeinit (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMayImplementDeinit ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @structureDeclarationAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_structureDeclarationAST::cPtr_structureDeclarationAST (const GALGAS_lstring & in_mStructureName,
                                                            const GALGAS_lstringlist & in_mAttributeListAST,
                                                            const GALGAS_bool & in_mGenerateAssignmentRoutine,
                                                            const GALGAS_structurePropertyListAST & in_mStructurePropertyListAST,
                                                            const GALGAS_functionDeclarationListAST & in_mFunctionDeclarationListAST,
                                                            const GALGAS_systemRoutineDeclarationListAST & in_mSystemRoutineListAST,
                                                            const GALGAS_guardDeclarationListAST & in_mGuardListAST,
                                                            const GALGAS_bool & in_mMayImplementDeinit
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mStructureName (in_mStructureName),
mProperty_mAttributeListAST (in_mAttributeListAST),
mProperty_mGenerateAssignmentRoutine (in_mGenerateAssignmentRoutine),
mProperty_mStructurePropertyListAST (in_mStructurePropertyListAST),
mProperty_mFunctionDeclarationListAST (in_mFunctionDeclarationListAST),
mProperty_mSystemRoutineListAST (in_mSystemRoutineListAST),
mProperty_mGuardListAST (in_mGuardListAST),
mProperty_mMayImplementDeinit (in_mMayImplementDeinit) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_structureDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structureDeclarationAST ;
}

void cPtr_structureDeclarationAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@structureDeclarationAST:" ;
  mProperty_mStructureName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAttributeListAST.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGenerateAssignmentRoutine.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStructurePropertyListAST.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFunctionDeclarationListAST.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSystemRoutineListAST.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGuardListAST.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMayImplementDeinit.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_structureDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_structureDeclarationAST (mProperty_mStructureName, mProperty_mAttributeListAST, mProperty_mGenerateAssignmentRoutine, mProperty_mStructurePropertyListAST, mProperty_mFunctionDeclarationListAST, mProperty_mSystemRoutineListAST, mProperty_mGuardListAST, mProperty_mMayImplementDeinit COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @structureDeclarationAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structureDeclarationAST ("structureDeclarationAST",
                                                & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_structureDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structureDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_structureDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structureDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST_2D_element::GALGAS_structurePropertyListAST_2D_element (void) :
mProperty_mPropertyName (),
mProperty_mPropertyAttributeList (),
mProperty_mIsConstant (),
mProperty_mIsPublic (),
mProperty_mPropertyTypeName (),
mProperty_mInitialisation (),
mProperty_mIsSingletonObject () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST_2D_element::~ GALGAS_structurePropertyListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST_2D_element::GALGAS_structurePropertyListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_propertyAttributeList & inOperand1,
                                                                                        const GALGAS_bool & inOperand2,
                                                                                        const GALGAS_bool & inOperand3,
                                                                                        const GALGAS_lstring & inOperand4,
                                                                                        const GALGAS_structurePropertyInitOptionalExpressionAST & inOperand5,
                                                                                        const GALGAS_bool & inOperand6) :
mProperty_mPropertyName (inOperand0),
mProperty_mPropertyAttributeList (inOperand1),
mProperty_mIsConstant (inOperand2),
mProperty_mIsPublic (inOperand3),
mProperty_mPropertyTypeName (inOperand4),
mProperty_mInitialisation (inOperand5),
mProperty_mIsSingletonObject (inOperand6) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST_2D_element GALGAS_structurePropertyListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_propertyAttributeList & inOperand1,
                                                                                                        const GALGAS_bool & inOperand2,
                                                                                                        const GALGAS_bool & inOperand3,
                                                                                                        const GALGAS_lstring & inOperand4,
                                                                                                        const GALGAS_structurePropertyInitOptionalExpressionAST & inOperand5,
                                                                                                        const GALGAS_bool & inOperand6 
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_structurePropertyListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_structurePropertyListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_structurePropertyListAST_2D_element::objectCompare (const GALGAS_structurePropertyListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mPropertyName.objectCompare (inOperand.mProperty_mPropertyName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPropertyAttributeList.objectCompare (inOperand.mProperty_mPropertyAttributeList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsConstant.objectCompare (inOperand.mProperty_mIsConstant) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsPublic.objectCompare (inOperand.mProperty_mIsPublic) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPropertyTypeName.objectCompare (inOperand.mProperty_mPropertyTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInitialisation.objectCompare (inOperand.mProperty_mInitialisation) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsSingletonObject.objectCompare (inOperand.mProperty_mIsSingletonObject) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_structurePropertyListAST_2D_element::isValid (void) const {
  return mProperty_mPropertyName.isValid () && mProperty_mPropertyAttributeList.isValid () && mProperty_mIsConstant.isValid () && mProperty_mIsPublic.isValid () && mProperty_mPropertyTypeName.isValid () && mProperty_mInitialisation.isValid () && mProperty_mIsSingletonObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structurePropertyListAST_2D_element::drop (void) {
  mProperty_mPropertyName.drop () ;
  mProperty_mPropertyAttributeList.drop () ;
  mProperty_mIsConstant.drop () ;
  mProperty_mIsPublic.drop () ;
  mProperty_mPropertyTypeName.drop () ;
  mProperty_mInitialisation.drop () ;
  mProperty_mIsSingletonObject.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

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
    mProperty_mIsConstant.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsPublic.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPropertyTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInitialisation.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsSingletonObject.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_structurePropertyListAST_2D_element::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyAttributeList GALGAS_structurePropertyListAST_2D_element::getter_mPropertyAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_structurePropertyListAST_2D_element::getter_mIsConstant (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsConstant ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_structurePropertyListAST_2D_element::getter_mIsPublic (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsPublic ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_structurePropertyListAST_2D_element::getter_mPropertyTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyInitOptionalExpressionAST GALGAS_structurePropertyListAST_2D_element::getter_mInitialisation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInitialisation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_structurePropertyListAST_2D_element::getter_mIsSingletonObject (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsSingletonObject ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @structurePropertyListAST-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structurePropertyListAST_2D_element ("structurePropertyListAST-element",
                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_structurePropertyListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structurePropertyListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_structurePropertyListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structurePropertyListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_decoratedStructureDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_decoratedStructureDeclaration * p = (const cPtr_decoratedStructureDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_decoratedStructureDeclaration) ;
  if (kOperandEqual == result) {
    result = mProperty_mStructureName.objectCompare (p->mProperty_mStructureName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFunctionDeclarationListAST.objectCompare (p->mProperty_mFunctionDeclarationListAST) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSystemRoutineListAST.objectCompare (p->mProperty_mSystemRoutineListAST) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGuardListAST.objectCompare (p->mProperty_mGuardListAST) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMayImplementDeinit.objectCompare (p->mProperty_mMayImplementDeinit) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_decoratedStructureDeclaration::objectCompare (const GALGAS_decoratedStructureDeclaration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedStructureDeclaration::GALGAS_decoratedStructureDeclaration (void) :
GALGAS_abstractDecoratedDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedStructureDeclaration GALGAS_decoratedStructureDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_decoratedStructureDeclaration::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_functionDeclarationListAST::constructor_emptyList (HERE),
                                                                GALGAS_systemRoutineDeclarationListAST::constructor_emptyList (HERE),
                                                                GALGAS_guardDeclarationListAST::constructor_emptyList (HERE),
                                                                GALGAS_bool::constructor_default (HERE)
                                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedStructureDeclaration::GALGAS_decoratedStructureDeclaration (const cPtr_decoratedStructureDeclaration * inSourcePtr) :
GALGAS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedStructureDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedStructureDeclaration GALGAS_decoratedStructureDeclaration::constructor_new (const GALGAS_lstring & inAttribute_mStructureName,
                                                                                            const GALGAS_functionDeclarationListAST & inAttribute_mFunctionDeclarationListAST,
                                                                                            const GALGAS_systemRoutineDeclarationListAST & inAttribute_mSystemRoutineListAST,
                                                                                            const GALGAS_guardDeclarationListAST & inAttribute_mGuardListAST,
                                                                                            const GALGAS_bool & inAttribute_mMayImplementDeinit
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_decoratedStructureDeclaration result ;
  if (inAttribute_mStructureName.isValid () && inAttribute_mFunctionDeclarationListAST.isValid () && inAttribute_mSystemRoutineListAST.isValid () && inAttribute_mGuardListAST.isValid () && inAttribute_mMayImplementDeinit.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_decoratedStructureDeclaration (inAttribute_mStructureName, inAttribute_mFunctionDeclarationListAST, inAttribute_mSystemRoutineListAST, inAttribute_mGuardListAST, inAttribute_mMayImplementDeinit COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_decoratedStructureDeclaration::getter_mStructureName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedStructureDeclaration * p = (const cPtr_decoratedStructureDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedStructureDeclaration) ;
    result = p->mProperty_mStructureName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_decoratedStructureDeclaration::getter_mStructureName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStructureName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST GALGAS_decoratedStructureDeclaration::getter_mFunctionDeclarationListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_functionDeclarationListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedStructureDeclaration * p = (const cPtr_decoratedStructureDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedStructureDeclaration) ;
    result = p->mProperty_mFunctionDeclarationListAST ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST cPtr_decoratedStructureDeclaration::getter_mFunctionDeclarationListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionDeclarationListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_systemRoutineDeclarationListAST GALGAS_decoratedStructureDeclaration::getter_mSystemRoutineListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_systemRoutineDeclarationListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedStructureDeclaration * p = (const cPtr_decoratedStructureDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedStructureDeclaration) ;
    result = p->mProperty_mSystemRoutineListAST ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_systemRoutineDeclarationListAST cPtr_decoratedStructureDeclaration::getter_mSystemRoutineListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSystemRoutineListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardDeclarationListAST GALGAS_decoratedStructureDeclaration::getter_mGuardListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_guardDeclarationListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedStructureDeclaration * p = (const cPtr_decoratedStructureDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedStructureDeclaration) ;
    result = p->mProperty_mGuardListAST ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardDeclarationListAST cPtr_decoratedStructureDeclaration::getter_mGuardListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_decoratedStructureDeclaration::getter_mMayImplementDeinit (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedStructureDeclaration * p = (const cPtr_decoratedStructureDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedStructureDeclaration) ;
    result = p->mProperty_mMayImplementDeinit ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_decoratedStructureDeclaration::getter_mMayImplementDeinit (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMayImplementDeinit ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @decoratedStructureDeclaration class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_decoratedStructureDeclaration::cPtr_decoratedStructureDeclaration (const GALGAS_lstring & in_mStructureName,
                                                                        const GALGAS_functionDeclarationListAST & in_mFunctionDeclarationListAST,
                                                                        const GALGAS_systemRoutineDeclarationListAST & in_mSystemRoutineListAST,
                                                                        const GALGAS_guardDeclarationListAST & in_mGuardListAST,
                                                                        const GALGAS_bool & in_mMayImplementDeinit
                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (THERE),
mProperty_mStructureName (in_mStructureName),
mProperty_mFunctionDeclarationListAST (in_mFunctionDeclarationListAST),
mProperty_mSystemRoutineListAST (in_mSystemRoutineListAST),
mProperty_mGuardListAST (in_mGuardListAST),
mProperty_mMayImplementDeinit (in_mMayImplementDeinit) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_decoratedStructureDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedStructureDeclaration ;
}

void cPtr_decoratedStructureDeclaration::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@decoratedStructureDeclaration:" ;
  mProperty_mStructureName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFunctionDeclarationListAST.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSystemRoutineListAST.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGuardListAST.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMayImplementDeinit.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_decoratedStructureDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_decoratedStructureDeclaration (mProperty_mStructureName, mProperty_mFunctionDeclarationListAST, mProperty_mSystemRoutineListAST, mProperty_mGuardListAST, mProperty_mMayImplementDeinit COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @decoratedStructureDeclaration type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedStructureDeclaration ("decoratedStructureDeclaration",
                                                      & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_decoratedStructureDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedStructureDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_decoratedStructureDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedStructureDeclaration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedStructureDeclaration GALGAS_decoratedStructureDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_decoratedStructureDeclaration result ;
  const GALGAS_decoratedStructureDeclaration * p = (const GALGAS_decoratedStructureDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedStructureDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedStructureDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Extension method '@decoratedStructureDeclaration functionSemanticAnalysis'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_decoratedStructureDeclaration_functionSemanticAnalysis> gExtensionMethodTable_decoratedStructureDeclaration_functionSemanticAnalysis ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_functionSemanticAnalysis (const int32_t inClassIndex,
                                                    extensionMethodSignature_decoratedStructureDeclaration_functionSemanticAnalysis inMethod) {
  gExtensionMethodTable_decoratedStructureDeclaration_functionSemanticAnalysis.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_functionSemanticAnalysis (const cPtr_decoratedStructureDeclaration * inObject,
                                                   const GALGAS_PLMType constin_inStructureType,
                                                   const GALGAS_semanticContext constin_inContext,
                                                   GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                   GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_decoratedStructureDeclaration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_decoratedStructureDeclaration_functionSemanticAnalysis f = NULL ;
    if (classIndex < gExtensionMethodTable_decoratedStructureDeclaration_functionSemanticAnalysis.count ()) {
      f = gExtensionMethodTable_decoratedStructureDeclaration_functionSemanticAnalysis (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_decoratedStructureDeclaration_functionSemanticAnalysis.count ()) {
           f = gExtensionMethodTable_decoratedStructureDeclaration_functionSemanticAnalysis (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_decoratedStructureDeclaration_functionSemanticAnalysis.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inStructureType, constin_inContext, io_ioTemporaries, io_ioIntermediateCodeStruct, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_decoratedStructureDeclaration_functionSemanticAnalysis (const cPtr_decoratedStructureDeclaration * inObject,
                                                                                    const GALGAS_PLMType constinArgument_inStructureType,
                                                                                    const GALGAS_semanticContext constinArgument_inContext,
                                                                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                    GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decoratedStructureDeclaration * object = inObject ;
  macroValidSharedObject (object, cPtr_decoratedStructureDeclaration) ;
  cEnumerator_functionDeclarationListAST enumerator_23176 (object->mProperty_mFunctionDeclarationListAST, kENUMERATION_UP) ;
  while (enumerator_23176.hasCurrentObject ()) {
    GALGAS_bool var_warnIfUnused_23200 = GALGAS_bool (true) ;
    GALGAS_routineAttributes var_functionAttributes_23234 = GALGAS_routineAttributes::constructor_panicAllowed (SOURCE_FILE ("type-structure-declaration.galgas", 634)).operator_or (GALGAS_routineAttributes::constructor_controlRegisterReadable (SOURCE_FILE ("type-structure-declaration.galgas", 634)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 634)) ;
    cEnumerator_lstringlist enumerator_23350 (enumerator_23176.current (HERE).getter_mFunctionAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_23350.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_23350.current_mValue (HERE).getter_string (HERE).objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 636)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        const enumGalgasBool test_1 = var_warnIfUnused_23200.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 637)).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (enumerator_23350.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 638)), GALGAS_string ("duplicated @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 638)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 638)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 638)), fixItArray2  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 638)) ;
        }
        var_warnIfUnused_23200 = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_23350.current_mValue (HERE).getter_string (HERE).objectCompare (function_userAccessAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 641)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          const enumGalgasBool test_4 = var_functionAttributes_23234.getter_directPropertyAccess (SOURCE_FILE ("type-structure-declaration.galgas", 642)).boolEnum () ;
          if (kBoolTrue == test_4) {
            TC_Array <C_FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (enumerator_23350.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 643)), GALGAS_string ("duplicated @").add_operation (function_userAccessAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 643)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 643)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 643)), fixItArray5  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 643)) ;
          }
          var_functionAttributes_23234 = var_functionAttributes_23234.operator_or (GALGAS_routineAttributes::constructor_directPropertyAccess (SOURCE_FILE ("type-structure-declaration.galgas", 645)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 645)) ;
        }else if (kBoolFalse == test_3) {
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_23350.current_mValue (HERE).getter_string (HERE).objectCompare (function_safeAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 646)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            const enumGalgasBool test_7 = var_functionAttributes_23234.getter_panicAllowed (SOURCE_FILE ("type-structure-declaration.galgas", 647)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 647)).boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <C_FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (enumerator_23350.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 648)), GALGAS_string ("duplicated @").add_operation (function_safeAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 648)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 648)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 648)), fixItArray8  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 648)) ;
            }
            var_functionAttributes_23234 = var_functionAttributes_23234.substract_operation (GALGAS_routineAttributes::constructor_panicAllowed (SOURCE_FILE ("type-structure-declaration.galgas", 650)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 650)) ;
          }else if (kBoolFalse == test_6) {
            const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, enumerator_23350.current_mValue (HERE).getter_string (HERE).objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 651)))).boolEnum () ;
            if (kBoolTrue == test_9) {
              const enumGalgasBool test_10 = var_functionAttributes_23234.getter_mutating (SOURCE_FILE ("type-structure-declaration.galgas", 652)).boolEnum () ;
              if (kBoolTrue == test_10) {
                TC_Array <C_FixItDescription> fixItArray11 ;
                inCompiler->emitSemanticError (enumerator_23350.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 653)), GALGAS_string ("duplicated @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 653)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 653)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 653)), fixItArray11  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 653)) ;
              }
              var_functionAttributes_23234 = var_functionAttributes_23234.operator_or (GALGAS_routineAttributes::constructor_mutating (SOURCE_FILE ("type-structure-declaration.galgas", 655)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 655)) ;
            }else if (kBoolFalse == test_9) {
              TC_Array <C_FixItDescription> fixItArray12 ;
              inCompiler->emitSemanticError (enumerator_23350.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 657)), GALGAS_string ("unknown attribute; available attributes are @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 657)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 657)).add_operation (GALGAS_string (", @"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 657)).add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 658)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 658)).add_operation (GALGAS_string (" and @"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 658)).add_operation (function_userAccessAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 658)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 658)), fixItArray12  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 657)) ;
            }
          }
        }
      }
      enumerator_23350.gotoNextObject () ;
    }
    {
    routine_routineSemanticAnalysis (constinArgument_inStructureType, GALGAS_routineKind::constructor_function (enumerator_23176.current (HERE).getter_mMode (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 664)), enumerator_23176.current (HERE).getter_mMode (HERE), enumerator_23176.current (HERE).getter_mFunctionName (HERE), enumerator_23176.current (HERE).getter_mFunctionFormalArgumentList (HERE), enumerator_23176.current (HERE).getter_mFunctionReturnTypeName (HERE), enumerator_23176.current (HERE).getter_mFunctionInstructionList (HERE), enumerator_23176.current (HERE).getter_mEndOfFunctionDeclaration (HERE), var_functionAttributes_23234, var_warnIfUnused_23200, GALGAS_bool (false), constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 662)) ;
    }
    enumerator_23176.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_decoratedStructureDeclaration_functionSemanticAnalysis (void) {
  enterExtensionMethod_functionSemanticAnalysis (kTypeDescriptor_GALGAS_decoratedStructureDeclaration.mSlotID,
                                                 extensionMethod_decoratedStructureDeclaration_functionSemanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_decoratedStructureDeclaration_functionSemanticAnalysis (void) {
  gExtensionMethodTable_decoratedStructureDeclaration_functionSemanticAnalysis.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_decoratedStructureDeclaration_functionSemanticAnalysis (defineExtensionMethod_decoratedStructureDeclaration_functionSemanticAnalysis,
                                                                                   freeExtensionMethod_decoratedStructureDeclaration_functionSemanticAnalysis) ;

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_structureIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_structureIR * p = (const cPtr_structureIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_structureIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mStructureType.objectCompare (p->mProperty_mStructureType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPointerSize.objectCompare (p->mProperty_mPointerSize) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_structureIR::objectCompare (const GALGAS_structureIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureIR::GALGAS_structureIR (void) :
GALGAS_abstractGenerationIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureIR::GALGAS_structureIR (const cPtr_structureIR * inSourcePtr) :
GALGAS_abstractGenerationIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structureIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureIR GALGAS_structureIR::constructor_new (const GALGAS_PLMType & inAttribute_mStructureType,
                                                        const GALGAS_uint & inAttribute_mPointerSize
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_structureIR result ;
  if (inAttribute_mStructureType.isValid () && inAttribute_mPointerSize.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_structureIR (inAttribute_mStructureType, inAttribute_mPointerSize COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_structureIR::getter_mStructureType (UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMType result ;
  if (NULL != mObjectPtr) {
    const cPtr_structureIR * p = (const cPtr_structureIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureIR) ;
    result = p->mProperty_mStructureType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType cPtr_structureIR::getter_mStructureType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStructureType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_structureIR::getter_mPointerSize (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_structureIR * p = (const cPtr_structureIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureIR) ;
    result = p->mProperty_mPointerSize ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_structureIR::getter_mPointerSize (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPointerSize ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                        Pointer class for @structureIR class                                         *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_structureIR::cPtr_structureIR (const GALGAS_PLMType & in_mStructureType,
                                    const GALGAS_uint & in_mPointerSize
                                    COMMA_LOCATION_ARGS) :
cPtr_abstractGenerationIR (THERE),
mProperty_mStructureType (in_mStructureType),
mProperty_mPointerSize (in_mPointerSize) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_structureIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structureIR ;
}

void cPtr_structureIR::description (C_String & ioString,
                                    const int32_t inIndentation) const {
  ioString << "[@structureIR:" ;
  mProperty_mStructureType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPointerSize.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_structureIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_structureIR (mProperty_mStructureType, mProperty_mPointerSize COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @structureIR type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structureIR ("structureIR",
                                    & kTypeDescriptor_GALGAS_abstractGenerationIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_structureIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structureIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_structureIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structureIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureIR GALGAS_structureIR::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_structureIR result ;
  const GALGAS_structureIR * p = (const GALGAS_structureIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structureIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structureIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

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
  if (kOperandEqual == result) {
    result = mProperty_mFunctionDeclarationListAST.objectCompare (p->mProperty_mFunctionDeclarationListAST) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSystemRoutineListAST.objectCompare (p->mProperty_mSystemRoutineListAST) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGuardListAST.objectCompare (p->mProperty_mGuardListAST) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_syncDeclarationAST::objectCompare (const GALGAS_syncDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncDeclarationAST::GALGAS_syncDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncDeclarationAST GALGAS_syncDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_syncDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_structurePropertyListAST::constructor_emptyList (HERE),
                                                     GALGAS_functionDeclarationListAST::constructor_emptyList (HERE),
                                                     GALGAS_systemRoutineDeclarationListAST::constructor_emptyList (HERE),
                                                     GALGAS_guardDeclarationListAST::constructor_emptyList (HERE)
                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncDeclarationAST::GALGAS_syncDeclarationAST (const cPtr_syncDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syncDeclarationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncDeclarationAST GALGAS_syncDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mSyncToolName,
                                                                      const GALGAS_structurePropertyListAST & inAttribute_mStructurePropertyListAST,
                                                                      const GALGAS_functionDeclarationListAST & inAttribute_mFunctionDeclarationListAST,
                                                                      const GALGAS_systemRoutineDeclarationListAST & inAttribute_mSystemRoutineListAST,
                                                                      const GALGAS_guardDeclarationListAST & inAttribute_mGuardListAST
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_syncDeclarationAST result ;
  if (inAttribute_mSyncToolName.isValid () && inAttribute_mStructurePropertyListAST.isValid () && inAttribute_mFunctionDeclarationListAST.isValid () && inAttribute_mSystemRoutineListAST.isValid () && inAttribute_mGuardListAST.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_syncDeclarationAST (inAttribute_mSyncToolName, inAttribute_mStructurePropertyListAST, inAttribute_mFunctionDeclarationListAST, inAttribute_mSystemRoutineListAST, inAttribute_mGuardListAST COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_syncDeclarationAST::getter_mSyncToolName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_syncDeclarationAST * p = (const cPtr_syncDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncDeclarationAST) ;
    result = p->mProperty_mSyncToolName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_syncDeclarationAST::getter_mSyncToolName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSyncToolName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST GALGAS_syncDeclarationAST::getter_mStructurePropertyListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_structurePropertyListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_syncDeclarationAST * p = (const cPtr_syncDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncDeclarationAST) ;
    result = p->mProperty_mStructurePropertyListAST ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST cPtr_syncDeclarationAST::getter_mStructurePropertyListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStructurePropertyListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST GALGAS_syncDeclarationAST::getter_mFunctionDeclarationListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_functionDeclarationListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_syncDeclarationAST * p = (const cPtr_syncDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncDeclarationAST) ;
    result = p->mProperty_mFunctionDeclarationListAST ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST cPtr_syncDeclarationAST::getter_mFunctionDeclarationListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionDeclarationListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_systemRoutineDeclarationListAST GALGAS_syncDeclarationAST::getter_mSystemRoutineListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_systemRoutineDeclarationListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_syncDeclarationAST * p = (const cPtr_syncDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncDeclarationAST) ;
    result = p->mProperty_mSystemRoutineListAST ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_systemRoutineDeclarationListAST cPtr_syncDeclarationAST::getter_mSystemRoutineListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSystemRoutineListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardDeclarationListAST GALGAS_syncDeclarationAST::getter_mGuardListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_guardDeclarationListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_syncDeclarationAST * p = (const cPtr_syncDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncDeclarationAST) ;
    result = p->mProperty_mGuardListAST ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardDeclarationListAST cPtr_syncDeclarationAST::getter_mGuardListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @syncDeclarationAST class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_syncDeclarationAST::cPtr_syncDeclarationAST (const GALGAS_lstring & in_mSyncToolName,
                                                  const GALGAS_structurePropertyListAST & in_mStructurePropertyListAST,
                                                  const GALGAS_functionDeclarationListAST & in_mFunctionDeclarationListAST,
                                                  const GALGAS_systemRoutineDeclarationListAST & in_mSystemRoutineListAST,
                                                  const GALGAS_guardDeclarationListAST & in_mGuardListAST
                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mSyncToolName (in_mSyncToolName),
mProperty_mStructurePropertyListAST (in_mStructurePropertyListAST),
mProperty_mFunctionDeclarationListAST (in_mFunctionDeclarationListAST),
mProperty_mSystemRoutineListAST (in_mSystemRoutineListAST),
mProperty_mGuardListAST (in_mGuardListAST) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_syncDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncDeclarationAST ;
}

void cPtr_syncDeclarationAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@syncDeclarationAST:" ;
  mProperty_mSyncToolName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStructurePropertyListAST.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFunctionDeclarationListAST.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSystemRoutineListAST.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGuardListAST.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_syncDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_syncDeclarationAST (mProperty_mSyncToolName, mProperty_mStructurePropertyListAST, mProperty_mFunctionDeclarationListAST, mProperty_mSystemRoutineListAST, mProperty_mGuardListAST COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @syncDeclarationAST type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syncDeclarationAST ("syncDeclarationAST",
                                           & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_syncDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_syncDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syncDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_infixOperatorDescription::objectCompare (const GALGAS_infixOperatorDescription & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorDescription::GALGAS_infixOperatorDescription (void) :
AC_GALGAS_class (false) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorDescription::GALGAS_infixOperatorDescription (const cPtr_infixOperatorDescription * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_infixOperatorDescription) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_infixOperatorDescription::getter_mOperator (UNUSED_LOCATION_ARGS) const {
  GALGAS_llvmBinaryOperation result ;
  if (NULL != mObjectPtr) {
    const cPtr_infixOperatorDescription * p = (const cPtr_infixOperatorDescription *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorDescription) ;
    result = p->mProperty_mOperator ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation cPtr_infixOperatorDescription::getter_mOperator (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @infixOperatorDescription class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_infixOperatorDescription::cPtr_infixOperatorDescription (const GALGAS_llvmBinaryOperation & in_mOperator
                                                              COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mProperty_mOperator (in_mOperator) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @infixOperatorDescription type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_infixOperatorDescription ("infixOperatorDescription",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_infixOperatorDescription::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixOperatorDescription ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_infixOperatorDescription::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_infixOperatorDescription (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorDescription GALGAS_infixOperatorDescription::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_infixOperatorDescription result ;
  const GALGAS_infixOperatorDescription * p = (const GALGAS_infixOperatorDescription *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_infixOperatorDescription *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("infixOperatorDescription", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_integerObject_5F_literal_5F_infixOperator::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_integerObject_5F_literal_5F_infixOperator * p = (const cPtr_integerObject_5F_literal_5F_infixOperator *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_integerObject_5F_literal_5F_infixOperator) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperator.objectCompare (p->mProperty_mOperator) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_integerObject_5F_literal_5F_infixOperator::objectCompare (const GALGAS_integerObject_5F_literal_5F_infixOperator & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_integerObject_5F_literal_5F_infixOperator::GALGAS_integerObject_5F_literal_5F_infixOperator (void) :
GALGAS_infixOperatorDescription () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_integerObject_5F_literal_5F_infixOperator::GALGAS_integerObject_5F_literal_5F_infixOperator (const cPtr_integerObject_5F_literal_5F_infixOperator * inSourcePtr) :
GALGAS_infixOperatorDescription (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_integerObject_5F_literal_5F_infixOperator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_integerObject_5F_literal_5F_infixOperator GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (const GALGAS_llvmBinaryOperation & inAttribute_mOperator
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_integerObject_5F_literal_5F_infixOperator result ;
  if (inAttribute_mOperator.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_integerObject_5F_literal_5F_infixOperator (inAttribute_mOperator COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @integerObject_literal_infixOperator class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_integerObject_5F_literal_5F_infixOperator::cPtr_integerObject_5F_literal_5F_infixOperator (const GALGAS_llvmBinaryOperation & in_mOperator
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_infixOperatorDescription (in_mOperator COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_integerObject_5F_literal_5F_infixOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerObject_5F_literal_5F_infixOperator ;
}

void cPtr_integerObject_5F_literal_5F_infixOperator::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "[@integerObject_literal_infixOperator:" ;
  mProperty_mOperator.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_integerObject_5F_literal_5F_infixOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_integerObject_5F_literal_5F_infixOperator (mProperty_mOperator COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @integerObject_literal_infixOperator type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_integerObject_5F_literal_5F_infixOperator ("integerObject_literal_infixOperator",
                                                                  & kTypeDescriptor_GALGAS_infixOperatorDescription) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_integerObject_5F_literal_5F_infixOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerObject_5F_literal_5F_infixOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_integerObject_5F_literal_5F_infixOperator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_integerObject_5F_literal_5F_infixOperator (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_integerObject_5F_literal_5F_infixOperator GALGAS_integerObject_5F_literal_5F_infixOperator::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_integerObject_5F_literal_5F_infixOperator result ;
  const GALGAS_integerObject_5F_literal_5F_infixOperator * p = (const GALGAS_integerObject_5F_literal_5F_infixOperator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_integerObject_5F_literal_5F_infixOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("integerObject_literal_infixOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_literal_5F_integerObject_5F_infixOperator::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literal_5F_integerObject_5F_infixOperator * p = (const cPtr_literal_5F_integerObject_5F_infixOperator *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literal_5F_integerObject_5F_infixOperator) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperator.objectCompare (p->mProperty_mOperator) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_literal_5F_integerObject_5F_infixOperator::objectCompare (const GALGAS_literal_5F_integerObject_5F_infixOperator & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literal_5F_integerObject_5F_infixOperator::GALGAS_literal_5F_integerObject_5F_infixOperator (void) :
GALGAS_infixOperatorDescription () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literal_5F_integerObject_5F_infixOperator::GALGAS_literal_5F_integerObject_5F_infixOperator (const cPtr_literal_5F_integerObject_5F_infixOperator * inSourcePtr) :
GALGAS_infixOperatorDescription (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literal_5F_integerObject_5F_infixOperator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literal_5F_integerObject_5F_infixOperator GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (const GALGAS_llvmBinaryOperation & inAttribute_mOperator
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_literal_5F_integerObject_5F_infixOperator result ;
  if (inAttribute_mOperator.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literal_5F_integerObject_5F_infixOperator (inAttribute_mOperator COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @literal_integerObject_infixOperator class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_literal_5F_integerObject_5F_infixOperator::cPtr_literal_5F_integerObject_5F_infixOperator (const GALGAS_llvmBinaryOperation & in_mOperator
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_infixOperatorDescription (in_mOperator COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_literal_5F_integerObject_5F_infixOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literal_5F_integerObject_5F_infixOperator ;
}

void cPtr_literal_5F_integerObject_5F_infixOperator::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "[@literal_integerObject_infixOperator:" ;
  mProperty_mOperator.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_literal_5F_integerObject_5F_infixOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literal_5F_integerObject_5F_infixOperator (mProperty_mOperator COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @literal_integerObject_infixOperator type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literal_5F_integerObject_5F_infixOperator ("literal_integerObject_infixOperator",
                                                                  & kTypeDescriptor_GALGAS_infixOperatorDescription) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_literal_5F_integerObject_5F_infixOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literal_5F_integerObject_5F_infixOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_literal_5F_integerObject_5F_infixOperator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literal_5F_integerObject_5F_infixOperator (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literal_5F_integerObject_5F_infixOperator GALGAS_literal_5F_integerObject_5F_infixOperator::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_literal_5F_integerObject_5F_infixOperator result ;
  const GALGAS_literal_5F_integerObject_5F_infixOperator * p = (const GALGAS_literal_5F_integerObject_5F_infixOperator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literal_5F_integerObject_5F_infixOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literal_integerObject_infixOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_literal_5F_literal_5F_integerInfixOperation::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literal_5F_literal_5F_integerInfixOperation * p = (const cPtr_literal_5F_literal_5F_integerInfixOperation *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literal_5F_literal_5F_integerInfixOperation) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperator.objectCompare (p->mProperty_mOperator) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_literal_5F_literal_5F_integerInfixOperation::objectCompare (const GALGAS_literal_5F_literal_5F_integerInfixOperation & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literal_5F_literal_5F_integerInfixOperation::GALGAS_literal_5F_literal_5F_integerInfixOperation (void) :
GALGAS_infixOperatorDescription () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literal_5F_literal_5F_integerInfixOperation::GALGAS_literal_5F_literal_5F_integerInfixOperation (const cPtr_literal_5F_literal_5F_integerInfixOperation * inSourcePtr) :
GALGAS_infixOperatorDescription (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literal_5F_literal_5F_integerInfixOperation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literal_5F_literal_5F_integerInfixOperation GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (const GALGAS_llvmBinaryOperation & inAttribute_mOperator
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_literal_5F_literal_5F_integerInfixOperation result ;
  if (inAttribute_mOperator.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literal_5F_literal_5F_integerInfixOperation (inAttribute_mOperator COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Pointer class for @literal_literal_integerInfixOperation class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_literal_5F_literal_5F_integerInfixOperation::cPtr_literal_5F_literal_5F_integerInfixOperation (const GALGAS_llvmBinaryOperation & in_mOperator
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_infixOperatorDescription (in_mOperator COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_literal_5F_literal_5F_integerInfixOperation::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literal_5F_literal_5F_integerInfixOperation ;
}

void cPtr_literal_5F_literal_5F_integerInfixOperation::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "[@literal_literal_integerInfixOperation:" ;
  mProperty_mOperator.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_literal_5F_literal_5F_integerInfixOperation::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literal_5F_literal_5F_integerInfixOperation (mProperty_mOperator COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @literal_literal_integerInfixOperation type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literal_5F_literal_5F_integerInfixOperation ("literal_literal_integerInfixOperation",
                                                                    & kTypeDescriptor_GALGAS_infixOperatorDescription) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_literal_5F_literal_5F_integerInfixOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literal_5F_literal_5F_integerInfixOperation ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_literal_5F_literal_5F_integerInfixOperation::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literal_5F_literal_5F_integerInfixOperation (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literal_5F_literal_5F_integerInfixOperation GALGAS_literal_5F_literal_5F_integerInfixOperation::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_literal_5F_literal_5F_integerInfixOperation result ;
  const GALGAS_literal_5F_literal_5F_integerInfixOperation * p = (const GALGAS_literal_5F_literal_5F_integerInfixOperation *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literal_5F_literal_5F_integerInfixOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literal_literal_integerInfixOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_literalStringDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalStringDeclarationAST * p = (const cPtr_literalStringDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalStringDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLiteralStringTypeName.objectCompare (p->mProperty_mLiteralStringTypeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_literalStringDeclarationAST::objectCompare (const GALGAS_literalStringDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalStringDeclarationAST::GALGAS_literalStringDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalStringDeclarationAST GALGAS_literalStringDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalStringDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                              COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalStringDeclarationAST::GALGAS_literalStringDeclarationAST (const cPtr_literalStringDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalStringDeclarationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalStringDeclarationAST GALGAS_literalStringDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mLiteralStringTypeName
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_literalStringDeclarationAST result ;
  if (inAttribute_mLiteralStringTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalStringDeclarationAST (inAttribute_mLiteralStringTypeName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_literalStringDeclarationAST::getter_mLiteralStringTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_literalStringDeclarationAST * p = (const cPtr_literalStringDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalStringDeclarationAST) ;
    result = p->mProperty_mLiteralStringTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_literalStringDeclarationAST::getter_mLiteralStringTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLiteralStringTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @literalStringDeclarationAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_literalStringDeclarationAST::cPtr_literalStringDeclarationAST (const GALGAS_lstring & in_mLiteralStringTypeName
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mLiteralStringTypeName (in_mLiteralStringTypeName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_literalStringDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringDeclarationAST ;
}

void cPtr_literalStringDeclarationAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@literalStringDeclarationAST:" ;
  mProperty_mLiteralStringTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_literalStringDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalStringDeclarationAST (mProperty_mLiteralStringTypeName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @literalStringDeclarationAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalStringDeclarationAST ("literalStringDeclarationAST",
                                                    & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_literalStringDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_literalStringDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalStringDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalStringDeclarationAST GALGAS_literalStringDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_literalStringDeclarationAST result ;
  const GALGAS_literalStringDeclarationAST * p = (const GALGAS_literalStringDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalStringDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalStringDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_typeOpaqueDefinitionDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_typeOpaqueDefinitionDeclaration * p = (const cPtr_typeOpaqueDefinitionDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_typeOpaqueDefinitionDeclaration) ;
  if (kOperandEqual == result) {
    result = mProperty_mAnonymousOpaqueTypeName.objectCompare (p->mProperty_mAnonymousOpaqueTypeName) ;
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

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_typeOpaqueDefinitionDeclaration::objectCompare (const GALGAS_typeOpaqueDefinitionDeclaration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeOpaqueDefinitionDeclaration::GALGAS_typeOpaqueDefinitionDeclaration (void) :
GALGAS_abstractDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeOpaqueDefinitionDeclaration::GALGAS_typeOpaqueDefinitionDeclaration (const cPtr_typeOpaqueDefinitionDeclaration * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typeOpaqueDefinitionDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeOpaqueDefinitionDeclaration GALGAS_typeOpaqueDefinitionDeclaration::constructor_new (const GALGAS_lstring & inAttribute_mAnonymousOpaqueTypeName,
                                                                                                const GALGAS_expressionAST & inAttribute_mSizeExpression,
                                                                                                const GALGAS_location & inAttribute_mSizeExpressionLocation,
                                                                                                const GALGAS_lstringlist & inAttribute_mAttributeList
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_typeOpaqueDefinitionDeclaration result ;
  if (inAttribute_mAnonymousOpaqueTypeName.isValid () && inAttribute_mSizeExpression.isValid () && inAttribute_mSizeExpressionLocation.isValid () && inAttribute_mAttributeList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_typeOpaqueDefinitionDeclaration (inAttribute_mAnonymousOpaqueTypeName, inAttribute_mSizeExpression, inAttribute_mSizeExpressionLocation, inAttribute_mAttributeList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_typeOpaqueDefinitionDeclaration::getter_mAnonymousOpaqueTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_typeOpaqueDefinitionDeclaration * p = (const cPtr_typeOpaqueDefinitionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeOpaqueDefinitionDeclaration) ;
    result = p->mProperty_mAnonymousOpaqueTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_typeOpaqueDefinitionDeclaration::getter_mAnonymousOpaqueTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAnonymousOpaqueTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_typeOpaqueDefinitionDeclaration::getter_mSizeExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_typeOpaqueDefinitionDeclaration * p = (const cPtr_typeOpaqueDefinitionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeOpaqueDefinitionDeclaration) ;
    result = p->mProperty_mSizeExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_typeOpaqueDefinitionDeclaration::getter_mSizeExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSizeExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_typeOpaqueDefinitionDeclaration::getter_mSizeExpressionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_typeOpaqueDefinitionDeclaration * p = (const cPtr_typeOpaqueDefinitionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeOpaqueDefinitionDeclaration) ;
    result = p->mProperty_mSizeExpressionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_typeOpaqueDefinitionDeclaration::getter_mSizeExpressionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSizeExpressionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_typeOpaqueDefinitionDeclaration::getter_mAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_typeOpaqueDefinitionDeclaration * p = (const cPtr_typeOpaqueDefinitionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeOpaqueDefinitionDeclaration) ;
    result = p->mProperty_mAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_typeOpaqueDefinitionDeclaration::getter_mAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @typeOpaqueDefinitionDeclaration class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_typeOpaqueDefinitionDeclaration::cPtr_typeOpaqueDefinitionDeclaration (const GALGAS_lstring & in_mAnonymousOpaqueTypeName,
                                                                            const GALGAS_expressionAST & in_mSizeExpression,
                                                                            const GALGAS_location & in_mSizeExpressionLocation,
                                                                            const GALGAS_lstringlist & in_mAttributeList
                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mAnonymousOpaqueTypeName (in_mAnonymousOpaqueTypeName),
mProperty_mSizeExpression (in_mSizeExpression),
mProperty_mSizeExpressionLocation (in_mSizeExpressionLocation),
mProperty_mAttributeList (in_mAttributeList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_typeOpaqueDefinitionDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeOpaqueDefinitionDeclaration ;
}

void cPtr_typeOpaqueDefinitionDeclaration::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@typeOpaqueDefinitionDeclaration:" ;
  mProperty_mAnonymousOpaqueTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSizeExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSizeExpressionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAttributeList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_typeOpaqueDefinitionDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_typeOpaqueDefinitionDeclaration (mProperty_mAnonymousOpaqueTypeName, mProperty_mSizeExpression, mProperty_mSizeExpressionLocation, mProperty_mAttributeList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @typeOpaqueDefinitionDeclaration type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeOpaqueDefinitionDeclaration ("typeOpaqueDefinitionDeclaration",
                                                        & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_typeOpaqueDefinitionDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeOpaqueDefinitionDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_typeOpaqueDefinitionDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeOpaqueDefinitionDeclaration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeOpaqueDefinitionDeclaration GALGAS_typeOpaqueDefinitionDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_typeOpaqueDefinitionDeclaration result ;
  const GALGAS_typeOpaqueDefinitionDeclaration * p = (const GALGAS_typeOpaqueDefinitionDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeOpaqueDefinitionDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeOpaqueDefinitionDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Extension method '@typeOpaqueDefinitionDeclaration noteTypesInPrecedenceGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_typeOpaqueDefinitionDeclaration_noteTypesInPrecedenceGraph> gExtensionMethodTable_typeOpaqueDefinitionDeclaration_noteTypesInPrecedenceGraph ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_noteTypesInPrecedenceGraph (const int32_t inClassIndex,
                                                      extensionMethodSignature_typeOpaqueDefinitionDeclaration_noteTypesInPrecedenceGraph inMethod) {
  gExtensionMethodTable_typeOpaqueDefinitionDeclaration_noteTypesInPrecedenceGraph.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_noteTypesInPrecedenceGraph (const cPtr_typeOpaqueDefinitionDeclaration * inObject,
                                                     GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_typeOpaqueDefinitionDeclaration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_typeOpaqueDefinitionDeclaration_noteTypesInPrecedenceGraph f = NULL ;
    if (classIndex < gExtensionMethodTable_typeOpaqueDefinitionDeclaration_noteTypesInPrecedenceGraph.count ()) {
      f = gExtensionMethodTable_typeOpaqueDefinitionDeclaration_noteTypesInPrecedenceGraph (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_typeOpaqueDefinitionDeclaration_noteTypesInPrecedenceGraph.count ()) {
           f = gExtensionMethodTable_typeOpaqueDefinitionDeclaration_noteTypesInPrecedenceGraph (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_typeOpaqueDefinitionDeclaration_noteTypesInPrecedenceGraph.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioGraph, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeOpaqueDefinitionDeclaration_noteTypesInPrecedenceGraph (const cPtr_typeOpaqueDefinitionDeclaration * inObject,
                                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeOpaqueDefinitionDeclaration * object = inObject ;
  macroValidSharedObject (object, cPtr_typeOpaqueDefinitionDeclaration) ;
  GALGAS_lstring var_typeName_2852 = function_llvmTypeNameFromPLMname (object->mProperty_mAnonymousOpaqueTypeName, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 62)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_2852 COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 63)) ;
  }
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mSizeExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 64)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typeOpaqueDefinitionDeclaration_noteTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_typeOpaqueDefinitionDeclaration.mSlotID,
                                                   extensionMethod_typeOpaqueDefinitionDeclaration_noteTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_typeOpaqueDefinitionDeclaration_noteTypesInPrecedenceGraph (void) {
  gExtensionMethodTable_typeOpaqueDefinitionDeclaration_noteTypesInPrecedenceGraph.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeOpaqueDefinitionDeclaration_noteTypesInPrecedenceGraph (defineExtensionMethod_typeOpaqueDefinitionDeclaration_noteTypesInPrecedenceGraph,
                                                                                       freeExtensionMethod_typeOpaqueDefinitionDeclaration_noteTypesInPrecedenceGraph) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterDeclarationList_2D_element::GALGAS_controlRegisterDeclarationList_2D_element (void) :
mProperty_mRegisterArrayList (),
mProperty_mRegisterTypeName (),
mProperty_mRegisterBitSliceList (),
mProperty_mRegisterBitSliceListLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterDeclarationList_2D_element::~ GALGAS_controlRegisterDeclarationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterDeclarationList_2D_element::GALGAS_controlRegisterDeclarationList_2D_element (const GALGAS_controlRegisterNameListAST & inOperand0,
                                                                                                    const GALGAS_lstring & inOperand1,
                                                                                                    const GALGAS_controlRegisterBitSliceList & inOperand2,
                                                                                                    const GALGAS_location & inOperand3) :
mProperty_mRegisterArrayList (inOperand0),
mProperty_mRegisterTypeName (inOperand1),
mProperty_mRegisterBitSliceList (inOperand2),
mProperty_mRegisterBitSliceListLocation (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterDeclarationList_2D_element GALGAS_controlRegisterDeclarationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_controlRegisterDeclarationList_2D_element (GALGAS_controlRegisterNameListAST::constructor_emptyList (HERE),
                                                           GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_controlRegisterBitSliceList::constructor_emptyList (HERE),
                                                           GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_controlRegisterDeclarationList_2D_element::isValid (void) const {
  return mProperty_mRegisterArrayList.isValid () && mProperty_mRegisterTypeName.isValid () && mProperty_mRegisterBitSliceList.isValid () && mProperty_mRegisterBitSliceListLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterDeclarationList_2D_element::drop (void) {
  mProperty_mRegisterArrayList.drop () ;
  mProperty_mRegisterTypeName.drop () ;
  mProperty_mRegisterBitSliceList.drop () ;
  mProperty_mRegisterBitSliceListLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterNameListAST GALGAS_controlRegisterDeclarationList_2D_element::getter_mRegisterArrayList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterArrayList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_controlRegisterDeclarationList_2D_element::getter_mRegisterTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSliceList GALGAS_controlRegisterDeclarationList_2D_element::getter_mRegisterBitSliceList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterBitSliceList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_controlRegisterDeclarationList_2D_element::getter_mRegisterBitSliceListLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterBitSliceListLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @controlRegisterDeclarationList-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterDeclarationList_2D_element ("controlRegisterDeclarationList-element",
                                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_controlRegisterDeclarationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterDeclarationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_controlRegisterDeclarationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterDeclarationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_decoratedControlRegisterArrayGroupDeclaration::objectCompare (const GALGAS_decoratedControlRegisterArrayGroupDeclaration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedControlRegisterArrayGroupDeclaration::GALGAS_decoratedControlRegisterArrayGroupDeclaration (void) :
GALGAS_abstractDecoratedDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedControlRegisterArrayGroupDeclaration GALGAS_decoratedControlRegisterArrayGroupDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_decoratedControlRegisterArrayGroupDeclaration::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                                GALGAS_lbigintlist::constructor_emptyList (HERE)
                                                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedControlRegisterArrayGroupDeclaration::GALGAS_decoratedControlRegisterArrayGroupDeclaration (const cPtr_decoratedControlRegisterArrayGroupDeclaration * inSourcePtr) :
GALGAS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedControlRegisterArrayGroupDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedControlRegisterArrayGroupDeclaration GALGAS_decoratedControlRegisterArrayGroupDeclaration::constructor_new (const GALGAS_lstring & inAttribute_mGroupName,
                                                                                                                            const GALGAS_lbigintlist & inAttribute_mBaseAddresses
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_decoratedControlRegisterArrayGroupDeclaration result ;
  if (inAttribute_mGroupName.isValid () && inAttribute_mBaseAddresses.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_decoratedControlRegisterArrayGroupDeclaration (inAttribute_mGroupName, inAttribute_mBaseAddresses COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_decoratedControlRegisterArrayGroupDeclaration::getter_mGroupName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedControlRegisterArrayGroupDeclaration * p = (const cPtr_decoratedControlRegisterArrayGroupDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedControlRegisterArrayGroupDeclaration) ;
    result = p->mProperty_mGroupName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_decoratedControlRegisterArrayGroupDeclaration::getter_mGroupName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGroupName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigintlist GALGAS_decoratedControlRegisterArrayGroupDeclaration::getter_mBaseAddresses (UNUSED_LOCATION_ARGS) const {
  GALGAS_lbigintlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedControlRegisterArrayGroupDeclaration * p = (const cPtr_decoratedControlRegisterArrayGroupDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedControlRegisterArrayGroupDeclaration) ;
    result = p->mProperty_mBaseAddresses ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigintlist cPtr_decoratedControlRegisterArrayGroupDeclaration::getter_mBaseAddresses (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBaseAddresses ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                       Pointer class for @decoratedControlRegisterArrayGroupDeclaration class                        *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_decoratedControlRegisterArrayGroupDeclaration::cPtr_decoratedControlRegisterArrayGroupDeclaration (const GALGAS_lstring & in_mGroupName,
                                                                                                        const GALGAS_lbigintlist & in_mBaseAddresses
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (THERE),
mProperty_mGroupName (in_mGroupName),
mProperty_mBaseAddresses (in_mBaseAddresses) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_decoratedControlRegisterArrayGroupDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_decoratedControlRegisterArrayGroupDeclaration (mProperty_mGroupName, mProperty_mBaseAddresses COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @decoratedControlRegisterArrayGroupDeclaration type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedControlRegisterArrayGroupDeclaration ("decoratedControlRegisterArrayGroupDeclaration",
                                                                      & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_decoratedControlRegisterArrayGroupDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedControlRegisterArrayGroupDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_decoratedControlRegisterArrayGroupDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedControlRegisterArrayGroupDeclaration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Extension method '@controlRegisterGroupArrayList generateLLVMcode'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_generateLLVMcode (const GALGAS_controlRegisterGroupArrayList inObject,
                                       GALGAS_string & ioArgument_ioLLVMcode,
                                       const GALGAS_uint constinArgument_inPointerSize,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_controlRegisterGroupArrayList temp_0 = inObject ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, temp_0.getter_length (SOURCE_FILE ("declaration-control-register.galgas", 619)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Control Register Group Arraies"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 620)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 620)) ;
    GALGAS_string var_int_25330 = GALGAS_string ("i").add_operation (constinArgument_inPointerSize.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 621)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 621)) ;
    const GALGAS_controlRegisterGroupArrayList temp_2 = inObject ;
    cEnumerator_controlRegisterGroupArrayList enumerator_25394 (temp_2, kENUMERATION_UP) ;
    while (enumerator_25394.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(function_registerGroupAddressArrayLLVMname (enumerator_25394.current_mGroupName (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 623)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 623)).add_operation (GALGAS_string (" = private unnamed_addr constant ["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 623)).add_operation (enumerator_25394.current_mBaseAddresses (HERE).getter_length (SOURCE_FILE ("declaration-control-register.galgas", 624)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 624)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 624)).add_operation (GALGAS_string (" x "), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 624)).add_operation (var_int_25330, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 624)).add_operation (GALGAS_string ("] ["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 624)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 623)) ;
      cEnumerator_lbigintlist enumerator_25601 (enumerator_25394.current_mBaseAddresses (HERE), kENUMERATION_UP) ;
      while (enumerator_25601.hasCurrentObject ()) {
        ioArgument_ioLLVMcode.plusAssign_operation(var_int_25330.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 627)).add_operation (enumerator_25601.current_mValue (HERE).getter_bigint (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 627)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 627)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 627)) ;
        if (enumerator_25601.hasNextObject ()) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 629)) ;
        }
        enumerator_25601.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("] ; "), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 631)) ;
      cEnumerator_lbigintlist enumerator_25777 (enumerator_25394.current_mBaseAddresses (HERE), kENUMERATION_UP) ;
      while (enumerator_25777.hasCurrentObject ()) {
        ioArgument_ioLLVMcode.plusAssign_operation(enumerator_25777.current_mValue (HERE).getter_bigint (HERE).getter_hexString (SOURCE_FILE ("declaration-control-register.galgas", 634)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 634)) ;
        if (enumerator_25777.hasNextObject ()) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 636)) ;
        }
        enumerator_25777.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 638)) ;
      enumerator_25394.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 640)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_globalConstantDeclarationAST::objectCompare (const GALGAS_globalConstantDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantDeclarationAST::GALGAS_globalConstantDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantDeclarationAST::GALGAS_globalConstantDeclarationAST (const cPtr_globalConstantDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_globalConstantDeclarationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_globalConstantDeclarationAST::getter_mConstantName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_globalConstantDeclarationAST * p = (const cPtr_globalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_globalConstantDeclarationAST) ;
    result = p->mProperty_mConstantName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_globalConstantDeclarationAST::getter_mConstantName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConstantName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_globalConstantDeclarationAST::getter_mAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_globalConstantDeclarationAST * p = (const cPtr_globalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_globalConstantDeclarationAST) ;
    result = p->mProperty_mAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_globalConstantDeclarationAST::getter_mAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_globalConstantDeclarationAST::getter_mConstantTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_globalConstantDeclarationAST * p = (const cPtr_globalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_globalConstantDeclarationAST) ;
    result = p->mProperty_mConstantTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_globalConstantDeclarationAST::getter_mConstantTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConstantTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_globalConstantDeclarationAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_globalConstantDeclarationAST * p = (const cPtr_globalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_globalConstantDeclarationAST) ;
    result = p->mProperty_mSourceExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_globalConstantDeclarationAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @globalConstantDeclarationAST class                                *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_globalConstantDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_globalConstantDeclarationAST (mProperty_mConstantName, mProperty_mAttributeList, mProperty_mConstantTypeName, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @globalConstantDeclarationAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalConstantDeclarationAST ("globalConstantDeclarationAST",
                                                     & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_globalConstantDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalConstantDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_globalConstantDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalConstantDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_syncToolInstanceDeclarationAST::objectCompare (const GALGAS_syncToolInstanceDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncToolInstanceDeclarationAST::GALGAS_syncToolInstanceDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncToolInstanceDeclarationAST::GALGAS_syncToolInstanceDeclarationAST (const cPtr_syncToolInstanceDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syncToolInstanceDeclarationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_syncToolInstanceDeclarationAST::getter_mSyncTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_syncToolInstanceDeclarationAST * p = (const cPtr_syncToolInstanceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncToolInstanceDeclarationAST) ;
    result = p->mProperty_mSyncTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_syncToolInstanceDeclarationAST::getter_mSyncTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSyncTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_syncToolInstanceDeclarationAST::getter_mSyncInstanceName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_syncToolInstanceDeclarationAST * p = (const cPtr_syncToolInstanceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncToolInstanceDeclarationAST) ;
    result = p->mProperty_mSyncInstanceName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_syncToolInstanceDeclarationAST::getter_mSyncInstanceName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSyncInstanceName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_syncToolInstanceDeclarationAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_syncToolInstanceDeclarationAST * p = (const cPtr_syncToolInstanceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncToolInstanceDeclarationAST) ;
    result = p->mProperty_mSourceExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_syncToolInstanceDeclarationAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @syncToolInstanceDeclarationAST class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_syncToolInstanceDeclarationAST::cPtr_syncToolInstanceDeclarationAST (const GALGAS_lstring & in_mSyncTypeName,
                                                                          const GALGAS_lstring & in_mSyncInstanceName,
                                                                          const GALGAS_expressionAST & in_mSourceExpression
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mSyncTypeName (in_mSyncTypeName),
mProperty_mSyncInstanceName (in_mSyncInstanceName),
mProperty_mSourceExpression (in_mSourceExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_syncToolInstanceDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_syncToolInstanceDeclarationAST (mProperty_mSyncTypeName, mProperty_mSyncInstanceName, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @syncToolInstanceDeclarationAST type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST ("syncToolInstanceDeclarationAST",
                                                       & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_syncToolInstanceDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_syncToolInstanceDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syncToolInstanceDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_decoratedSyncInstance::objectCompare (const GALGAS_decoratedSyncInstance & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedSyncInstance::GALGAS_decoratedSyncInstance (void) :
GALGAS_abstractDecoratedDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedSyncInstance::GALGAS_decoratedSyncInstance (const cPtr_decoratedSyncInstance * inSourcePtr) :
GALGAS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedSyncInstance) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedSyncInstance GALGAS_decoratedSyncInstance::constructor_new (const GALGAS_lstring & inAttribute_mSyncInstanceName,
                                                                            const GALGAS_objectIR & inAttribute_mExpressionGeneratedCode
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_decoratedSyncInstance result ;
  if (inAttribute_mSyncInstanceName.isValid () && inAttribute_mExpressionGeneratedCode.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_decoratedSyncInstance (inAttribute_mSyncInstanceName, inAttribute_mExpressionGeneratedCode COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_decoratedSyncInstance::getter_mSyncInstanceName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedSyncInstance * p = (const cPtr_decoratedSyncInstance *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedSyncInstance) ;
    result = p->mProperty_mSyncInstanceName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_decoratedSyncInstance::getter_mSyncInstanceName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSyncInstanceName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_decoratedSyncInstance::getter_mExpressionGeneratedCode (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedSyncInstance * p = (const cPtr_decoratedSyncInstance *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedSyncInstance) ;
    result = p->mProperty_mExpressionGeneratedCode ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_decoratedSyncInstance::getter_mExpressionGeneratedCode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpressionGeneratedCode ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @decoratedSyncInstance class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_decoratedSyncInstance::cPtr_decoratedSyncInstance (const GALGAS_lstring & in_mSyncInstanceName,
                                                        const GALGAS_objectIR & in_mExpressionGeneratedCode
                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (THERE),
mProperty_mSyncInstanceName (in_mSyncInstanceName),
mProperty_mExpressionGeneratedCode (in_mExpressionGeneratedCode) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_decoratedSyncInstance::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_decoratedSyncInstance (mProperty_mSyncInstanceName, mProperty_mExpressionGeneratedCode COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @decoratedSyncInstance type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedSyncInstance ("decoratedSyncInstance",
                                              & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_decoratedSyncInstance::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedSyncInstance ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_decoratedSyncInstance::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedSyncInstance (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalSyncInstanceMapIR_2D_element::GALGAS_globalSyncInstanceMapIR_2D_element (void) :
mProperty_lkey (),
mProperty_mInitialValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalSyncInstanceMapIR_2D_element::~ GALGAS_globalSyncInstanceMapIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalSyncInstanceMapIR_2D_element::GALGAS_globalSyncInstanceMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_objectIR & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mInitialValue (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalSyncInstanceMapIR_2D_element GALGAS_globalSyncInstanceMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_objectIR & inOperand1 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_globalSyncInstanceMapIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_globalSyncInstanceMapIR_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_globalSyncInstanceMapIR_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInitialValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalSyncInstanceMapIR_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mInitialValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_globalSyncInstanceMapIR_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_globalSyncInstanceMapIR_2D_element::getter_mInitialValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInitialValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @globalSyncInstanceMapIR-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalSyncInstanceMapIR_2D_element ("globalSyncInstanceMapIR-element",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_globalSyncInstanceMapIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalSyncInstanceMapIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_globalSyncInstanceMapIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalSyncInstanceMapIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_bootAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_bootAST * p = (const cPtr_bootAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_bootAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mDriverName.objectCompare (p->mProperty_mDriverName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDriverDependanceList.objectCompare (p->mProperty_mDriverDependanceList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBootLocation.objectCompare (p->mProperty_mBootLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfBootLocation.objectCompare (p->mProperty_mEndOfBootLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_bootAST::objectCompare (const GALGAS_bootAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootAST::GALGAS_bootAST (void) :
GALGAS_abstractDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootAST GALGAS_bootAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_bootAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                          GALGAS_lstringlist::constructor_emptyList (HERE),
                                          GALGAS_location::constructor_nowhere (HERE),
                                          GALGAS_instructionListAST::constructor_emptyList (HERE),
                                          GALGAS_location::constructor_nowhere (HERE)
                                          COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootAST::GALGAS_bootAST (const cPtr_bootAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_bootAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootAST GALGAS_bootAST::constructor_new (const GALGAS_lstring & inAttribute_mDriverName,
                                                const GALGAS_lstringlist & inAttribute_mDriverDependanceList,
                                                const GALGAS_location & inAttribute_mBootLocation,
                                                const GALGAS_instructionListAST & inAttribute_mInstructionList,
                                                const GALGAS_location & inAttribute_mEndOfBootLocation
                                                COMMA_LOCATION_ARGS) {
  GALGAS_bootAST result ;
  if (inAttribute_mDriverName.isValid () && inAttribute_mDriverDependanceList.isValid () && inAttribute_mBootLocation.isValid () && inAttribute_mInstructionList.isValid () && inAttribute_mEndOfBootLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_bootAST (inAttribute_mDriverName, inAttribute_mDriverDependanceList, inAttribute_mBootLocation, inAttribute_mInstructionList, inAttribute_mEndOfBootLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_bootAST::getter_mDriverName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_bootAST * p = (const cPtr_bootAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bootAST) ;
    result = p->mProperty_mDriverName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_bootAST::getter_mDriverName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDriverName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_bootAST::getter_mDriverDependanceList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_bootAST * p = (const cPtr_bootAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bootAST) ;
    result = p->mProperty_mDriverDependanceList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_bootAST::getter_mDriverDependanceList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDriverDependanceList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_bootAST::getter_mBootLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_bootAST * p = (const cPtr_bootAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bootAST) ;
    result = p->mProperty_mBootLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_bootAST::getter_mBootLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBootLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_bootAST::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_bootAST * p = (const cPtr_bootAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bootAST) ;
    result = p->mProperty_mInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST cPtr_bootAST::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_bootAST::getter_mEndOfBootLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_bootAST * p = (const cPtr_bootAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bootAST) ;
    result = p->mProperty_mEndOfBootLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_bootAST::getter_mEndOfBootLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfBootLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                          Pointer class for @bootAST class                                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_bootAST::cPtr_bootAST (const GALGAS_lstring & in_mDriverName,
                            const GALGAS_lstringlist & in_mDriverDependanceList,
                            const GALGAS_location & in_mBootLocation,
                            const GALGAS_instructionListAST & in_mInstructionList,
                            const GALGAS_location & in_mEndOfBootLocation
                            COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mDriverName (in_mDriverName),
mProperty_mDriverDependanceList (in_mDriverDependanceList),
mProperty_mBootLocation (in_mBootLocation),
mProperty_mInstructionList (in_mInstructionList),
mProperty_mEndOfBootLocation (in_mEndOfBootLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_bootAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bootAST ;
}

void cPtr_bootAST::description (C_String & ioString,
                                const int32_t inIndentation) const {
  ioString << "[@bootAST:" ;
  mProperty_mDriverName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDriverDependanceList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBootLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfBootLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_bootAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_bootAST (mProperty_mDriverName, mProperty_mDriverDependanceList, mProperty_mBootLocation, mProperty_mInstructionList, mProperty_mEndOfBootLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @bootAST type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bootAST ("bootAST",
                                & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_bootAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bootAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_bootAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bootAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootAST GALGAS_bootAST::extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_bootAST result ;
  const GALGAS_bootAST * p = (const GALGAS_bootAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bootAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bootAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_driverDeclarationAST::GALGAS_driverDeclarationAST (void) :
mProperty_mDriverName (),
mProperty_mDriverDependanceList (),
mProperty_mDriverPropertyListAST (),
mProperty_mDriverFunctionDeclarationListAST (),
mProperty_mDriverSystemRoutineListAST (),
mProperty_mDriverGuardListAST (),
mProperty_mDriverInitListAST (),
mProperty_mDriverBootListAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_driverDeclarationAST::~ GALGAS_driverDeclarationAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_driverDeclarationAST::GALGAS_driverDeclarationAST (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_lstringlist & inOperand1,
                                                          const GALGAS_driverPropertyListAST & inOperand2,
                                                          const GALGAS_functionDeclarationListAST & inOperand3,
                                                          const GALGAS_systemRoutineDeclarationListAST & inOperand4,
                                                          const GALGAS_guardDeclarationListAST & inOperand5,
                                                          const GALGAS_initListAST & inOperand6,
                                                          const GALGAS_bootListAST & inOperand7) :
mProperty_mDriverName (inOperand0),
mProperty_mDriverDependanceList (inOperand1),
mProperty_mDriverPropertyListAST (inOperand2),
mProperty_mDriverFunctionDeclarationListAST (inOperand3),
mProperty_mDriverSystemRoutineListAST (inOperand4),
mProperty_mDriverGuardListAST (inOperand5),
mProperty_mDriverInitListAST (inOperand6),
mProperty_mDriverBootListAST (inOperand7) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_driverDeclarationAST GALGAS_driverDeclarationAST::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_driverDeclarationAST (GALGAS_lstring::constructor_default (HERE),
                                      GALGAS_lstringlist::constructor_emptyList (HERE),
                                      GALGAS_driverPropertyListAST::constructor_emptyList (HERE),
                                      GALGAS_functionDeclarationListAST::constructor_emptyList (HERE),
                                      GALGAS_systemRoutineDeclarationListAST::constructor_emptyList (HERE),
                                      GALGAS_guardDeclarationListAST::constructor_emptyList (HERE),
                                      GALGAS_initListAST::constructor_emptyList (HERE),
                                      GALGAS_bootListAST::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_driverDeclarationAST GALGAS_driverDeclarationAST::constructor_new (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_lstringlist & inOperand1,
                                                                          const GALGAS_driverPropertyListAST & inOperand2,
                                                                          const GALGAS_functionDeclarationListAST & inOperand3,
                                                                          const GALGAS_systemRoutineDeclarationListAST & inOperand4,
                                                                          const GALGAS_guardDeclarationListAST & inOperand5,
                                                                          const GALGAS_initListAST & inOperand6,
                                                                          const GALGAS_bootListAST & inOperand7 
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_driverDeclarationAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_driverDeclarationAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_driverDeclarationAST::objectCompare (const GALGAS_driverDeclarationAST & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mDriverName.objectCompare (inOperand.mProperty_mDriverName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDriverDependanceList.objectCompare (inOperand.mProperty_mDriverDependanceList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDriverPropertyListAST.objectCompare (inOperand.mProperty_mDriverPropertyListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDriverFunctionDeclarationListAST.objectCompare (inOperand.mProperty_mDriverFunctionDeclarationListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDriverSystemRoutineListAST.objectCompare (inOperand.mProperty_mDriverSystemRoutineListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDriverGuardListAST.objectCompare (inOperand.mProperty_mDriverGuardListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDriverInitListAST.objectCompare (inOperand.mProperty_mDriverInitListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDriverBootListAST.objectCompare (inOperand.mProperty_mDriverBootListAST) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_driverDeclarationAST::isValid (void) const {
  return mProperty_mDriverName.isValid () && mProperty_mDriverDependanceList.isValid () && mProperty_mDriverPropertyListAST.isValid () && mProperty_mDriverFunctionDeclarationListAST.isValid () && mProperty_mDriverSystemRoutineListAST.isValid () && mProperty_mDriverGuardListAST.isValid () && mProperty_mDriverInitListAST.isValid () && mProperty_mDriverBootListAST.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_driverDeclarationAST::drop (void) {
  mProperty_mDriverName.drop () ;
  mProperty_mDriverDependanceList.drop () ;
  mProperty_mDriverPropertyListAST.drop () ;
  mProperty_mDriverFunctionDeclarationListAST.drop () ;
  mProperty_mDriverSystemRoutineListAST.drop () ;
  mProperty_mDriverGuardListAST.drop () ;
  mProperty_mDriverInitListAST.drop () ;
  mProperty_mDriverBootListAST.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

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
    mProperty_mDriverPropertyListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDriverFunctionDeclarationListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDriverSystemRoutineListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDriverGuardListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDriverInitListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDriverBootListAST.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_driverDeclarationAST::getter_mDriverName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDriverName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_driverDeclarationAST::getter_mDriverDependanceList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDriverDependanceList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_driverPropertyListAST GALGAS_driverDeclarationAST::getter_mDriverPropertyListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDriverPropertyListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST GALGAS_driverDeclarationAST::getter_mDriverFunctionDeclarationListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDriverFunctionDeclarationListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_systemRoutineDeclarationListAST GALGAS_driverDeclarationAST::getter_mDriverSystemRoutineListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDriverSystemRoutineListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardDeclarationListAST GALGAS_driverDeclarationAST::getter_mDriverGuardListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDriverGuardListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListAST GALGAS_driverDeclarationAST::getter_mDriverInitListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDriverInitListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListAST GALGAS_driverDeclarationAST::getter_mDriverBootListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDriverBootListAST ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @driverDeclarationAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_driverDeclarationAST ("driverDeclarationAST",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_driverDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_driverDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_driverDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

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
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_implementedDriverAST::objectCompare (const GALGAS_implementedDriverAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementedDriverAST::GALGAS_implementedDriverAST (void) :
GALGAS_abstractDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementedDriverAST GALGAS_implementedDriverAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_implementedDriverAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_lstringlist::constructor_emptyList (HERE),
                                                       GALGAS_bool::constructor_default (HERE)
                                                       COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementedDriverAST::GALGAS_implementedDriverAST (const cPtr_implementedDriverAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_implementedDriverAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementedDriverAST GALGAS_implementedDriverAST::constructor_new (const GALGAS_lstring & inAttribute_mDriverName,
                                                                          const GALGAS_lstringlist & inAttribute_mDriverDependanceList,
                                                                          const GALGAS_bool & inAttribute_mIsInstancied
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_implementedDriverAST result ;
  if (inAttribute_mDriverName.isValid () && inAttribute_mDriverDependanceList.isValid () && inAttribute_mIsInstancied.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_implementedDriverAST (inAttribute_mDriverName, inAttribute_mDriverDependanceList, inAttribute_mIsInstancied COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_implementedDriverAST::getter_mDriverName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_implementedDriverAST * p = (const cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    result = p->mProperty_mDriverName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_implementedDriverAST::getter_mDriverName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDriverName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_implementedDriverAST::getter_mDriverDependanceList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_implementedDriverAST * p = (const cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    result = p->mProperty_mDriverDependanceList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_implementedDriverAST::getter_mDriverDependanceList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDriverDependanceList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_implementedDriverAST::getter_mIsInstancied (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_implementedDriverAST * p = (const cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    result = p->mProperty_mIsInstancied ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_implementedDriverAST::getter_mIsInstancied (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsInstancied ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @implementedDriverAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_implementedDriverAST::cPtr_implementedDriverAST (const GALGAS_lstring & in_mDriverName,
                                                      const GALGAS_lstringlist & in_mDriverDependanceList,
                                                      const GALGAS_bool & in_mIsInstancied
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mDriverName (in_mDriverName),
mProperty_mDriverDependanceList (in_mDriverDependanceList),
mProperty_mIsInstancied (in_mIsInstancied) {
}

//---------------------------------------------------------------------------------------------------------------------*

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
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_implementedDriverAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_implementedDriverAST (mProperty_mDriverName, mProperty_mDriverDependanceList, mProperty_mIsInstancied COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @implementedDriverAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_implementedDriverAST ("implementedDriverAST",
                                             & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_implementedDriverAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implementedDriverAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_implementedDriverAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_implementedDriverAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_decoratedRequiredDriver::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_decoratedRequiredDriver * p = (const cPtr_decoratedRequiredDriver *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_decoratedRequiredDriver) ;
  if (kOperandEqual == result) {
    result = mProperty_mDriverName.objectCompare (p->mProperty_mDriverName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_decoratedRequiredDriver::objectCompare (const GALGAS_decoratedRequiredDriver & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedRequiredDriver::GALGAS_decoratedRequiredDriver (void) :
GALGAS_abstractDecoratedDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedRequiredDriver GALGAS_decoratedRequiredDriver::constructor_default (LOCATION_ARGS) {
  return GALGAS_decoratedRequiredDriver::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                          COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedRequiredDriver::GALGAS_decoratedRequiredDriver (const cPtr_decoratedRequiredDriver * inSourcePtr) :
GALGAS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedRequiredDriver) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedRequiredDriver GALGAS_decoratedRequiredDriver::constructor_new (const GALGAS_lstring & inAttribute_mDriverName
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_decoratedRequiredDriver result ;
  if (inAttribute_mDriverName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_decoratedRequiredDriver (inAttribute_mDriverName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_decoratedRequiredDriver::getter_mDriverName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedRequiredDriver * p = (const cPtr_decoratedRequiredDriver *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedRequiredDriver) ;
    result = p->mProperty_mDriverName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_decoratedRequiredDriver::getter_mDriverName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDriverName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @decoratedRequiredDriver class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_decoratedRequiredDriver::cPtr_decoratedRequiredDriver (const GALGAS_lstring & in_mDriverName
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (THERE),
mProperty_mDriverName (in_mDriverName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_decoratedRequiredDriver::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedRequiredDriver ;
}

void cPtr_decoratedRequiredDriver::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@decoratedRequiredDriver:" ;
  mProperty_mDriverName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_decoratedRequiredDriver::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_decoratedRequiredDriver (mProperty_mDriverName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @decoratedRequiredDriver type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedRequiredDriver ("decoratedRequiredDriver",
                                                & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_decoratedRequiredDriver::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedRequiredDriver ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_decoratedRequiredDriver::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedRequiredDriver (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy::GALGAS_unifiedTypeMap_2D_proxy (void) :
AC_GALGAS_uniqueMapProxy () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_unifiedTypeMap_2D_proxy::constructor_null (LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  result.makeNullProxy (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap_2D_proxy::class_method_makeOptionalProxy (GALGAS_unifiedTypeMap & ioMap,
                                                                     GALGAS_lstring inKey,
                                                                     GALGAS_unifiedTypeMap_2D_proxy & outProxy
                                                                     COMMA_LOCATION_ARGS) {
  outProxy.internalMakeOptionalProxy (ioMap, inKey COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (GALGAS_unifiedTypeMap & ioMap,
                                                             GALGAS_lstring inKey,
                                                             GALGAS_unifiedTypeMap_2D_proxy & outProxy
                                                             COMMA_LOCATION_ARGS) {
  outProxy.internalMakeProxy (ioMap, inKey COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (GALGAS_unifiedTypeMap & ioMap,
                                                                       GALGAS_string inKey,
                                                                       GALGAS_unifiedTypeMap_2D_proxy & outProxy
                                                                       COMMA_LOCATION_ARGS) {
  outProxy.internalMakeProxyFromString (ioMap, inKey COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_unifiedTypeMap_2D_proxy::getter_type (C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_PLMType result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "type" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_type;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_unifiedTypeMap_2D_proxy::getter_index (C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_uint result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "index" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_index;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (const GALGAS_unifiedTypeMap & inMap,
                                                                                      const GALGAS_lstring & inKey,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  result.internalMakeRegularProxyBySearchingKey (inMap, inKey, kSearchErrorMessage_unifiedTypeMap_searchKey, inCompiler COMMA_THERE) ;
  return result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @unifiedTypeMap-proxy type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unifiedTypeMap_2D_proxy ("unifiedTypeMap-proxy",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_unifiedTypeMap_2D_proxy::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMap_2D_proxy ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_unifiedTypeMap_2D_proxy::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMap_2D_proxy (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_unifiedTypeMap_2D_proxy::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  const GALGAS_unifiedTypeMap_2D_proxy * p = (const GALGAS_unifiedTypeMap_2D_proxy *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_unifiedTypeMap_2D_proxy *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMap-proxy", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_driverListIR_2D_element::GALGAS_driverListIR_2D_element (void) :
mProperty_mDriverName (),
mProperty_mType (),
mProperty_mInitialValueList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_driverListIR_2D_element::~ GALGAS_driverListIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_driverListIR_2D_element::GALGAS_driverListIR_2D_element (const GALGAS_string & inOperand0,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                const GALGAS_operandIRList & inOperand2) :
mProperty_mDriverName (inOperand0),
mProperty_mType (inOperand1),
mProperty_mInitialValueList (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_driverListIR_2D_element GALGAS_driverListIR_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_driverListIR_2D_element (GALGAS_string::constructor_default (HERE),
                                         GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                         GALGAS_operandIRList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_driverListIR_2D_element GALGAS_driverListIR_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                const GALGAS_operandIRList & inOperand2 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_driverListIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_driverListIR_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_driverListIR_2D_element::isValid (void) const {
  return mProperty_mDriverName.isValid () && mProperty_mType.isValid () && mProperty_mInitialValueList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_driverListIR_2D_element::drop (void) {
  mProperty_mDriverName.drop () ;
  mProperty_mType.drop () ;
  mProperty_mInitialValueList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_driverListIR_2D_element::getter_mDriverName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDriverName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_driverListIR_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRList GALGAS_driverListIR_2D_element::getter_mInitialValueList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInitialValueList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @driverListIR-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_driverListIR_2D_element ("driverListIR-element",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_driverListIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverListIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_driverListIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_driverListIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_staticListAST::objectCompare (const GALGAS_staticListAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListAST::GALGAS_staticListAST (void) :
GALGAS_abstractDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListAST GALGAS_staticListAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_staticListAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                GALGAS_staticListPropertyListAST::constructor_emptyList (HERE),
                                                GALGAS_staticListValueListAST::constructor_emptyList (HERE)
                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListAST::GALGAS_staticListAST (const cPtr_staticListAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_staticListAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_staticListAST::getter_mStaticListName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_staticListAST * p = (const cPtr_staticListAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListAST) ;
    result = p->mProperty_mStaticListName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_staticListAST::getter_mStaticListName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStaticListName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListPropertyListAST GALGAS_staticListAST::getter_mPropertyList (UNUSED_LOCATION_ARGS) const {
  GALGAS_staticListPropertyListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_staticListAST * p = (const cPtr_staticListAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListAST) ;
    result = p->mProperty_mPropertyList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListPropertyListAST cPtr_staticListAST::getter_mPropertyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListValueListAST GALGAS_staticListAST::getter_mValueList (UNUSED_LOCATION_ARGS) const {
  GALGAS_staticListValueListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_staticListAST * p = (const cPtr_staticListAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListAST) ;
    result = p->mProperty_mValueList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListValueListAST cPtr_staticListAST::getter_mValueList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValueList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                       Pointer class for @staticListAST class                                        *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_staticListAST::cPtr_staticListAST (const GALGAS_lstring & in_mStaticListName,
                                        const GALGAS_staticListPropertyListAST & in_mPropertyList,
                                        const GALGAS_staticListValueListAST & in_mValueList
                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mStaticListName (in_mStaticListName),
mProperty_mPropertyList (in_mPropertyList),
mProperty_mValueList (in_mValueList) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_staticListAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_staticListAST (mProperty_mStaticListName, mProperty_mPropertyList, mProperty_mValueList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @staticListAST type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticListAST ("staticListAST",
                                      & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_staticListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_staticListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_decoratedStaticList::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_decoratedStaticList * p = (const cPtr_decoratedStaticList *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_decoratedStaticList) ;
  if (kOperandEqual == result) {
    result = mProperty_mStaticListName.objectCompare (p->mProperty_mStaticListName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mValueList.objectCompare (p->mProperty_mValueList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_decoratedStaticList::objectCompare (const GALGAS_decoratedStaticList & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedStaticList::GALGAS_decoratedStaticList (void) :
GALGAS_abstractDecoratedDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedStaticList GALGAS_decoratedStaticList::constructor_default (LOCATION_ARGS) {
  return GALGAS_decoratedStaticList::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_staticListValueListAST::constructor_emptyList (HERE)
                                                      COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedStaticList::GALGAS_decoratedStaticList (const cPtr_decoratedStaticList * inSourcePtr) :
GALGAS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedStaticList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedStaticList GALGAS_decoratedStaticList::constructor_new (const GALGAS_lstring & inAttribute_mStaticListName,
                                                                        const GALGAS_staticListValueListAST & inAttribute_mValueList
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_decoratedStaticList result ;
  if (inAttribute_mStaticListName.isValid () && inAttribute_mValueList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_decoratedStaticList (inAttribute_mStaticListName, inAttribute_mValueList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_decoratedStaticList::getter_mStaticListName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedStaticList * p = (const cPtr_decoratedStaticList *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedStaticList) ;
    result = p->mProperty_mStaticListName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_decoratedStaticList::getter_mStaticListName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStaticListName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListValueListAST GALGAS_decoratedStaticList::getter_mValueList (UNUSED_LOCATION_ARGS) const {
  GALGAS_staticListValueListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedStaticList * p = (const cPtr_decoratedStaticList *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedStaticList) ;
    result = p->mProperty_mValueList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListValueListAST cPtr_decoratedStaticList::getter_mValueList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValueList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @decoratedStaticList class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_decoratedStaticList::cPtr_decoratedStaticList (const GALGAS_lstring & in_mStaticListName,
                                                    const GALGAS_staticListValueListAST & in_mValueList
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (THERE),
mProperty_mStaticListName (in_mStaticListName),
mProperty_mValueList (in_mValueList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_decoratedStaticList::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedStaticList ;
}

void cPtr_decoratedStaticList::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@decoratedStaticList:" ;
  mProperty_mStaticListName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mValueList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_decoratedStaticList::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_decoratedStaticList (mProperty_mStaticListName, mProperty_mValueList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @decoratedStaticList type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedStaticList ("decoratedStaticList",
                                            & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_decoratedStaticList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedStaticList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_decoratedStaticList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedStaticList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedStaticList GALGAS_decoratedStaticList::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_decoratedStaticList result ;
  const GALGAS_decoratedStaticList * p = (const GALGAS_decoratedStaticList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedStaticList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedStaticList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedTaskList_2D_element::GALGAS_decoratedTaskList_2D_element (void) :
mProperty_mTaskName (),
mProperty_mPriority (),
mProperty_mStackSize (),
mProperty_mVarList (),
mProperty_mTaskProcList (),
mProperty_mTaskSetupListAST (),
mProperty_mGuardedCommandList (),
mProperty_mEndOfTaskDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedTaskList_2D_element::~ GALGAS_decoratedTaskList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedTaskList_2D_element::GALGAS_decoratedTaskList_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_lbigint & inOperand1,
                                                                          const GALGAS_lbigint & inOperand2,
                                                                          const GALGAS_structurePropertyListAST & inOperand3,
                                                                          const GALGAS_functionDeclarationListAST & inOperand4,
                                                                          const GALGAS_taskSetupListAST & inOperand5,
                                                                          const GALGAS_syncInstructionBranchListAST & inOperand6,
                                                                          const GALGAS_location & inOperand7) :
mProperty_mTaskName (inOperand0),
mProperty_mPriority (inOperand1),
mProperty_mStackSize (inOperand2),
mProperty_mVarList (inOperand3),
mProperty_mTaskProcList (inOperand4),
mProperty_mTaskSetupListAST (inOperand5),
mProperty_mGuardedCommandList (inOperand6),
mProperty_mEndOfTaskDeclaration (inOperand7) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedTaskList_2D_element GALGAS_decoratedTaskList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_decoratedTaskList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_lbigint::constructor_default (HERE),
                                              GALGAS_lbigint::constructor_default (HERE),
                                              GALGAS_structurePropertyListAST::constructor_emptyList (HERE),
                                              GALGAS_functionDeclarationListAST::constructor_emptyList (HERE),
                                              GALGAS_taskSetupListAST::constructor_emptyList (HERE),
                                              GALGAS_syncInstructionBranchListAST::constructor_emptyList (HERE),
                                              GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedTaskList_2D_element GALGAS_decoratedTaskList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_lbigint & inOperand1,
                                                                                          const GALGAS_lbigint & inOperand2,
                                                                                          const GALGAS_structurePropertyListAST & inOperand3,
                                                                                          const GALGAS_functionDeclarationListAST & inOperand4,
                                                                                          const GALGAS_taskSetupListAST & inOperand5,
                                                                                          const GALGAS_syncInstructionBranchListAST & inOperand6,
                                                                                          const GALGAS_location & inOperand7 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_decoratedTaskList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_decoratedTaskList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_decoratedTaskList_2D_element::objectCompare (const GALGAS_decoratedTaskList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTaskName.objectCompare (inOperand.mProperty_mTaskName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPriority.objectCompare (inOperand.mProperty_mPriority) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStackSize.objectCompare (inOperand.mProperty_mStackSize) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mVarList.objectCompare (inOperand.mProperty_mVarList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTaskProcList.objectCompare (inOperand.mProperty_mTaskProcList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTaskSetupListAST.objectCompare (inOperand.mProperty_mTaskSetupListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGuardedCommandList.objectCompare (inOperand.mProperty_mGuardedCommandList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfTaskDeclaration.objectCompare (inOperand.mProperty_mEndOfTaskDeclaration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_decoratedTaskList_2D_element::isValid (void) const {
  return mProperty_mTaskName.isValid () && mProperty_mPriority.isValid () && mProperty_mStackSize.isValid () && mProperty_mVarList.isValid () && mProperty_mTaskProcList.isValid () && mProperty_mTaskSetupListAST.isValid () && mProperty_mGuardedCommandList.isValid () && mProperty_mEndOfTaskDeclaration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_decoratedTaskList_2D_element::drop (void) {
  mProperty_mTaskName.drop () ;
  mProperty_mPriority.drop () ;
  mProperty_mStackSize.drop () ;
  mProperty_mVarList.drop () ;
  mProperty_mTaskProcList.drop () ;
  mProperty_mTaskSetupListAST.drop () ;
  mProperty_mGuardedCommandList.drop () ;
  mProperty_mEndOfTaskDeclaration.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_decoratedTaskList_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @decoratedTaskList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mTaskName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPriority.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStackSize.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mVarList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTaskProcList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTaskSetupListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGuardedCommandList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfTaskDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_decoratedTaskList_2D_element::getter_mTaskName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_decoratedTaskList_2D_element::getter_mPriority (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPriority ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_decoratedTaskList_2D_element::getter_mStackSize (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStackSize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST GALGAS_decoratedTaskList_2D_element::getter_mVarList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mVarList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST GALGAS_decoratedTaskList_2D_element::getter_mTaskProcList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskProcList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSetupListAST GALGAS_decoratedTaskList_2D_element::getter_mTaskSetupListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskSetupListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListAST GALGAS_decoratedTaskList_2D_element::getter_mGuardedCommandList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardedCommandList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_decoratedTaskList_2D_element::getter_mEndOfTaskDeclaration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfTaskDeclaration ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @decoratedTaskList-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedTaskList_2D_element ("decoratedTaskList-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_decoratedTaskList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedTaskList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_decoratedTaskList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedTaskList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedTaskList_2D_element GALGAS_decoratedTaskList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_decoratedTaskList_2D_element result ;
  const GALGAS_decoratedTaskList_2D_element * p = (const GALGAS_decoratedTaskList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedTaskList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedTaskList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_panicAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_panicAST * p = (const cPtr_panicAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_panicAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsSetup.objectCompare (p->mProperty_mIsSetup) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPanicInstructionList.objectCompare (p->mProperty_mPanicInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfPanicInstructions.objectCompare (p->mProperty_mEndOfPanicInstructions) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPriority.objectCompare (p->mProperty_mPriority) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_panicAST::objectCompare (const GALGAS_panicAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicAST::GALGAS_panicAST (void) :
GALGAS_abstractDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicAST GALGAS_panicAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_panicAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                           GALGAS_instructionListAST::constructor_emptyList (HERE),
                                           GALGAS_location::constructor_nowhere (HERE),
                                           GALGAS_lbigint::constructor_default (HERE)
                                           COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicAST::GALGAS_panicAST (const cPtr_panicAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_panicAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicAST GALGAS_panicAST::constructor_new (const GALGAS_bool & inAttribute_mIsSetup,
                                                  const GALGAS_instructionListAST & inAttribute_mPanicInstructionList,
                                                  const GALGAS_location & inAttribute_mEndOfPanicInstructions,
                                                  const GALGAS_lbigint & inAttribute_mPriority
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_panicAST result ;
  if (inAttribute_mIsSetup.isValid () && inAttribute_mPanicInstructionList.isValid () && inAttribute_mEndOfPanicInstructions.isValid () && inAttribute_mPriority.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_panicAST (inAttribute_mIsSetup, inAttribute_mPanicInstructionList, inAttribute_mEndOfPanicInstructions, inAttribute_mPriority COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_panicAST::getter_mIsSetup (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_panicAST * p = (const cPtr_panicAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicAST) ;
    result = p->mProperty_mIsSetup ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_panicAST::getter_mIsSetup (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsSetup ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_panicAST::getter_mPanicInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_panicAST * p = (const cPtr_panicAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicAST) ;
    result = p->mProperty_mPanicInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST cPtr_panicAST::getter_mPanicInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_panicAST::getter_mEndOfPanicInstructions (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_panicAST * p = (const cPtr_panicAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicAST) ;
    result = p->mProperty_mEndOfPanicInstructions ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_panicAST::getter_mEndOfPanicInstructions (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfPanicInstructions ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_panicAST::getter_mPriority (UNUSED_LOCATION_ARGS) const {
  GALGAS_lbigint result ;
  if (NULL != mObjectPtr) {
    const cPtr_panicAST * p = (const cPtr_panicAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicAST) ;
    result = p->mProperty_mPriority ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint cPtr_panicAST::getter_mPriority (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPriority ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                          Pointer class for @panicAST class                                          *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_panicAST::cPtr_panicAST (const GALGAS_bool & in_mIsSetup,
                              const GALGAS_instructionListAST & in_mPanicInstructionList,
                              const GALGAS_location & in_mEndOfPanicInstructions,
                              const GALGAS_lbigint & in_mPriority
                              COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mIsSetup (in_mIsSetup),
mProperty_mPanicInstructionList (in_mPanicInstructionList),
mProperty_mEndOfPanicInstructions (in_mEndOfPanicInstructions),
mProperty_mPriority (in_mPriority) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_panicAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicAST ;
}

void cPtr_panicAST::description (C_String & ioString,
                                 const int32_t inIndentation) const {
  ioString << "[@panicAST:" ;
  mProperty_mIsSetup.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPanicInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfPanicInstructions.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPriority.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_panicAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_panicAST (mProperty_mIsSetup, mProperty_mPanicInstructionList, mProperty_mEndOfPanicInstructions, mProperty_mPriority COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @panicAST type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_panicAST ("panicAST",
                                 & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_panicAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_panicAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_panicAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicAST GALGAS_panicAST::extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_panicAST result ;
  const GALGAS_panicAST * p = (const GALGAS_panicAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_panicAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("panicAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension method '@panicAST noteTypesInPrecedenceGraph'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_panicAST_noteTypesInPrecedenceGraph> gExtensionMethodTable_panicAST_noteTypesInPrecedenceGraph ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_noteTypesInPrecedenceGraph (const int32_t inClassIndex,
                                                      extensionMethodSignature_panicAST_noteTypesInPrecedenceGraph inMethod) {
  gExtensionMethodTable_panicAST_noteTypesInPrecedenceGraph.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_noteTypesInPrecedenceGraph (const cPtr_panicAST * inObject,
                                                     GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_panicAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_panicAST_noteTypesInPrecedenceGraph f = NULL ;
    if (classIndex < gExtensionMethodTable_panicAST_noteTypesInPrecedenceGraph.count ()) {
      f = gExtensionMethodTable_panicAST_noteTypesInPrecedenceGraph (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_panicAST_noteTypesInPrecedenceGraph.count ()) {
           f = gExtensionMethodTable_panicAST_noteTypesInPrecedenceGraph (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_panicAST_noteTypesInPrecedenceGraph.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioGraph, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_panicAST_noteTypesInPrecedenceGraph (const cPtr_panicAST * inObject,
                                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_panicAST * object = inObject ;
  macroValidSharedObject (object, cPtr_panicAST) ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mProperty_mPanicInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 63)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_panicAST_noteTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_panicAST.mSlotID,
                                                   extensionMethod_panicAST_noteTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_panicAST_noteTypesInPrecedenceGraph (void) {
  gExtensionMethodTable_panicAST_noteTypesInPrecedenceGraph.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_panicAST_noteTypesInPrecedenceGraph (defineExtensionMethod_panicAST_noteTypesInPrecedenceGraph,
                                                                freeExtensionMethod_panicAST_noteTypesInPrecedenceGraph) ;

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_decoratedPanicRoutine::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_decoratedPanicRoutine * p = (const cPtr_decoratedPanicRoutine *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_decoratedPanicRoutine) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsSetup.objectCompare (p->mProperty_mIsSetup) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPanicInstructionList.objectCompare (p->mProperty_mPanicInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfPanicInstructions.objectCompare (p->mProperty_mEndOfPanicInstructions) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPriority.objectCompare (p->mProperty_mPriority) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_decoratedPanicRoutine::objectCompare (const GALGAS_decoratedPanicRoutine & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedPanicRoutine::GALGAS_decoratedPanicRoutine (void) :
GALGAS_abstractDecoratedDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedPanicRoutine GALGAS_decoratedPanicRoutine::constructor_default (LOCATION_ARGS) {
  return GALGAS_decoratedPanicRoutine::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                        GALGAS_instructionListAST::constructor_emptyList (HERE),
                                                        GALGAS_location::constructor_nowhere (HERE),
                                                        GALGAS_lbigint::constructor_default (HERE)
                                                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedPanicRoutine::GALGAS_decoratedPanicRoutine (const cPtr_decoratedPanicRoutine * inSourcePtr) :
GALGAS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedPanicRoutine) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedPanicRoutine GALGAS_decoratedPanicRoutine::constructor_new (const GALGAS_bool & inAttribute_mIsSetup,
                                                                            const GALGAS_instructionListAST & inAttribute_mPanicInstructionList,
                                                                            const GALGAS_location & inAttribute_mEndOfPanicInstructions,
                                                                            const GALGAS_lbigint & inAttribute_mPriority
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_decoratedPanicRoutine result ;
  if (inAttribute_mIsSetup.isValid () && inAttribute_mPanicInstructionList.isValid () && inAttribute_mEndOfPanicInstructions.isValid () && inAttribute_mPriority.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_decoratedPanicRoutine (inAttribute_mIsSetup, inAttribute_mPanicInstructionList, inAttribute_mEndOfPanicInstructions, inAttribute_mPriority COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_decoratedPanicRoutine::getter_mIsSetup (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedPanicRoutine * p = (const cPtr_decoratedPanicRoutine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedPanicRoutine) ;
    result = p->mProperty_mIsSetup ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_decoratedPanicRoutine::getter_mIsSetup (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsSetup ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_decoratedPanicRoutine::getter_mPanicInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedPanicRoutine * p = (const cPtr_decoratedPanicRoutine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedPanicRoutine) ;
    result = p->mProperty_mPanicInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST cPtr_decoratedPanicRoutine::getter_mPanicInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_decoratedPanicRoutine::getter_mEndOfPanicInstructions (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedPanicRoutine * p = (const cPtr_decoratedPanicRoutine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedPanicRoutine) ;
    result = p->mProperty_mEndOfPanicInstructions ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_decoratedPanicRoutine::getter_mEndOfPanicInstructions (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfPanicInstructions ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_decoratedPanicRoutine::getter_mPriority (UNUSED_LOCATION_ARGS) const {
  GALGAS_lbigint result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedPanicRoutine * p = (const cPtr_decoratedPanicRoutine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedPanicRoutine) ;
    result = p->mProperty_mPriority ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint cPtr_decoratedPanicRoutine::getter_mPriority (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPriority ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @decoratedPanicRoutine class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_decoratedPanicRoutine::cPtr_decoratedPanicRoutine (const GALGAS_bool & in_mIsSetup,
                                                        const GALGAS_instructionListAST & in_mPanicInstructionList,
                                                        const GALGAS_location & in_mEndOfPanicInstructions,
                                                        const GALGAS_lbigint & in_mPriority
                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (THERE),
mProperty_mIsSetup (in_mIsSetup),
mProperty_mPanicInstructionList (in_mPanicInstructionList),
mProperty_mEndOfPanicInstructions (in_mEndOfPanicInstructions),
mProperty_mPriority (in_mPriority) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_decoratedPanicRoutine::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedPanicRoutine ;
}

void cPtr_decoratedPanicRoutine::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@decoratedPanicRoutine:" ;
  mProperty_mIsSetup.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPanicInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfPanicInstructions.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPriority.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_decoratedPanicRoutine::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_decoratedPanicRoutine (mProperty_mIsSetup, mProperty_mPanicInstructionList, mProperty_mEndOfPanicInstructions, mProperty_mPriority COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @decoratedPanicRoutine type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedPanicRoutine ("decoratedPanicRoutine",
                                              & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_decoratedPanicRoutine::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedPanicRoutine ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_decoratedPanicRoutine::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedPanicRoutine (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedPanicRoutine GALGAS_decoratedPanicRoutine::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_decoratedPanicRoutine result ;
  const GALGAS_decoratedPanicRoutine * p = (const GALGAS_decoratedPanicRoutine *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedPanicRoutine *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedPanicRoutine", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension method '@routineMapIR svcDeclarationGeneration'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_svcDeclarationGeneration (const GALGAS_routineMapIR inObject,
                                               GALGAS_primitiveAndServiceIRlist & ioArgument_ioPrimitiveAndServiceList,
                                               GALGAS_sectionIRlist & ioArgument_ioSectionList,
                                               GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_routineMapIR temp_0 = inObject ;
  cEnumerator_routineMapIR enumerator_11238 (temp_0, kENUMERATION_UP) ;
  while (enumerator_11238.hasCurrentObject ()) {
    const enumGalgasBool test_1 = enumerator_11238.current (HERE).getter_mKind (HERE).getter_isFunction (SOURCE_FILE ("declaration-svc.galgas", 315)).operator_not (SOURCE_FILE ("declaration-svc.galgas", 315)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string var_svcCallName_11302 = function_llvmNameForSVCCall (enumerator_11238.current (HERE).getter_mRoutineNameForGeneration (HERE), enumerator_11238.current (HERE).getter_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 316)) ;
      GALGAS_string var_svcImplementationName_11399 = function_llvmNameForSVCImplementation (enumerator_11238.current (HERE).getter_mRoutineNameForGeneration (HERE), enumerator_11238.current (HERE).getter_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 317)) ;
      GALGAS_string var_prototype_11494 = function_llvmFunctionPrototype (extensionGetter_llvmTypeName (enumerator_11238.current (HERE).getter_mReturnType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 319)), var_svcCallName_11302, enumerator_11238.current (HERE).getter_mReceiverType (HERE), enumerator_11238.current (HERE).getter_mFormalArgumentListForGeneration (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 318)) ;
      ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.addAssign_operation (var_prototype_11494  COMMA_SOURCE_FILE ("declaration-svc.galgas", 324)) ;
      switch (enumerator_11238.current (HERE).getter_mKind (HERE).enumValue ()) {
      case GALGAS_routineKind::kNotBuilt:
        break ;
      case GALGAS_routineKind::kEnum_section:
        {
          ioArgument_ioSectionList.addAssign_operation (var_svcCallName_11302, var_svcImplementationName_11399, GALGAS_bool (true)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 327)) ;
        }
        break ;
      case GALGAS_routineKind::kEnum_primitive:
      case GALGAS_routineKind::kEnum_service:
        {
          ioArgument_ioPrimitiveAndServiceList.addAssign_operation (var_svcCallName_11302, var_svcImplementationName_11399, GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 329)) ;
        }
        break ;
      case GALGAS_routineKind::kEnum_function:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("declaration-svc.galgas", 331)), GALGAS_string ("INTERNAL ERROR"), fixItArray2  COMMA_SOURCE_FILE ("declaration-svc.galgas", 331)) ;
        }
        break ;
      }
    }
    enumerator_11238.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension method '@bootAST noteTypesInPrecedenceGraph'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_bootAST_noteTypesInPrecedenceGraph> gExtensionMethodTable_bootAST_noteTypesInPrecedenceGraph ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_noteTypesInPrecedenceGraph (const int32_t inClassIndex,
                                                      extensionMethodSignature_bootAST_noteTypesInPrecedenceGraph inMethod) {
  gExtensionMethodTable_bootAST_noteTypesInPrecedenceGraph.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_noteTypesInPrecedenceGraph (const cPtr_bootAST * inObject,
                                                     GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_bootAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_bootAST_noteTypesInPrecedenceGraph f = NULL ;
    if (classIndex < gExtensionMethodTable_bootAST_noteTypesInPrecedenceGraph.count ()) {
      f = gExtensionMethodTable_bootAST_noteTypesInPrecedenceGraph (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_bootAST_noteTypesInPrecedenceGraph.count ()) {
           f = gExtensionMethodTable_bootAST_noteTypesInPrecedenceGraph (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_bootAST_noteTypesInPrecedenceGraph.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioGraph, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_bootAST_noteTypesInPrecedenceGraph (const cPtr_bootAST * inObject,
                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_bootAST * object = inObject ;
  macroValidSharedObject (object, cPtr_bootAST) ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mProperty_mInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 46)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_bootAST_noteTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_bootAST.mSlotID,
                                                   extensionMethod_bootAST_noteTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_bootAST_noteTypesInPrecedenceGraph (void) {
  gExtensionMethodTable_bootAST_noteTypesInPrecedenceGraph.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_bootAST_noteTypesInPrecedenceGraph (defineExtensionMethod_bootAST_noteTypesInPrecedenceGraph,
                                                               freeExtensionMethod_bootAST_noteTypesInPrecedenceGraph) ;

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_decoratedBootRoutine::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_decoratedBootRoutine * p = (const cPtr_decoratedBootRoutine *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_decoratedBootRoutine) ;
  if (kOperandEqual == result) {
    result = mProperty_mDriverName.objectCompare (p->mProperty_mDriverName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDriverDependanceList.objectCompare (p->mProperty_mDriverDependanceList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBootLocation.objectCompare (p->mProperty_mBootLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfBootLocation.objectCompare (p->mProperty_mEndOfBootLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_decoratedBootRoutine::objectCompare (const GALGAS_decoratedBootRoutine & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedBootRoutine::GALGAS_decoratedBootRoutine (void) :
GALGAS_abstractDecoratedDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedBootRoutine GALGAS_decoratedBootRoutine::constructor_default (LOCATION_ARGS) {
  return GALGAS_decoratedBootRoutine::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_lstringlist::constructor_emptyList (HERE),
                                                       GALGAS_location::constructor_nowhere (HERE),
                                                       GALGAS_instructionListAST::constructor_emptyList (HERE),
                                                       GALGAS_location::constructor_nowhere (HERE)
                                                       COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedBootRoutine::GALGAS_decoratedBootRoutine (const cPtr_decoratedBootRoutine * inSourcePtr) :
GALGAS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedBootRoutine) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedBootRoutine GALGAS_decoratedBootRoutine::constructor_new (const GALGAS_lstring & inAttribute_mDriverName,
                                                                          const GALGAS_lstringlist & inAttribute_mDriverDependanceList,
                                                                          const GALGAS_location & inAttribute_mBootLocation,
                                                                          const GALGAS_instructionListAST & inAttribute_mInstructionList,
                                                                          const GALGAS_location & inAttribute_mEndOfBootLocation
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_decoratedBootRoutine result ;
  if (inAttribute_mDriverName.isValid () && inAttribute_mDriverDependanceList.isValid () && inAttribute_mBootLocation.isValid () && inAttribute_mInstructionList.isValid () && inAttribute_mEndOfBootLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_decoratedBootRoutine (inAttribute_mDriverName, inAttribute_mDriverDependanceList, inAttribute_mBootLocation, inAttribute_mInstructionList, inAttribute_mEndOfBootLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_decoratedBootRoutine::getter_mDriverName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedBootRoutine * p = (const cPtr_decoratedBootRoutine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedBootRoutine) ;
    result = p->mProperty_mDriverName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_decoratedBootRoutine::getter_mDriverName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDriverName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_decoratedBootRoutine::getter_mDriverDependanceList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedBootRoutine * p = (const cPtr_decoratedBootRoutine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedBootRoutine) ;
    result = p->mProperty_mDriverDependanceList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_decoratedBootRoutine::getter_mDriverDependanceList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDriverDependanceList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_decoratedBootRoutine::getter_mBootLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedBootRoutine * p = (const cPtr_decoratedBootRoutine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedBootRoutine) ;
    result = p->mProperty_mBootLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_decoratedBootRoutine::getter_mBootLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBootLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_decoratedBootRoutine::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedBootRoutine * p = (const cPtr_decoratedBootRoutine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedBootRoutine) ;
    result = p->mProperty_mInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST cPtr_decoratedBootRoutine::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_decoratedBootRoutine::getter_mEndOfBootLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedBootRoutine * p = (const cPtr_decoratedBootRoutine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedBootRoutine) ;
    result = p->mProperty_mEndOfBootLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_decoratedBootRoutine::getter_mEndOfBootLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfBootLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @decoratedBootRoutine class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_decoratedBootRoutine::cPtr_decoratedBootRoutine (const GALGAS_lstring & in_mDriverName,
                                                      const GALGAS_lstringlist & in_mDriverDependanceList,
                                                      const GALGAS_location & in_mBootLocation,
                                                      const GALGAS_instructionListAST & in_mInstructionList,
                                                      const GALGAS_location & in_mEndOfBootLocation
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (THERE),
mProperty_mDriverName (in_mDriverName),
mProperty_mDriverDependanceList (in_mDriverDependanceList),
mProperty_mBootLocation (in_mBootLocation),
mProperty_mInstructionList (in_mInstructionList),
mProperty_mEndOfBootLocation (in_mEndOfBootLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_decoratedBootRoutine::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedBootRoutine ;
}

void cPtr_decoratedBootRoutine::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@decoratedBootRoutine:" ;
  mProperty_mDriverName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDriverDependanceList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBootLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfBootLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_decoratedBootRoutine::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_decoratedBootRoutine (mProperty_mDriverName, mProperty_mDriverDependanceList, mProperty_mBootLocation, mProperty_mInstructionList, mProperty_mEndOfBootLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @decoratedBootRoutine type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedBootRoutine ("decoratedBootRoutine",
                                             & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_decoratedBootRoutine::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedBootRoutine ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_decoratedBootRoutine::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedBootRoutine (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedBootRoutine GALGAS_decoratedBootRoutine::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_decoratedBootRoutine result ;
  const GALGAS_decoratedBootRoutine * p = (const GALGAS_decoratedBootRoutine *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedBootRoutine *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedBootRoutine", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_initAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_initAST * p = (const cPtr_initAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_initAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mDriverName.objectCompare (p->mProperty_mDriverName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDriverDependanceList.objectCompare (p->mProperty_mDriverDependanceList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInitLocation.objectCompare (p->mProperty_mInitLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfInitLocation.objectCompare (p->mProperty_mEndOfInitLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_initAST::objectCompare (const GALGAS_initAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initAST::GALGAS_initAST (void) :
GALGAS_abstractDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initAST GALGAS_initAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_initAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                          GALGAS_lstringlist::constructor_emptyList (HERE),
                                          GALGAS_location::constructor_nowhere (HERE),
                                          GALGAS_instructionListAST::constructor_emptyList (HERE),
                                          GALGAS_location::constructor_nowhere (HERE)
                                          COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initAST::GALGAS_initAST (const cPtr_initAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_initAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initAST GALGAS_initAST::constructor_new (const GALGAS_lstring & inAttribute_mDriverName,
                                                const GALGAS_lstringlist & inAttribute_mDriverDependanceList,
                                                const GALGAS_location & inAttribute_mInitLocation,
                                                const GALGAS_instructionListAST & inAttribute_mInstructionList,
                                                const GALGAS_location & inAttribute_mEndOfInitLocation
                                                COMMA_LOCATION_ARGS) {
  GALGAS_initAST result ;
  if (inAttribute_mDriverName.isValid () && inAttribute_mDriverDependanceList.isValid () && inAttribute_mInitLocation.isValid () && inAttribute_mInstructionList.isValid () && inAttribute_mEndOfInitLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_initAST (inAttribute_mDriverName, inAttribute_mDriverDependanceList, inAttribute_mInitLocation, inAttribute_mInstructionList, inAttribute_mEndOfInitLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_initAST::getter_mDriverName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_initAST * p = (const cPtr_initAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_initAST) ;
    result = p->mProperty_mDriverName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_initAST::getter_mDriverName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDriverName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_initAST::getter_mDriverDependanceList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_initAST * p = (const cPtr_initAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_initAST) ;
    result = p->mProperty_mDriverDependanceList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_initAST::getter_mDriverDependanceList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDriverDependanceList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_initAST::getter_mInitLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_initAST * p = (const cPtr_initAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_initAST) ;
    result = p->mProperty_mInitLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_initAST::getter_mInitLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInitLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_initAST::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_initAST * p = (const cPtr_initAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_initAST) ;
    result = p->mProperty_mInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST cPtr_initAST::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_initAST::getter_mEndOfInitLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_initAST * p = (const cPtr_initAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_initAST) ;
    result = p->mProperty_mEndOfInitLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_initAST::getter_mEndOfInitLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfInitLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                          Pointer class for @initAST class                                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_initAST::cPtr_initAST (const GALGAS_lstring & in_mDriverName,
                            const GALGAS_lstringlist & in_mDriverDependanceList,
                            const GALGAS_location & in_mInitLocation,
                            const GALGAS_instructionListAST & in_mInstructionList,
                            const GALGAS_location & in_mEndOfInitLocation
                            COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mDriverName (in_mDriverName),
mProperty_mDriverDependanceList (in_mDriverDependanceList),
mProperty_mInitLocation (in_mInitLocation),
mProperty_mInstructionList (in_mInstructionList),
mProperty_mEndOfInitLocation (in_mEndOfInitLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_initAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initAST ;
}

void cPtr_initAST::description (C_String & ioString,
                                const int32_t inIndentation) const {
  ioString << "[@initAST:" ;
  mProperty_mDriverName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDriverDependanceList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInitLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfInitLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_initAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_initAST (mProperty_mDriverName, mProperty_mDriverDependanceList, mProperty_mInitLocation, mProperty_mInstructionList, mProperty_mEndOfInitLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @initAST type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_initAST ("initAST",
                                & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_initAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_initAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_initAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initAST GALGAS_initAST::extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_initAST result ;
  const GALGAS_initAST * p = (const GALGAS_initAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_initAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("initAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension method '@initAST noteTypesInPrecedenceGraph'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_initAST_noteTypesInPrecedenceGraph> gExtensionMethodTable_initAST_noteTypesInPrecedenceGraph ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_noteTypesInPrecedenceGraph (const int32_t inClassIndex,
                                                      extensionMethodSignature_initAST_noteTypesInPrecedenceGraph inMethod) {
  gExtensionMethodTable_initAST_noteTypesInPrecedenceGraph.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_noteTypesInPrecedenceGraph (const cPtr_initAST * inObject,
                                                     GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_initAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_initAST_noteTypesInPrecedenceGraph f = NULL ;
    if (classIndex < gExtensionMethodTable_initAST_noteTypesInPrecedenceGraph.count ()) {
      f = gExtensionMethodTable_initAST_noteTypesInPrecedenceGraph (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_initAST_noteTypesInPrecedenceGraph.count ()) {
           f = gExtensionMethodTable_initAST_noteTypesInPrecedenceGraph (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_initAST_noteTypesInPrecedenceGraph.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioGraph, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_initAST_noteTypesInPrecedenceGraph (const cPtr_initAST * inObject,
                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_initAST * object = inObject ;
  macroValidSharedObject (object, cPtr_initAST) ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mProperty_mInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 46)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_initAST_noteTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_initAST.mSlotID,
                                                   extensionMethod_initAST_noteTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_initAST_noteTypesInPrecedenceGraph (void) {
  gExtensionMethodTable_initAST_noteTypesInPrecedenceGraph.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_initAST_noteTypesInPrecedenceGraph (defineExtensionMethod_initAST_noteTypesInPrecedenceGraph,
                                                               freeExtensionMethod_initAST_noteTypesInPrecedenceGraph) ;

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_decoratedInitRoutine::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_decoratedInitRoutine * p = (const cPtr_decoratedInitRoutine *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_decoratedInitRoutine) ;
  if (kOperandEqual == result) {
    result = mProperty_mDriverName.objectCompare (p->mProperty_mDriverName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDriverDependanceList.objectCompare (p->mProperty_mDriverDependanceList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfInitLocation.objectCompare (p->mProperty_mEndOfInitLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_decoratedInitRoutine::objectCompare (const GALGAS_decoratedInitRoutine & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedInitRoutine::GALGAS_decoratedInitRoutine (void) :
GALGAS_abstractDecoratedDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedInitRoutine GALGAS_decoratedInitRoutine::constructor_default (LOCATION_ARGS) {
  return GALGAS_decoratedInitRoutine::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_lstringlist::constructor_emptyList (HERE),
                                                       GALGAS_instructionListAST::constructor_emptyList (HERE),
                                                       GALGAS_location::constructor_nowhere (HERE)
                                                       COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedInitRoutine::GALGAS_decoratedInitRoutine (const cPtr_decoratedInitRoutine * inSourcePtr) :
GALGAS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedInitRoutine) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedInitRoutine GALGAS_decoratedInitRoutine::constructor_new (const GALGAS_lstring & inAttribute_mDriverName,
                                                                          const GALGAS_lstringlist & inAttribute_mDriverDependanceList,
                                                                          const GALGAS_instructionListAST & inAttribute_mInstructionList,
                                                                          const GALGAS_location & inAttribute_mEndOfInitLocation
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_decoratedInitRoutine result ;
  if (inAttribute_mDriverName.isValid () && inAttribute_mDriverDependanceList.isValid () && inAttribute_mInstructionList.isValid () && inAttribute_mEndOfInitLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_decoratedInitRoutine (inAttribute_mDriverName, inAttribute_mDriverDependanceList, inAttribute_mInstructionList, inAttribute_mEndOfInitLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_decoratedInitRoutine::getter_mDriverName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedInitRoutine * p = (const cPtr_decoratedInitRoutine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedInitRoutine) ;
    result = p->mProperty_mDriverName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_decoratedInitRoutine::getter_mDriverName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDriverName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_decoratedInitRoutine::getter_mDriverDependanceList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedInitRoutine * p = (const cPtr_decoratedInitRoutine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedInitRoutine) ;
    result = p->mProperty_mDriverDependanceList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_decoratedInitRoutine::getter_mDriverDependanceList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDriverDependanceList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_decoratedInitRoutine::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedInitRoutine * p = (const cPtr_decoratedInitRoutine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedInitRoutine) ;
    result = p->mProperty_mInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST cPtr_decoratedInitRoutine::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_decoratedInitRoutine::getter_mEndOfInitLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedInitRoutine * p = (const cPtr_decoratedInitRoutine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedInitRoutine) ;
    result = p->mProperty_mEndOfInitLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_decoratedInitRoutine::getter_mEndOfInitLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfInitLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @decoratedInitRoutine class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_decoratedInitRoutine::cPtr_decoratedInitRoutine (const GALGAS_lstring & in_mDriverName,
                                                      const GALGAS_lstringlist & in_mDriverDependanceList,
                                                      const GALGAS_instructionListAST & in_mInstructionList,
                                                      const GALGAS_location & in_mEndOfInitLocation
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (THERE),
mProperty_mDriverName (in_mDriverName),
mProperty_mDriverDependanceList (in_mDriverDependanceList),
mProperty_mInstructionList (in_mInstructionList),
mProperty_mEndOfInitLocation (in_mEndOfInitLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_decoratedInitRoutine::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedInitRoutine ;
}

void cPtr_decoratedInitRoutine::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@decoratedInitRoutine:" ;
  mProperty_mDriverName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDriverDependanceList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfInitLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_decoratedInitRoutine::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_decoratedInitRoutine (mProperty_mDriverName, mProperty_mDriverDependanceList, mProperty_mInstructionList, mProperty_mEndOfInitLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @decoratedInitRoutine type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedInitRoutine ("decoratedInitRoutine",
                                             & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_decoratedInitRoutine::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedInitRoutine ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_decoratedInitRoutine::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedInitRoutine (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedInitRoutine GALGAS_decoratedInitRoutine::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_decoratedInitRoutine result ;
  const GALGAS_decoratedInitRoutine * p = (const GALGAS_decoratedInitRoutine *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedInitRoutine *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedInitRoutine", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_decoratedFunction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_decoratedFunction * p = (const cPtr_decoratedFunction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_decoratedFunction) ;
  if (kOperandEqual == result) {
    result = mProperty_mSelfTypeName.objectCompare (p->mProperty_mSelfTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMode.objectCompare (p->mProperty_mMode) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPublicFunction.objectCompare (p->mProperty_mPublicFunction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFunctionName.objectCompare (p->mProperty_mFunctionName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFunctionFormalArgumentList.objectCompare (p->mProperty_mFunctionFormalArgumentList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFunctionReturnTypeName.objectCompare (p->mProperty_mFunctionReturnTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFunctionInstructionList.objectCompare (p->mProperty_mFunctionInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfFunctionDeclaration.objectCompare (p->mProperty_mEndOfFunctionDeclaration) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWarnIfUnused.objectCompare (p->mProperty_mWarnIfUnused) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsGlobalProcedure.objectCompare (p->mProperty_mIsGlobalProcedure) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsSafe.objectCompare (p->mProperty_mIsSafe) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_decoratedFunction::objectCompare (const GALGAS_decoratedFunction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedFunction::GALGAS_decoratedFunction (void) :
GALGAS_abstractDecoratedDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedFunction::GALGAS_decoratedFunction (const cPtr_decoratedFunction * inSourcePtr) :
GALGAS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedFunction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedFunction GALGAS_decoratedFunction::constructor_new (const GALGAS_string & inAttribute_mSelfTypeName,
                                                                    const GALGAS_mode & inAttribute_mMode,
                                                                    const GALGAS_bool & inAttribute_mPublicFunction,
                                                                    const GALGAS_lstring & inAttribute_mFunctionName,
                                                                    const GALGAS_routineFormalArgumentListAST & inAttribute_mFunctionFormalArgumentList,
                                                                    const GALGAS_lstring & inAttribute_mFunctionReturnTypeName,
                                                                    const GALGAS_instructionListAST & inAttribute_mFunctionInstructionList,
                                                                    const GALGAS_location & inAttribute_mEndOfFunctionDeclaration,
                                                                    const GALGAS_bool & inAttribute_mWarnIfUnused,
                                                                    const GALGAS_bool & inAttribute_mIsGlobalProcedure,
                                                                    const GALGAS_bool & inAttribute_mIsSafe
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_decoratedFunction result ;
  if (inAttribute_mSelfTypeName.isValid () && inAttribute_mMode.isValid () && inAttribute_mPublicFunction.isValid () && inAttribute_mFunctionName.isValid () && inAttribute_mFunctionFormalArgumentList.isValid () && inAttribute_mFunctionReturnTypeName.isValid () && inAttribute_mFunctionInstructionList.isValid () && inAttribute_mEndOfFunctionDeclaration.isValid () && inAttribute_mWarnIfUnused.isValid () && inAttribute_mIsGlobalProcedure.isValid () && inAttribute_mIsSafe.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_decoratedFunction (inAttribute_mSelfTypeName, inAttribute_mMode, inAttribute_mPublicFunction, inAttribute_mFunctionName, inAttribute_mFunctionFormalArgumentList, inAttribute_mFunctionReturnTypeName, inAttribute_mFunctionInstructionList, inAttribute_mEndOfFunctionDeclaration, inAttribute_mWarnIfUnused, inAttribute_mIsGlobalProcedure, inAttribute_mIsSafe COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_decoratedFunction::getter_mSelfTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedFunction * p = (const cPtr_decoratedFunction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedFunction) ;
    result = p->mProperty_mSelfTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_decoratedFunction::getter_mSelfTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelfTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mode GALGAS_decoratedFunction::getter_mMode (UNUSED_LOCATION_ARGS) const {
  GALGAS_mode result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedFunction * p = (const cPtr_decoratedFunction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedFunction) ;
    result = p->mProperty_mMode ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mode cPtr_decoratedFunction::getter_mMode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_decoratedFunction::getter_mPublicFunction (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedFunction * p = (const cPtr_decoratedFunction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedFunction) ;
    result = p->mProperty_mPublicFunction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_decoratedFunction::getter_mPublicFunction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPublicFunction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_decoratedFunction::getter_mFunctionName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedFunction * p = (const cPtr_decoratedFunction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedFunction) ;
    result = p->mProperty_mFunctionName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_decoratedFunction::getter_mFunctionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListAST GALGAS_decoratedFunction::getter_mFunctionFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  GALGAS_routineFormalArgumentListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedFunction * p = (const cPtr_decoratedFunction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedFunction) ;
    result = p->mProperty_mFunctionFormalArgumentList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListAST cPtr_decoratedFunction::getter_mFunctionFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_decoratedFunction::getter_mFunctionReturnTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedFunction * p = (const cPtr_decoratedFunction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedFunction) ;
    result = p->mProperty_mFunctionReturnTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_decoratedFunction::getter_mFunctionReturnTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionReturnTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_decoratedFunction::getter_mFunctionInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedFunction * p = (const cPtr_decoratedFunction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedFunction) ;
    result = p->mProperty_mFunctionInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST cPtr_decoratedFunction::getter_mFunctionInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_decoratedFunction::getter_mEndOfFunctionDeclaration (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedFunction * p = (const cPtr_decoratedFunction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedFunction) ;
    result = p->mProperty_mEndOfFunctionDeclaration ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_decoratedFunction::getter_mEndOfFunctionDeclaration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfFunctionDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_decoratedFunction::getter_mWarnIfUnused (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedFunction * p = (const cPtr_decoratedFunction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedFunction) ;
    result = p->mProperty_mWarnIfUnused ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_decoratedFunction::getter_mWarnIfUnused (UNUSED_LOCATION_ARGS) const {
  return mProperty_mWarnIfUnused ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_decoratedFunction::getter_mIsGlobalProcedure (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedFunction * p = (const cPtr_decoratedFunction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedFunction) ;
    result = p->mProperty_mIsGlobalProcedure ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_decoratedFunction::getter_mIsGlobalProcedure (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsGlobalProcedure ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_decoratedFunction::getter_mIsSafe (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedFunction * p = (const cPtr_decoratedFunction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedFunction) ;
    result = p->mProperty_mIsSafe ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_decoratedFunction::getter_mIsSafe (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsSafe ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @decoratedFunction class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_decoratedFunction::cPtr_decoratedFunction (const GALGAS_string & in_mSelfTypeName,
                                                const GALGAS_mode & in_mMode,
                                                const GALGAS_bool & in_mPublicFunction,
                                                const GALGAS_lstring & in_mFunctionName,
                                                const GALGAS_routineFormalArgumentListAST & in_mFunctionFormalArgumentList,
                                                const GALGAS_lstring & in_mFunctionReturnTypeName,
                                                const GALGAS_instructionListAST & in_mFunctionInstructionList,
                                                const GALGAS_location & in_mEndOfFunctionDeclaration,
                                                const GALGAS_bool & in_mWarnIfUnused,
                                                const GALGAS_bool & in_mIsGlobalProcedure,
                                                const GALGAS_bool & in_mIsSafe
                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (THERE),
mProperty_mSelfTypeName (in_mSelfTypeName),
mProperty_mMode (in_mMode),
mProperty_mPublicFunction (in_mPublicFunction),
mProperty_mFunctionName (in_mFunctionName),
mProperty_mFunctionFormalArgumentList (in_mFunctionFormalArgumentList),
mProperty_mFunctionReturnTypeName (in_mFunctionReturnTypeName),
mProperty_mFunctionInstructionList (in_mFunctionInstructionList),
mProperty_mEndOfFunctionDeclaration (in_mEndOfFunctionDeclaration),
mProperty_mWarnIfUnused (in_mWarnIfUnused),
mProperty_mIsGlobalProcedure (in_mIsGlobalProcedure),
mProperty_mIsSafe (in_mIsSafe) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_decoratedFunction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedFunction ;
}

void cPtr_decoratedFunction::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@decoratedFunction:" ;
  mProperty_mSelfTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMode.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPublicFunction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFunctionFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFunctionReturnTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfFunctionDeclaration.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mWarnIfUnused.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsGlobalProcedure.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsSafe.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_decoratedFunction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_decoratedFunction (mProperty_mSelfTypeName, mProperty_mMode, mProperty_mPublicFunction, mProperty_mFunctionName, mProperty_mFunctionFormalArgumentList, mProperty_mFunctionReturnTypeName, mProperty_mFunctionInstructionList, mProperty_mEndOfFunctionDeclaration, mProperty_mWarnIfUnused, mProperty_mIsGlobalProcedure, mProperty_mIsSafe COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @decoratedFunction type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedFunction ("decoratedFunction",
                                          & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_decoratedFunction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedFunction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_decoratedFunction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedFunction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedFunction GALGAS_decoratedFunction::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_decoratedFunction result ;
  const GALGAS_decoratedFunction * p = (const GALGAS_decoratedFunction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedFunction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedFunction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureDeclarationListAST_2D_element::GALGAS_externProcedureDeclarationListAST_2D_element (void) :
mProperty_mExternProcedureName (),
mProperty_mMode (),
mProperty_mAttributeList (),
mProperty_mProcFormalArgumentList (),
mProperty_mReturnTypeName (),
mProperty_mRoutineNameForGeneration (),
mProperty_mEndOfProcLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureDeclarationListAST_2D_element::~ GALGAS_externProcedureDeclarationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureDeclarationListAST_2D_element::GALGAS_externProcedureDeclarationListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_mode & inOperand1,
                                                                                                          const GALGAS_lstringlist & inOperand2,
                                                                                                          const GALGAS_routineFormalArgumentListAST & inOperand3,
                                                                                                          const GALGAS_lstring & inOperand4,
                                                                                                          const GALGAS_lstring & inOperand5,
                                                                                                          const GALGAS_location & inOperand6) :
mProperty_mExternProcedureName (inOperand0),
mProperty_mMode (inOperand1),
mProperty_mAttributeList (inOperand2),
mProperty_mProcFormalArgumentList (inOperand3),
mProperty_mReturnTypeName (inOperand4),
mProperty_mRoutineNameForGeneration (inOperand5),
mProperty_mEndOfProcLocation (inOperand6) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureDeclarationListAST_2D_element GALGAS_externProcedureDeclarationListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                          const GALGAS_mode & inOperand1,
                                                                                                                          const GALGAS_lstringlist & inOperand2,
                                                                                                                          const GALGAS_routineFormalArgumentListAST & inOperand3,
                                                                                                                          const GALGAS_lstring & inOperand4,
                                                                                                                          const GALGAS_lstring & inOperand5,
                                                                                                                          const GALGAS_location & inOperand6 
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_externProcedureDeclarationListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_externProcedureDeclarationListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_externProcedureDeclarationListAST_2D_element::objectCompare (const GALGAS_externProcedureDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mExternProcedureName.objectCompare (inOperand.mProperty_mExternProcedureName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMode.objectCompare (inOperand.mProperty_mMode) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAttributeList.objectCompare (inOperand.mProperty_mAttributeList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mProcFormalArgumentList.objectCompare (inOperand.mProperty_mProcFormalArgumentList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mReturnTypeName.objectCompare (inOperand.mProperty_mReturnTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRoutineNameForGeneration.objectCompare (inOperand.mProperty_mRoutineNameForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfProcLocation.objectCompare (inOperand.mProperty_mEndOfProcLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_externProcedureDeclarationListAST_2D_element::isValid (void) const {
  return mProperty_mExternProcedureName.isValid () && mProperty_mMode.isValid () && mProperty_mAttributeList.isValid () && mProperty_mProcFormalArgumentList.isValid () && mProperty_mReturnTypeName.isValid () && mProperty_mRoutineNameForGeneration.isValid () && mProperty_mEndOfProcLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externProcedureDeclarationListAST_2D_element::drop (void) {
  mProperty_mExternProcedureName.drop () ;
  mProperty_mMode.drop () ;
  mProperty_mAttributeList.drop () ;
  mProperty_mProcFormalArgumentList.drop () ;
  mProperty_mReturnTypeName.drop () ;
  mProperty_mRoutineNameForGeneration.drop () ;
  mProperty_mEndOfProcLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externProcedureDeclarationListAST_2D_element::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "<struct @externProcedureDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mExternProcedureName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAttributeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mProcFormalArgumentList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mReturnTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRoutineNameForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfProcLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externProcedureDeclarationListAST_2D_element::getter_mExternProcedureName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternProcedureName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mode GALGAS_externProcedureDeclarationListAST_2D_element::getter_mMode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_externProcedureDeclarationListAST_2D_element::getter_mAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListAST GALGAS_externProcedureDeclarationListAST_2D_element::getter_mProcFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProcFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externProcedureDeclarationListAST_2D_element::getter_mReturnTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReturnTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externProcedureDeclarationListAST_2D_element::getter_mRoutineNameForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineNameForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_externProcedureDeclarationListAST_2D_element::getter_mEndOfProcLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfProcLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @externProcedureDeclarationListAST-element type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externProcedureDeclarationListAST_2D_element ("externProcedureDeclarationListAST-element",
                                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_externProcedureDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externProcedureDeclarationListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_externProcedureDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externProcedureDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureDeclarationListAST_2D_element GALGAS_externProcedureDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_externProcedureDeclarationListAST_2D_element result ;
  const GALGAS_externProcedureDeclarationListAST_2D_element * p = (const GALGAS_externProcedureDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externProcedureDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externProcedureDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Extension method '@externProcedureDeclarationListAST-element externProcedureSemanticAnalysis'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_externProcedureSemanticAnalysis (const GALGAS_externProcedureDeclarationListAST_2D_element inObject,
                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                      GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_routineMangledName_5544 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), inObject.mProperty_mExternProcedureName, inObject.mProperty_mProcFormalArgumentList, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 134)) ;
  GALGAS_routineFormalArgumentListIR var_formalArguments_5719 = GALGAS_routineFormalArgumentListIR::constructor_emptyList (SOURCE_FILE ("declaration-extern-proc.galgas", 140)) ;
  GALGAS_universalValuedObjectMap joker_5808 = GALGAS_universalValuedObjectMap::constructor_default (SOURCE_FILE ("declaration-extern-proc.galgas", 144)) ;
  {
  routine_enterFormalArguments (constinArgument_inContext, inObject.mProperty_mProcFormalArgumentList, joker_5808, var_formalArguments_5719, inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 141)) ;
  }
  const enumGalgasBool test_0 = ioArgument_ioTemporaries.getter_mSubprogramInvocationGraph (HERE).getter_isNodeDefined (var_routineMangledName_5544.getter_string (HERE) COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 148)).operator_not (SOURCE_FILE ("declaration-extern-proc.galgas", 148)).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addNode (var_routineMangledName_5544, var_routineMangledName_5544, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 149)) ;
    }
  }
  GALGAS_unifiedTypeMap_2D_proxy temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, inObject.mProperty_mReturnTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-extern-proc.galgas", 156)) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), inObject.mProperty_mReturnTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 158)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_returnType_6141 = temp_1 ;
  {
  ioArgument_ioIntermediateCodeStruct.mProperty_mExternProcedureMapIR.setter_insertKey (inObject.mProperty_mRoutineNameForGeneration, var_formalArguments_5719, var_returnType_6141, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 161)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureMapIR_2D_element::GALGAS_externProcedureMapIR_2D_element (void) :
mProperty_lkey (),
mProperty_mFormalArgumentListForGeneration (),
mProperty_mReturnType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureMapIR_2D_element::~ GALGAS_externProcedureMapIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureMapIR_2D_element::GALGAS_externProcedureMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_routineFormalArgumentListIR & inOperand1,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mFormalArgumentListForGeneration (inOperand1),
mProperty_mReturnType (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureMapIR_2D_element GALGAS_externProcedureMapIR_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_externProcedureMapIR_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                 GALGAS_routineFormalArgumentListIR::constructor_emptyList (HERE),
                                                 GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureMapIR_2D_element GALGAS_externProcedureMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_routineFormalArgumentListIR & inOperand1,
                                                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand2 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_externProcedureMapIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_externProcedureMapIR_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_externProcedureMapIR_2D_element::objectCompare (const GALGAS_externProcedureMapIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentListForGeneration.objectCompare (inOperand.mProperty_mFormalArgumentListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mReturnType.objectCompare (inOperand.mProperty_mReturnType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_externProcedureMapIR_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mFormalArgumentListForGeneration.isValid () && mProperty_mReturnType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externProcedureMapIR_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mFormalArgumentListForGeneration.drop () ;
  mProperty_mReturnType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externProcedureMapIR_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @externProcedureMapIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mReturnType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externProcedureMapIR_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListIR GALGAS_externProcedureMapIR_2D_element::getter_mFormalArgumentListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_externProcedureMapIR_2D_element::getter_mReturnType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReturnType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @externProcedureMapIR-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externProcedureMapIR_2D_element ("externProcedureMapIR-element",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_externProcedureMapIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externProcedureMapIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_externProcedureMapIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externProcedureMapIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureMapIR_2D_element GALGAS_externProcedureMapIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_externProcedureMapIR_2D_element result ;
  const GALGAS_externProcedureMapIR_2D_element * p = (const GALGAS_externProcedureMapIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externProcedureMapIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externProcedureMapIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension method '@interruptMapIR enterAccessibleEntities'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterAccessibleEntities (const GALGAS_interruptMapIR inObject,
                                              GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                              GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_interruptMapIR temp_0 = inObject ;
  cEnumerator_interruptMapIR enumerator_5502 (temp_0, kENUMERATION_UP) ;
  while (enumerator_5502.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_5502.current (HERE).getter_mInstructionGenerationList (HERE), ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 130)) ;
    enumerator_5502.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_callInstructionAST::objectCompare (const GALGAS_callInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_callInstructionAST::GALGAS_callInstructionAST (void) :
GALGAS_instructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_callInstructionAST::GALGAS_callInstructionAST (const cPtr_callInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_callInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveArgumentListAST GALGAS_callInstructionAST::getter_mArguments (UNUSED_LOCATION_ARGS) const {
  GALGAS_effectiveArgumentListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_callInstructionAST * p = (const cPtr_callInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_callInstructionAST) ;
    result = p->mProperty_mArguments ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveArgumentListAST cPtr_callInstructionAST::getter_mArguments (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArguments ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_callInstructionAST::getter_mEndOfArguments (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_callInstructionAST * p = (const cPtr_callInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_callInstructionAST) ;
    result = p->mProperty_mEndOfArguments ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_callInstructionAST::getter_mEndOfArguments (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfArguments ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @callInstructionAST class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_callInstructionAST::cPtr_callInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_effectiveArgumentListAST & in_mArguments,
                                                  const GALGAS_location & in_mEndOfArguments
                                                  COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mArguments (in_mArguments),
mProperty_mEndOfArguments (in_mEndOfArguments) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @callInstructionAST type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_callInstructionAST ("callInstructionAST",
                                           & kTypeDescriptor_GALGAS_instructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_callInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_callInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_callInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_callInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_callInstructionAST GALGAS_callInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_callInstructionAST result ;
  const GALGAS_callInstructionAST * p = (const GALGAS_callInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_callInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("callInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapIR_2D_element::GALGAS_guardMapIR_2D_element (void) :
mProperty_lkey (),
mProperty_mFormalArgumentListForGeneration (),
mProperty_mReceiverType (),
mProperty_mGuardKindGenerationIR (),
mProperty_mAllocaList (),
mProperty_mInstructionGenerationList (),
mProperty_mWarnIfUnused () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapIR_2D_element::~ GALGAS_guardMapIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapIR_2D_element::GALGAS_guardMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_routineFormalArgumentListIR & inOperand1,
                                                            const GALGAS_PLMType & inOperand2,
                                                            const GALGAS_guardKindGenerationIR & inOperand3,
                                                            const GALGAS_allocaList & inOperand4,
                                                            const GALGAS_instructionListIR & inOperand5,
                                                            const GALGAS_bool & inOperand6) :
mProperty_lkey (inOperand0),
mProperty_mFormalArgumentListForGeneration (inOperand1),
mProperty_mReceiverType (inOperand2),
mProperty_mGuardKindGenerationIR (inOperand3),
mProperty_mAllocaList (inOperand4),
mProperty_mInstructionGenerationList (inOperand5),
mProperty_mWarnIfUnused (inOperand6) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapIR_2D_element GALGAS_guardMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_routineFormalArgumentListIR & inOperand1,
                                                                            const GALGAS_PLMType & inOperand2,
                                                                            const GALGAS_guardKindGenerationIR & inOperand3,
                                                                            const GALGAS_allocaList & inOperand4,
                                                                            const GALGAS_instructionListIR & inOperand5,
                                                                            const GALGAS_bool & inOperand6 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_guardMapIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_guardMapIR_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_guardMapIR_2D_element::objectCompare (const GALGAS_guardMapIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentListForGeneration.objectCompare (inOperand.mProperty_mFormalArgumentListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mReceiverType.objectCompare (inOperand.mProperty_mReceiverType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGuardKindGenerationIR.objectCompare (inOperand.mProperty_mGuardKindGenerationIR) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAllocaList.objectCompare (inOperand.mProperty_mAllocaList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInstructionGenerationList.objectCompare (inOperand.mProperty_mInstructionGenerationList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mWarnIfUnused.objectCompare (inOperand.mProperty_mWarnIfUnused) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_guardMapIR_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mFormalArgumentListForGeneration.isValid () && mProperty_mReceiverType.isValid () && mProperty_mGuardKindGenerationIR.isValid () && mProperty_mAllocaList.isValid () && mProperty_mInstructionGenerationList.isValid () && mProperty_mWarnIfUnused.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardMapIR_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mFormalArgumentListForGeneration.drop () ;
  mProperty_mReceiverType.drop () ;
  mProperty_mGuardKindGenerationIR.drop () ;
  mProperty_mAllocaList.drop () ;
  mProperty_mInstructionGenerationList.drop () ;
  mProperty_mWarnIfUnused.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardMapIR_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @guardMapIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mReceiverType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGuardKindGenerationIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAllocaList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInstructionGenerationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mWarnIfUnused.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_guardMapIR_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListIR GALGAS_guardMapIR_2D_element::getter_mFormalArgumentListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_guardMapIR_2D_element::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardKindGenerationIR GALGAS_guardMapIR_2D_element::getter_mGuardKindGenerationIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardKindGenerationIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList GALGAS_guardMapIR_2D_element::getter_mAllocaList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAllocaList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_guardMapIR_2D_element::getter_mInstructionGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionGenerationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_guardMapIR_2D_element::getter_mWarnIfUnused (UNUSED_LOCATION_ARGS) const {
  return mProperty_mWarnIfUnused ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @guardMapIR-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guardMapIR_2D_element ("guardMapIR-element",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_guardMapIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardMapIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_guardMapIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardMapIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapIR_2D_element GALGAS_guardMapIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_guardMapIR_2D_element result ;
  const GALGAS_guardMapIR_2D_element * p = (const GALGAS_guardMapIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guardMapIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardMapIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension method '@guardMapIR-element enterAccessibleEntities'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterAccessibleEntities (const GALGAS_guardMapIR_2D_element inObject,
                                              GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                              GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  extensionMethod_enterAccessibleEntities (inObject.mProperty_mInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 613)) ;
  switch (inObject.mProperty_mGuardKindGenerationIR.enumValue ()) {
  case GALGAS_guardKindGenerationIR::kNotBuilt:
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_baseGuard:
    {
    }
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_convenienceGuard:
    {
      const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard * extractPtr_25380 = (const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard *) (inObject.mProperty_mGuardKindGenerationIR.unsafePointer ()) ;
      const GALGAS_instructionListIR extractedValue_baseGuardInstructionGenerationList = extractPtr_25380->mAssociatedValue1 ;
      const GALGAS_string extractedValue_baseGuardMangledName = extractPtr_25380->mAssociatedValue2 ;
      extensionMethod_enterAccessibleEntities (extractedValue_baseGuardInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 617)) ;
      ioArgument_ioAccessibleEntities.mProperty_mGuardSet.addAssign_operation (extractedValue_baseGuardMangledName  COMMA_SOURCE_FILE ("declaration-guard.galgas", 618)) ;
    }
    break ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_convertExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_convertExpressionAST * p = (const cPtr_convertExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_convertExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfExpression.objectCompare (p->mProperty_mEndOfExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_convertExpressionAST::objectCompare (const GALGAS_convertExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_convertExpressionAST::GALGAS_convertExpressionAST (void) :
GALGAS_expressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_convertExpressionAST::GALGAS_convertExpressionAST (const cPtr_convertExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_convertExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_convertExpressionAST GALGAS_convertExpressionAST::constructor_new (const GALGAS_expressionAST & inAttribute_mExpression,
                                                                          const GALGAS_lstring & inAttribute_mTypeName,
                                                                          const GALGAS_location & inAttribute_mEndOfExpression
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_convertExpressionAST result ;
  if (inAttribute_mExpression.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mEndOfExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_convertExpressionAST (inAttribute_mExpression, inAttribute_mTypeName, inAttribute_mEndOfExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_convertExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_convertExpressionAST * p = (const cPtr_convertExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertExpressionAST) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_convertExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_convertExpressionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_convertExpressionAST * p = (const cPtr_convertExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertExpressionAST) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_convertExpressionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_convertExpressionAST::getter_mEndOfExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_convertExpressionAST * p = (const cPtr_convertExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertExpressionAST) ;
    result = p->mProperty_mEndOfExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_convertExpressionAST::getter_mEndOfExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @convertExpressionAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_convertExpressionAST::cPtr_convertExpressionAST (const GALGAS_expressionAST & in_mExpression,
                                                      const GALGAS_lstring & in_mTypeName,
                                                      const GALGAS_location & in_mEndOfExpression
                                                      COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mExpression (in_mExpression),
mProperty_mTypeName (in_mTypeName),
mProperty_mEndOfExpression (in_mEndOfExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_convertExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_convertExpressionAST ;
}

void cPtr_convertExpressionAST::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@convertExpressionAST:" ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_convertExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_convertExpressionAST (mProperty_mExpression, mProperty_mTypeName, mProperty_mEndOfExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @convertExpressionAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_convertExpressionAST ("convertExpressionAST",
                                             & kTypeDescriptor_GALGAS_expressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_convertExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_convertExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_convertExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_convertExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_convertExpressionAST GALGAS_convertExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_convertExpressionAST result ;
  const GALGAS_convertExpressionAST * p = (const GALGAS_convertExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_convertExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("convertExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_convertInstructionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_convertInstructionIR * p = (const cPtr_convertInstructionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_convertInstructionIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mTarget.objectCompare (p->mProperty_mTarget) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOperand.objectCompare (p->mProperty_mOperand) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_convertInstructionIR::objectCompare (const GALGAS_convertInstructionIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_convertInstructionIR::GALGAS_convertInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_convertInstructionIR::GALGAS_convertInstructionIR (const cPtr_convertInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_convertInstructionIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_convertInstructionIR GALGAS_convertInstructionIR::constructor_new (const GALGAS_objectIR & inAttribute_mTarget,
                                                                          const GALGAS_objectIR & inAttribute_mOperand,
                                                                          const GALGAS_location & inAttribute_mLocation
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_convertInstructionIR result ;
  if (inAttribute_mTarget.isValid () && inAttribute_mOperand.isValid () && inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_convertInstructionIR (inAttribute_mTarget, inAttribute_mOperand, inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_convertInstructionIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_convertInstructionIR * p = (const cPtr_convertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertInstructionIR) ;
    result = p->mProperty_mTarget ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_convertInstructionIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTarget ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_convertInstructionIR::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_convertInstructionIR * p = (const cPtr_convertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertInstructionIR) ;
    result = p->mProperty_mOperand ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_convertInstructionIR::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_convertInstructionIR::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_convertInstructionIR * p = (const cPtr_convertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertInstructionIR) ;
    result = p->mProperty_mLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_convertInstructionIR::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @convertInstructionIR class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_convertInstructionIR::cPtr_convertInstructionIR (const GALGAS_objectIR & in_mTarget,
                                                      const GALGAS_objectIR & in_mOperand,
                                                      const GALGAS_location & in_mLocation
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mTarget (in_mTarget),
mProperty_mOperand (in_mOperand),
mProperty_mLocation (in_mLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_convertInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_convertInstructionIR ;
}

void cPtr_convertInstructionIR::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@convertInstructionIR:" ;
  mProperty_mTarget.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOperand.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_convertInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_convertInstructionIR (mProperty_mTarget, mProperty_mOperand, mProperty_mLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @convertInstructionIR type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_convertInstructionIR ("convertInstructionIR",
                                             & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_convertInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_convertInstructionIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_convertInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_convertInstructionIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_convertInstructionIR GALGAS_convertInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_convertInstructionIR result ;
  const GALGAS_convertInstructionIR * p = (const GALGAS_convertInstructionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_convertInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("convertInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_extendExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_extendExpressionAST * p = (const cPtr_extendExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_extendExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfExpression.objectCompare (p->mProperty_mEndOfExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_extendExpressionAST::objectCompare (const GALGAS_extendExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendExpressionAST::GALGAS_extendExpressionAST (void) :
GALGAS_expressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendExpressionAST::GALGAS_extendExpressionAST (const cPtr_extendExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extendExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendExpressionAST GALGAS_extendExpressionAST::constructor_new (const GALGAS_expressionAST & inAttribute_mExpression,
                                                                        const GALGAS_lstring & inAttribute_mTypeName,
                                                                        const GALGAS_location & inAttribute_mEndOfExpression
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_extendExpressionAST result ;
  if (inAttribute_mExpression.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mEndOfExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_extendExpressionAST (inAttribute_mExpression, inAttribute_mTypeName, inAttribute_mEndOfExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_extendExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_extendExpressionAST * p = (const cPtr_extendExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendExpressionAST) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_extendExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_extendExpressionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_extendExpressionAST * p = (const cPtr_extendExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendExpressionAST) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_extendExpressionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_extendExpressionAST::getter_mEndOfExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_extendExpressionAST * p = (const cPtr_extendExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendExpressionAST) ;
    result = p->mProperty_mEndOfExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_extendExpressionAST::getter_mEndOfExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @extendExpressionAST class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_extendExpressionAST::cPtr_extendExpressionAST (const GALGAS_expressionAST & in_mExpression,
                                                    const GALGAS_lstring & in_mTypeName,
                                                    const GALGAS_location & in_mEndOfExpression
                                                    COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mExpression (in_mExpression),
mProperty_mTypeName (in_mTypeName),
mProperty_mEndOfExpression (in_mEndOfExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_extendExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendExpressionAST ;
}

void cPtr_extendExpressionAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@extendExpressionAST:" ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_extendExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_extendExpressionAST (mProperty_mExpression, mProperty_mTypeName, mProperty_mEndOfExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @extendExpressionAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extendExpressionAST ("extendExpressionAST",
                                            & kTypeDescriptor_GALGAS_expressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_extendExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_extendExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extendExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendExpressionAST GALGAS_extendExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_extendExpressionAST result ;
  const GALGAS_extendExpressionAST * p = (const GALGAS_extendExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extendExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_truncateExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_truncateExpressionAST * p = (const cPtr_truncateExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_truncateExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfExpression.objectCompare (p->mProperty_mEndOfExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_truncateExpressionAST::objectCompare (const GALGAS_truncateExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_truncateExpressionAST::GALGAS_truncateExpressionAST (void) :
GALGAS_expressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_truncateExpressionAST::GALGAS_truncateExpressionAST (const cPtr_truncateExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_truncateExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_truncateExpressionAST GALGAS_truncateExpressionAST::constructor_new (const GALGAS_expressionAST & inAttribute_mExpression,
                                                                            const GALGAS_lstring & inAttribute_mTypeName,
                                                                            const GALGAS_location & inAttribute_mEndOfExpression
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_truncateExpressionAST result ;
  if (inAttribute_mExpression.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mEndOfExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_truncateExpressionAST (inAttribute_mExpression, inAttribute_mTypeName, inAttribute_mEndOfExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_truncateExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_truncateExpressionAST * p = (const cPtr_truncateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateExpressionAST) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_truncateExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_truncateExpressionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_truncateExpressionAST * p = (const cPtr_truncateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateExpressionAST) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_truncateExpressionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_truncateExpressionAST::getter_mEndOfExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_truncateExpressionAST * p = (const cPtr_truncateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateExpressionAST) ;
    result = p->mProperty_mEndOfExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_truncateExpressionAST::getter_mEndOfExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @truncateExpressionAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_truncateExpressionAST::cPtr_truncateExpressionAST (const GALGAS_expressionAST & in_mExpression,
                                                        const GALGAS_lstring & in_mTypeName,
                                                        const GALGAS_location & in_mEndOfExpression
                                                        COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mExpression (in_mExpression),
mProperty_mTypeName (in_mTypeName),
mProperty_mEndOfExpression (in_mEndOfExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_truncateExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_truncateExpressionAST ;
}

void cPtr_truncateExpressionAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@truncateExpressionAST:" ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_truncateExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_truncateExpressionAST (mProperty_mExpression, mProperty_mTypeName, mProperty_mEndOfExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @truncateExpressionAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_truncateExpressionAST ("truncateExpressionAST",
                                              & kTypeDescriptor_GALGAS_expressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_truncateExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_truncateExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_truncateExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_truncateExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_truncateExpressionAST GALGAS_truncateExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_truncateExpressionAST result ;
  const GALGAS_truncateExpressionAST * p = (const GALGAS_truncateExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_truncateExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("truncateExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterLValueAST::GALGAS_controlRegisterLValueAST (void) :
mProperty_mRegisterGroupName (),
mProperty_mGroupIndex (),
mProperty_mRegisterName (),
mProperty_mRegisterIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterLValueAST::~ GALGAS_controlRegisterLValueAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterLValueAST::GALGAS_controlRegisterLValueAST (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_registerGroupIndexAST & inOperand1,
                                                                  const GALGAS_lstring & inOperand2,
                                                                  const GALGAS_registerIndexAST & inOperand3) :
mProperty_mRegisterGroupName (inOperand0),
mProperty_mGroupIndex (inOperand1),
mProperty_mRegisterName (inOperand2),
mProperty_mRegisterIndex (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterLValueAST GALGAS_controlRegisterLValueAST::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_registerGroupIndexAST & inOperand1,
                                                                                  const GALGAS_lstring & inOperand2,
                                                                                  const GALGAS_registerIndexAST & inOperand3 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterLValueAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_controlRegisterLValueAST (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_controlRegisterLValueAST::objectCompare (const GALGAS_controlRegisterLValueAST & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mRegisterGroupName.objectCompare (inOperand.mProperty_mRegisterGroupName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGroupIndex.objectCompare (inOperand.mProperty_mGroupIndex) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegisterName.objectCompare (inOperand.mProperty_mRegisterName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegisterIndex.objectCompare (inOperand.mProperty_mRegisterIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_controlRegisterLValueAST::isValid (void) const {
  return mProperty_mRegisterGroupName.isValid () && mProperty_mGroupIndex.isValid () && mProperty_mRegisterName.isValid () && mProperty_mRegisterIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterLValueAST::drop (void) {
  mProperty_mRegisterGroupName.drop () ;
  mProperty_mGroupIndex.drop () ;
  mProperty_mRegisterName.drop () ;
  mProperty_mRegisterIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterLValueAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @controlRegisterLValueAST:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mRegisterGroupName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGroupIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRegisterName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRegisterIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_controlRegisterLValueAST::getter_mRegisterGroupName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterGroupName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerGroupIndexAST GALGAS_controlRegisterLValueAST::getter_mGroupIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGroupIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_controlRegisterLValueAST::getter_mRegisterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIndexAST GALGAS_controlRegisterLValueAST::getter_mRegisterIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @controlRegisterLValueAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterLValueAST ("controlRegisterLValueAST",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_controlRegisterLValueAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterLValueAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_controlRegisterLValueAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterLValueAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterLValueAST GALGAS_controlRegisterLValueAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterLValueAST result ;
  const GALGAS_controlRegisterLValueAST * p = (const GALGAS_controlRegisterLValueAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterLValueAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterLValueAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_LValueAST::GALGAS_LValueAST (void) :
mProperty_mIdentifier (),
mProperty_mAccessList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_LValueAST::~ GALGAS_LValueAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_LValueAST::GALGAS_LValueAST (const GALGAS_lstring & inOperand0,
                                    const GALGAS_accessInAssignmentListAST & inOperand1) :
mProperty_mIdentifier (inOperand0),
mProperty_mAccessList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_LValueAST GALGAS_LValueAST::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_LValueAST (GALGAS_lstring::constructor_default (HERE),
                           GALGAS_accessInAssignmentListAST::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_LValueAST GALGAS_LValueAST::constructor_new (const GALGAS_lstring & inOperand0,
                                                    const GALGAS_accessInAssignmentListAST & inOperand1 
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_LValueAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_LValueAST (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_LValueAST::objectCompare (const GALGAS_LValueAST & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mIdentifier.objectCompare (inOperand.mProperty_mIdentifier) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAccessList.objectCompare (inOperand.mProperty_mAccessList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_LValueAST::isValid (void) const {
  return mProperty_mIdentifier.isValid () && mProperty_mAccessList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_LValueAST::drop (void) {
  mProperty_mIdentifier.drop () ;
  mProperty_mAccessList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_LValueAST::description (C_String & ioString,
                                    const int32_t inIndentation) const {
  ioString << "<struct @LValueAST:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mIdentifier.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAccessList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_LValueAST::getter_mIdentifier (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIdentifier ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentListAST GALGAS_LValueAST::getter_mAccessList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAccessList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @LValueAST type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_LValueAST ("LValueAST",
                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_LValueAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_LValueAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_LValueAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_LValueAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_LValueAST GALGAS_LValueAST::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_LValueAST result ;
  const GALGAS_LValueAST * p = (const GALGAS_LValueAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_LValueAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("LValueAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_LValueRepresentation::GALGAS_LValueRepresentation (void) :
mProperty_type (),
mProperty_llvmName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_LValueRepresentation::~ GALGAS_LValueRepresentation (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_LValueRepresentation::GALGAS_LValueRepresentation (const GALGAS_PLMType & inOperand0,
                                                          const GALGAS_string & inOperand1) :
mProperty_type (inOperand0),
mProperty_llvmName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_LValueRepresentation GALGAS_LValueRepresentation::constructor_new (const GALGAS_PLMType & inOperand0,
                                                                          const GALGAS_string & inOperand1 
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_LValueRepresentation result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_LValueRepresentation (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_LValueRepresentation::objectCompare (const GALGAS_LValueRepresentation & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_type.objectCompare (inOperand.mProperty_type) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_llvmName.objectCompare (inOperand.mProperty_llvmName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_LValueRepresentation::isValid (void) const {
  return mProperty_type.isValid () && mProperty_llvmName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_LValueRepresentation::drop (void) {
  mProperty_type.drop () ;
  mProperty_llvmName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_LValueRepresentation::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<struct @LValueRepresentation:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_type.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_llvmName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_LValueRepresentation::getter_type (UNUSED_LOCATION_ARGS) const {
  return mProperty_type ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_LValueRepresentation::getter_llvmName (UNUSED_LOCATION_ARGS) const {
  return mProperty_llvmName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @LValueRepresentation type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_LValueRepresentation ("LValueRepresentation",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_LValueRepresentation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_LValueRepresentation ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_LValueRepresentation::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_LValueRepresentation (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_LValueRepresentation GALGAS_LValueRepresentation::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_LValueRepresentation result ;
  const GALGAS_LValueRepresentation * p = (const GALGAS_LValueRepresentation *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_LValueRepresentation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("LValueRepresentation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_sizeofExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_sizeofExpressionAST * p = (const cPtr_sizeofExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sizeofExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLValue.objectCompare (p->mProperty_mLValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_sizeofExpressionAST::objectCompare (const GALGAS_sizeofExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sizeofExpressionAST::GALGAS_sizeofExpressionAST (void) :
GALGAS_expressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sizeofExpressionAST GALGAS_sizeofExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_sizeofExpressionAST::constructor_new (GALGAS_LValueAST::constructor_default (HERE)
                                                      COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sizeofExpressionAST::GALGAS_sizeofExpressionAST (const cPtr_sizeofExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sizeofExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sizeofExpressionAST GALGAS_sizeofExpressionAST::constructor_new (const GALGAS_LValueAST & inAttribute_mLValue
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_sizeofExpressionAST result ;
  if (inAttribute_mLValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_sizeofExpressionAST (inAttribute_mLValue COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_LValueAST GALGAS_sizeofExpressionAST::getter_mLValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_LValueAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_sizeofExpressionAST * p = (const cPtr_sizeofExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sizeofExpressionAST) ;
    result = p->mProperty_mLValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_LValueAST cPtr_sizeofExpressionAST::getter_mLValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @sizeofExpressionAST class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_sizeofExpressionAST::cPtr_sizeofExpressionAST (const GALGAS_LValueAST & in_mLValue
                                                    COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mLValue (in_mLValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_sizeofExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sizeofExpressionAST ;
}

void cPtr_sizeofExpressionAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@sizeofExpressionAST:" ;
  mProperty_mLValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_sizeofExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_sizeofExpressionAST (mProperty_mLValue COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @sizeofExpressionAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sizeofExpressionAST ("sizeofExpressionAST",
                                            & kTypeDescriptor_GALGAS_expressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sizeofExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sizeofExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sizeofExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sizeofExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sizeofExpressionAST GALGAS_sizeofExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_sizeofExpressionAST result ;
  const GALGAS_sizeofExpressionAST * p = (const GALGAS_sizeofExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sizeofExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sizeofExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_sizeofTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_sizeofTypeAST * p = (const cPtr_sizeofTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sizeofTypeAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_sizeofTypeAST::objectCompare (const GALGAS_sizeofTypeAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sizeofTypeAST::GALGAS_sizeofTypeAST (void) :
GALGAS_expressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sizeofTypeAST GALGAS_sizeofTypeAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_sizeofTypeAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sizeofTypeAST::GALGAS_sizeofTypeAST (const cPtr_sizeofTypeAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sizeofTypeAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sizeofTypeAST GALGAS_sizeofTypeAST::constructor_new (const GALGAS_lstring & inAttribute_mTypeName
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_sizeofTypeAST result ;
  if (inAttribute_mTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_sizeofTypeAST (inAttribute_mTypeName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_sizeofTypeAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_sizeofTypeAST * p = (const cPtr_sizeofTypeAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sizeofTypeAST) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_sizeofTypeAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                       Pointer class for @sizeofTypeAST class                                        *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_sizeofTypeAST::cPtr_sizeofTypeAST (const GALGAS_lstring & in_mTypeName
                                        COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mTypeName (in_mTypeName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_sizeofTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sizeofTypeAST ;
}

void cPtr_sizeofTypeAST::description (C_String & ioString,
                                      const int32_t inIndentation) const {
  ioString << "[@sizeofTypeAST:" ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_sizeofTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_sizeofTypeAST (mProperty_mTypeName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @sizeofTypeAST type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sizeofTypeAST ("sizeofTypeAST",
                                      & kTypeDescriptor_GALGAS_expressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sizeofTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sizeofTypeAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sizeofTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sizeofTypeAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sizeofTypeAST GALGAS_sizeofTypeAST::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_sizeofTypeAST result ;
  const GALGAS_sizeofTypeAST * p = (const GALGAS_sizeofTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sizeofTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sizeofTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_sizeofInstructionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_sizeofInstructionIR * p = (const cPtr_sizeofInstructionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sizeofInstructionIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mTarget.objectCompare (p->mProperty_mTarget) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceType.objectCompare (p->mProperty_mSourceType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_sizeofInstructionIR::objectCompare (const GALGAS_sizeofInstructionIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sizeofInstructionIR::GALGAS_sizeofInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sizeofInstructionIR::GALGAS_sizeofInstructionIR (const cPtr_sizeofInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sizeofInstructionIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sizeofInstructionIR GALGAS_sizeofInstructionIR::constructor_new (const GALGAS_objectIR & inAttribute_mTarget,
                                                                        const GALGAS_PLMType & inAttribute_mSourceType
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_sizeofInstructionIR result ;
  if (inAttribute_mTarget.isValid () && inAttribute_mSourceType.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_sizeofInstructionIR (inAttribute_mTarget, inAttribute_mSourceType COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_sizeofInstructionIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_sizeofInstructionIR * p = (const cPtr_sizeofInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sizeofInstructionIR) ;
    result = p->mProperty_mTarget ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_sizeofInstructionIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTarget ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_sizeofInstructionIR::getter_mSourceType (UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMType result ;
  if (NULL != mObjectPtr) {
    const cPtr_sizeofInstructionIR * p = (const cPtr_sizeofInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sizeofInstructionIR) ;
    result = p->mProperty_mSourceType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType cPtr_sizeofInstructionIR::getter_mSourceType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceType ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @sizeofInstructionIR class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_sizeofInstructionIR::cPtr_sizeofInstructionIR (const GALGAS_objectIR & in_mTarget,
                                                    const GALGAS_PLMType & in_mSourceType
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mTarget (in_mTarget),
mProperty_mSourceType (in_mSourceType) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_sizeofInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sizeofInstructionIR ;
}

void cPtr_sizeofInstructionIR::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@sizeofInstructionIR:" ;
  mProperty_mTarget.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceType.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_sizeofInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_sizeofInstructionIR (mProperty_mTarget, mProperty_mSourceType COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @sizeofInstructionIR type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sizeofInstructionIR ("sizeofInstructionIR",
                                            & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sizeofInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sizeofInstructionIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sizeofInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sizeofInstructionIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sizeofInstructionIR GALGAS_sizeofInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_sizeofInstructionIR result ;
  const GALGAS_sizeofInstructionIR * p = (const GALGAS_sizeofInstructionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sizeofInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sizeofInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_constructorCallAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_constructorCallAST * p = (const cPtr_constructorCallAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_constructorCallAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mParameterList.objectCompare (p->mProperty_mParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mErrorLocation.objectCompare (p->mProperty_mErrorLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_constructorCallAST::objectCompare (const GALGAS_constructorCallAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorCallAST::GALGAS_constructorCallAST (void) :
GALGAS_expressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorCallAST GALGAS_constructorCallAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_constructorCallAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_functionCallEffectiveParameterListAST::constructor_emptyList (HERE),
                                                     GALGAS_location::constructor_nowhere (HERE)
                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorCallAST::GALGAS_constructorCallAST (const cPtr_constructorCallAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_constructorCallAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorCallAST GALGAS_constructorCallAST::constructor_new (const GALGAS_lstring & inAttribute_mTypeName,
                                                                      const GALGAS_functionCallEffectiveParameterListAST & inAttribute_mParameterList,
                                                                      const GALGAS_location & inAttribute_mErrorLocation
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_constructorCallAST result ;
  if (inAttribute_mTypeName.isValid () && inAttribute_mParameterList.isValid () && inAttribute_mErrorLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_constructorCallAST (inAttribute_mTypeName, inAttribute_mParameterList, inAttribute_mErrorLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_constructorCallAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_constructorCallAST * p = (const cPtr_constructorCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorCallAST) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_constructorCallAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallEffectiveParameterListAST GALGAS_constructorCallAST::getter_mParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_functionCallEffectiveParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_constructorCallAST * p = (const cPtr_constructorCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorCallAST) ;
    result = p->mProperty_mParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallEffectiveParameterListAST cPtr_constructorCallAST::getter_mParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_constructorCallAST::getter_mErrorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_constructorCallAST * p = (const cPtr_constructorCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorCallAST) ;
    result = p->mProperty_mErrorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_constructorCallAST::getter_mErrorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mErrorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @constructorCallAST class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_constructorCallAST::cPtr_constructorCallAST (const GALGAS_lstring & in_mTypeName,
                                                  const GALGAS_functionCallEffectiveParameterListAST & in_mParameterList,
                                                  const GALGAS_location & in_mErrorLocation
                                                  COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mTypeName (in_mTypeName),
mProperty_mParameterList (in_mParameterList),
mProperty_mErrorLocation (in_mErrorLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_constructorCallAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorCallAST ;
}

void cPtr_constructorCallAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@constructorCallAST:" ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mErrorLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_constructorCallAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_constructorCallAST (mProperty_mTypeName, mProperty_mParameterList, mProperty_mErrorLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @constructorCallAST type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constructorCallAST ("constructorCallAST",
                                           & kTypeDescriptor_GALGAS_expressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_constructorCallAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorCallAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_constructorCallAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constructorCallAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorCallAST GALGAS_constructorCallAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_constructorCallAST result ;
  const GALGAS_constructorCallAST * p = (const GALGAS_constructorCallAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_constructorCallAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorCallAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_typedConstantCallAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_typedConstantCallAST * p = (const cPtr_typedConstantCallAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_typedConstantCallAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOptionalTypeName.objectCompare (p->mProperty_mOptionalTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConstructorName.objectCompare (p->mProperty_mConstructorName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAccessList.objectCompare (p->mProperty_mAccessList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_typedConstantCallAST::objectCompare (const GALGAS_typedConstantCallAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedConstantCallAST::GALGAS_typedConstantCallAST (void) :
GALGAS_expressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedConstantCallAST GALGAS_typedConstantCallAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_typedConstantCallAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_primaryInExpressionAccessListAST::constructor_emptyList (HERE)
                                                       COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedConstantCallAST::GALGAS_typedConstantCallAST (const cPtr_typedConstantCallAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typedConstantCallAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedConstantCallAST GALGAS_typedConstantCallAST::constructor_new (const GALGAS_lstring & inAttribute_mOptionalTypeName,
                                                                          const GALGAS_lstring & inAttribute_mConstructorName,
                                                                          const GALGAS_primaryInExpressionAccessListAST & inAttribute_mAccessList
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_typedConstantCallAST result ;
  if (inAttribute_mOptionalTypeName.isValid () && inAttribute_mConstructorName.isValid () && inAttribute_mAccessList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_typedConstantCallAST (inAttribute_mOptionalTypeName, inAttribute_mConstructorName, inAttribute_mAccessList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_typedConstantCallAST::getter_mOptionalTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_typedConstantCallAST * p = (const cPtr_typedConstantCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typedConstantCallAST) ;
    result = p->mProperty_mOptionalTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_typedConstantCallAST::getter_mOptionalTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOptionalTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_typedConstantCallAST::getter_mConstructorName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_typedConstantCallAST * p = (const cPtr_typedConstantCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typedConstantCallAST) ;
    result = p->mProperty_mConstructorName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_typedConstantCallAST::getter_mConstructorName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConstructorName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessListAST GALGAS_typedConstantCallAST::getter_mAccessList (UNUSED_LOCATION_ARGS) const {
  GALGAS_primaryInExpressionAccessListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_typedConstantCallAST * p = (const cPtr_typedConstantCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typedConstantCallAST) ;
    result = p->mProperty_mAccessList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessListAST cPtr_typedConstantCallAST::getter_mAccessList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAccessList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @typedConstantCallAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_typedConstantCallAST::cPtr_typedConstantCallAST (const GALGAS_lstring & in_mOptionalTypeName,
                                                      const GALGAS_lstring & in_mConstructorName,
                                                      const GALGAS_primaryInExpressionAccessListAST & in_mAccessList
                                                      COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mOptionalTypeName (in_mOptionalTypeName),
mProperty_mConstructorName (in_mConstructorName),
mProperty_mAccessList (in_mAccessList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_typedConstantCallAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typedConstantCallAST ;
}

void cPtr_typedConstantCallAST::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@typedConstantCallAST:" ;
  mProperty_mOptionalTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mConstructorName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAccessList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_typedConstantCallAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_typedConstantCallAST (mProperty_mOptionalTypeName, mProperty_mConstructorName, mProperty_mAccessList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @typedConstantCallAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typedConstantCallAST ("typedConstantCallAST",
                                             & kTypeDescriptor_GALGAS_expressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_typedConstantCallAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typedConstantCallAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_typedConstantCallAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typedConstantCallAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedConstantCallAST GALGAS_typedConstantCallAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_typedConstantCallAST result ;
  const GALGAS_typedConstantCallAST * p = (const GALGAS_typedConstantCallAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typedConstantCallAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typedConstantCallAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension method '@infixOperatorMap checkBinaryOperationWith'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_checkBinaryOperationWith (const GALGAS_infixOperatorMap inObject,
                                               const GALGAS_PLMType constinArgument_inLeftType,
                                               const GALGAS_PLMType constinArgument_inRightType,
                                               const GALGAS_location constinArgument_inOperatorLocation,
                                               GALGAS_PLMType & outArgument_outResultType,
                                               GALGAS_infixOperatorDescription & outArgument_outOperation,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResultType.drop () ; // Release 'out' argument
  outArgument_outOperation.drop () ; // Release 'out' argument
  GALGAS_lstring var_lkey_2980 = function_combineTypeNamesForInfixOperator (constinArgument_inLeftType.getter_plmOriginalTypeName (HERE), constinArgument_inRightType.getter_plmOriginalTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 71)) ;
  const GALGAS_infixOperatorMap temp_0 = inObject ;
  const enumGalgasBool test_1 = temp_0.getter_hasKey (var_lkey_2980.getter_string (HERE) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 72)).boolEnum () ;
  if (kBoolTrue == test_1) {
    const GALGAS_infixOperatorMap temp_2 = inObject ;
    temp_2.method_searchKey (var_lkey_2980, outArgument_outResultType, outArgument_outOperation, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 73)) ;
  }else if (kBoolFalse == test_1) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("infix operation between $").add_operation (constinArgument_inLeftType.getter_plmOriginalTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 76)).add_operation (GALGAS_string (" and $"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 76)).add_operation (constinArgument_inRightType.getter_plmOriginalTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 76)).add_operation (GALGAS_string (" is not defined"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 76)), fixItArray3  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 75)) ;
    outArgument_outResultType.drop () ; // Release error dropped variable
    outArgument_outOperation.drop () ; // Release error dropped variable
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Abstract extension method '@infixOperatorDescription generateInfixOperatorCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_infixOperatorDescription_generateInfixOperatorCode> gExtensionMethodTable_infixOperatorDescription_generateInfixOperatorCode ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_generateInfixOperatorCode (const int32_t inClassIndex,
                                                     extensionMethodSignature_infixOperatorDescription_generateInfixOperatorCode inMethod) {
  gExtensionMethodTable_infixOperatorDescription_generateInfixOperatorCode.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_infixOperatorDescription_generateInfixOperatorCode (void) {
  gExtensionMethodTable_infixOperatorDescription_generateInfixOperatorCode.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_infixOperatorDescription_generateInfixOperatorCode (NULL,
                                                                               freeExtensionMethod_infixOperatorDescription_generateInfixOperatorCode) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_generateInfixOperatorCode (const cPtr_infixOperatorDescription * inObject,
                                                    GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                    GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                    const GALGAS_objectIR constin_inLeftOperand,
                                                    const GALGAS_location constin_inOperatorLocation,
                                                    const GALGAS_objectIR constin_inRightOperand,
                                                    const GALGAS_PLMType constin_inResultType,
                                                    GALGAS_objectIR & out_outResultValue,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outResultValue.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_infixOperatorDescription) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_infixOperatorDescription_generateInfixOperatorCode f = NULL ;
    if (classIndex < gExtensionMethodTable_infixOperatorDescription_generateInfixOperatorCode.count ()) {
      f = gExtensionMethodTable_infixOperatorDescription_generateInfixOperatorCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_infixOperatorDescription_generateInfixOperatorCode.count ()) {
          f = gExtensionMethodTable_infixOperatorDescription_generateInfixOperatorCode (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_infixOperatorDescription_generateInfixOperatorCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioTemporaries, io_ioInstructionGenerationList, constin_inLeftOperand, constin_inOperatorLocation, constin_inRightOperand, constin_inResultType, out_outResultValue, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Extension getter '@infixOperatorDescription performStaticOperation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_infixOperatorDescription_performStaticOperation> gExtensionGetterTable_infixOperatorDescription_performStaticOperation ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_performStaticOperation (const int32_t inClassIndex,
                                                  enterExtensionGetter_infixOperatorDescription_performStaticOperation inGetter) {
  gExtensionGetterTable_infixOperatorDescription_performStaticOperation.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint callExtensionGetter_performStaticOperation (const cPtr_infixOperatorDescription * inObject,
                                                          const GALGAS_bigint in_inLeft,
                                                          const GALGAS_bigint in_inRight,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_bigint result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_infixOperatorDescription) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_infixOperatorDescription_performStaticOperation f = NULL ;
    if (classIndex < gExtensionGetterTable_infixOperatorDescription_performStaticOperation.count ()) {
      f = gExtensionGetterTable_infixOperatorDescription_performStaticOperation (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_infixOperatorDescription_performStaticOperation.count ()) {
           f = gExtensionGetterTable_infixOperatorDescription_performStaticOperation (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_infixOperatorDescription_performStaticOperation.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inLeft, in_inRight, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint extensionGetter_infixOperatorDescription_performStaticOperation (const cPtr_infixOperatorDescription * inObject,
                                                                                      const GALGAS_bigint constinArgument_inLeft,
                                                                                      const GALGAS_bigint constinArgument_inRight,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  const cPtr_infixOperatorDescription * object = inObject ;
  macroValidSharedObject (object, cPtr_infixOperatorDescription) ;
  switch (object->mProperty_mOperator.enumValue ()) {
  case GALGAS_llvmBinaryOperation::kNotBuilt:
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_addNoOVF:
    {
      result_result = constinArgument_inLeft.add_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 274)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_subNoOVF:
    {
      result_result = constinArgument_inLeft.substract_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 275)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_mulNoOVF:
    {
      result_result = constinArgument_inLeft.multiply_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 276)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_udivNoOVF:
    {
      result_result = constinArgument_inLeft.divide_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 277)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sdivNoOVF:
    {
      result_result = constinArgument_inLeft.divide_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 278)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_uremNoOVF:
    {
      result_result = constinArgument_inLeft.modulo_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 279)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sremNoOVF:
    {
      result_result = constinArgument_inLeft.modulo_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 280)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_uaddOVF:
    {
      result_result = constinArgument_inLeft.add_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 282)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_saddOVF:
    {
      result_result = constinArgument_inLeft.add_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 283)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_usubOVF:
    {
      result_result = constinArgument_inLeft.substract_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 284)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ssubOVF:
    {
      result_result = constinArgument_inLeft.substract_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 285)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_umulOVF:
    {
      result_result = constinArgument_inLeft.multiply_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 286)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_smulOVF:
    {
      result_result = constinArgument_inLeft.multiply_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 287)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_udivOVF:
    {
      result_result = constinArgument_inLeft.divide_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 288)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sdivOVF:
    {
      result_result = constinArgument_inLeft.divide_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 289)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_uremOVF:
    {
      result_result = constinArgument_inLeft.modulo_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 290)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sremOVF:
    {
      result_result = constinArgument_inLeft.modulo_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 291)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_and:
    {
      result_result = constinArgument_inLeft.operator_and (constinArgument_inRight COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 293)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ior:
    {
      result_result = constinArgument_inLeft.operator_or (constinArgument_inRight COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 294)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_xor:
    {
      result_result = constinArgument_inLeft.operator_xor (constinArgument_inRight COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 295)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_shl:
    {
      result_result = constinArgument_inLeft.left_shift_operation (constinArgument_inRight.getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 296)) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 296)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ashr:
    {
      result_result = constinArgument_inLeft.right_shift_operation (constinArgument_inRight.getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 297)) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 297)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_lshr:
    {
      result_result = constinArgument_inLeft.right_shift_operation (constinArgument_inRight.getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 298)) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 298)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_eq:
    {
      result_result = GALGAS_bool (kIsEqual, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 300)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ne:
    {
      result_result = GALGAS_bool (kIsNotEqual, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 301)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ult:
    {
      result_result = GALGAS_bool (kIsStrictInf, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 302)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ule:
    {
      result_result = GALGAS_bool (kIsInfOrEqual, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 303)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ugt:
    {
      result_result = GALGAS_bool (kIsStrictSup, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 304)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_uge:
    {
      result_result = GALGAS_bool (kIsSupOrEqual, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 305)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_slt:
    {
      result_result = GALGAS_bool (kIsStrictInf, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 306)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_sle:
    {
      result_result = GALGAS_bool (kIsInfOrEqual, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 307)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_sgt:
    {
      result_result = GALGAS_bool (kIsStrictSup, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 308)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_sge:
    {
      result_result = GALGAS_bool (kIsSupOrEqual, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 309)) ;
    }
    break ;
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_infixOperatorDescription_performStaticOperation (void) {
  enterExtensionGetter_performStaticOperation (kTypeDescriptor_GALGAS_infixOperatorDescription.mSlotID,
                                               extensionGetter_infixOperatorDescription_performStaticOperation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_infixOperatorDescription_performStaticOperation (void) {
  gExtensionGetterTable_infixOperatorDescription_performStaticOperation.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_infixOperatorDescription_performStaticOperation (defineExtensionGetter_infixOperatorDescription_performStaticOperation,
                                                                            freeExtensionGetter_infixOperatorDescription_performStaticOperation) ;

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_integerSliceExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_integerSliceExpressionAST * p = (const cPtr_integerSliceExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_integerSliceExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSliceValues.objectCompare (p->mProperty_mSliceValues) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_integerSliceExpressionAST::objectCompare (const GALGAS_integerSliceExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_integerSliceExpressionAST::GALGAS_integerSliceExpressionAST (void) :
GALGAS_expressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_integerSliceExpressionAST GALGAS_integerSliceExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_integerSliceExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                            GALGAS_integerSliceFieldListAST::constructor_emptyList (HERE),
                                                            GALGAS_location::constructor_nowhere (HERE)
                                                            COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_integerSliceExpressionAST::GALGAS_integerSliceExpressionAST (const cPtr_integerSliceExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_integerSliceExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_integerSliceExpressionAST GALGAS_integerSliceExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mTypeName,
                                                                                    const GALGAS_integerSliceFieldListAST & inAttribute_mSliceValues,
                                                                                    const GALGAS_location & inAttribute_mLocation
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_integerSliceExpressionAST result ;
  if (inAttribute_mTypeName.isValid () && inAttribute_mSliceValues.isValid () && inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_integerSliceExpressionAST (inAttribute_mTypeName, inAttribute_mSliceValues, inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_integerSliceExpressionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_integerSliceExpressionAST * p = (const cPtr_integerSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerSliceExpressionAST) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_integerSliceExpressionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_integerSliceFieldListAST GALGAS_integerSliceExpressionAST::getter_mSliceValues (UNUSED_LOCATION_ARGS) const {
  GALGAS_integerSliceFieldListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_integerSliceExpressionAST * p = (const cPtr_integerSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerSliceExpressionAST) ;
    result = p->mProperty_mSliceValues ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_integerSliceFieldListAST cPtr_integerSliceExpressionAST::getter_mSliceValues (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSliceValues ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_integerSliceExpressionAST::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_integerSliceExpressionAST * p = (const cPtr_integerSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerSliceExpressionAST) ;
    result = p->mProperty_mLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_integerSliceExpressionAST::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @integerSliceExpressionAST class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_integerSliceExpressionAST::cPtr_integerSliceExpressionAST (const GALGAS_lstring & in_mTypeName,
                                                                const GALGAS_integerSliceFieldListAST & in_mSliceValues,
                                                                const GALGAS_location & in_mLocation
                                                                COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mTypeName (in_mTypeName),
mProperty_mSliceValues (in_mSliceValues),
mProperty_mLocation (in_mLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_integerSliceExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerSliceExpressionAST ;
}

void cPtr_integerSliceExpressionAST::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@integerSliceExpressionAST:" ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSliceValues.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_integerSliceExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_integerSliceExpressionAST (mProperty_mTypeName, mProperty_mSliceValues, mProperty_mLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @integerSliceExpressionAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_integerSliceExpressionAST ("integerSliceExpressionAST",
                                                  & kTypeDescriptor_GALGAS_expressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_integerSliceExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerSliceExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_integerSliceExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_integerSliceExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_integerSliceExpressionAST GALGAS_integerSliceExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_integerSliceExpressionAST result ;
  const GALGAS_integerSliceExpressionAST * p = (const GALGAS_integerSliceExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_integerSliceExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("integerSliceExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_literalIntegerInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalIntegerInExpressionAST * p = (const cPtr_literalIntegerInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalIntegerInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLiteralInteger.objectCompare (p->mProperty_mLiteralInteger) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_literalIntegerInExpressionAST::objectCompare (const GALGAS_literalIntegerInExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalIntegerInExpressionAST::GALGAS_literalIntegerInExpressionAST (void) :
GALGAS_expressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalIntegerInExpressionAST GALGAS_literalIntegerInExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalIntegerInExpressionAST::constructor_new (GALGAS_lbigint::constructor_default (HERE)
                                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalIntegerInExpressionAST::GALGAS_literalIntegerInExpressionAST (const cPtr_literalIntegerInExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalIntegerInExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalIntegerInExpressionAST GALGAS_literalIntegerInExpressionAST::constructor_new (const GALGAS_lbigint & inAttribute_mLiteralInteger
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_literalIntegerInExpressionAST result ;
  if (inAttribute_mLiteralInteger.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalIntegerInExpressionAST (inAttribute_mLiteralInteger COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_literalIntegerInExpressionAST::getter_mLiteralInteger (UNUSED_LOCATION_ARGS) const {
  GALGAS_lbigint result ;
  if (NULL != mObjectPtr) {
    const cPtr_literalIntegerInExpressionAST * p = (const cPtr_literalIntegerInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalIntegerInExpressionAST) ;
    result = p->mProperty_mLiteralInteger ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint cPtr_literalIntegerInExpressionAST::getter_mLiteralInteger (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLiteralInteger ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @literalIntegerInExpressionAST class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_literalIntegerInExpressionAST::cPtr_literalIntegerInExpressionAST (const GALGAS_lbigint & in_mLiteralInteger
                                                                        COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mLiteralInteger (in_mLiteralInteger) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_literalIntegerInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalIntegerInExpressionAST ;
}

void cPtr_literalIntegerInExpressionAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@literalIntegerInExpressionAST:" ;
  mProperty_mLiteralInteger.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_literalIntegerInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalIntegerInExpressionAST (mProperty_mLiteralInteger COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @literalIntegerInExpressionAST type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalIntegerInExpressionAST ("literalIntegerInExpressionAST",
                                                      & kTypeDescriptor_GALGAS_expressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_literalIntegerInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalIntegerInExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_literalIntegerInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalIntegerInExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalIntegerInExpressionAST GALGAS_literalIntegerInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_literalIntegerInExpressionAST result ;
  const GALGAS_literalIntegerInExpressionAST * p = (const GALGAS_literalIntegerInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalIntegerInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalIntegerInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_literalStringInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalStringInExpressionAST * p = (const cPtr_literalStringInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalStringInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLiteralString.objectCompare (p->mProperty_mLiteralString) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_literalStringInExpressionAST::objectCompare (const GALGAS_literalStringInExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalStringInExpressionAST::GALGAS_literalStringInExpressionAST (void) :
GALGAS_expressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalStringInExpressionAST GALGAS_literalStringInExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalStringInExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                               COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalStringInExpressionAST::GALGAS_literalStringInExpressionAST (const cPtr_literalStringInExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalStringInExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalStringInExpressionAST GALGAS_literalStringInExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mLiteralString
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_literalStringInExpressionAST result ;
  if (inAttribute_mLiteralString.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalStringInExpressionAST (inAttribute_mLiteralString COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_literalStringInExpressionAST::getter_mLiteralString (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_literalStringInExpressionAST * p = (const cPtr_literalStringInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalStringInExpressionAST) ;
    result = p->mProperty_mLiteralString ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_literalStringInExpressionAST::getter_mLiteralString (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLiteralString ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @literalStringInExpressionAST class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_literalStringInExpressionAST::cPtr_literalStringInExpressionAST (const GALGAS_lstring & in_mLiteralString
                                                                      COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mLiteralString (in_mLiteralString) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_literalStringInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringInExpressionAST ;
}

void cPtr_literalStringInExpressionAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@literalStringInExpressionAST:" ;
  mProperty_mLiteralString.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_literalStringInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalStringInExpressionAST (mProperty_mLiteralString COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @literalStringInExpressionAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalStringInExpressionAST ("literalStringInExpressionAST",
                                                     & kTypeDescriptor_GALGAS_expressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_literalStringInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringInExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_literalStringInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalStringInExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalStringInExpressionAST GALGAS_literalStringInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_literalStringInExpressionAST result ;
  const GALGAS_literalStringInExpressionAST * p = (const GALGAS_literalStringInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalStringInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalStringInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_registerInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_registerInExpressionAST * p = (const cPtr_registerInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_registerInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mControlRegisterLValue.objectCompare (p->mProperty_mControlRegisterLValue) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFieldName.objectCompare (p->mProperty_mFieldName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_registerInExpressionAST::objectCompare (const GALGAS_registerInExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerInExpressionAST::GALGAS_registerInExpressionAST (void) :
GALGAS_expressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerInExpressionAST::GALGAS_registerInExpressionAST (const cPtr_registerInExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_registerInExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerInExpressionAST GALGAS_registerInExpressionAST::constructor_new (const GALGAS_controlRegisterLValueAST & inAttribute_mControlRegisterLValue,
                                                                                const GALGAS_lstring & inAttribute_mFieldName
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_registerInExpressionAST result ;
  if (inAttribute_mControlRegisterLValue.isValid () && inAttribute_mFieldName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_registerInExpressionAST (inAttribute_mControlRegisterLValue, inAttribute_mFieldName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterLValueAST GALGAS_registerInExpressionAST::getter_mControlRegisterLValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_controlRegisterLValueAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_registerInExpressionAST * p = (const cPtr_registerInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerInExpressionAST) ;
    result = p->mProperty_mControlRegisterLValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterLValueAST cPtr_registerInExpressionAST::getter_mControlRegisterLValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mControlRegisterLValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_registerInExpressionAST::getter_mFieldName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_registerInExpressionAST * p = (const cPtr_registerInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerInExpressionAST) ;
    result = p->mProperty_mFieldName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_registerInExpressionAST::getter_mFieldName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFieldName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @registerInExpressionAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_registerInExpressionAST::cPtr_registerInExpressionAST (const GALGAS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                                            const GALGAS_lstring & in_mFieldName
                                                            COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mControlRegisterLValue (in_mControlRegisterLValue),
mProperty_mFieldName (in_mFieldName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_registerInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerInExpressionAST ;
}

void cPtr_registerInExpressionAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@registerInExpressionAST:" ;
  mProperty_mControlRegisterLValue.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFieldName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_registerInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_registerInExpressionAST (mProperty_mControlRegisterLValue, mProperty_mFieldName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @registerInExpressionAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerInExpressionAST ("registerInExpressionAST",
                                                & kTypeDescriptor_GALGAS_expressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_registerInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerInExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_registerInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerInExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerInExpressionAST GALGAS_registerInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_registerInExpressionAST result ;
  const GALGAS_registerInExpressionAST * p = (const GALGAS_registerInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_registerInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_registerConstantExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_registerConstantExpressionAST * p = (const cPtr_registerConstantExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_registerConstantExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mRegisterGroupName.objectCompare (p->mProperty_mRegisterGroupName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterName.objectCompare (p->mProperty_mRegisterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFieldValues.objectCompare (p->mProperty_mFieldValues) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_registerConstantExpressionAST::objectCompare (const GALGAS_registerConstantExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerConstantExpressionAST::GALGAS_registerConstantExpressionAST (void) :
GALGAS_expressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerConstantExpressionAST GALGAS_registerConstantExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_registerConstantExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_registerIntegerFieldListAST::constructor_emptyList (HERE)
                                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerConstantExpressionAST::GALGAS_registerConstantExpressionAST (const cPtr_registerConstantExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_registerConstantExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerConstantExpressionAST GALGAS_registerConstantExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mRegisterGroupName,
                                                                                            const GALGAS_lstring & inAttribute_mRegisterName,
                                                                                            const GALGAS_registerIntegerFieldListAST & inAttribute_mFieldValues
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_registerConstantExpressionAST result ;
  if (inAttribute_mRegisterGroupName.isValid () && inAttribute_mRegisterName.isValid () && inAttribute_mFieldValues.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_registerConstantExpressionAST (inAttribute_mRegisterGroupName, inAttribute_mRegisterName, inAttribute_mFieldValues COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_registerConstantExpressionAST::getter_mRegisterGroupName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_registerConstantExpressionAST * p = (const cPtr_registerConstantExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerConstantExpressionAST) ;
    result = p->mProperty_mRegisterGroupName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_registerConstantExpressionAST::getter_mRegisterGroupName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterGroupName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_registerConstantExpressionAST::getter_mRegisterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_registerConstantExpressionAST * p = (const cPtr_registerConstantExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerConstantExpressionAST) ;
    result = p->mProperty_mRegisterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_registerConstantExpressionAST::getter_mRegisterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListAST GALGAS_registerConstantExpressionAST::getter_mFieldValues (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerIntegerFieldListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_registerConstantExpressionAST * p = (const cPtr_registerConstantExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerConstantExpressionAST) ;
    result = p->mProperty_mFieldValues ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListAST cPtr_registerConstantExpressionAST::getter_mFieldValues (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFieldValues ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @registerConstantExpressionAST class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_registerConstantExpressionAST::cPtr_registerConstantExpressionAST (const GALGAS_lstring & in_mRegisterGroupName,
                                                                        const GALGAS_lstring & in_mRegisterName,
                                                                        const GALGAS_registerIntegerFieldListAST & in_mFieldValues
                                                                        COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mRegisterGroupName (in_mRegisterGroupName),
mProperty_mRegisterName (in_mRegisterName),
mProperty_mFieldValues (in_mFieldValues) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_registerConstantExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerConstantExpressionAST ;
}

void cPtr_registerConstantExpressionAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@registerConstantExpressionAST:" ;
  mProperty_mRegisterGroupName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFieldValues.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_registerConstantExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_registerConstantExpressionAST (mProperty_mRegisterGroupName, mProperty_mRegisterName, mProperty_mFieldValues COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @registerConstantExpressionAST type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerConstantExpressionAST ("registerConstantExpressionAST",
                                                      & kTypeDescriptor_GALGAS_expressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_registerConstantExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerConstantExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_registerConstantExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerConstantExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerConstantExpressionAST GALGAS_registerConstantExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_registerConstantExpressionAST result ;
  const GALGAS_registerConstantExpressionAST * p = (const GALGAS_registerConstantExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_registerConstantExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerConstantExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_primaryInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_primaryInExpressionAST * p = (const cPtr_primaryInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_primaryInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mReceiverName.objectCompare (p->mProperty_mReceiverName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAccessList.objectCompare (p->mProperty_mAccessList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_primaryInExpressionAST::objectCompare (const GALGAS_primaryInExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAST::GALGAS_primaryInExpressionAST (void) :
GALGAS_expressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAST GALGAS_primaryInExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_primaryInExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_primaryInExpressionAccessListAST::constructor_emptyList (HERE)
                                                         COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAST::GALGAS_primaryInExpressionAST (const cPtr_primaryInExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_primaryInExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAST GALGAS_primaryInExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mReceiverName,
                                                                              const GALGAS_primaryInExpressionAccessListAST & inAttribute_mAccessList
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_primaryInExpressionAST result ;
  if (inAttribute_mReceiverName.isValid () && inAttribute_mAccessList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_primaryInExpressionAST (inAttribute_mReceiverName, inAttribute_mAccessList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_primaryInExpressionAST::getter_mReceiverName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_primaryInExpressionAST * p = (const cPtr_primaryInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_primaryInExpressionAST) ;
    result = p->mProperty_mReceiverName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_primaryInExpressionAST::getter_mReceiverName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessListAST GALGAS_primaryInExpressionAST::getter_mAccessList (UNUSED_LOCATION_ARGS) const {
  GALGAS_primaryInExpressionAccessListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_primaryInExpressionAST * p = (const cPtr_primaryInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_primaryInExpressionAST) ;
    result = p->mProperty_mAccessList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessListAST cPtr_primaryInExpressionAST::getter_mAccessList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAccessList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @primaryInExpressionAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_primaryInExpressionAST::cPtr_primaryInExpressionAST (const GALGAS_lstring & in_mReceiverName,
                                                          const GALGAS_primaryInExpressionAccessListAST & in_mAccessList
                                                          COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mReceiverName (in_mReceiverName),
mProperty_mAccessList (in_mAccessList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_primaryInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primaryInExpressionAST ;
}

void cPtr_primaryInExpressionAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@primaryInExpressionAST:" ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAccessList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_primaryInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_primaryInExpressionAST (mProperty_mReceiverName, mProperty_mAccessList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @primaryInExpressionAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_primaryInExpressionAST ("primaryInExpressionAST",
                                               & kTypeDescriptor_GALGAS_expressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_primaryInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primaryInExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_primaryInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_primaryInExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAST GALGAS_primaryInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_primaryInExpressionAST result ;
  const GALGAS_primaryInExpressionAST * p = (const GALGAS_primaryInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_primaryInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("primaryInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Extension method '@primaryInExpressionAST analyzePrimaryExpressionNoSelf'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_primaryInExpressionAST_analyzePrimaryExpressionNoSelf> gExtensionMethodTable_primaryInExpressionAST_analyzePrimaryExpressionNoSelf ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_analyzePrimaryExpressionNoSelf (const int32_t inClassIndex,
                                                          extensionMethodSignature_primaryInExpressionAST_analyzePrimaryExpressionNoSelf inMethod) {
  gExtensionMethodTable_primaryInExpressionAST_analyzePrimaryExpressionNoSelf.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_analyzePrimaryExpressionNoSelf (const cPtr_primaryInExpressionAST * inObject,
                                                         const GALGAS_PLMType constin_inSelfType,
                                                         const GALGAS_routineAttributes constin_inRoutineAttributes,
                                                         const GALGAS_lstring constin_inCallerNameForInvocationGraph,
                                                         const GALGAS_PLMType constin_inOptionalTargetType,
                                                         const GALGAS_semanticContext constin_inContext,
                                                         const GALGAS_mode constin_inMode,
                                                         GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                         GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                                         GALGAS_universalValuedObjectMap & io_ioUniversalMap,
                                                         GALGAS_allocaList & io_ioAllocaList,
                                                         GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                         GALGAS_objectIR & out_outResult,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  out_outResult.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_primaryInExpressionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_primaryInExpressionAST_analyzePrimaryExpressionNoSelf f = NULL ;
    if (classIndex < gExtensionMethodTable_primaryInExpressionAST_analyzePrimaryExpressionNoSelf.count ()) {
      f = gExtensionMethodTable_primaryInExpressionAST_analyzePrimaryExpressionNoSelf (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_primaryInExpressionAST_analyzePrimaryExpressionNoSelf.count ()) {
           f = gExtensionMethodTable_primaryInExpressionAST_analyzePrimaryExpressionNoSelf (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_primaryInExpressionAST_analyzePrimaryExpressionNoSelf.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inSelfType, constin_inRoutineAttributes, constin_inCallerNameForInvocationGraph, constin_inOptionalTargetType, constin_inContext, constin_inMode, io_ioTemporaries, io_ioStaticEntityMap, io_ioUniversalMap, io_ioAllocaList, io_ioInstructionGenerationList, out_outResult, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_primaryInExpressionAST_analyzePrimaryExpressionNoSelf (const cPtr_primaryInExpressionAST * inObject,
                                                                                   const GALGAS_PLMType constinArgument_inSelfType,
                                                                                   const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                   const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                                   const GALGAS_PLMType constinArgument_inOptionalTargetType,
                                                                                   const GALGAS_semanticContext constinArgument_inContext,
                                                                                   const GALGAS_mode constinArgument_inMode,
                                                                                   GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                   GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                   GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                   GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                   GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                   GALGAS_objectIR & outArgument_outResult,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_primaryInExpressionAST * object = inObject ;
  macroValidSharedObject (object, cPtr_primaryInExpressionAST) ;
  GALGAS_valuedObject var_entity_9166 ;
  extensionMethod_searchEntity (ioArgument_ioUniversalMap, object->mProperty_mReceiverName, var_entity_9166, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 221)) ;
  switch (var_entity_9166.enumValue ()) {
  case GALGAS_valuedObject::kNotBuilt:
    break ;
  case GALGAS_valuedObject::kEnum_task:
    {
      const cEnumAssociatedValues_valuedObject_task * extractPtr_9815 = (const cEnumAssociatedValues_valuedObject_task *) (var_entity_9166.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_9815->mAssociatedValue0 ;
      outArgument_outResult = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForGlobalVariable (object->mProperty_mReceiverName.getter_string (SOURCE_FILE ("expression-primary.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 224))  COMMA_SOURCE_FILE ("expression-primary.galgas", 224)) ;
      {
      routine_procAnalyzeAccesListInExpression (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, object->mProperty_mAccessList, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 225)) ;
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_driver:
    {
      const cEnumAssociatedValues_valuedObject_driver * extractPtr_10557 = (const cEnumAssociatedValues_valuedObject_driver *) (var_entity_9166.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_10557->mAssociatedValue0 ;
      const GALGAS_bool extractedValue_instancied = extractPtr_10557->mAssociatedValue1 ;
      const enumGalgasBool test_0 = extractedValue_instancied.operator_not (SOURCE_FILE ("expression-primary.galgas", 241)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (object->mProperty_mReceiverName.getter_location (SOURCE_FILE ("expression-primary.galgas", 242)), GALGAS_string ("the driver should be instancied"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 242)) ;
      }
      outArgument_outResult = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForGlobalVariable (object->mProperty_mReceiverName.getter_string (SOURCE_FILE ("expression-primary.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 244))  COMMA_SOURCE_FILE ("expression-primary.galgas", 244)) ;
      {
      routine_procAnalyzeAccesListInExpression (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, object->mProperty_mAccessList, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 245)) ;
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_registerGroup:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mReceiverName.getter_location (SOURCE_FILE ("expression-primary.galgas", 261)), GALGAS_string ("control register is not accessible in this context"), fixItArray2  COMMA_SOURCE_FILE ("expression-primary.galgas", 261)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalConstant:
    {
      const cEnumAssociatedValues_valuedObject_globalConstant * extractPtr_11263 = (const cEnumAssociatedValues_valuedObject_globalConstant *) (var_entity_9166.unsafePointer ()) ;
      const GALGAS_objectIR extractedValue_objectIR = extractPtr_11263->mAssociatedValue0 ;
      outArgument_outResult = extractedValue_objectIR ;
      {
      routine_procAnalyzeAccesListInExpression (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, object->mProperty_mAccessList, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 264)) ;
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_localConstant:
    {
      const cEnumAssociatedValues_valuedObject_localConstant * extractPtr_11973 = (const cEnumAssociatedValues_valuedObject_localConstant *) (var_entity_9166.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_11973->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_11973->mAssociatedValue1 ;
      {
      extensionSetter_readAccess (ioArgument_ioUniversalMap, object->mProperty_mReceiverName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 280)) ;
      }
      outArgument_outResult = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("expression-primary.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 281))  COMMA_SOURCE_FILE ("expression-primary.galgas", 281)) ;
      {
      routine_procAnalyzeAccesListInExpression (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, object->mProperty_mAccessList, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 282)) ;
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_localVariable:
    {
      const cEnumAssociatedValues_valuedObject_localVariable * extractPtr_12682 = (const cEnumAssociatedValues_valuedObject_localVariable *) (var_entity_9166.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_12682->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_12682->mAssociatedValue1 ;
      outArgument_outResult = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("expression-primary.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 298))  COMMA_SOURCE_FILE ("expression-primary.galgas", 298)) ;
      {
      extensionSetter_readAccess (ioArgument_ioUniversalMap, object->mProperty_mReceiverName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 299)) ;
      }
      {
      routine_procAnalyzeAccesListInExpression (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, object->mProperty_mAccessList, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 300)) ;
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalSyncInstance:
    {
      const cEnumAssociatedValues_valuedObject_globalSyncInstance * extractPtr_13352 = (const cEnumAssociatedValues_valuedObject_globalSyncInstance *) (var_entity_9166.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_13352->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_13352->mAssociatedValue1 ;
      outArgument_outResult = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForGlobalSyncInstance (extractedValue_plmName.getter_string (SOURCE_FILE ("expression-primary.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 316))  COMMA_SOURCE_FILE ("expression-primary.galgas", 316)) ;
      {
      routine_procAnalyzeAccesListInExpression (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, object->mProperty_mAccessList, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 317)) ;
      }
    }
    break ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_primaryInExpressionAST_analyzePrimaryExpressionNoSelf (void) {
  enterExtensionMethod_analyzePrimaryExpressionNoSelf (kTypeDescriptor_GALGAS_primaryInExpressionAST.mSlotID,
                                                       extensionMethod_primaryInExpressionAST_analyzePrimaryExpressionNoSelf) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_primaryInExpressionAST_analyzePrimaryExpressionNoSelf (void) {
  gExtensionMethodTable_primaryInExpressionAST_analyzePrimaryExpressionNoSelf.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_primaryInExpressionAST_analyzePrimaryExpressionNoSelf (defineExtensionMethod_primaryInExpressionAST_analyzePrimaryExpressionNoSelf,
                                                                                  freeExtensionMethod_primaryInExpressionAST_analyzePrimaryExpressionNoSelf) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Extension method '@primaryInExpressionAST analyzePrimaryExpressionWithSelf'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_primaryInExpressionAST_analyzePrimaryExpressionWithSelf> gExtensionMethodTable_primaryInExpressionAST_analyzePrimaryExpressionWithSelf ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_analyzePrimaryExpressionWithSelf (const int32_t inClassIndex,
                                                            extensionMethodSignature_primaryInExpressionAST_analyzePrimaryExpressionWithSelf inMethod) {
  gExtensionMethodTable_primaryInExpressionAST_analyzePrimaryExpressionWithSelf.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_analyzePrimaryExpressionWithSelf (const cPtr_primaryInExpressionAST * inObject,
                                                           const GALGAS_PLMType constin_inSelfType,
                                                           const GALGAS_routineAttributes constin_inRoutineAttributes,
                                                           const GALGAS_lstring constin_inCallerNameForInvocationGraph,
                                                           const GALGAS_PLMType constin_inOptionalTargetType,
                                                           const GALGAS_semanticContext constin_inContext,
                                                           const GALGAS_mode constin_inMode,
                                                           GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                           GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                                           GALGAS_universalValuedObjectMap & io_ioUniversalMap,
                                                           GALGAS_allocaList & io_ioAllocaList,
                                                           GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                           GALGAS_objectIR & out_outResult,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  out_outResult.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_primaryInExpressionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_primaryInExpressionAST_analyzePrimaryExpressionWithSelf f = NULL ;
    if (classIndex < gExtensionMethodTable_primaryInExpressionAST_analyzePrimaryExpressionWithSelf.count ()) {
      f = gExtensionMethodTable_primaryInExpressionAST_analyzePrimaryExpressionWithSelf (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_primaryInExpressionAST_analyzePrimaryExpressionWithSelf.count ()) {
           f = gExtensionMethodTable_primaryInExpressionAST_analyzePrimaryExpressionWithSelf (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_primaryInExpressionAST_analyzePrimaryExpressionWithSelf.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inSelfType, constin_inRoutineAttributes, constin_inCallerNameForInvocationGraph, constin_inOptionalTargetType, constin_inContext, constin_inMode, io_ioTemporaries, io_ioStaticEntityMap, io_ioUniversalMap, io_ioAllocaList, io_ioInstructionGenerationList, out_outResult, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_primaryInExpressionAST_analyzePrimaryExpressionWithSelf (const cPtr_primaryInExpressionAST * inObject,
                                                                                     const GALGAS_PLMType constinArgument_inSelfType,
                                                                                     const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                     const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                                     const GALGAS_PLMType constinArgument_inOptionalTargetType,
                                                                                     const GALGAS_semanticContext constinArgument_inContext,
                                                                                     const GALGAS_mode constinArgument_inMode,
                                                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                     GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                     GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                     GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                     GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                     GALGAS_objectIR & outArgument_outResult,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_primaryInExpressionAST * object = inObject ;
  macroValidSharedObject (object, cPtr_primaryInExpressionAST) ;
  outArgument_outResult = GALGAS_objectIR::constructor_reference (constinArgument_inSelfType, function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 431))  COMMA_SOURCE_FILE ("expression-primary.galgas", 431)) ;
  cEnumerator_primaryInExpressionAccessListAST enumerator_17158 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_17158.hasCurrentObject ()) {
    switch (enumerator_17158.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_integerSlice:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_integerSlice * extractPtr_17538 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_integerSlice *) (enumerator_17158.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lbigint extractedValue_low = extractPtr_17538->mAssociatedValue0 ;
        const GALGAS_lbigint extractedValue_high = extractPtr_17538->mAssociatedValue1 ;
        {
        routine_handleSliceInExpression (constinArgument_inContext, outArgument_outResult, extractedValue_low, extractedValue_high, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 438)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_17763 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_17158.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_17763->mAssociatedValue0 ;
        {
        routine_handlePropertyAccessInExpression (outArgument_outResult, extractedValue_propertyName, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 447)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_18391 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_17158.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_18391->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfIndex = extractPtr_18391->mAssociatedValue1 ;
        {
        routine_handleArrayAccessInExpression (outArgument_outResult, extractedValue_indexExpression, extractedValue_endOfIndex, constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 454)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_19145 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_17158.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_methodName = extractPtr_19145->mAssociatedValue0 ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_19145->mAssociatedValue1 ;
        const GALGAS_location extractedValue_errorLocation = extractPtr_19145->mAssociatedValue2 ;
        const enumGalgasBool test_0 = constinArgument_inRoutineAttributes.getter_guard (SOURCE_FILE ("expression-primary.galgas", 471)).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (extractedValue_errorLocation, GALGAS_string ("a method cannot be called in guard"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 472)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_0) {
          {
          routine_handleFunctionCallInExpression (extractedValue_methodName, outArgument_outResult, constinArgument_inSelfType, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, constinArgument_inRoutineAttributes, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_arguments, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 474)) ;
          }
        }
      }
      break ;
    }
    enumerator_17158.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_primaryInExpressionAST_analyzePrimaryExpressionWithSelf (void) {
  enterExtensionMethod_analyzePrimaryExpressionWithSelf (kTypeDescriptor_GALGAS_primaryInExpressionAST.mSlotID,
                                                         extensionMethod_primaryInExpressionAST_analyzePrimaryExpressionWithSelf) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_primaryInExpressionAST_analyzePrimaryExpressionWithSelf (void) {
  gExtensionMethodTable_primaryInExpressionAST_analyzePrimaryExpressionWithSelf.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_primaryInExpressionAST_analyzePrimaryExpressionWithSelf (defineExtensionMethod_primaryInExpressionAST_analyzePrimaryExpressionWithSelf,
                                                                                    freeExtensionMethod_primaryInExpressionAST_analyzePrimaryExpressionWithSelf) ;

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_standaloneFunctionInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_standaloneFunctionInExpressionAST * p = (const cPtr_standaloneFunctionInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_standaloneFunctionInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mStandaloneFunctionName.objectCompare (p->mProperty_mStandaloneFunctionName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArguments.objectCompare (p->mProperty_mArguments) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfArguments.objectCompare (p->mProperty_mEndOfArguments) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_standaloneFunctionInExpressionAST::objectCompare (const GALGAS_standaloneFunctionInExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_standaloneFunctionInExpressionAST::GALGAS_standaloneFunctionInExpressionAST (void) :
GALGAS_expressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_standaloneFunctionInExpressionAST GALGAS_standaloneFunctionInExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_standaloneFunctionInExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                    GALGAS_effectiveArgumentListAST::constructor_emptyList (HERE),
                                                                    GALGAS_location::constructor_nowhere (HERE)
                                                                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_standaloneFunctionInExpressionAST::GALGAS_standaloneFunctionInExpressionAST (const cPtr_standaloneFunctionInExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_standaloneFunctionInExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_standaloneFunctionInExpressionAST GALGAS_standaloneFunctionInExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mStandaloneFunctionName,
                                                                                                    const GALGAS_effectiveArgumentListAST & inAttribute_mArguments,
                                                                                                    const GALGAS_location & inAttribute_mEndOfArguments
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_standaloneFunctionInExpressionAST result ;
  if (inAttribute_mStandaloneFunctionName.isValid () && inAttribute_mArguments.isValid () && inAttribute_mEndOfArguments.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_standaloneFunctionInExpressionAST (inAttribute_mStandaloneFunctionName, inAttribute_mArguments, inAttribute_mEndOfArguments COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_standaloneFunctionInExpressionAST::getter_mStandaloneFunctionName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_standaloneFunctionInExpressionAST * p = (const cPtr_standaloneFunctionInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneFunctionInExpressionAST) ;
    result = p->mProperty_mStandaloneFunctionName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_standaloneFunctionInExpressionAST::getter_mStandaloneFunctionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStandaloneFunctionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveArgumentListAST GALGAS_standaloneFunctionInExpressionAST::getter_mArguments (UNUSED_LOCATION_ARGS) const {
  GALGAS_effectiveArgumentListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_standaloneFunctionInExpressionAST * p = (const cPtr_standaloneFunctionInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneFunctionInExpressionAST) ;
    result = p->mProperty_mArguments ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveArgumentListAST cPtr_standaloneFunctionInExpressionAST::getter_mArguments (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArguments ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_standaloneFunctionInExpressionAST::getter_mEndOfArguments (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_standaloneFunctionInExpressionAST * p = (const cPtr_standaloneFunctionInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneFunctionInExpressionAST) ;
    result = p->mProperty_mEndOfArguments ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_standaloneFunctionInExpressionAST::getter_mEndOfArguments (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfArguments ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @standaloneFunctionInExpressionAST class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_standaloneFunctionInExpressionAST::cPtr_standaloneFunctionInExpressionAST (const GALGAS_lstring & in_mStandaloneFunctionName,
                                                                                const GALGAS_effectiveArgumentListAST & in_mArguments,
                                                                                const GALGAS_location & in_mEndOfArguments
                                                                                COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mStandaloneFunctionName (in_mStandaloneFunctionName),
mProperty_mArguments (in_mArguments),
mProperty_mEndOfArguments (in_mEndOfArguments) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_standaloneFunctionInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_standaloneFunctionInExpressionAST ;
}

void cPtr_standaloneFunctionInExpressionAST::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@standaloneFunctionInExpressionAST:" ;
  mProperty_mStandaloneFunctionName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArguments.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfArguments.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_standaloneFunctionInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_standaloneFunctionInExpressionAST (mProperty_mStandaloneFunctionName, mProperty_mArguments, mProperty_mEndOfArguments COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @standaloneFunctionInExpressionAST type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_standaloneFunctionInExpressionAST ("standaloneFunctionInExpressionAST",
                                                          & kTypeDescriptor_GALGAS_expressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_standaloneFunctionInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_standaloneFunctionInExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_standaloneFunctionInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_standaloneFunctionInExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_standaloneFunctionInExpressionAST GALGAS_standaloneFunctionInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_standaloneFunctionInExpressionAST result ;
  const GALGAS_standaloneFunctionInExpressionAST * p = (const GALGAS_standaloneFunctionInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_standaloneFunctionInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("standaloneFunctionInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

