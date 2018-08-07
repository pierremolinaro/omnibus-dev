#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_typeAliasDeclarationAST::objectCompare (const GALGAS_typeAliasDeclarationAST & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeAliasDeclarationAST::GALGAS_typeAliasDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeAliasDeclarationAST GALGAS_typeAliasDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_typeAliasDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_lstring::constructor_default (HERE)
                                                          COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeAliasDeclarationAST::GALGAS_typeAliasDeclarationAST (const cPtr_typeAliasDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typeAliasDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeAliasDeclarationAST GALGAS_typeAliasDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mAliasTypeName,
                                                                                const GALGAS_lstring & inAttribute_mOriginalTypeName
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_typeAliasDeclarationAST result ;
  if (inAttribute_mAliasTypeName.isValid () && inAttribute_mOriginalTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_typeAliasDeclarationAST (inAttribute_mAliasTypeName, inAttribute_mOriginalTypeName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_typeAliasDeclarationAST::getter_mAliasTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_typeAliasDeclarationAST * p = (const cPtr_typeAliasDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeAliasDeclarationAST) ;
    result = p->mProperty_mAliasTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_typeAliasDeclarationAST::getter_mAliasTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAliasTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_typeAliasDeclarationAST::getter_mOriginalTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_typeAliasDeclarationAST * p = (const cPtr_typeAliasDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeAliasDeclarationAST) ;
    result = p->mProperty_mOriginalTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_typeAliasDeclarationAST::getter_mOriginalTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOriginalTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                  Pointer class for @typeAliasDeclarationAST class                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_typeAliasDeclarationAST::cPtr_typeAliasDeclarationAST (const GALGAS_lstring & in_mAliasTypeName,
                                                            const GALGAS_lstring & in_mOriginalTypeName
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mAliasTypeName (in_mAliasTypeName),
mProperty_mOriginalTypeName (in_mOriginalTypeName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_typeAliasDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_typeAliasDeclarationAST (mProperty_mAliasTypeName, mProperty_mOriginalTypeName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @typeAliasDeclarationAST type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeAliasDeclarationAST ("typeAliasDeclarationAST",
                                                & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_typeAliasDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeAliasDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_typeAliasDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeAliasDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_staticArrayTypeDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_staticArrayTypeDeclarationAST * p = (const cPtr_staticArrayTypeDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_staticArrayTypeDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mArrayTypeName.objectCompare (p->mProperty_mArrayTypeName) ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_staticArrayTypeDeclarationAST::objectCompare (const GALGAS_staticArrayTypeDeclarationAST & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticArrayTypeDeclarationAST::GALGAS_staticArrayTypeDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticArrayTypeDeclarationAST::GALGAS_staticArrayTypeDeclarationAST (const cPtr_staticArrayTypeDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_staticArrayTypeDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticArrayTypeDeclarationAST GALGAS_staticArrayTypeDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mArrayTypeName,
                                                                                            const GALGAS_lstring & inAttribute_mElementTypeName,
                                                                                            const GALGAS_expressionAST & inAttribute_mSizeExpression,
                                                                                            const GALGAS_location & inAttribute_mSizeExpressionLocation
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_staticArrayTypeDeclarationAST result ;
  if (inAttribute_mArrayTypeName.isValid () && inAttribute_mElementTypeName.isValid () && inAttribute_mSizeExpression.isValid () && inAttribute_mSizeExpressionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_staticArrayTypeDeclarationAST (inAttribute_mArrayTypeName, inAttribute_mElementTypeName, inAttribute_mSizeExpression, inAttribute_mSizeExpressionLocation COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_staticArrayTypeDeclarationAST::getter_mArrayTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_staticArrayTypeDeclarationAST * p = (const cPtr_staticArrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticArrayTypeDeclarationAST) ;
    result = p->mProperty_mArrayTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_staticArrayTypeDeclarationAST::getter_mArrayTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArrayTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_staticArrayTypeDeclarationAST::getter_mElementTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_staticArrayTypeDeclarationAST * p = (const cPtr_staticArrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticArrayTypeDeclarationAST) ;
    result = p->mProperty_mElementTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_staticArrayTypeDeclarationAST::getter_mElementTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElementTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST GALGAS_staticArrayTypeDeclarationAST::getter_mSizeExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_staticArrayTypeDeclarationAST * p = (const cPtr_staticArrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticArrayTypeDeclarationAST) ;
    result = p->mProperty_mSizeExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST cPtr_staticArrayTypeDeclarationAST::getter_mSizeExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSizeExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_staticArrayTypeDeclarationAST::getter_mSizeExpressionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_staticArrayTypeDeclarationAST * p = (const cPtr_staticArrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticArrayTypeDeclarationAST) ;
    result = p->mProperty_mSizeExpressionLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_staticArrayTypeDeclarationAST::getter_mSizeExpressionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSizeExpressionLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                               Pointer class for @staticArrayTypeDeclarationAST class                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_staticArrayTypeDeclarationAST::cPtr_staticArrayTypeDeclarationAST (const GALGAS_lstring & in_mArrayTypeName,
                                                                        const GALGAS_lstring & in_mElementTypeName,
                                                                        const GALGAS_expressionAST & in_mSizeExpression,
                                                                        const GALGAS_location & in_mSizeExpressionLocation
                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mArrayTypeName (in_mArrayTypeName),
mProperty_mElementTypeName (in_mElementTypeName),
mProperty_mSizeExpression (in_mSizeExpression),
mProperty_mSizeExpressionLocation (in_mSizeExpressionLocation) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_staticArrayTypeDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticArrayTypeDeclarationAST ;
}

void cPtr_staticArrayTypeDeclarationAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@staticArrayTypeDeclarationAST:" ;
  mProperty_mArrayTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSizeExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSizeExpressionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_staticArrayTypeDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_staticArrayTypeDeclarationAST (mProperty_mArrayTypeName, mProperty_mElementTypeName, mProperty_mSizeExpression, mProperty_mSizeExpressionLocation COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @staticArrayTypeDeclarationAST type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticArrayTypeDeclarationAST ("staticArrayTypeDeclarationAST",
                                                      & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_staticArrayTypeDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticArrayTypeDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_staticArrayTypeDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticArrayTypeDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticArrayTypeDeclarationAST GALGAS_staticArrayTypeDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_staticArrayTypeDeclarationAST result ;
  const GALGAS_staticArrayTypeDeclarationAST * p = (const GALGAS_staticArrayTypeDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_staticArrayTypeDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticArrayTypeDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeDynamicArrayDeclarationAST::GALGAS_typeDynamicArrayDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeDynamicArrayDeclarationAST GALGAS_typeDynamicArrayDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_typeDynamicArrayDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                 GALGAS_lstring::constructor_default (HERE)
                                                                 COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeDynamicArrayDeclarationAST::GALGAS_typeDynamicArrayDeclarationAST (const cPtr_typeDynamicArrayDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typeDynamicArrayDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeDynamicArrayDeclarationAST GALGAS_typeDynamicArrayDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mDynamicArrayTypeName,
                                                                                              const GALGAS_lstring & inAttribute_mElementTypeName
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_typeDynamicArrayDeclarationAST result ;
  if (inAttribute_mDynamicArrayTypeName.isValid () && inAttribute_mElementTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_typeDynamicArrayDeclarationAST (inAttribute_mDynamicArrayTypeName, inAttribute_mElementTypeName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_typeDynamicArrayDeclarationAST::getter_mDynamicArrayTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_typeDynamicArrayDeclarationAST * p = (const cPtr_typeDynamicArrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeDynamicArrayDeclarationAST) ;
    result = p->mProperty_mDynamicArrayTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_typeDynamicArrayDeclarationAST::getter_mDynamicArrayTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDynamicArrayTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_typeDynamicArrayDeclarationAST::getter_mElementTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_typeDynamicArrayDeclarationAST * p = (const cPtr_typeDynamicArrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeDynamicArrayDeclarationAST) ;
    result = p->mProperty_mElementTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_typeDynamicArrayDeclarationAST::getter_mElementTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElementTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                               Pointer class for @typeDynamicArrayDeclarationAST class                               *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_typeDynamicArrayDeclarationAST::cPtr_typeDynamicArrayDeclarationAST (const GALGAS_lstring & in_mDynamicArrayTypeName,
                                                                          const GALGAS_lstring & in_mElementTypeName
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mDynamicArrayTypeName (in_mDynamicArrayTypeName),
mProperty_mElementTypeName (in_mElementTypeName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_typeDynamicArrayDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_typeDynamicArrayDeclarationAST (mProperty_mDynamicArrayTypeName, mProperty_mElementTypeName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @typeDynamicArrayDeclarationAST type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST ("typeDynamicArrayDeclarationAST",
                                                       & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_typeDynamicArrayDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_typeDynamicArrayDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeDynamicArrayDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumerationDeclarationAST::GALGAS_enumerationDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumerationDeclarationAST GALGAS_enumerationDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_enumerationDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                            GALGAS_enumerationConstantList::constructor_emptyList (HERE)
                                                            COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumerationDeclarationAST::GALGAS_enumerationDeclarationAST (const cPtr_enumerationDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumerationDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumerationDeclarationAST GALGAS_enumerationDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mEnumerationName,
                                                                                    const GALGAS_enumerationConstantList & inAttribute_mCaseNameList
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_enumerationDeclarationAST result ;
  if (inAttribute_mEnumerationName.isValid () && inAttribute_mCaseNameList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_enumerationDeclarationAST (inAttribute_mEnumerationName, inAttribute_mCaseNameList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_enumerationDeclarationAST::getter_mEnumerationName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumerationDeclarationAST * p = (const cPtr_enumerationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumerationDeclarationAST) ;
    result = p->mProperty_mEnumerationName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_enumerationDeclarationAST::getter_mEnumerationName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumerationName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumerationConstantList GALGAS_enumerationDeclarationAST::getter_mCaseNameList (UNUSED_LOCATION_ARGS) const {
  GALGAS_enumerationConstantList result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumerationDeclarationAST * p = (const cPtr_enumerationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumerationDeclarationAST) ;
    result = p->mProperty_mCaseNameList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumerationConstantList cPtr_enumerationDeclarationAST::getter_mCaseNameList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCaseNameList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                 Pointer class for @enumerationDeclarationAST class                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_enumerationDeclarationAST::cPtr_enumerationDeclarationAST (const GALGAS_lstring & in_mEnumerationName,
                                                                const GALGAS_enumerationConstantList & in_mCaseNameList
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mEnumerationName (in_mEnumerationName),
mProperty_mCaseNameList (in_mCaseNameList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_enumerationDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_enumerationDeclarationAST (mProperty_mEnumerationName, mProperty_mCaseNameList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @enumerationDeclarationAST type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumerationDeclarationAST ("enumerationDeclarationAST",
                                                  & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_enumerationDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_enumerationDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumerationDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_structureDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_structureDeclarationAST * p = (const cPtr_structureDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mStructureTypeName.objectCompare (p->mProperty_mStructureTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPLMTypeSpecificName.objectCompare (p->mProperty_mPLMTypeSpecificName) ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structureDeclarationAST::GALGAS_structureDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structureDeclarationAST GALGAS_structureDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_structureDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_lstringlist::constructor_emptyList (HERE),
                                                          GALGAS_bool::constructor_default (HERE),
                                                          GALGAS_structurePropertyListAST::constructor_emptyList (HERE),
                                                          GALGAS_functionDeclarationListAST::constructor_emptyList (HERE),
                                                          GALGAS_systemRoutineDeclarationListAST::constructor_emptyList (HERE),
                                                          GALGAS_guardDeclarationListAST::constructor_emptyList (HERE),
                                                          GALGAS_bool::constructor_default (HERE)
                                                          COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structureDeclarationAST::GALGAS_structureDeclarationAST (const cPtr_structureDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structureDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structureDeclarationAST GALGAS_structureDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mStructureTypeName,
                                                                                const GALGAS_lstring & inAttribute_mPLMTypeSpecificName,
                                                                                const GALGAS_lstring & inAttribute_mLLVMBaseTypeName,
                                                                                const GALGAS_lstringlist & inAttribute_mAttributeListAST,
                                                                                const GALGAS_bool & inAttribute_mGenerateAssignmentRoutine,
                                                                                const GALGAS_structurePropertyListAST & inAttribute_mStructurePropertyListAST,
                                                                                const GALGAS_functionDeclarationListAST & inAttribute_mFunctionDeclarationListAST,
                                                                                const GALGAS_systemRoutineDeclarationListAST & inAttribute_mSystemRoutineListAST,
                                                                                const GALGAS_guardDeclarationListAST & inAttribute_mGuardListAST,
                                                                                const GALGAS_bool & inAttribute_mMayImplementDeinit
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_structureDeclarationAST result ;
  if (inAttribute_mStructureTypeName.isValid () && inAttribute_mPLMTypeSpecificName.isValid () && inAttribute_mLLVMBaseTypeName.isValid () && inAttribute_mAttributeListAST.isValid () && inAttribute_mGenerateAssignmentRoutine.isValid () && inAttribute_mStructurePropertyListAST.isValid () && inAttribute_mFunctionDeclarationListAST.isValid () && inAttribute_mSystemRoutineListAST.isValid () && inAttribute_mGuardListAST.isValid () && inAttribute_mMayImplementDeinit.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_structureDeclarationAST (inAttribute_mStructureTypeName, inAttribute_mPLMTypeSpecificName, inAttribute_mLLVMBaseTypeName, inAttribute_mAttributeListAST, inAttribute_mGenerateAssignmentRoutine, inAttribute_mStructurePropertyListAST, inAttribute_mFunctionDeclarationListAST, inAttribute_mSystemRoutineListAST, inAttribute_mGuardListAST, inAttribute_mMayImplementDeinit COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_structureDeclarationAST::getter_mStructureTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_structureDeclarationAST * p = (const cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    result = p->mProperty_mStructureTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_structureDeclarationAST::getter_mStructureTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStructureTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_structureDeclarationAST::getter_mPLMTypeSpecificName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_structureDeclarationAST * p = (const cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    result = p->mProperty_mPLMTypeSpecificName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_structureDeclarationAST::getter_mPLMTypeSpecificName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPLMTypeSpecificName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_structureDeclarationAST::getter_mLLVMBaseTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_structureDeclarationAST * p = (const cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    result = p->mProperty_mLLVMBaseTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_structureDeclarationAST::getter_mLLVMBaseTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLLVMBaseTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_structureDeclarationAST::getter_mAttributeListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_structureDeclarationAST * p = (const cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    result = p->mProperty_mAttributeListAST ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_structureDeclarationAST::getter_mAttributeListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAttributeListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_structureDeclarationAST::getter_mGenerateAssignmentRoutine (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_structureDeclarationAST * p = (const cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    result = p->mProperty_mGenerateAssignmentRoutine ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_structureDeclarationAST::getter_mGenerateAssignmentRoutine (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGenerateAssignmentRoutine ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structurePropertyListAST GALGAS_structureDeclarationAST::getter_mStructurePropertyListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_structurePropertyListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_structureDeclarationAST * p = (const cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    result = p->mProperty_mStructurePropertyListAST ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structurePropertyListAST cPtr_structureDeclarationAST::getter_mStructurePropertyListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStructurePropertyListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionDeclarationListAST GALGAS_structureDeclarationAST::getter_mFunctionDeclarationListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_functionDeclarationListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_structureDeclarationAST * p = (const cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    result = p->mProperty_mFunctionDeclarationListAST ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionDeclarationListAST cPtr_structureDeclarationAST::getter_mFunctionDeclarationListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionDeclarationListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_systemRoutineDeclarationListAST GALGAS_structureDeclarationAST::getter_mSystemRoutineListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_systemRoutineDeclarationListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_structureDeclarationAST * p = (const cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    result = p->mProperty_mSystemRoutineListAST ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_systemRoutineDeclarationListAST cPtr_structureDeclarationAST::getter_mSystemRoutineListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSystemRoutineListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardDeclarationListAST GALGAS_structureDeclarationAST::getter_mGuardListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_guardDeclarationListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_structureDeclarationAST * p = (const cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    result = p->mProperty_mGuardListAST ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardDeclarationListAST cPtr_structureDeclarationAST::getter_mGuardListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_structureDeclarationAST::getter_mMayImplementDeinit (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_structureDeclarationAST * p = (const cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    result = p->mProperty_mMayImplementDeinit ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_structureDeclarationAST::getter_mMayImplementDeinit (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMayImplementDeinit ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                  Pointer class for @structureDeclarationAST class                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_structureDeclarationAST::cPtr_structureDeclarationAST (const GALGAS_lstring & in_mStructureTypeName,
                                                            const GALGAS_lstring & in_mPLMTypeSpecificName,
                                                            const GALGAS_lstring & in_mLLVMBaseTypeName,
                                                            const GALGAS_lstringlist & in_mAttributeListAST,
                                                            const GALGAS_bool & in_mGenerateAssignmentRoutine,
                                                            const GALGAS_structurePropertyListAST & in_mStructurePropertyListAST,
                                                            const GALGAS_functionDeclarationListAST & in_mFunctionDeclarationListAST,
                                                            const GALGAS_systemRoutineDeclarationListAST & in_mSystemRoutineListAST,
                                                            const GALGAS_guardDeclarationListAST & in_mGuardListAST,
                                                            const GALGAS_bool & in_mMayImplementDeinit
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mStructureTypeName (in_mStructureTypeName),
mProperty_mPLMTypeSpecificName (in_mPLMTypeSpecificName),
mProperty_mLLVMBaseTypeName (in_mLLVMBaseTypeName),
mProperty_mAttributeListAST (in_mAttributeListAST),
mProperty_mGenerateAssignmentRoutine (in_mGenerateAssignmentRoutine),
mProperty_mStructurePropertyListAST (in_mStructurePropertyListAST),
mProperty_mFunctionDeclarationListAST (in_mFunctionDeclarationListAST),
mProperty_mSystemRoutineListAST (in_mSystemRoutineListAST),
mProperty_mGuardListAST (in_mGuardListAST),
mProperty_mMayImplementDeinit (in_mMayImplementDeinit) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_structureDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structureDeclarationAST ;
}

void cPtr_structureDeclarationAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@structureDeclarationAST:" ;
  mProperty_mStructureTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPLMTypeSpecificName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLLVMBaseTypeName.description (ioString, inIndentation+1) ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_structureDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_structureDeclarationAST (mProperty_mStructureTypeName, mProperty_mPLMTypeSpecificName, mProperty_mLLVMBaseTypeName, mProperty_mAttributeListAST, mProperty_mGenerateAssignmentRoutine, mProperty_mStructurePropertyListAST, mProperty_mFunctionDeclarationListAST, mProperty_mSystemRoutineListAST, mProperty_mGuardListAST, mProperty_mMayImplementDeinit COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @structureDeclarationAST type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structureDeclarationAST ("structureDeclarationAST",
                                                & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_structureDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structureDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_structureDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structureDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType::GALGAS_PLMType (void) :
mProperty_propertyMap (),
mProperty_classConstantMap (),
mProperty_constructorMap (),
mProperty_guardMap (),
mProperty_attributes (),
mProperty_plmTypeDescriptionName (),
mProperty_kind (),
mProperty_llvmBaseTypeName () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType::~ GALGAS_PLMType (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
mProperty_plmTypeDescriptionName (inOperand5),
mProperty_kind (inOperand6),
mProperty_llvmBaseTypeName (inOperand7) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_PLMType::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_PLMType (GALGAS_propertyMap::constructor_emptyMap (HERE),
                         GALGAS_classConstantMap::constructor_emptyMap (HERE),
                         GALGAS_constructorMap::constructor_emptyMap (HERE),
                         GALGAS_guardMapForContext::constructor_emptyMap (HERE),
                         GALGAS_PLMTypeAttributes::constructor_none (HERE),
                         GALGAS_string::constructor_default (HERE),
                         GALGAS_typeKind::constructor_void (HERE),
                         GALGAS_string::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    result = mProperty_plmTypeDescriptionName.objectCompare (inOperand.mProperty_plmTypeDescriptionName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_kind.objectCompare (inOperand.mProperty_kind) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_llvmBaseTypeName.objectCompare (inOperand.mProperty_llvmBaseTypeName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_PLMType::isValid (void) const {
  return mProperty_propertyMap.isValid () && mProperty_classConstantMap.isValid () && mProperty_constructorMap.isValid () && mProperty_guardMap.isValid () && mProperty_attributes.isValid () && mProperty_plmTypeDescriptionName.isValid () && mProperty_kind.isValid () && mProperty_llvmBaseTypeName.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_PLMType::drop (void) {
  mProperty_propertyMap.drop () ;
  mProperty_classConstantMap.drop () ;
  mProperty_constructorMap.drop () ;
  mProperty_guardMap.drop () ;
  mProperty_attributes.drop () ;
  mProperty_plmTypeDescriptionName.drop () ;
  mProperty_kind.drop () ;
  mProperty_llvmBaseTypeName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    mProperty_plmTypeDescriptionName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_kind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_llvmBaseTypeName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMap GALGAS_PLMType::getter_propertyMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_propertyMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classConstantMap GALGAS_PLMType::getter_classConstantMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_classConstantMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constructorMap GALGAS_PLMType::getter_constructorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_constructorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardMapForContext GALGAS_PLMType::getter_guardMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_guardMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMTypeAttributes GALGAS_PLMType::getter_attributes (UNUSED_LOCATION_ARGS) const {
  return mProperty_attributes ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_PLMType::getter_plmTypeDescriptionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_plmTypeDescriptionName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_PLMType::getter_kind (UNUSED_LOCATION_ARGS) const {
  return mProperty_kind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_PLMType::getter_llvmBaseTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_llvmBaseTypeName ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                    @PLMType type                                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_PLMType ("PLMType",
                                NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_PLMType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_PLMType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_PLMType::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_PLMType (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structurePropertyListAST_2D_element::GALGAS_structurePropertyListAST_2D_element (void) :
mProperty_mPropertyName (),
mProperty_mPropertyAttributeList (),
mProperty_mIsConstant (),
mProperty_mIsPublic (),
mProperty_mPropertyTypeName (),
mProperty_mInitialisation (),
mProperty_mIsSingletonObject () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structurePropertyListAST_2D_element::~ GALGAS_structurePropertyListAST_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_structurePropertyListAST_2D_element::isValid (void) const {
  return mProperty_mPropertyName.isValid () && mProperty_mPropertyAttributeList.isValid () && mProperty_mIsConstant.isValid () && mProperty_mIsPublic.isValid () && mProperty_mPropertyTypeName.isValid () && mProperty_mInitialisation.isValid () && mProperty_mIsSingletonObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_structurePropertyListAST_2D_element::drop (void) {
  mProperty_mPropertyName.drop () ;
  mProperty_mPropertyAttributeList.drop () ;
  mProperty_mIsConstant.drop () ;
  mProperty_mIsPublic.drop () ;
  mProperty_mPropertyTypeName.drop () ;
  mProperty_mInitialisation.drop () ;
  mProperty_mIsSingletonObject.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_structurePropertyListAST_2D_element::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyAttributeList GALGAS_structurePropertyListAST_2D_element::getter_mPropertyAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_structurePropertyListAST_2D_element::getter_mIsConstant (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsConstant ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_structurePropertyListAST_2D_element::getter_mIsPublic (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsPublic ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_structurePropertyListAST_2D_element::getter_mPropertyTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structurePropertyInitOptionalExpressionAST GALGAS_structurePropertyListAST_2D_element::getter_mInitialisation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInitialisation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_structurePropertyListAST_2D_element::getter_mIsSingletonObject (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsSingletonObject ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @structurePropertyListAST-element type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structurePropertyListAST_2D_element ("structurePropertyListAST-element",
                                                            NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_structurePropertyListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structurePropertyListAST_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_structurePropertyListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structurePropertyListAST_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_decoratedStructureDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_decoratedStructureDeclaration * p = (const cPtr_decoratedStructureDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_decoratedStructureDeclaration) ;
  if (kOperandEqual == result) {
    result = mProperty_mStructureTypeName.objectCompare (p->mProperty_mStructureTypeName) ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedStructureDeclaration::GALGAS_decoratedStructureDeclaration (void) :
GALGAS_abstractDecoratedDeclaration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedStructureDeclaration GALGAS_decoratedStructureDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_decoratedStructureDeclaration::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_functionDeclarationListAST::constructor_emptyList (HERE),
                                                                GALGAS_systemRoutineDeclarationListAST::constructor_emptyList (HERE),
                                                                GALGAS_guardDeclarationListAST::constructor_emptyList (HERE),
                                                                GALGAS_bool::constructor_default (HERE)
                                                                COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedStructureDeclaration::GALGAS_decoratedStructureDeclaration (const cPtr_decoratedStructureDeclaration * inSourcePtr) :
GALGAS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedStructureDeclaration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedStructureDeclaration GALGAS_decoratedStructureDeclaration::constructor_new (const GALGAS_lstring & inAttribute_mStructureTypeName,
                                                                                            const GALGAS_functionDeclarationListAST & inAttribute_mFunctionDeclarationListAST,
                                                                                            const GALGAS_systemRoutineDeclarationListAST & inAttribute_mSystemRoutineListAST,
                                                                                            const GALGAS_guardDeclarationListAST & inAttribute_mGuardListAST,
                                                                                            const GALGAS_bool & inAttribute_mMayImplementDeinit
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_decoratedStructureDeclaration result ;
  if (inAttribute_mStructureTypeName.isValid () && inAttribute_mFunctionDeclarationListAST.isValid () && inAttribute_mSystemRoutineListAST.isValid () && inAttribute_mGuardListAST.isValid () && inAttribute_mMayImplementDeinit.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_decoratedStructureDeclaration (inAttribute_mStructureTypeName, inAttribute_mFunctionDeclarationListAST, inAttribute_mSystemRoutineListAST, inAttribute_mGuardListAST, inAttribute_mMayImplementDeinit COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_decoratedStructureDeclaration::getter_mStructureTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedStructureDeclaration * p = (const cPtr_decoratedStructureDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedStructureDeclaration) ;
    result = p->mProperty_mStructureTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_decoratedStructureDeclaration::getter_mStructureTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStructureTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionDeclarationListAST GALGAS_decoratedStructureDeclaration::getter_mFunctionDeclarationListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_functionDeclarationListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedStructureDeclaration * p = (const cPtr_decoratedStructureDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedStructureDeclaration) ;
    result = p->mProperty_mFunctionDeclarationListAST ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionDeclarationListAST cPtr_decoratedStructureDeclaration::getter_mFunctionDeclarationListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionDeclarationListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_systemRoutineDeclarationListAST GALGAS_decoratedStructureDeclaration::getter_mSystemRoutineListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_systemRoutineDeclarationListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedStructureDeclaration * p = (const cPtr_decoratedStructureDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedStructureDeclaration) ;
    result = p->mProperty_mSystemRoutineListAST ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_systemRoutineDeclarationListAST cPtr_decoratedStructureDeclaration::getter_mSystemRoutineListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSystemRoutineListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardDeclarationListAST GALGAS_decoratedStructureDeclaration::getter_mGuardListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_guardDeclarationListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedStructureDeclaration * p = (const cPtr_decoratedStructureDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedStructureDeclaration) ;
    result = p->mProperty_mGuardListAST ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardDeclarationListAST cPtr_decoratedStructureDeclaration::getter_mGuardListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_decoratedStructureDeclaration::getter_mMayImplementDeinit (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedStructureDeclaration * p = (const cPtr_decoratedStructureDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedStructureDeclaration) ;
    result = p->mProperty_mMayImplementDeinit ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_decoratedStructureDeclaration::getter_mMayImplementDeinit (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMayImplementDeinit ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                               Pointer class for @decoratedStructureDeclaration class                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_decoratedStructureDeclaration::cPtr_decoratedStructureDeclaration (const GALGAS_lstring & in_mStructureTypeName,
                                                                        const GALGAS_functionDeclarationListAST & in_mFunctionDeclarationListAST,
                                                                        const GALGAS_systemRoutineDeclarationListAST & in_mSystemRoutineListAST,
                                                                        const GALGAS_guardDeclarationListAST & in_mGuardListAST,
                                                                        const GALGAS_bool & in_mMayImplementDeinit
                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (THERE),
mProperty_mStructureTypeName (in_mStructureTypeName),
mProperty_mFunctionDeclarationListAST (in_mFunctionDeclarationListAST),
mProperty_mSystemRoutineListAST (in_mSystemRoutineListAST),
mProperty_mGuardListAST (in_mGuardListAST),
mProperty_mMayImplementDeinit (in_mMayImplementDeinit) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_decoratedStructureDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedStructureDeclaration ;
}

void cPtr_decoratedStructureDeclaration::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@decoratedStructureDeclaration:" ;
  mProperty_mStructureTypeName.description (ioString, inIndentation+1) ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_decoratedStructureDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_decoratedStructureDeclaration (mProperty_mStructureTypeName, mProperty_mFunctionDeclarationListAST, mProperty_mSystemRoutineListAST, mProperty_mGuardListAST, mProperty_mMayImplementDeinit COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @decoratedStructureDeclaration type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedStructureDeclaration ("decoratedStructureDeclaration",
                                                      & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_decoratedStructureDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedStructureDeclaration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_decoratedStructureDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedStructureDeclaration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionDeclarationListAST_2D_element::GALGAS_functionDeclarationListAST_2D_element (void) :
mProperty_mMode (),
mProperty_mPublicFunction (),
mProperty_mFunctionName (),
mProperty_mFunctionAttributeList (),
mProperty_mFunctionFormalArgumentList (),
mProperty_mFunctionReturnTypeName (),
mProperty_mFunctionInstructionList (),
mProperty_mEndOfFunctionDeclaration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionDeclarationListAST_2D_element::~ GALGAS_functionDeclarationListAST_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionDeclarationListAST_2D_element::GALGAS_functionDeclarationListAST_2D_element (const GALGAS_mode & inOperand0,
                                                                                            const GALGAS_bool & inOperand1,
                                                                                            const GALGAS_lstring & inOperand2,
                                                                                            const GALGAS_lstringlist & inOperand3,
                                                                                            const GALGAS_routineFormalArgumentListAST & inOperand4,
                                                                                            const GALGAS_lstring & inOperand5,
                                                                                            const GALGAS_instructionListAST & inOperand6,
                                                                                            const GALGAS_location & inOperand7) :
mProperty_mMode (inOperand0),
mProperty_mPublicFunction (inOperand1),
mProperty_mFunctionName (inOperand2),
mProperty_mFunctionAttributeList (inOperand3),
mProperty_mFunctionFormalArgumentList (inOperand4),
mProperty_mFunctionReturnTypeName (inOperand5),
mProperty_mFunctionInstructionList (inOperand6),
mProperty_mEndOfFunctionDeclaration (inOperand7) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionDeclarationListAST_2D_element GALGAS_functionDeclarationListAST_2D_element::constructor_new (const GALGAS_mode & inOperand0,
                                                                                                            const GALGAS_bool & inOperand1,
                                                                                                            const GALGAS_lstring & inOperand2,
                                                                                                            const GALGAS_lstringlist & inOperand3,
                                                                                                            const GALGAS_routineFormalArgumentListAST & inOperand4,
                                                                                                            const GALGAS_lstring & inOperand5,
                                                                                                            const GALGAS_instructionListAST & inOperand6,
                                                                                                            const GALGAS_location & inOperand7 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_functionDeclarationListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_functionDeclarationListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_functionDeclarationListAST_2D_element::objectCompare (const GALGAS_functionDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mMode.objectCompare (inOperand.mProperty_mMode) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPublicFunction.objectCompare (inOperand.mProperty_mPublicFunction) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFunctionName.objectCompare (inOperand.mProperty_mFunctionName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFunctionAttributeList.objectCompare (inOperand.mProperty_mFunctionAttributeList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFunctionFormalArgumentList.objectCompare (inOperand.mProperty_mFunctionFormalArgumentList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFunctionReturnTypeName.objectCompare (inOperand.mProperty_mFunctionReturnTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFunctionInstructionList.objectCompare (inOperand.mProperty_mFunctionInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfFunctionDeclaration.objectCompare (inOperand.mProperty_mEndOfFunctionDeclaration) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_functionDeclarationListAST_2D_element::isValid (void) const {
  return mProperty_mMode.isValid () && mProperty_mPublicFunction.isValid () && mProperty_mFunctionName.isValid () && mProperty_mFunctionAttributeList.isValid () && mProperty_mFunctionFormalArgumentList.isValid () && mProperty_mFunctionReturnTypeName.isValid () && mProperty_mFunctionInstructionList.isValid () && mProperty_mEndOfFunctionDeclaration.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_functionDeclarationListAST_2D_element::drop (void) {
  mProperty_mMode.drop () ;
  mProperty_mPublicFunction.drop () ;
  mProperty_mFunctionName.drop () ;
  mProperty_mFunctionAttributeList.drop () ;
  mProperty_mFunctionFormalArgumentList.drop () ;
  mProperty_mFunctionReturnTypeName.drop () ;
  mProperty_mFunctionInstructionList.drop () ;
  mProperty_mEndOfFunctionDeclaration.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_functionDeclarationListAST_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @functionDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPublicFunction.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFunctionName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFunctionAttributeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFunctionFormalArgumentList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFunctionReturnTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFunctionInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfFunctionDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mode GALGAS_functionDeclarationListAST_2D_element::getter_mMode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMode ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_functionDeclarationListAST_2D_element::getter_mPublicFunction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPublicFunction ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_functionDeclarationListAST_2D_element::getter_mFunctionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_functionDeclarationListAST_2D_element::getter_mFunctionAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListAST GALGAS_functionDeclarationListAST_2D_element::getter_mFunctionFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionFormalArgumentList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_functionDeclarationListAST_2D_element::getter_mFunctionReturnTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionReturnTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListAST GALGAS_functionDeclarationListAST_2D_element::getter_mFunctionInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_functionDeclarationListAST_2D_element::getter_mEndOfFunctionDeclaration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfFunctionDeclaration ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @functionDeclarationListAST-element type                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionDeclarationListAST_2D_element ("functionDeclarationListAST-element",
                                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_functionDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionDeclarationListAST_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_functionDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionDeclarationListAST_2D_element GALGAS_functionDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_functionDeclarationListAST_2D_element result ;
  const GALGAS_functionDeclarationListAST_2D_element * p = (const GALGAS_functionDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_syncDeclarationAST::GALGAS_syncDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_syncDeclarationAST GALGAS_syncDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_syncDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_structurePropertyListAST::constructor_emptyList (HERE),
                                                     GALGAS_functionDeclarationListAST::constructor_emptyList (HERE),
                                                     GALGAS_systemRoutineDeclarationListAST::constructor_emptyList (HERE),
                                                     GALGAS_guardDeclarationListAST::constructor_emptyList (HERE)
                                                     COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_syncDeclarationAST::GALGAS_syncDeclarationAST (const cPtr_syncDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syncDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_syncDeclarationAST::getter_mSyncToolName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_syncDeclarationAST * p = (const cPtr_syncDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncDeclarationAST) ;
    result = p->mProperty_mSyncToolName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_syncDeclarationAST::getter_mSyncToolName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSyncToolName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structurePropertyListAST GALGAS_syncDeclarationAST::getter_mStructurePropertyListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_structurePropertyListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_syncDeclarationAST * p = (const cPtr_syncDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncDeclarationAST) ;
    result = p->mProperty_mStructurePropertyListAST ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structurePropertyListAST cPtr_syncDeclarationAST::getter_mStructurePropertyListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStructurePropertyListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionDeclarationListAST GALGAS_syncDeclarationAST::getter_mFunctionDeclarationListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_functionDeclarationListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_syncDeclarationAST * p = (const cPtr_syncDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncDeclarationAST) ;
    result = p->mProperty_mFunctionDeclarationListAST ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionDeclarationListAST cPtr_syncDeclarationAST::getter_mFunctionDeclarationListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionDeclarationListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_systemRoutineDeclarationListAST GALGAS_syncDeclarationAST::getter_mSystemRoutineListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_systemRoutineDeclarationListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_syncDeclarationAST * p = (const cPtr_syncDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncDeclarationAST) ;
    result = p->mProperty_mSystemRoutineListAST ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_systemRoutineDeclarationListAST cPtr_syncDeclarationAST::getter_mSystemRoutineListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSystemRoutineListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardDeclarationListAST GALGAS_syncDeclarationAST::getter_mGuardListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_guardDeclarationListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_syncDeclarationAST * p = (const cPtr_syncDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncDeclarationAST) ;
    result = p->mProperty_mGuardListAST ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardDeclarationListAST cPtr_syncDeclarationAST::getter_mGuardListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                     Pointer class for @syncDeclarationAST class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_syncDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_syncDeclarationAST (mProperty_mSyncToolName, mProperty_mStructurePropertyListAST, mProperty_mFunctionDeclarationListAST, mProperty_mSystemRoutineListAST, mProperty_mGuardListAST COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @syncDeclarationAST type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syncDeclarationAST ("syncDeclarationAST",
                                           & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_syncDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_syncDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syncDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*



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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorDescription::GALGAS_infixOperatorDescription (void) :
AC_GALGAS_class (false) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorDescription::GALGAS_infixOperatorDescription (const cPtr_infixOperatorDescription * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_infixOperatorDescription) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_llvmBinaryOperation GALGAS_infixOperatorDescription::getter_mOperator (UNUSED_LOCATION_ARGS) const {
  GALGAS_llvmBinaryOperation result ;
  if (NULL != mObjectPtr) {
    const cPtr_infixOperatorDescription * p = (const cPtr_infixOperatorDescription *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorDescription) ;
    result = p->mProperty_mOperator ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_llvmBinaryOperation cPtr_infixOperatorDescription::getter_mOperator (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperator ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                  Pointer class for @infixOperatorDescription class                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_infixOperatorDescription::cPtr_infixOperatorDescription (const GALGAS_llvmBinaryOperation & in_mOperator
                                                              COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mProperty_mOperator (in_mOperator) {
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @infixOperatorDescription type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_infixOperatorDescription ("infixOperatorDescription",
                                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_infixOperatorDescription::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixOperatorDescription ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_infixOperatorDescription::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_infixOperatorDescription (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_integerObject_5F_literal_5F_infixOperator::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_integerObject_5F_literal_5F_infixOperator * p = (const cPtr_integerObject_5F_literal_5F_infixOperator *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_integerObject_5F_literal_5F_infixOperator) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperator.objectCompare (p->mProperty_mOperator) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_integerObject_5F_literal_5F_infixOperator::GALGAS_integerObject_5F_literal_5F_infixOperator (void) :
GALGAS_infixOperatorDescription () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_integerObject_5F_literal_5F_infixOperator::GALGAS_integerObject_5F_literal_5F_infixOperator (const cPtr_integerObject_5F_literal_5F_infixOperator * inSourcePtr) :
GALGAS_infixOperatorDescription (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_integerObject_5F_literal_5F_infixOperator) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_integerObject_5F_literal_5F_infixOperator GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (const GALGAS_llvmBinaryOperation & inAttribute_mOperator
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_integerObject_5F_literal_5F_infixOperator result ;
  if (inAttribute_mOperator.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_integerObject_5F_literal_5F_infixOperator (inAttribute_mOperator COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                            Pointer class for @integerObject_literal_infixOperator class                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_integerObject_5F_literal_5F_infixOperator::cPtr_integerObject_5F_literal_5F_infixOperator (const GALGAS_llvmBinaryOperation & in_mOperator
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_infixOperatorDescription (in_mOperator COMMA_THERE) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_integerObject_5F_literal_5F_infixOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerObject_5F_literal_5F_infixOperator ;
}

void cPtr_integerObject_5F_literal_5F_infixOperator::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "[@integerObject_literal_infixOperator:" ;
  mProperty_mOperator.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_integerObject_5F_literal_5F_infixOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_integerObject_5F_literal_5F_infixOperator (mProperty_mOperator COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @integerObject_literal_infixOperator type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_integerObject_5F_literal_5F_infixOperator ("integerObject_literal_infixOperator",
                                                                  & kTypeDescriptor_GALGAS_infixOperatorDescription) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_integerObject_5F_literal_5F_infixOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerObject_5F_literal_5F_infixOperator ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_integerObject_5F_literal_5F_infixOperator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_integerObject_5F_literal_5F_infixOperator (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_literal_5F_integerObject_5F_infixOperator::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literal_5F_integerObject_5F_infixOperator * p = (const cPtr_literal_5F_integerObject_5F_infixOperator *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literal_5F_integerObject_5F_infixOperator) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperator.objectCompare (p->mProperty_mOperator) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_literal_5F_integerObject_5F_infixOperator::GALGAS_literal_5F_integerObject_5F_infixOperator (void) :
GALGAS_infixOperatorDescription () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_literal_5F_integerObject_5F_infixOperator::GALGAS_literal_5F_integerObject_5F_infixOperator (const cPtr_literal_5F_integerObject_5F_infixOperator * inSourcePtr) :
GALGAS_infixOperatorDescription (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literal_5F_integerObject_5F_infixOperator) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_literal_5F_integerObject_5F_infixOperator GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (const GALGAS_llvmBinaryOperation & inAttribute_mOperator
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_literal_5F_integerObject_5F_infixOperator result ;
  if (inAttribute_mOperator.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literal_5F_integerObject_5F_infixOperator (inAttribute_mOperator COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                            Pointer class for @literal_integerObject_infixOperator class                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_literal_5F_integerObject_5F_infixOperator::cPtr_literal_5F_integerObject_5F_infixOperator (const GALGAS_llvmBinaryOperation & in_mOperator
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_infixOperatorDescription (in_mOperator COMMA_THERE) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_literal_5F_integerObject_5F_infixOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literal_5F_integerObject_5F_infixOperator ;
}

void cPtr_literal_5F_integerObject_5F_infixOperator::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "[@literal_integerObject_infixOperator:" ;
  mProperty_mOperator.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_literal_5F_integerObject_5F_infixOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literal_5F_integerObject_5F_infixOperator (mProperty_mOperator COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @literal_integerObject_infixOperator type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literal_5F_integerObject_5F_infixOperator ("literal_integerObject_infixOperator",
                                                                  & kTypeDescriptor_GALGAS_infixOperatorDescription) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_literal_5F_integerObject_5F_infixOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literal_5F_integerObject_5F_infixOperator ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_literal_5F_integerObject_5F_infixOperator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literal_5F_integerObject_5F_infixOperator (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_literal_5F_literal_5F_integerInfixOperation::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literal_5F_literal_5F_integerInfixOperation * p = (const cPtr_literal_5F_literal_5F_integerInfixOperation *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literal_5F_literal_5F_integerInfixOperation) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperator.objectCompare (p->mProperty_mOperator) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_literal_5F_literal_5F_integerInfixOperation::GALGAS_literal_5F_literal_5F_integerInfixOperation (void) :
GALGAS_infixOperatorDescription () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_literal_5F_literal_5F_integerInfixOperation::GALGAS_literal_5F_literal_5F_integerInfixOperation (const cPtr_literal_5F_literal_5F_integerInfixOperation * inSourcePtr) :
GALGAS_infixOperatorDescription (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literal_5F_literal_5F_integerInfixOperation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_literal_5F_literal_5F_integerInfixOperation GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (const GALGAS_llvmBinaryOperation & inAttribute_mOperator
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_literal_5F_literal_5F_integerInfixOperation result ;
  if (inAttribute_mOperator.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literal_5F_literal_5F_integerInfixOperation (inAttribute_mOperator COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                           Pointer class for @literal_literal_integerInfixOperation class                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_literal_5F_literal_5F_integerInfixOperation::cPtr_literal_5F_literal_5F_integerInfixOperation (const GALGAS_llvmBinaryOperation & in_mOperator
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_infixOperatorDescription (in_mOperator COMMA_THERE) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_literal_5F_literal_5F_integerInfixOperation::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literal_5F_literal_5F_integerInfixOperation ;
}

void cPtr_literal_5F_literal_5F_integerInfixOperation::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "[@literal_literal_integerInfixOperation:" ;
  mProperty_mOperator.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_literal_5F_literal_5F_integerInfixOperation::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literal_5F_literal_5F_integerInfixOperation (mProperty_mOperator COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @literal_literal_integerInfixOperation type                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literal_5F_literal_5F_integerInfixOperation ("literal_literal_integerInfixOperation",
                                                                    & kTypeDescriptor_GALGAS_infixOperatorDescription) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_literal_5F_literal_5F_integerInfixOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literal_5F_literal_5F_integerInfixOperation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_literal_5F_literal_5F_integerInfixOperation::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literal_5F_literal_5F_integerInfixOperation (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_typeOpaqueDeclarationAST::objectCompare (const GALGAS_typeOpaqueDeclarationAST & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeOpaqueDeclarationAST::GALGAS_typeOpaqueDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeOpaqueDeclarationAST::GALGAS_typeOpaqueDeclarationAST (const cPtr_typeOpaqueDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typeOpaqueDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_typeOpaqueDeclarationAST::getter_mOpaqueTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_typeOpaqueDeclarationAST * p = (const cPtr_typeOpaqueDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeOpaqueDeclarationAST) ;
    result = p->mProperty_mOpaqueTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_typeOpaqueDeclarationAST::getter_mOpaqueTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOpaqueTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST GALGAS_typeOpaqueDeclarationAST::getter_mSizeExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_typeOpaqueDeclarationAST * p = (const cPtr_typeOpaqueDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeOpaqueDeclarationAST) ;
    result = p->mProperty_mSizeExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST cPtr_typeOpaqueDeclarationAST::getter_mSizeExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSizeExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_typeOpaqueDeclarationAST::getter_mSizeExpressionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_typeOpaqueDeclarationAST * p = (const cPtr_typeOpaqueDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeOpaqueDeclarationAST) ;
    result = p->mProperty_mSizeExpressionLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_typeOpaqueDeclarationAST::getter_mSizeExpressionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSizeExpressionLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_typeOpaqueDeclarationAST::getter_mAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_typeOpaqueDeclarationAST * p = (const cPtr_typeOpaqueDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeOpaqueDeclarationAST) ;
    result = p->mProperty_mAttributeList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_typeOpaqueDeclarationAST::getter_mAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                  Pointer class for @typeOpaqueDeclarationAST class                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_typeOpaqueDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_typeOpaqueDeclarationAST (mProperty_mOpaqueTypeName, mProperty_mSizeExpression, mProperty_mSizeExpressionLocation, mProperty_mAttributeList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @typeOpaqueDeclarationAST type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeOpaqueDeclarationAST ("typeOpaqueDeclarationAST",
                                                 & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_typeOpaqueDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeOpaqueDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_typeOpaqueDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeOpaqueDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Extension method '@typeOpaqueDeclarationAST noteTypesInPrecedenceGraph'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_typeOpaqueDeclarationAST_noteTypesInPrecedenceGraph> gExtensionMethodTable_typeOpaqueDeclarationAST_noteTypesInPrecedenceGraph ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_noteTypesInPrecedenceGraph (const int32_t inClassIndex,
                                                      extensionMethodSignature_typeOpaqueDeclarationAST_noteTypesInPrecedenceGraph inMethod) {
  gExtensionMethodTable_typeOpaqueDeclarationAST_noteTypesInPrecedenceGraph.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_typeOpaqueDeclarationAST_noteTypesInPrecedenceGraph (const cPtr_typeOpaqueDeclarationAST * inObject,
                                                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeOpaqueDeclarationAST * object = inObject ;
  macroValidSharedObject (object, cPtr_typeOpaqueDeclarationAST) ;
  {
  ioArgument_ioGraph.setter_noteNode (object->mProperty_mOpaqueTypeName COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 50)) ;
  }
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mSizeExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 51)) ;
}
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_typeOpaqueDeclarationAST_noteTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_typeOpaqueDeclarationAST.mSlotID,
                                                   extensionMethod_typeOpaqueDeclarationAST_noteTypesInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_typeOpaqueDeclarationAST_noteTypesInPrecedenceGraph (void) {
  gExtensionMethodTable_typeOpaqueDeclarationAST_noteTypesInPrecedenceGraph.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_typeOpaqueDeclarationAST_noteTypesInPrecedenceGraph (defineExtensionMethod_typeOpaqueDeclarationAST_noteTypesInPrecedenceGraph,
                                                                                freeExtensionMethod_typeOpaqueDeclarationAST_noteTypesInPrecedenceGraph) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterDeclarationList_2D_element::GALGAS_controlRegisterDeclarationList_2D_element (void) :
mProperty_mRegisterArrayList (),
mProperty_mRegisterTypeName (),
mProperty_mRegisterBitSliceList (),
mProperty_mRegisterBitSliceListLocation () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterDeclarationList_2D_element::~ GALGAS_controlRegisterDeclarationList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterDeclarationList_2D_element::GALGAS_controlRegisterDeclarationList_2D_element (const GALGAS_controlRegisterNameListAST & inOperand0,
                                                                                                    const GALGAS_lstring & inOperand1,
                                                                                                    const GALGAS_controlRegisterBitSliceList & inOperand2,
                                                                                                    const GALGAS_location & inOperand3) :
mProperty_mRegisterArrayList (inOperand0),
mProperty_mRegisterTypeName (inOperand1),
mProperty_mRegisterBitSliceList (inOperand2),
mProperty_mRegisterBitSliceListLocation (inOperand3) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterDeclarationList_2D_element GALGAS_controlRegisterDeclarationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_controlRegisterDeclarationList_2D_element (GALGAS_controlRegisterNameListAST::constructor_emptyList (HERE),
                                                           GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_controlRegisterBitSliceList::constructor_emptyList (HERE),
                                                           GALGAS_location::constructor_nowhere (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_controlRegisterDeclarationList_2D_element::isValid (void) const {
  return mProperty_mRegisterArrayList.isValid () && mProperty_mRegisterTypeName.isValid () && mProperty_mRegisterBitSliceList.isValid () && mProperty_mRegisterBitSliceListLocation.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterDeclarationList_2D_element::drop (void) {
  mProperty_mRegisterArrayList.drop () ;
  mProperty_mRegisterTypeName.drop () ;
  mProperty_mRegisterBitSliceList.drop () ;
  mProperty_mRegisterBitSliceListLocation.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterNameListAST GALGAS_controlRegisterDeclarationList_2D_element::getter_mRegisterArrayList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterArrayList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_controlRegisterDeclarationList_2D_element::getter_mRegisterTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterBitSliceList GALGAS_controlRegisterDeclarationList_2D_element::getter_mRegisterBitSliceList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterBitSliceList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_controlRegisterDeclarationList_2D_element::getter_mRegisterBitSliceListLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterBitSliceListLocation ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    @controlRegisterDeclarationList-element type                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterDeclarationList_2D_element ("controlRegisterDeclarationList-element",
                                                                  NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_controlRegisterDeclarationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterDeclarationList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_controlRegisterDeclarationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterDeclarationList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedControlRegisterArrayGroupDeclaration::GALGAS_decoratedControlRegisterArrayGroupDeclaration (void) :
GALGAS_abstractDecoratedDeclaration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedControlRegisterArrayGroupDeclaration GALGAS_decoratedControlRegisterArrayGroupDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_decoratedControlRegisterArrayGroupDeclaration::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                                GALGAS_lbigintlist::constructor_emptyList (HERE)
                                                                                COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedControlRegisterArrayGroupDeclaration::GALGAS_decoratedControlRegisterArrayGroupDeclaration (const cPtr_decoratedControlRegisterArrayGroupDeclaration * inSourcePtr) :
GALGAS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedControlRegisterArrayGroupDeclaration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedControlRegisterArrayGroupDeclaration GALGAS_decoratedControlRegisterArrayGroupDeclaration::constructor_new (const GALGAS_lstring & inAttribute_mGroupName,
                                                                                                                            const GALGAS_lbigintlist & inAttribute_mBaseAddresses
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_decoratedControlRegisterArrayGroupDeclaration result ;
  if (inAttribute_mGroupName.isValid () && inAttribute_mBaseAddresses.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_decoratedControlRegisterArrayGroupDeclaration (inAttribute_mGroupName, inAttribute_mBaseAddresses COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_decoratedControlRegisterArrayGroupDeclaration::getter_mGroupName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedControlRegisterArrayGroupDeclaration * p = (const cPtr_decoratedControlRegisterArrayGroupDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedControlRegisterArrayGroupDeclaration) ;
    result = p->mProperty_mGroupName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_decoratedControlRegisterArrayGroupDeclaration::getter_mGroupName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGroupName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lbigintlist GALGAS_decoratedControlRegisterArrayGroupDeclaration::getter_mBaseAddresses (UNUSED_LOCATION_ARGS) const {
  GALGAS_lbigintlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedControlRegisterArrayGroupDeclaration * p = (const cPtr_decoratedControlRegisterArrayGroupDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedControlRegisterArrayGroupDeclaration) ;
    result = p->mProperty_mBaseAddresses ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lbigintlist cPtr_decoratedControlRegisterArrayGroupDeclaration::getter_mBaseAddresses (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBaseAddresses ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                       Pointer class for @decoratedControlRegisterArrayGroupDeclaration class                        *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_decoratedControlRegisterArrayGroupDeclaration::cPtr_decoratedControlRegisterArrayGroupDeclaration (const GALGAS_lstring & in_mGroupName,
                                                                                                        const GALGAS_lbigintlist & in_mBaseAddresses
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (THERE),
mProperty_mGroupName (in_mGroupName),
mProperty_mBaseAddresses (in_mBaseAddresses) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_decoratedControlRegisterArrayGroupDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_decoratedControlRegisterArrayGroupDeclaration (mProperty_mGroupName, mProperty_mBaseAddresses COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 @decoratedControlRegisterArrayGroupDeclaration type                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedControlRegisterArrayGroupDeclaration ("decoratedControlRegisterArrayGroupDeclaration",
                                                                      & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_decoratedControlRegisterArrayGroupDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedControlRegisterArrayGroupDeclaration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_decoratedControlRegisterArrayGroupDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedControlRegisterArrayGroupDeclaration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Extension method '@controlRegisterGroupArrayList generateLLVMcode'                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_generateLLVMcode (const GALGAS_controlRegisterGroupArrayList inObject,
                                       GALGAS_string & ioArgument_ioLLVMcode,
                                       const GALGAS_uint constinArgument_inPointerSize,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_controlRegisterGroupArrayList temp_0 = inObject ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, temp_0.getter_length (SOURCE_FILE ("declaration-control-register.galgas", 639)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Control Register Group Arraies"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 640)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 640)) ;
    GALGAS_string var_int_26077 = GALGAS_string ("i").add_operation (constinArgument_inPointerSize.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 641)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 641)) ;
    const GALGAS_controlRegisterGroupArrayList temp_2 = inObject ;
    cEnumerator_controlRegisterGroupArrayList enumerator_26141 (temp_2, kENUMERATION_UP) ;
    while (enumerator_26141.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(function_registerGroupAddressArrayLLVMname (enumerator_26141.current_mGroupName (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 643)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 643)).add_operation (GALGAS_string (" = private unnamed_addr constant ["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 643)).add_operation (enumerator_26141.current_mBaseAddresses (HERE).getter_length (SOURCE_FILE ("declaration-control-register.galgas", 644)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 644)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 644)).add_operation (GALGAS_string (" x "), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 644)).add_operation (var_int_26077, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 644)).add_operation (GALGAS_string ("] ["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 644)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 643)) ;
      cEnumerator_lbigintlist enumerator_26348 (enumerator_26141.current_mBaseAddresses (HERE), kENUMERATION_UP) ;
      while (enumerator_26348.hasCurrentObject ()) {
        ioArgument_ioLLVMcode.plusAssign_operation(var_int_26077.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 647)).add_operation (enumerator_26348.current_mValue (HERE).getter_bigint (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 647)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 647)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 647)) ;
        if (enumerator_26348.hasNextObject ()) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 649)) ;
        }
        enumerator_26348.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("] ; "), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 651)) ;
      cEnumerator_lbigintlist enumerator_26524 (enumerator_26141.current_mBaseAddresses (HERE), kENUMERATION_UP) ;
      while (enumerator_26524.hasCurrentObject ()) {
        ioArgument_ioLLVMcode.plusAssign_operation(enumerator_26524.current_mValue (HERE).getter_bigint (HERE).getter_hexString (SOURCE_FILE ("declaration-control-register.galgas", 654)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 654)) ;
        if (enumerator_26524.hasNextObject ()) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 656)) ;
        }
        enumerator_26524.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 658)) ;
      enumerator_26141.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 660)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalConstantDeclarationAST::GALGAS_globalConstantDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalConstantDeclarationAST::GALGAS_globalConstantDeclarationAST (const cPtr_globalConstantDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_globalConstantDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_globalConstantDeclarationAST::getter_mConstantName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_globalConstantDeclarationAST * p = (const cPtr_globalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_globalConstantDeclarationAST) ;
    result = p->mProperty_mConstantName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_globalConstantDeclarationAST::getter_mConstantName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConstantName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_globalConstantDeclarationAST::getter_mAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_globalConstantDeclarationAST * p = (const cPtr_globalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_globalConstantDeclarationAST) ;
    result = p->mProperty_mAttributeList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_globalConstantDeclarationAST::getter_mAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_globalConstantDeclarationAST::getter_mConstantTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_globalConstantDeclarationAST * p = (const cPtr_globalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_globalConstantDeclarationAST) ;
    result = p->mProperty_mConstantTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_globalConstantDeclarationAST::getter_mConstantTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConstantTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST GALGAS_globalConstantDeclarationAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_globalConstantDeclarationAST * p = (const cPtr_globalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_globalConstantDeclarationAST) ;
    result = p->mProperty_mSourceExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST cPtr_globalConstantDeclarationAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @globalConstantDeclarationAST class                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_globalConstantDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_globalConstantDeclarationAST (mProperty_mConstantName, mProperty_mAttributeList, mProperty_mConstantTypeName, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @globalConstantDeclarationAST type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalConstantDeclarationAST ("globalConstantDeclarationAST",
                                                     & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_globalConstantDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalConstantDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_globalConstantDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalConstantDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_syncToolInstanceDeclarationAST::GALGAS_syncToolInstanceDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_syncToolInstanceDeclarationAST::GALGAS_syncToolInstanceDeclarationAST (const cPtr_syncToolInstanceDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syncToolInstanceDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_syncToolInstanceDeclarationAST::getter_mSyncTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_syncToolInstanceDeclarationAST * p = (const cPtr_syncToolInstanceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncToolInstanceDeclarationAST) ;
    result = p->mProperty_mSyncTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_syncToolInstanceDeclarationAST::getter_mSyncTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSyncTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_syncToolInstanceDeclarationAST::getter_mSyncInstanceName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_syncToolInstanceDeclarationAST * p = (const cPtr_syncToolInstanceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncToolInstanceDeclarationAST) ;
    result = p->mProperty_mSyncInstanceName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_syncToolInstanceDeclarationAST::getter_mSyncInstanceName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSyncInstanceName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST GALGAS_syncToolInstanceDeclarationAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_syncToolInstanceDeclarationAST * p = (const cPtr_syncToolInstanceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncToolInstanceDeclarationAST) ;
    result = p->mProperty_mSourceExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST cPtr_syncToolInstanceDeclarationAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                               Pointer class for @syncToolInstanceDeclarationAST class                               *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_syncToolInstanceDeclarationAST::cPtr_syncToolInstanceDeclarationAST (const GALGAS_lstring & in_mSyncTypeName,
                                                                          const GALGAS_lstring & in_mSyncInstanceName,
                                                                          const GALGAS_expressionAST & in_mSourceExpression
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mSyncTypeName (in_mSyncTypeName),
mProperty_mSyncInstanceName (in_mSyncInstanceName),
mProperty_mSourceExpression (in_mSourceExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_syncToolInstanceDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_syncToolInstanceDeclarationAST (mProperty_mSyncTypeName, mProperty_mSyncInstanceName, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @syncToolInstanceDeclarationAST type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST ("syncToolInstanceDeclarationAST",
                                                       & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_syncToolInstanceDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_syncToolInstanceDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syncToolInstanceDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedSyncInstance::GALGAS_decoratedSyncInstance (void) :
GALGAS_abstractDecoratedDeclaration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedSyncInstance::GALGAS_decoratedSyncInstance (const cPtr_decoratedSyncInstance * inSourcePtr) :
GALGAS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedSyncInstance) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedSyncInstance GALGAS_decoratedSyncInstance::constructor_new (const GALGAS_lstring & inAttribute_mSyncInstanceName,
                                                                            const GALGAS_objectIR & inAttribute_mExpressionGeneratedCode
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_decoratedSyncInstance result ;
  if (inAttribute_mSyncInstanceName.isValid () && inAttribute_mExpressionGeneratedCode.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_decoratedSyncInstance (inAttribute_mSyncInstanceName, inAttribute_mExpressionGeneratedCode COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_decoratedSyncInstance::getter_mSyncInstanceName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedSyncInstance * p = (const cPtr_decoratedSyncInstance *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedSyncInstance) ;
    result = p->mProperty_mSyncInstanceName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_decoratedSyncInstance::getter_mSyncInstanceName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSyncInstanceName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_decoratedSyncInstance::getter_mExpressionGeneratedCode (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedSyncInstance * p = (const cPtr_decoratedSyncInstance *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedSyncInstance) ;
    result = p->mProperty_mExpressionGeneratedCode ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR cPtr_decoratedSyncInstance::getter_mExpressionGeneratedCode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpressionGeneratedCode ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @decoratedSyncInstance class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_decoratedSyncInstance::cPtr_decoratedSyncInstance (const GALGAS_lstring & in_mSyncInstanceName,
                                                        const GALGAS_objectIR & in_mExpressionGeneratedCode
                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (THERE),
mProperty_mSyncInstanceName (in_mSyncInstanceName),
mProperty_mExpressionGeneratedCode (in_mExpressionGeneratedCode) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_decoratedSyncInstance::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_decoratedSyncInstance (mProperty_mSyncInstanceName, mProperty_mExpressionGeneratedCode COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @decoratedSyncInstance type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedSyncInstance ("decoratedSyncInstance",
                                              & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_decoratedSyncInstance::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedSyncInstance ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_decoratedSyncInstance::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedSyncInstance (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalSyncInstanceMapIR_2D_element::GALGAS_globalSyncInstanceMapIR_2D_element (void) :
mProperty_lkey (),
mProperty_mInitialValue () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalSyncInstanceMapIR_2D_element::~ GALGAS_globalSyncInstanceMapIR_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalSyncInstanceMapIR_2D_element::GALGAS_globalSyncInstanceMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_objectIR & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mInitialValue (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalSyncInstanceMapIR_2D_element GALGAS_globalSyncInstanceMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_objectIR & inOperand1 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_globalSyncInstanceMapIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_globalSyncInstanceMapIR_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_globalSyncInstanceMapIR_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInitialValue.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalSyncInstanceMapIR_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mInitialValue.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_globalSyncInstanceMapIR_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_globalSyncInstanceMapIR_2D_element::getter_mInitialValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInitialValue ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @globalSyncInstanceMapIR-element type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalSyncInstanceMapIR_2D_element ("globalSyncInstanceMapIR-element",
                                                           NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_globalSyncInstanceMapIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalSyncInstanceMapIR_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_globalSyncInstanceMapIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalSyncInstanceMapIR_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverDeclarationAST::GALGAS_driverDeclarationAST (void) :
mProperty_mDriverName (),
mProperty_mDriverDependanceList (),
mProperty_mDriverPropertyListAST (),
mProperty_mDriverFunctionDeclarationListAST (),
mProperty_mDriverSystemRoutineListAST (),
mProperty_mDriverGuardListAST (),
mProperty_mBootLocation (),
mProperty_mBootInstructionList (),
mProperty_mBootEndLocation (),
mProperty_mStartupLocation (),
mProperty_mStartupInstructionList (),
mProperty_mStartupEndLocation () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverDeclarationAST::~ GALGAS_driverDeclarationAST (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverDeclarationAST::GALGAS_driverDeclarationAST (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_lstringlist & inOperand1,
                                                          const GALGAS_driverPropertyListAST & inOperand2,
                                                          const GALGAS_functionDeclarationListAST & inOperand3,
                                                          const GALGAS_systemRoutineDeclarationListAST & inOperand4,
                                                          const GALGAS_guardDeclarationListAST & inOperand5,
                                                          const GALGAS_location & inOperand6,
                                                          const GALGAS_instructionListAST & inOperand7,
                                                          const GALGAS_location & inOperand8,
                                                          const GALGAS_location & inOperand9,
                                                          const GALGAS_instructionListAST & inOperand10,
                                                          const GALGAS_location & inOperand11) :
mProperty_mDriverName (inOperand0),
mProperty_mDriverDependanceList (inOperand1),
mProperty_mDriverPropertyListAST (inOperand2),
mProperty_mDriverFunctionDeclarationListAST (inOperand3),
mProperty_mDriverSystemRoutineListAST (inOperand4),
mProperty_mDriverGuardListAST (inOperand5),
mProperty_mBootLocation (inOperand6),
mProperty_mBootInstructionList (inOperand7),
mProperty_mBootEndLocation (inOperand8),
mProperty_mStartupLocation (inOperand9),
mProperty_mStartupInstructionList (inOperand10),
mProperty_mStartupEndLocation (inOperand11) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverDeclarationAST GALGAS_driverDeclarationAST::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_driverDeclarationAST (GALGAS_lstring::constructor_default (HERE),
                                      GALGAS_lstringlist::constructor_emptyList (HERE),
                                      GALGAS_driverPropertyListAST::constructor_emptyList (HERE),
                                      GALGAS_functionDeclarationListAST::constructor_emptyList (HERE),
                                      GALGAS_systemRoutineDeclarationListAST::constructor_emptyList (HERE),
                                      GALGAS_guardDeclarationListAST::constructor_emptyList (HERE),
                                      GALGAS_location::constructor_nowhere (HERE),
                                      GALGAS_instructionListAST::constructor_emptyList (HERE),
                                      GALGAS_location::constructor_nowhere (HERE),
                                      GALGAS_location::constructor_nowhere (HERE),
                                      GALGAS_instructionListAST::constructor_emptyList (HERE),
                                      GALGAS_location::constructor_nowhere (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverDeclarationAST GALGAS_driverDeclarationAST::constructor_new (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_lstringlist & inOperand1,
                                                                          const GALGAS_driverPropertyListAST & inOperand2,
                                                                          const GALGAS_functionDeclarationListAST & inOperand3,
                                                                          const GALGAS_systemRoutineDeclarationListAST & inOperand4,
                                                                          const GALGAS_guardDeclarationListAST & inOperand5,
                                                                          const GALGAS_location & inOperand6,
                                                                          const GALGAS_instructionListAST & inOperand7,
                                                                          const GALGAS_location & inOperand8,
                                                                          const GALGAS_location & inOperand9,
                                                                          const GALGAS_instructionListAST & inOperand10,
                                                                          const GALGAS_location & inOperand11 
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_driverDeclarationAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid ()) {
    result = GALGAS_driverDeclarationAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_driverDeclarationAST::isValid (void) const {
  return mProperty_mDriverName.isValid () && mProperty_mDriverDependanceList.isValid () && mProperty_mDriverPropertyListAST.isValid () && mProperty_mDriverFunctionDeclarationListAST.isValid () && mProperty_mDriverSystemRoutineListAST.isValid () && mProperty_mDriverGuardListAST.isValid () && mProperty_mBootLocation.isValid () && mProperty_mBootInstructionList.isValid () && mProperty_mBootEndLocation.isValid () && mProperty_mStartupLocation.isValid () && mProperty_mStartupInstructionList.isValid () && mProperty_mStartupEndLocation.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverDeclarationAST::drop (void) {
  mProperty_mDriverName.drop () ;
  mProperty_mDriverDependanceList.drop () ;
  mProperty_mDriverPropertyListAST.drop () ;
  mProperty_mDriverFunctionDeclarationListAST.drop () ;
  mProperty_mDriverSystemRoutineListAST.drop () ;
  mProperty_mDriverGuardListAST.drop () ;
  mProperty_mBootLocation.drop () ;
  mProperty_mBootInstructionList.drop () ;
  mProperty_mBootEndLocation.drop () ;
  mProperty_mStartupLocation.drop () ;
  mProperty_mStartupInstructionList.drop () ;
  mProperty_mStartupEndLocation.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_driverDeclarationAST::getter_mDriverName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDriverName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_driverDeclarationAST::getter_mDriverDependanceList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDriverDependanceList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverPropertyListAST GALGAS_driverDeclarationAST::getter_mDriverPropertyListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDriverPropertyListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionDeclarationListAST GALGAS_driverDeclarationAST::getter_mDriverFunctionDeclarationListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDriverFunctionDeclarationListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_systemRoutineDeclarationListAST GALGAS_driverDeclarationAST::getter_mDriverSystemRoutineListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDriverSystemRoutineListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardDeclarationListAST GALGAS_driverDeclarationAST::getter_mDriverGuardListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDriverGuardListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_driverDeclarationAST::getter_mBootLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBootLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListAST GALGAS_driverDeclarationAST::getter_mBootInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBootInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_driverDeclarationAST::getter_mBootEndLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBootEndLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_driverDeclarationAST::getter_mStartupLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStartupLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListAST GALGAS_driverDeclarationAST::getter_mStartupInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStartupInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_driverDeclarationAST::getter_mStartupEndLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStartupEndLocation ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @driverDeclarationAST type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_driverDeclarationAST ("driverDeclarationAST",
                                             NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_driverDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_driverDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_driverDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_implementedDriverAST::GALGAS_implementedDriverAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_implementedDriverAST::GALGAS_implementedDriverAST (const cPtr_implementedDriverAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_implementedDriverAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_implementedDriverAST::getter_mDriverName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_implementedDriverAST * p = (const cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    result = p->mProperty_mDriverName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_implementedDriverAST::getter_mDriverName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDriverName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_implementedDriverAST::getter_mDriverDependanceList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_implementedDriverAST * p = (const cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    result = p->mProperty_mDriverDependanceList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_implementedDriverAST::getter_mDriverDependanceList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDriverDependanceList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_implementedDriverAST::getter_mIsInstancied (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_implementedDriverAST * p = (const cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    result = p->mProperty_mIsInstancied ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_implementedDriverAST::getter_mIsInstancied (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsInstancied ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_implementedDriverAST::getter_mBootLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_implementedDriverAST * p = (const cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    result = p->mProperty_mBootLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_implementedDriverAST::getter_mBootLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBootLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListAST GALGAS_implementedDriverAST::getter_mBootInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_implementedDriverAST * p = (const cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    result = p->mProperty_mBootInstructionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListAST cPtr_implementedDriverAST::getter_mBootInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBootInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_implementedDriverAST::getter_mBootEndLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_implementedDriverAST * p = (const cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    result = p->mProperty_mBootEndLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_implementedDriverAST::getter_mBootEndLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBootEndLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_implementedDriverAST::getter_mStartupLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_implementedDriverAST * p = (const cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    result = p->mProperty_mStartupLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_implementedDriverAST::getter_mStartupLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStartupLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListAST GALGAS_implementedDriverAST::getter_mStartupInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_implementedDriverAST * p = (const cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    result = p->mProperty_mStartupInstructionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListAST cPtr_implementedDriverAST::getter_mStartupInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStartupInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_implementedDriverAST::getter_mStartupEndLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_implementedDriverAST * p = (const cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    result = p->mProperty_mStartupEndLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_implementedDriverAST::getter_mStartupEndLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStartupEndLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @implementedDriverAST class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_implementedDriverAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_implementedDriverAST (mProperty_mDriverName, mProperty_mDriverDependanceList, mProperty_mIsInstancied, mProperty_mBootLocation, mProperty_mBootInstructionList, mProperty_mBootEndLocation, mProperty_mStartupLocation, mProperty_mStartupInstructionList, mProperty_mStartupEndLocation COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @implementedDriverAST type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_implementedDriverAST ("implementedDriverAST",
                                             & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_implementedDriverAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implementedDriverAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_implementedDriverAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_implementedDriverAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_decoratedRequiredDriver::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_decoratedRequiredDriver * p = (const cPtr_decoratedRequiredDriver *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_decoratedRequiredDriver) ;
  if (kOperandEqual == result) {
    result = mProperty_mDriverName.objectCompare (p->mProperty_mDriverName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedRequiredDriver::GALGAS_decoratedRequiredDriver (void) :
GALGAS_abstractDecoratedDeclaration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedRequiredDriver GALGAS_decoratedRequiredDriver::constructor_default (LOCATION_ARGS) {
  return GALGAS_decoratedRequiredDriver::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                          COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedRequiredDriver::GALGAS_decoratedRequiredDriver (const cPtr_decoratedRequiredDriver * inSourcePtr) :
GALGAS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedRequiredDriver) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedRequiredDriver GALGAS_decoratedRequiredDriver::constructor_new (const GALGAS_lstring & inAttribute_mDriverName
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_decoratedRequiredDriver result ;
  if (inAttribute_mDriverName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_decoratedRequiredDriver (inAttribute_mDriverName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_decoratedRequiredDriver::getter_mDriverName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedRequiredDriver * p = (const cPtr_decoratedRequiredDriver *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedRequiredDriver) ;
    result = p->mProperty_mDriverName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_decoratedRequiredDriver::getter_mDriverName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDriverName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                  Pointer class for @decoratedRequiredDriver class                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_decoratedRequiredDriver::cPtr_decoratedRequiredDriver (const GALGAS_lstring & in_mDriverName
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (THERE),
mProperty_mDriverName (in_mDriverName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_decoratedRequiredDriver::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedRequiredDriver ;
}

void cPtr_decoratedRequiredDriver::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@decoratedRequiredDriver:" ;
  mProperty_mDriverName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_decoratedRequiredDriver::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_decoratedRequiredDriver (mProperty_mDriverName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @decoratedRequiredDriver type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedRequiredDriver ("decoratedRequiredDriver",
                                                & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_decoratedRequiredDriver::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedRequiredDriver ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_decoratedRequiredDriver::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedRequiredDriver (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverListIR_2D_element::GALGAS_driverListIR_2D_element (void) :
mProperty_mDriverName (),
mProperty_mType (),
mProperty_mInitialValueList () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverListIR_2D_element::~ GALGAS_driverListIR_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverListIR_2D_element::GALGAS_driverListIR_2D_element (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_PLMType & inOperand1,
                                                                const GALGAS_operandIRList & inOperand2) :
mProperty_mDriverName (inOperand0),
mProperty_mType (inOperand1),
mProperty_mInitialValueList (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverListIR_2D_element GALGAS_driverListIR_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_driverListIR_2D_element (GALGAS_lstring::constructor_default (HERE),
                                         GALGAS_PLMType::constructor_default (HERE),
                                         GALGAS_operandIRList::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverListIR_2D_element GALGAS_driverListIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_PLMType & inOperand1,
                                                                                const GALGAS_operandIRList & inOperand2 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_driverListIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_driverListIR_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_driverListIR_2D_element::isValid (void) const {
  return mProperty_mDriverName.isValid () && mProperty_mType.isValid () && mProperty_mInitialValueList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverListIR_2D_element::drop (void) {
  mProperty_mDriverName.drop () ;
  mProperty_mType.drop () ;
  mProperty_mInitialValueList.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_driverListIR_2D_element::getter_mDriverName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDriverName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_driverListIR_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_operandIRList GALGAS_driverListIR_2D_element::getter_mInitialValueList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInitialValueList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @driverListIR-element type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_driverListIR_2D_element ("driverListIR-element",
                                                NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_driverListIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverListIR_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_driverListIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_driverListIR_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListAST::GALGAS_staticListAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListAST GALGAS_staticListAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_staticListAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                GALGAS_staticListPropertyListAST::constructor_emptyList (HERE),
                                                GALGAS_staticListValueListAST::constructor_emptyList (HERE)
                                                COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListAST::GALGAS_staticListAST (const cPtr_staticListAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_staticListAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_staticListAST::getter_mStaticListName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_staticListAST * p = (const cPtr_staticListAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListAST) ;
    result = p->mProperty_mStaticListName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_staticListAST::getter_mStaticListName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStaticListName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListPropertyListAST GALGAS_staticListAST::getter_mPropertyList (UNUSED_LOCATION_ARGS) const {
  GALGAS_staticListPropertyListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_staticListAST * p = (const cPtr_staticListAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListAST) ;
    result = p->mProperty_mPropertyList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListPropertyListAST cPtr_staticListAST::getter_mPropertyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListValueListAST GALGAS_staticListAST::getter_mValueList (UNUSED_LOCATION_ARGS) const {
  GALGAS_staticListValueListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_staticListAST * p = (const cPtr_staticListAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListAST) ;
    result = p->mProperty_mValueList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListValueListAST cPtr_staticListAST::getter_mValueList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValueList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                       Pointer class for @staticListAST class                                        *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_staticListAST::cPtr_staticListAST (const GALGAS_lstring & in_mStaticListName,
                                        const GALGAS_staticListPropertyListAST & in_mPropertyList,
                                        const GALGAS_staticListValueListAST & in_mValueList
                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mStaticListName (in_mStaticListName),
mProperty_mPropertyList (in_mPropertyList),
mProperty_mValueList (in_mValueList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_staticListAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_staticListAST (mProperty_mStaticListName, mProperty_mPropertyList, mProperty_mValueList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                 @staticListAST type                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticListAST ("staticListAST",
                                      & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_staticListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_staticListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticListAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedStaticList::GALGAS_decoratedStaticList (void) :
GALGAS_abstractDecoratedDeclaration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedStaticList GALGAS_decoratedStaticList::constructor_default (LOCATION_ARGS) {
  return GALGAS_decoratedStaticList::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_staticListValueListAST::constructor_emptyList (HERE)
                                                      COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedStaticList::GALGAS_decoratedStaticList (const cPtr_decoratedStaticList * inSourcePtr) :
GALGAS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedStaticList) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedStaticList GALGAS_decoratedStaticList::constructor_new (const GALGAS_lstring & inAttribute_mStaticListName,
                                                                        const GALGAS_staticListValueListAST & inAttribute_mValueList
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_decoratedStaticList result ;
  if (inAttribute_mStaticListName.isValid () && inAttribute_mValueList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_decoratedStaticList (inAttribute_mStaticListName, inAttribute_mValueList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_decoratedStaticList::getter_mStaticListName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedStaticList * p = (const cPtr_decoratedStaticList *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedStaticList) ;
    result = p->mProperty_mStaticListName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_decoratedStaticList::getter_mStaticListName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStaticListName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListValueListAST GALGAS_decoratedStaticList::getter_mValueList (UNUSED_LOCATION_ARGS) const {
  GALGAS_staticListValueListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedStaticList * p = (const cPtr_decoratedStaticList *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedStaticList) ;
    result = p->mProperty_mValueList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListValueListAST cPtr_decoratedStaticList::getter_mValueList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValueList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @decoratedStaticList class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_decoratedStaticList::cPtr_decoratedStaticList (const GALGAS_lstring & in_mStaticListName,
                                                    const GALGAS_staticListValueListAST & in_mValueList
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (THERE),
mProperty_mStaticListName (in_mStaticListName),
mProperty_mValueList (in_mValueList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_decoratedStaticList::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_decoratedStaticList (mProperty_mStaticListName, mProperty_mValueList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @decoratedStaticList type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedStaticList ("decoratedStaticList",
                                            & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_decoratedStaticList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedStaticList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_decoratedStaticList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedStaticList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedTaskList_2D_element::GALGAS_decoratedTaskList_2D_element (void) :
mProperty_mTaskName (),
mProperty_mStackSize (),
mProperty_mVarList (),
mProperty_mTaskProcList (),
mProperty_mTaskSetupListAST (),
mProperty_mTaskActivateListAST (),
mProperty_mTaskDeactivateListAST (),
mProperty_mGuardedCommandList (),
mProperty_mEndOfTaskDeclaration (),
mProperty_mActivate () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedTaskList_2D_element::~ GALGAS_decoratedTaskList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedTaskList_2D_element::GALGAS_decoratedTaskList_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_lbigint & inOperand1,
                                                                          const GALGAS_structurePropertyListAST & inOperand2,
                                                                          const GALGAS_functionDeclarationListAST & inOperand3,
                                                                          const GALGAS_taskSetupListAST & inOperand4,
                                                                          const GALGAS_taskSetupListAST & inOperand5,
                                                                          const GALGAS_taskSetupListAST & inOperand6,
                                                                          const GALGAS_syncInstructionBranchListAST & inOperand7,
                                                                          const GALGAS_location & inOperand8,
                                                                          const GALGAS_bool & inOperand9) :
mProperty_mTaskName (inOperand0),
mProperty_mStackSize (inOperand1),
mProperty_mVarList (inOperand2),
mProperty_mTaskProcList (inOperand3),
mProperty_mTaskSetupListAST (inOperand4),
mProperty_mTaskActivateListAST (inOperand5),
mProperty_mTaskDeactivateListAST (inOperand6),
mProperty_mGuardedCommandList (inOperand7),
mProperty_mEndOfTaskDeclaration (inOperand8),
mProperty_mActivate (inOperand9) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedTaskList_2D_element GALGAS_decoratedTaskList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_decoratedTaskList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_lbigint::constructor_default (HERE),
                                              GALGAS_structurePropertyListAST::constructor_emptyList (HERE),
                                              GALGAS_functionDeclarationListAST::constructor_emptyList (HERE),
                                              GALGAS_taskSetupListAST::constructor_emptyList (HERE),
                                              GALGAS_taskSetupListAST::constructor_emptyList (HERE),
                                              GALGAS_taskSetupListAST::constructor_emptyList (HERE),
                                              GALGAS_syncInstructionBranchListAST::constructor_emptyList (HERE),
                                              GALGAS_location::constructor_nowhere (HERE),
                                              GALGAS_bool::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedTaskList_2D_element GALGAS_decoratedTaskList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_lbigint & inOperand1,
                                                                                          const GALGAS_structurePropertyListAST & inOperand2,
                                                                                          const GALGAS_functionDeclarationListAST & inOperand3,
                                                                                          const GALGAS_taskSetupListAST & inOperand4,
                                                                                          const GALGAS_taskSetupListAST & inOperand5,
                                                                                          const GALGAS_taskSetupListAST & inOperand6,
                                                                                          const GALGAS_syncInstructionBranchListAST & inOperand7,
                                                                                          const GALGAS_location & inOperand8,
                                                                                          const GALGAS_bool & inOperand9 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_decoratedTaskList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid ()) {
    result = GALGAS_decoratedTaskList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_decoratedTaskList_2D_element::objectCompare (const GALGAS_decoratedTaskList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTaskName.objectCompare (inOperand.mProperty_mTaskName) ;
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
    result = mProperty_mTaskActivateListAST.objectCompare (inOperand.mProperty_mTaskActivateListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTaskDeactivateListAST.objectCompare (inOperand.mProperty_mTaskDeactivateListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGuardedCommandList.objectCompare (inOperand.mProperty_mGuardedCommandList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfTaskDeclaration.objectCompare (inOperand.mProperty_mEndOfTaskDeclaration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mActivate.objectCompare (inOperand.mProperty_mActivate) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_decoratedTaskList_2D_element::isValid (void) const {
  return mProperty_mTaskName.isValid () && mProperty_mStackSize.isValid () && mProperty_mVarList.isValid () && mProperty_mTaskProcList.isValid () && mProperty_mTaskSetupListAST.isValid () && mProperty_mTaskActivateListAST.isValid () && mProperty_mTaskDeactivateListAST.isValid () && mProperty_mGuardedCommandList.isValid () && mProperty_mEndOfTaskDeclaration.isValid () && mProperty_mActivate.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedTaskList_2D_element::drop (void) {
  mProperty_mTaskName.drop () ;
  mProperty_mStackSize.drop () ;
  mProperty_mVarList.drop () ;
  mProperty_mTaskProcList.drop () ;
  mProperty_mTaskSetupListAST.drop () ;
  mProperty_mTaskActivateListAST.drop () ;
  mProperty_mTaskDeactivateListAST.drop () ;
  mProperty_mGuardedCommandList.drop () ;
  mProperty_mEndOfTaskDeclaration.drop () ;
  mProperty_mActivate.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedTaskList_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @decoratedTaskList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mTaskName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStackSize.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mVarList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTaskProcList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTaskSetupListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTaskActivateListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTaskDeactivateListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGuardedCommandList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfTaskDeclaration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mActivate.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_decoratedTaskList_2D_element::getter_mTaskName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lbigint GALGAS_decoratedTaskList_2D_element::getter_mStackSize (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStackSize ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structurePropertyListAST GALGAS_decoratedTaskList_2D_element::getter_mVarList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mVarList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionDeclarationListAST GALGAS_decoratedTaskList_2D_element::getter_mTaskProcList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskProcList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskSetupListAST GALGAS_decoratedTaskList_2D_element::getter_mTaskSetupListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskSetupListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskSetupListAST GALGAS_decoratedTaskList_2D_element::getter_mTaskActivateListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskActivateListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskSetupListAST GALGAS_decoratedTaskList_2D_element::getter_mTaskDeactivateListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskDeactivateListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_syncInstructionBranchListAST GALGAS_decoratedTaskList_2D_element::getter_mGuardedCommandList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardedCommandList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_decoratedTaskList_2D_element::getter_mEndOfTaskDeclaration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfTaskDeclaration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_decoratedTaskList_2D_element::getter_mActivate (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActivate ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @decoratedTaskList-element type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedTaskList_2D_element ("decoratedTaskList-element",
                                                     NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_decoratedTaskList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedTaskList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_decoratedTaskList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedTaskList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Extension method '@routineMapIR svcDeclarationGeneration'                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_svcDeclarationGeneration (const GALGAS_routineMapIR inObject,
                                               GALGAS_primitiveAndServiceIRlist & ioArgument_ioPrimitiveAndServiceList,
                                               GALGAS_sectionIRlist & ioArgument_ioSectionList,
                                               GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_routineMapIR temp_0 = inObject ;
  cEnumerator_routineMapIR enumerator_11028 (temp_0, kENUMERATION_UP) ;
  while (enumerator_11028.hasCurrentObject ()) {
    const enumGalgasBool test_1 = enumerator_11028.current (HERE).getter_mKind (HERE).getter_isFunction (SOURCE_FILE ("declaration-svc.galgas", 314)).operator_not (SOURCE_FILE ("declaration-svc.galgas", 314)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string var_svcCallName_11092 = function_llvmNameForSVCCall (enumerator_11028.current (HERE).getter_mRoutineNameForGeneration (HERE), enumerator_11028.current (HERE).getter_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 315)) ;
      GALGAS_string var_svcImplementationName_11189 = function_llvmNameForSVCImplementation (enumerator_11028.current (HERE).getter_mRoutineNameForGeneration (HERE), enumerator_11028.current (HERE).getter_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 316)) ;
      GALGAS_string var_prototype_11284 = function_llvmFunctionPrototype (extensionGetter_llvmTypeName (enumerator_11028.current (HERE).getter_mReturnType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 318)), var_svcCallName_11092, enumerator_11028.current (HERE).getter_mReceiverType (HERE), enumerator_11028.current (HERE).getter_mFormalArgumentListForGeneration (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 317)) ;
      ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.addAssign_operation (var_prototype_11284  COMMA_SOURCE_FILE ("declaration-svc.galgas", 323)) ;
      switch (enumerator_11028.current (HERE).getter_mKind (HERE).enumValue ()) {
      case GALGAS_routineKind::kNotBuilt:
        break ;
      case GALGAS_routineKind::kEnum_section:
        {
          ioArgument_ioSectionList.addAssign_operation (var_svcCallName_11092, var_svcImplementationName_11189, GALGAS_bool (true)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 326)) ;
        }
        break ;
      case GALGAS_routineKind::kEnum_primitive:
      case GALGAS_routineKind::kEnum_service:
        {
          ioArgument_ioPrimitiveAndServiceList.addAssign_operation (var_svcCallName_11092, var_svcImplementationName_11189, GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 328)) ;
        }
        break ;
      case GALGAS_routineKind::kEnum_function:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("declaration-svc.galgas", 330)), GALGAS_string ("INTERNAL ERROR"), fixItArray2  COMMA_SOURCE_FILE ("declaration-svc.galgas", 330)) ;
        }
        break ;
      }
    }
    enumerator_11028.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externProcedureDeclarationListAST_2D_element::GALGAS_externProcedureDeclarationListAST_2D_element (void) :
mProperty_mExternProcedureName (),
mProperty_mMode (),
mProperty_mAttributeList (),
mProperty_mProcFormalArgumentList (),
mProperty_mReturnTypeName (),
mProperty_mRoutineNameForGeneration (),
mProperty_mEndOfProcLocation () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externProcedureDeclarationListAST_2D_element::~ GALGAS_externProcedureDeclarationListAST_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_externProcedureDeclarationListAST_2D_element::isValid (void) const {
  return mProperty_mExternProcedureName.isValid () && mProperty_mMode.isValid () && mProperty_mAttributeList.isValid () && mProperty_mProcFormalArgumentList.isValid () && mProperty_mReturnTypeName.isValid () && mProperty_mRoutineNameForGeneration.isValid () && mProperty_mEndOfProcLocation.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externProcedureDeclarationListAST_2D_element::drop (void) {
  mProperty_mExternProcedureName.drop () ;
  mProperty_mMode.drop () ;
  mProperty_mAttributeList.drop () ;
  mProperty_mProcFormalArgumentList.drop () ;
  mProperty_mReturnTypeName.drop () ;
  mProperty_mRoutineNameForGeneration.drop () ;
  mProperty_mEndOfProcLocation.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_externProcedureDeclarationListAST_2D_element::getter_mExternProcedureName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternProcedureName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mode GALGAS_externProcedureDeclarationListAST_2D_element::getter_mMode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMode ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_externProcedureDeclarationListAST_2D_element::getter_mAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListAST GALGAS_externProcedureDeclarationListAST_2D_element::getter_mProcFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProcFormalArgumentList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_externProcedureDeclarationListAST_2D_element::getter_mReturnTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReturnTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_externProcedureDeclarationListAST_2D_element::getter_mRoutineNameForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineNameForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_externProcedureDeclarationListAST_2D_element::getter_mEndOfProcLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfProcLocation ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   @externProcedureDeclarationListAST-element type                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externProcedureDeclarationListAST_2D_element ("externProcedureDeclarationListAST-element",
                                                                     NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_externProcedureDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externProcedureDeclarationListAST_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_externProcedureDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externProcedureDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Extension method '@externProcedureDeclarationListAST-element externProcedureSemanticAnalysis'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_externProcedureSemanticAnalysis (const GALGAS_externProcedureDeclarationListAST_2D_element inObject,
                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                      GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_routineMangledName_5430 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), inObject.mProperty_mExternProcedureName, inObject.mProperty_mProcFormalArgumentList, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 132)) ;
  GALGAS_routineFormalArgumentListIR var_formalArguments_5605 = GALGAS_routineFormalArgumentListIR::constructor_emptyList (SOURCE_FILE ("declaration-extern-proc.galgas", 138)) ;
  GALGAS_universalValuedObjectMap joker_5694 = GALGAS_universalValuedObjectMap::constructor_default (SOURCE_FILE ("declaration-extern-proc.galgas", 142)) ;
  {
  routine_enterFormalArguments (constinArgument_inContext, inObject.mProperty_mProcFormalArgumentList, joker_5694, var_formalArguments_5605, inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 139)) ;
  }
  const enumGalgasBool test_0 = ioArgument_ioTemporaries.getter_mSubprogramInvocationGraph (HERE).getter_isNodeDefined (var_routineMangledName_5430.getter_string (HERE) COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 146)).operator_not (SOURCE_FILE ("declaration-extern-proc.galgas", 146)).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addNode (var_routineMangledName_5430, var_routineMangledName_5430, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 147)) ;
    }
  }
  GALGAS_unifiedTypeMap_2D_proxy temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, inObject.mProperty_mReturnTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-extern-proc.galgas", 154)) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), inObject.mProperty_mReturnTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 156)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_returnType_6027 = temp_1 ;
  {
  ioArgument_ioIntermediateCodeStruct.mProperty_mExternProcedureMapIR.setter_insertKey (inObject.mProperty_mRoutineNameForGeneration, var_formalArguments_5605, var_returnType_6027, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 159)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy::GALGAS_unifiedTypeMap_2D_proxy (void) :
AC_GALGAS_uniqueMapProxy () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_unifiedTypeMap_2D_proxy::constructor_null (LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  result.makeNullProxy (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_unifiedTypeMap_2D_proxy::class_method_makeOptionalProxy (GALGAS_unifiedTypeMap & ioMap,
                                                                     GALGAS_lstring inKey,
                                                                     GALGAS_unifiedTypeMap_2D_proxy & outProxy
                                                                     COMMA_LOCATION_ARGS) {
  outProxy.internalMakeOptionalProxy (ioMap, inKey COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (GALGAS_unifiedTypeMap & ioMap,
                                                             GALGAS_lstring inKey,
                                                             GALGAS_unifiedTypeMap_2D_proxy & outProxy
                                                             COMMA_LOCATION_ARGS) {
  outProxy.internalMakeProxy (ioMap, inKey COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (GALGAS_unifiedTypeMap & ioMap,
                                                                       GALGAS_string inKey,
                                                                       GALGAS_unifiedTypeMap_2D_proxy & outProxy
                                                                       COMMA_LOCATION_ARGS) {
  outProxy.internalMakeProxyFromString (ioMap, inKey COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_unifiedTypeMap_2D_proxy::getter_generate (C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_bool result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "generate" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_generate;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (const GALGAS_unifiedTypeMap & inMap,
                                                                                      const GALGAS_lstring & inKey,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  result.internalMakeRegularProxyBySearchingKey (inMap, inKey, kSearchErrorMessage_unifiedTypeMap_searchKey, inCompiler COMMA_THERE) ;
  return result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @unifiedTypeMap-proxy type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unifiedTypeMap_2D_proxy ("unifiedTypeMap-proxy",
                                                NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_unifiedTypeMap_2D_proxy::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMap_2D_proxy ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_unifiedTypeMap_2D_proxy::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMap_2D_proxy (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externProcedureMapIR_2D_element::GALGAS_externProcedureMapIR_2D_element (void) :
mProperty_lkey (),
mProperty_mFormalArgumentListForGeneration (),
mProperty_mReturnType () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externProcedureMapIR_2D_element::~ GALGAS_externProcedureMapIR_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externProcedureMapIR_2D_element::GALGAS_externProcedureMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_routineFormalArgumentListIR & inOperand1,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mFormalArgumentListForGeneration (inOperand1),
mProperty_mReturnType (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externProcedureMapIR_2D_element GALGAS_externProcedureMapIR_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_externProcedureMapIR_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                 GALGAS_routineFormalArgumentListIR::constructor_emptyList (HERE),
                                                 GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_externProcedureMapIR_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mFormalArgumentListForGeneration.isValid () && mProperty_mReturnType.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externProcedureMapIR_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mFormalArgumentListForGeneration.drop () ;
  mProperty_mReturnType.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_externProcedureMapIR_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListIR GALGAS_externProcedureMapIR_2D_element::getter_mFormalArgumentListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_externProcedureMapIR_2D_element::getter_mReturnType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReturnType ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @externProcedureMapIR-element type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externProcedureMapIR_2D_element ("externProcedureMapIR-element",
                                                        NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_externProcedureMapIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externProcedureMapIR_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_externProcedureMapIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externProcedureMapIR_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*



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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_callInstructionAST::GALGAS_callInstructionAST (void) :
GALGAS_instructionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_callInstructionAST::GALGAS_callInstructionAST (const cPtr_callInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_callInstructionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_effectiveArgumentListAST GALGAS_callInstructionAST::getter_mArguments (UNUSED_LOCATION_ARGS) const {
  GALGAS_effectiveArgumentListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_callInstructionAST * p = (const cPtr_callInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_callInstructionAST) ;
    result = p->mProperty_mArguments ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_effectiveArgumentListAST cPtr_callInstructionAST::getter_mArguments (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArguments ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_callInstructionAST::getter_mEndOfArguments (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_callInstructionAST * p = (const cPtr_callInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_callInstructionAST) ;
    result = p->mProperty_mEndOfArguments ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_callInstructionAST::getter_mEndOfArguments (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfArguments ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                     Pointer class for @callInstructionAST class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_callInstructionAST::cPtr_callInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_effectiveArgumentListAST & in_mArguments,
                                                  const GALGAS_location & in_mEndOfArguments
                                                  COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mArguments (in_mArguments),
mProperty_mEndOfArguments (in_mEndOfArguments) {
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @callInstructionAST type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_callInstructionAST ("callInstructionAST",
                                           & kTypeDescriptor_GALGAS_instructionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_callInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_callInstructionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_callInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_callInstructionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardMapIR_2D_element::GALGAS_guardMapIR_2D_element (void) :
mProperty_lkey (),
mProperty_mFormalArgumentListForGeneration (),
mProperty_mReceiverType (),
mProperty_mGuardKindGenerationIR (),
mProperty_mAllocaList (),
mProperty_mInstructionGenerationList (),
mProperty_mWarnIfUnused () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardMapIR_2D_element::~ GALGAS_guardMapIR_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_guardMapIR_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mFormalArgumentListForGeneration.isValid () && mProperty_mReceiverType.isValid () && mProperty_mGuardKindGenerationIR.isValid () && mProperty_mAllocaList.isValid () && mProperty_mInstructionGenerationList.isValid () && mProperty_mWarnIfUnused.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_guardMapIR_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mFormalArgumentListForGeneration.drop () ;
  mProperty_mReceiverType.drop () ;
  mProperty_mGuardKindGenerationIR.drop () ;
  mProperty_mAllocaList.drop () ;
  mProperty_mInstructionGenerationList.drop () ;
  mProperty_mWarnIfUnused.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_guardMapIR_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListIR GALGAS_guardMapIR_2D_element::getter_mFormalArgumentListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_guardMapIR_2D_element::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardKindGenerationIR GALGAS_guardMapIR_2D_element::getter_mGuardKindGenerationIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardKindGenerationIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_allocaList GALGAS_guardMapIR_2D_element::getter_mAllocaList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAllocaList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListIR GALGAS_guardMapIR_2D_element::getter_mInstructionGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_guardMapIR_2D_element::getter_mWarnIfUnused (UNUSED_LOCATION_ARGS) const {
  return mProperty_mWarnIfUnused ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @guardMapIR-element type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guardMapIR_2D_element ("guardMapIR-element",
                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_guardMapIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardMapIR_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_guardMapIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardMapIR_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Extension method '@guardMapIR-element enterAccessibleEntities'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_enterAccessibleEntities (const GALGAS_guardMapIR_2D_element inObject,
                                              GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                              GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  extensionMethod_enterAccessibleEntities (inObject.mProperty_mInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 618)) ;
  switch (inObject.mProperty_mGuardKindGenerationIR.enumValue ()) {
  case GALGAS_guardKindGenerationIR::kNotBuilt:
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_baseGuard:
    {
    }
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_convenienceGuard:
    {
      const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard * extractPtr_25674 = (const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard *) (inObject.mProperty_mGuardKindGenerationIR.unsafePointer ()) ;
      const GALGAS_instructionListIR extractedValue_baseGuardInstructionGenerationList = extractPtr_25674->mAssociatedValue1 ;
      const GALGAS_string extractedValue_baseGuardMangledName = extractPtr_25674->mAssociatedValue2 ;
      extensionMethod_enterAccessibleEntities (extractedValue_baseGuardInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 622)) ;
      ioArgument_ioAccessibleEntities.mProperty_mGuardSet.addAssign_operation (extractedValue_baseGuardMangledName  COMMA_SOURCE_FILE ("declaration-guard.galgas", 623)) ;
    }
    break ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedRoutineList_2D_element::GALGAS_decoratedRoutineList_2D_element (void) :
mProperty_mReceiverTypeName (),
mProperty_mMode (),
mProperty_mRoutineKind (),
mProperty_mWarnIfUnused (),
mProperty_mExportedRoutine (),
mProperty_mRoutineAttributes (),
mProperty_mRoutineMangledName (),
mProperty_mRoutineFormalArgumentList (),
mProperty_mRoutineInstructionList (),
mProperty_mEndOfRoutineDeclaration (),
mProperty_mReturnTypeName () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedRoutineList_2D_element::~ GALGAS_decoratedRoutineList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedRoutineList_2D_element::GALGAS_decoratedRoutineList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_mode & inOperand1,
                                                                                const GALGAS_routineKind & inOperand2,
                                                                                const GALGAS_bool & inOperand3,
                                                                                const GALGAS_bool & inOperand4,
                                                                                const GALGAS_routineAttributes & inOperand5,
                                                                                const GALGAS_lstring & inOperand6,
                                                                                const GALGAS_routineFormalArgumentListAST & inOperand7,
                                                                                const GALGAS_instructionListAST & inOperand8,
                                                                                const GALGAS_location & inOperand9,
                                                                                const GALGAS_lstring & inOperand10) :
mProperty_mReceiverTypeName (inOperand0),
mProperty_mMode (inOperand1),
mProperty_mRoutineKind (inOperand2),
mProperty_mWarnIfUnused (inOperand3),
mProperty_mExportedRoutine (inOperand4),
mProperty_mRoutineAttributes (inOperand5),
mProperty_mRoutineMangledName (inOperand6),
mProperty_mRoutineFormalArgumentList (inOperand7),
mProperty_mRoutineInstructionList (inOperand8),
mProperty_mEndOfRoutineDeclaration (inOperand9),
mProperty_mReturnTypeName (inOperand10) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedRoutineList_2D_element GALGAS_decoratedRoutineList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_mode & inOperand1,
                                                                                                const GALGAS_routineKind & inOperand2,
                                                                                                const GALGAS_bool & inOperand3,
                                                                                                const GALGAS_bool & inOperand4,
                                                                                                const GALGAS_routineAttributes & inOperand5,
                                                                                                const GALGAS_lstring & inOperand6,
                                                                                                const GALGAS_routineFormalArgumentListAST & inOperand7,
                                                                                                const GALGAS_instructionListAST & inOperand8,
                                                                                                const GALGAS_location & inOperand9,
                                                                                                const GALGAS_lstring & inOperand10 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_decoratedRoutineList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
    result = GALGAS_decoratedRoutineList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_decoratedRoutineList_2D_element::objectCompare (const GALGAS_decoratedRoutineList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mReceiverTypeName.objectCompare (inOperand.mProperty_mReceiverTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMode.objectCompare (inOperand.mProperty_mMode) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRoutineKind.objectCompare (inOperand.mProperty_mRoutineKind) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mWarnIfUnused.objectCompare (inOperand.mProperty_mWarnIfUnused) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExportedRoutine.objectCompare (inOperand.mProperty_mExportedRoutine) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRoutineAttributes.objectCompare (inOperand.mProperty_mRoutineAttributes) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRoutineMangledName.objectCompare (inOperand.mProperty_mRoutineMangledName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRoutineFormalArgumentList.objectCompare (inOperand.mProperty_mRoutineFormalArgumentList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRoutineInstructionList.objectCompare (inOperand.mProperty_mRoutineInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfRoutineDeclaration.objectCompare (inOperand.mProperty_mEndOfRoutineDeclaration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mReturnTypeName.objectCompare (inOperand.mProperty_mReturnTypeName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_decoratedRoutineList_2D_element::isValid (void) const {
  return mProperty_mReceiverTypeName.isValid () && mProperty_mMode.isValid () && mProperty_mRoutineKind.isValid () && mProperty_mWarnIfUnused.isValid () && mProperty_mExportedRoutine.isValid () && mProperty_mRoutineAttributes.isValid () && mProperty_mRoutineMangledName.isValid () && mProperty_mRoutineFormalArgumentList.isValid () && mProperty_mRoutineInstructionList.isValid () && mProperty_mEndOfRoutineDeclaration.isValid () && mProperty_mReturnTypeName.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedRoutineList_2D_element::drop (void) {
  mProperty_mReceiverTypeName.drop () ;
  mProperty_mMode.drop () ;
  mProperty_mRoutineKind.drop () ;
  mProperty_mWarnIfUnused.drop () ;
  mProperty_mExportedRoutine.drop () ;
  mProperty_mRoutineAttributes.drop () ;
  mProperty_mRoutineMangledName.drop () ;
  mProperty_mRoutineFormalArgumentList.drop () ;
  mProperty_mRoutineInstructionList.drop () ;
  mProperty_mEndOfRoutineDeclaration.drop () ;
  mProperty_mReturnTypeName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedRoutineList_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @decoratedRoutineList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mReceiverTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRoutineKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mWarnIfUnused.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExportedRoutine.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRoutineAttributes.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRoutineFormalArgumentList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRoutineInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfRoutineDeclaration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mReturnTypeName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_decoratedRoutineList_2D_element::getter_mReceiverTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mode GALGAS_decoratedRoutineList_2D_element::getter_mMode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMode ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineKind GALGAS_decoratedRoutineList_2D_element::getter_mRoutineKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_decoratedRoutineList_2D_element::getter_mWarnIfUnused (UNUSED_LOCATION_ARGS) const {
  return mProperty_mWarnIfUnused ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_decoratedRoutineList_2D_element::getter_mExportedRoutine (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExportedRoutine ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineAttributes GALGAS_decoratedRoutineList_2D_element::getter_mRoutineAttributes (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineAttributes ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_decoratedRoutineList_2D_element::getter_mRoutineMangledName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineMangledName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListAST GALGAS_decoratedRoutineList_2D_element::getter_mRoutineFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineFormalArgumentList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListAST GALGAS_decoratedRoutineList_2D_element::getter_mRoutineInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_decoratedRoutineList_2D_element::getter_mEndOfRoutineDeclaration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfRoutineDeclaration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_decoratedRoutineList_2D_element::getter_mReturnTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReturnTypeName ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @decoratedRoutineList-element type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedRoutineList_2D_element ("decoratedRoutineList-element",
                                                        NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_decoratedRoutineList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedRoutineList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_decoratedRoutineList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedRoutineList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedRoutineList_2D_element GALGAS_decoratedRoutineList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_decoratedRoutineList_2D_element result ;
  const GALGAS_decoratedRoutineList_2D_element * p = (const GALGAS_decoratedRoutineList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedRoutineList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedRoutineList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Extension Getter '@effectiveArgumentListAST routineSignature'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring extensionGetter_routineSignature (const GALGAS_effectiveArgumentListAST & inObject,
                                                 const GALGAS_location & constinArgument_inRoutineNameLocation,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_key_2436 = GALGAS_string::makeEmptyString () ;
  var_key_2436.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 51)) ;
  const GALGAS_effectiveArgumentListAST temp_0 = inObject ;
  cEnumerator_effectiveArgumentListAST enumerator_2491 (temp_0, kENUMERATION_UP) ;
  while (enumerator_2491.hasCurrentObject ()) {
    var_key_2436.plusAssign_operation(extensionGetter_matchingFormalArgument (enumerator_2491.current_mEffectiveParameterKind (HERE), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 53)).add_operation (enumerator_2491.current_mSelector (HERE).getter_string (SOURCE_FILE ("context-routines.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 53)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 53)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 53)) ;
    enumerator_2491.gotoNextObject () ;
  }
  var_key_2436.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 55)) ;
  result_result = GALGAS_lstring::constructor_new (var_key_2436, constinArgument_inRoutineNameLocation  COMMA_SOURCE_FILE ("context-routines.galgas", 56)) ;
//---
  return result_result ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineDescriptor::GALGAS_routineDescriptor (void) :
mProperty_isPublic (),
mProperty_exported (),
mProperty_name (),
mProperty_routineKind (),
mProperty_signature (),
mProperty_returnTypeProxy (),
mProperty_canAccessProperties (),
mProperty_canMutateProperties (),
mProperty_safe () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineDescriptor::~ GALGAS_routineDescriptor (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineDescriptor::GALGAS_routineDescriptor (const GALGAS_bool & inOperand0,
                                                    const GALGAS_bool & inOperand1,
                                                    const GALGAS_string & inOperand2,
                                                    const GALGAS_routineKind & inOperand3,
                                                    const GALGAS_routineTypedSignature & inOperand4,
                                                    const GALGAS_unifiedTypeMap_2D_proxy & inOperand5,
                                                    const GALGAS_bool & inOperand6,
                                                    const GALGAS_bool & inOperand7,
                                                    const GALGAS_bool & inOperand8) :
mProperty_isPublic (inOperand0),
mProperty_exported (inOperand1),
mProperty_name (inOperand2),
mProperty_routineKind (inOperand3),
mProperty_signature (inOperand4),
mProperty_returnTypeProxy (inOperand5),
mProperty_canAccessProperties (inOperand6),
mProperty_canMutateProperties (inOperand7),
mProperty_safe (inOperand8) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineDescriptor GALGAS_routineDescriptor::constructor_new (const GALGAS_bool & inOperand0,
                                                                    const GALGAS_bool & inOperand1,
                                                                    const GALGAS_string & inOperand2,
                                                                    const GALGAS_routineKind & inOperand3,
                                                                    const GALGAS_routineTypedSignature & inOperand4,
                                                                    const GALGAS_unifiedTypeMap_2D_proxy & inOperand5,
                                                                    const GALGAS_bool & inOperand6,
                                                                    const GALGAS_bool & inOperand7,
                                                                    const GALGAS_bool & inOperand8 
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineDescriptor result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid ()) {
    result = GALGAS_routineDescriptor (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_routineDescriptor::objectCompare (const GALGAS_routineDescriptor & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_isPublic.objectCompare (inOperand.mProperty_isPublic) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_exported.objectCompare (inOperand.mProperty_exported) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_name.objectCompare (inOperand.mProperty_name) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_routineKind.objectCompare (inOperand.mProperty_routineKind) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_signature.objectCompare (inOperand.mProperty_signature) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_returnTypeProxy.objectCompare (inOperand.mProperty_returnTypeProxy) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_canAccessProperties.objectCompare (inOperand.mProperty_canAccessProperties) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_canMutateProperties.objectCompare (inOperand.mProperty_canMutateProperties) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_safe.objectCompare (inOperand.mProperty_safe) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_routineDescriptor::isValid (void) const {
  return mProperty_isPublic.isValid () && mProperty_exported.isValid () && mProperty_name.isValid () && mProperty_routineKind.isValid () && mProperty_signature.isValid () && mProperty_returnTypeProxy.isValid () && mProperty_canAccessProperties.isValid () && mProperty_canMutateProperties.isValid () && mProperty_safe.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineDescriptor::drop (void) {
  mProperty_isPublic.drop () ;
  mProperty_exported.drop () ;
  mProperty_name.drop () ;
  mProperty_routineKind.drop () ;
  mProperty_signature.drop () ;
  mProperty_returnTypeProxy.drop () ;
  mProperty_canAccessProperties.drop () ;
  mProperty_canMutateProperties.drop () ;
  mProperty_safe.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineDescriptor::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "<struct @routineDescriptor:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_isPublic.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_exported.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_name.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_routineKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_signature.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_returnTypeProxy.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_canAccessProperties.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_canMutateProperties.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_safe.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_routineDescriptor::getter_isPublic (UNUSED_LOCATION_ARGS) const {
  return mProperty_isPublic ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_routineDescriptor::getter_exported (UNUSED_LOCATION_ARGS) const {
  return mProperty_exported ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_routineDescriptor::getter_name (UNUSED_LOCATION_ARGS) const {
  return mProperty_name ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineKind GALGAS_routineDescriptor::getter_routineKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_routineKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineTypedSignature GALGAS_routineDescriptor::getter_signature (UNUSED_LOCATION_ARGS) const {
  return mProperty_signature ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_routineDescriptor::getter_returnTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mProperty_returnTypeProxy ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_routineDescriptor::getter_canAccessProperties (UNUSED_LOCATION_ARGS) const {
  return mProperty_canAccessProperties ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_routineDescriptor::getter_canMutateProperties (UNUSED_LOCATION_ARGS) const {
  return mProperty_canMutateProperties ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_routineDescriptor::getter_safe (UNUSED_LOCATION_ARGS) const {
  return mProperty_safe ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @routineDescriptor type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineDescriptor ("routineDescriptor",
                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_routineDescriptor::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineDescriptor ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_routineDescriptor::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineDescriptor (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineDescriptor GALGAS_routineDescriptor::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_routineDescriptor result ;
  const GALGAS_routineDescriptor * p = (const GALGAS_routineDescriptor *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineDescriptor *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineDescriptor", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineMapForContext::GALGAS_routineMapForContext (void) :
mProperty_mInternalRoutineMap () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineMapForContext::~ GALGAS_routineMapForContext (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineMapForContext::GALGAS_routineMapForContext (const GALGAS_routineArgumentSignatureMapForContext & inOperand0) :
mProperty_mInternalRoutineMap (inOperand0) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineMapForContext GALGAS_routineMapForContext::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineMapForContext (GALGAS_routineArgumentSignatureMapForContext::constructor_emptyMap (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineMapForContext GALGAS_routineMapForContext::constructor_new (const GALGAS_routineArgumentSignatureMapForContext & inOperand0 
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineMapForContext result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_routineMapForContext (inOperand0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_routineMapForContext::objectCompare (const GALGAS_routineMapForContext & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInternalRoutineMap.objectCompare (inOperand.mProperty_mInternalRoutineMap) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_routineMapForContext::isValid (void) const {
  return mProperty_mInternalRoutineMap.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineMapForContext::drop (void) {
  mProperty_mInternalRoutineMap.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineMapForContext::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<struct @routineMapForContext:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mInternalRoutineMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineArgumentSignatureMapForContext GALGAS_routineMapForContext::getter_mInternalRoutineMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInternalRoutineMap ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @routineMapForContext type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineMapForContext ("routineMapForContext",
                                             NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_routineMapForContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineMapForContext ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_routineMapForContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineMapForContext (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineMapForContext GALGAS_routineMapForContext::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_routineMapForContext result ;
  const GALGAS_routineMapForContext * p = (const GALGAS_routineMapForContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineMapForContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineMapForContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Extension method '@routineMapForContext insertRoutine'                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_insertRoutine (GALGAS_routineMapForContext & ioObject,
                                    const GALGAS_string constinArgument_inReceiverTypeName,
                                    const GALGAS_lstring constinArgument_inRoutineName,
                                    const GALGAS_lstring constinArgument_inArgumentSignature,
                                    const GALGAS_lstring constinArgument_inRoutineLLVMName,
                                    const GALGAS_routineDescriptor constinArgument_inDescriptor,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_routineName_1301 = GALGAS_lstring::constructor_new (constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("routine-map.galgas", 30)).add_operation (constinArgument_inRoutineName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("routine-map.galgas", 30)).add_operation (constinArgument_inArgumentSignature.getter_string (SOURCE_FILE ("routine-map.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("routine-map.galgas", 30)), constinArgument_inRoutineName.getter_location (HERE)  COMMA_SOURCE_FILE ("routine-map.galgas", 30)) ;
  {
  ioObject.mProperty_mInternalRoutineMap.setter_insertKey (var_routineName_1301, constinArgument_inRoutineLLVMName, constinArgument_inDescriptor, inCompiler COMMA_SOURCE_FILE ("routine-map.galgas", 31)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Extension method '@routineMapForContext searchKey'                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_searchKey (const GALGAS_routineMapForContext inObject,
                                const GALGAS_string constinArgument_inReceiverTypeName,
                                const GALGAS_lstring constinArgument_inRoutineName,
                                const GALGAS_lstring constinArgument_inArgumentSignature,
                                GALGAS_lstring & outArgument_outRoutineLLVMName,
                                GALGAS_routineDescriptor & outArgument_outDescriptor,
                                GALGAS_location & outArgument_outKeyLocation,
                                C_Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRoutineLLVMName.drop () ; // Release 'out' argument
  outArgument_outDescriptor.drop () ; // Release 'out' argument
  outArgument_outKeyLocation.drop () ; // Release 'out' argument
  GALGAS_lstring var_routineName_2034 = GALGAS_lstring::constructor_new (constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("routine-map.galgas", 46)).add_operation (constinArgument_inRoutineName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("routine-map.galgas", 46)).add_operation (constinArgument_inArgumentSignature.getter_string (SOURCE_FILE ("routine-map.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("routine-map.galgas", 46)), constinArgument_inRoutineName.getter_location (HERE)  COMMA_SOURCE_FILE ("routine-map.galgas", 46)) ;
  inObject.mProperty_mInternalRoutineMap.method_searchKey (var_routineName_2034, outArgument_outRoutineLLVMName, outArgument_outDescriptor, outArgument_outKeyLocation, inCompiler COMMA_SOURCE_FILE ("routine-map.galgas", 48)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Extension Getter '@routineMapForContext hasKey'                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool extensionGetter_hasKey (const GALGAS_routineMapForContext & inObject,
                                    const GALGAS_string & constinArgument_inReceiverTypeName,
                                    const GALGAS_lstring & constinArgument_inRoutineName,
                                    const GALGAS_lstring & constinArgument_inArgumentSignature,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  GALGAS_lstring var_routineName_2697 = GALGAS_lstring::constructor_new (constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("routine-map.galgas", 61)).add_operation (constinArgument_inRoutineName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("routine-map.galgas", 61)).add_operation (constinArgument_inArgumentSignature.getter_string (SOURCE_FILE ("routine-map.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("routine-map.galgas", 61)), constinArgument_inRoutineName.getter_location (HERE)  COMMA_SOURCE_FILE ("routine-map.galgas", 61)) ;
  result_result = inObject.mProperty_mInternalRoutineMap.getter_hasKey (var_routineName_2697.getter_string (SOURCE_FILE ("routine-map.galgas", 62)) COMMA_SOURCE_FILE ("routine-map.galgas", 62)) ;
//---
  return result_result ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_universalValuedObjectMap::GALGAS_universalValuedObjectMap (void) :
mProperty_mInternalPropertyAndRoutineMap (),
mProperty_mScopeStack (),
mProperty_mLocalObjectList () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_universalValuedObjectMap::~ GALGAS_universalValuedObjectMap (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_universalValuedObjectMap::GALGAS_universalValuedObjectMap (const GALGAS_flatValuedObjectMap & inOperand0,
                                                                  const GALGAS_scopeStack & inOperand1,
                                                                  const GALGAS_lstringlist & inOperand2) :
mProperty_mInternalPropertyAndRoutineMap (inOperand0),
mProperty_mScopeStack (inOperand1),
mProperty_mLocalObjectList (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_universalValuedObjectMap GALGAS_universalValuedObjectMap::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_universalValuedObjectMap (GALGAS_flatValuedObjectMap::constructor_emptyMap (HERE),
                                          GALGAS_scopeStack::constructor_emptyList (HERE),
                                          GALGAS_lstringlist::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_universalValuedObjectMap::isValid (void) const {
  return mProperty_mInternalPropertyAndRoutineMap.isValid () && mProperty_mScopeStack.isValid () && mProperty_mLocalObjectList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_universalValuedObjectMap::drop (void) {
  mProperty_mInternalPropertyAndRoutineMap.drop () ;
  mProperty_mScopeStack.drop () ;
  mProperty_mLocalObjectList.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_flatValuedObjectMap GALGAS_universalValuedObjectMap::getter_mInternalPropertyAndRoutineMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInternalPropertyAndRoutineMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scopeStack GALGAS_universalValuedObjectMap::getter_mScopeStack (UNUSED_LOCATION_ARGS) const {
  return mProperty_mScopeStack ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_universalValuedObjectMap::getter_mLocalObjectList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLocalObjectList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @universalValuedObjectMap type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_universalValuedObjectMap ("universalValuedObjectMap",
                                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_universalValuedObjectMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_universalValuedObjectMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_universalValuedObjectMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_universalValuedObjectMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Extension method '@universalValuedObjectMap insertTask'                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_insertTask (GALGAS_universalValuedObjectMap & ioObject,
                                 const GALGAS_lstring constinArgument_inTaskName,
                                 const GALGAS_PLMType constinArgument_inTaskType,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_insertKey (constinArgument_inTaskName, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("universal-map.galgas", 24)), GALGAS_bool (false), GALGAS_valuedObject::constructor_task (constinArgument_inTaskType  COMMA_SOURCE_FILE ("universal-map.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 22)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Extension method '@universalValuedObjectMap insertDriver'                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_insertDriver (GALGAS_universalValuedObjectMap & ioObject,
                                   const GALGAS_lstring constinArgument_inDriverName,
                                   const GALGAS_bool constinArgument_inIsInstancied,
                                   const GALGAS_PLMType constinArgument_inDriverType,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_insertKey (constinArgument_inDriverName, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("universal-map.galgas", 39)), GALGAS_bool (false), GALGAS_valuedObject::constructor_driver (constinArgument_inDriverType, constinArgument_inIsInstancied  COMMA_SOURCE_FILE ("universal-map.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 37)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Extension method '@universalValuedObjectMap insertRegisterGroup'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_insertRegisterGroup (GALGAS_universalValuedObjectMap & ioObject,
                                          const GALGAS_lstring constinArgument_inRegisterGroupName,
                                          const GALGAS_registerGroupKind constinArgument_inGroupKind,
                                          const GALGAS_controlRegisterMap constinArgument_inControlRegisterMap,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_valuedObject var_newValue_1789 = GALGAS_valuedObject::constructor_registerGroup (constinArgument_inControlRegisterMap, constinArgument_inGroupKind  COMMA_SOURCE_FILE ("universal-map.galgas", 52)) ;
  {
  ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_insertKey (constinArgument_inRegisterGroupName, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("universal-map.galgas", 55)), GALGAS_bool (false), var_newValue_1789, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 53)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Extension method '@universalValuedObjectMap insertGlobalConstant'                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_insertGlobalConstant (GALGAS_universalValuedObjectMap & ioObject,
                                           const GALGAS_lstring constinArgument_inConstantName,
                                           const GALGAS_objectIR constinArgument_inConstantObjectIR,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_insertKey (constinArgument_inConstantName, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("universal-map.galgas", 69)), GALGAS_bool (false), GALGAS_valuedObject::constructor_globalConstant (constinArgument_inConstantObjectIR  COMMA_SOURCE_FILE ("universal-map.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 67)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Extension method '@universalValuedObjectMap insertGlobalSyncInstance'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_insertGlobalSyncInstance (GALGAS_universalValuedObjectMap & ioObject,
                                               const GALGAS_lstring constinArgument_inSyncInstanceName,
                                               const GALGAS_PLMType constinArgument_inType,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_insertKey (constinArgument_inSyncInstanceName, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("universal-map.galgas", 83)), GALGAS_bool (false), GALGAS_valuedObject::constructor_globalSyncInstance (constinArgument_inType, constinArgument_inSyncInstanceName  COMMA_SOURCE_FILE ("universal-map.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 81)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Extension method '@universalValuedObjectMap insertLocalConstant'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_insertLocalConstant (GALGAS_universalValuedObjectMap & ioObject,
                                          const GALGAS_lstring constinArgument_inLocalConstantName,
                                          const GALGAS_bool constinArgument_inIsFormalInputArgument,
                                          const GALGAS_PLMType constinArgument_inType,
                                          const GALGAS_lstring constinArgument_inPLMConstantName,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_insertKey (constinArgument_inLocalConstantName, GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 99)), GALGAS_bool (false), GALGAS_valuedObject::constructor_localConstant (constinArgument_inType, constinArgument_inPLMConstantName, constinArgument_inIsFormalInputArgument  COMMA_SOURCE_FILE ("universal-map.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 97)) ;
  }
  ioObject.mProperty_mLocalObjectList.addAssign_operation (constinArgument_inLocalConstantName  COMMA_SOURCE_FILE ("universal-map.galgas", 103)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Extension method '@universalValuedObjectMap insertUsedLocalConstant'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_insertUsedLocalConstant (GALGAS_universalValuedObjectMap & ioObject,
                                              const GALGAS_lstring constinArgument_inLocalConstantName,
                                              const GALGAS_PLMType constinArgument_inType,
                                              const GALGAS_lstring constinArgument_inPLMConstantName,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_insertKey (constinArgument_inLocalConstantName, GALGAS_valuedObjectState::constructor_hasReadValue (SOURCE_FILE ("universal-map.galgas", 115)), GALGAS_bool (false), GALGAS_valuedObject::constructor_localConstant (constinArgument_inType, constinArgument_inPLMConstantName, GALGAS_bool (false)  COMMA_SOURCE_FILE ("universal-map.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 113)) ;
  }
  ioObject.mProperty_mLocalObjectList.addAssign_operation (constinArgument_inLocalConstantName  COMMA_SOURCE_FILE ("universal-map.galgas", 119)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Extension method '@universalValuedObjectMap insertLocalVariable'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_insertLocalVariable (GALGAS_universalValuedObjectMap & ioObject,
                                          const GALGAS_lstring constinArgument_inLocalVariableName,
                                          const GALGAS_PLMType constinArgument_inType,
                                          const GALGAS_lstring constinArgument_inPLMName,
                                          const GALGAS_valuedObjectState constinArgument_inVariableInitialState,
                                          const GALGAS_bool constinArgument_inObjectShouldBeValuedAtEndOfScope,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_insertKey (constinArgument_inLocalVariableName, constinArgument_inVariableInitialState, constinArgument_inObjectShouldBeValuedAtEndOfScope, GALGAS_valuedObject::constructor_localVariable (constinArgument_inType, constinArgument_inPLMName  COMMA_SOURCE_FILE ("universal-map.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 131)) ;
  }
  ioObject.mProperty_mLocalObjectList.addAssign_operation (constinArgument_inLocalVariableName  COMMA_SOURCE_FILE ("universal-map.galgas", 137)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Extension method '@universalValuedObjectMap searchEntity'                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_searchEntity (const GALGAS_universalValuedObjectMap inObject,
                                   const GALGAS_lstring constinArgument_inValuedObjectName,
                                   GALGAS_valuedObject & outArgument_outEntity,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEntity.drop () ; // Release 'out' argument
  GALGAS_valuedObjectState joker_4924_2 ; // Joker input parameter
  GALGAS_bool joker_4924_1 ; // Joker input parameter
  inObject.mProperty_mInternalPropertyAndRoutineMap.method_searchKey (constinArgument_inValuedObjectName, joker_4924_2, joker_4924_1, outArgument_outEntity, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 148)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Extension method '@universalValuedObjectMap searchValuedObject'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_searchValuedObject (const GALGAS_universalValuedObjectMap inObject,
                                         const GALGAS_lstring constinArgument_inValuedObjectName,
                                         const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                         const GALGAS_stringset constinArgument_inInitializedDriverSet,
                                         GALGAS_objectIR & outArgument_outObjectIR,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outObjectIR.drop () ; // Release 'out' argument
  GALGAS_valuedObject var_entity_5344 ;
  GALGAS_valuedObjectState joker_5330_2 ; // Joker input parameter
  GALGAS_bool joker_5330_1 ; // Joker input parameter
  inObject.mProperty_mInternalPropertyAndRoutineMap.method_searchKey (constinArgument_inValuedObjectName, joker_5330_2, joker_5330_1, var_entity_5344, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 159)) ;
  switch (var_entity_5344.enumValue ()) {
  case GALGAS_valuedObject::kNotBuilt:
    break ;
  case GALGAS_valuedObject::kEnum_task:
    {
      const cEnumAssociatedValues_valuedObject_task * extractPtr_5641 = (const cEnumAssociatedValues_valuedObject_task *) (var_entity_5344.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_5641->mAssociatedValue0 ;
      const enumGalgasBool test_0 = constinArgument_inRoutineAttributes.getter_boot (SOURCE_FILE ("universal-map.galgas", 162)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 163)), GALGAS_string ("cannot call a task entry in a boot routine"), fixItArray1  COMMA_SOURCE_FILE ("universal-map.galgas", 163)) ;
        outArgument_outObjectIR.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_0) {
        outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForGlobalVariable (constinArgument_inValuedObjectName.getter_string (SOURCE_FILE ("universal-map.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 165))  COMMA_SOURCE_FILE ("universal-map.galgas", 165)) ;
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_driver:
    {
      const cEnumAssociatedValues_valuedObject_driver * extractPtr_6214 = (const cEnumAssociatedValues_valuedObject_driver *) (var_entity_5344.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_6214->mAssociatedValue0 ;
      const GALGAS_bool extractedValue_instancied = extractPtr_6214->mAssociatedValue1 ;
      const enumGalgasBool test_2 = constinArgument_inRoutineAttributes.getter_boot (SOURCE_FILE ("universal-map.galgas", 168)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 169)), GALGAS_string ("cannot call a driver in a boot routine"), fixItArray3  COMMA_SOURCE_FILE ("universal-map.galgas", 169)) ;
        outArgument_outObjectIR.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_4 = extractedValue_instancied.operator_not (SOURCE_FILE ("universal-map.galgas", 170)).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 171)), GALGAS_string ("the driver should be instancied"), fixItArray5  COMMA_SOURCE_FILE ("universal-map.galgas", 171)) ;
          outArgument_outObjectIR.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_6 = constinArgument_inInitializedDriverSet.getter_hasKey (constinArgument_inValuedObjectName.getter_string (SOURCE_FILE ("universal-map.galgas", 172)) COMMA_SOURCE_FILE ("universal-map.galgas", 172)).operator_not (SOURCE_FILE ("universal-map.galgas", 172)).boolEnum () ;
          if (kBoolTrue == test_6) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 173)), GALGAS_string ("the driver should be named in driver dependence list"), fixItArray7  COMMA_SOURCE_FILE ("universal-map.galgas", 173)) ;
            outArgument_outObjectIR.drop () ; // Release error dropped variable
          }else if (kBoolFalse == test_6) {
            outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForGlobalVariable (constinArgument_inValuedObjectName.getter_string (SOURCE_FILE ("universal-map.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 175))  COMMA_SOURCE_FILE ("universal-map.galgas", 175)) ;
          }
        }
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_registerGroup:
    {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 178)), GALGAS_string ("control register \?"), fixItArray8  COMMA_SOURCE_FILE ("universal-map.galgas", 178)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalConstant:
    {
      const cEnumAssociatedValues_valuedObject_globalConstant * extractPtr_6380 = (const cEnumAssociatedValues_valuedObject_globalConstant *) (var_entity_5344.unsafePointer ()) ;
      const GALGAS_objectIR extractedValue_objectIR = extractPtr_6380->mAssociatedValue0 ;
      outArgument_outObjectIR = extractedValue_objectIR ;
    }
    break ;
  case GALGAS_valuedObject::kEnum_localConstant:
    {
      const cEnumAssociatedValues_valuedObject_localConstant * extractPtr_6526 = (const cEnumAssociatedValues_valuedObject_localConstant *) (var_entity_5344.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_6526->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_6526->mAssociatedValue1 ;
      outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("universal-map.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 182))  COMMA_SOURCE_FILE ("universal-map.galgas", 182)) ;
    }
    break ;
  case GALGAS_valuedObject::kEnum_localVariable:
    {
      const cEnumAssociatedValues_valuedObject_localVariable * extractPtr_6670 = (const cEnumAssociatedValues_valuedObject_localVariable *) (var_entity_5344.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_6670->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_6670->mAssociatedValue1 ;
      outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("universal-map.galgas", 184)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 184))  COMMA_SOURCE_FILE ("universal-map.galgas", 184)) ;
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalSyncInstance:
    {
      const cEnumAssociatedValues_valuedObject_globalSyncInstance * extractPtr_6824 = (const cEnumAssociatedValues_valuedObject_globalSyncInstance *) (var_entity_5344.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_6824->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_6824->mAssociatedValue1 ;
      outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForGlobalSyncInstance (extractedValue_plmName.getter_string (SOURCE_FILE ("universal-map.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 186))  COMMA_SOURCE_FILE ("universal-map.galgas", 186)) ;
    }
    break ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Extension method '@universalValuedObjectMap readAccess'                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_readAccess (GALGAS_universalValuedObjectMap & ioObject,
                                 const GALGAS_lstring constinArgument_inValuedObjectName,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_valuedObjectState var_valueState_7116 ;
  GALGAS_valuedObject var_property_7133 ;
  GALGAS_bool joker_7118 ; // Joker input parameter
  ioObject.mProperty_mInternalPropertyAndRoutineMap.method_searchKey (constinArgument_inValuedObjectName, var_valueState_7116, joker_7118, var_property_7133, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 195)) ;
  switch (var_property_7133.enumValue ()) {
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
  case GALGAS_valuedObject::kEnum_registerGroup:
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
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_valueState_7116.objectCompare (GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 203)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        {
        ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_setMObjectStateForKey (GALGAS_valuedObjectState::constructor_hasReadValue (SOURCE_FILE ("universal-map.galgas", 204)), constinArgument_inValuedObjectName.getter_string (SOURCE_FILE ("universal-map.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 204)) ;
        }
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_localVariable:
    {
      switch (var_valueState_7116.enumValue ()) {
      case GALGAS_valuedObjectState::kNotBuilt:
        break ;
      case GALGAS_valuedObjectState::kEnum_noValue:
        {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 209)), GALGAS_string ("'").add_operation (constinArgument_inValuedObjectName.getter_string (SOURCE_FILE ("universal-map.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 209)).add_operation (GALGAS_string ("' has no value"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 209)), fixItArray1  COMMA_SOURCE_FILE ("universal-map.galgas", 209)) ;
        }
        break ;
      case GALGAS_valuedObjectState::kEnum_hasUnreadValue:
        {
          {
          ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_setMObjectStateForKey (GALGAS_valuedObjectState::constructor_hasReadValue (SOURCE_FILE ("universal-map.galgas", 211)), constinArgument_inValuedObjectName.getter_string (SOURCE_FILE ("universal-map.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 211)) ;
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


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Extension method '@universalValuedObjectMap searchValuedObjectForReadAccess'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_searchValuedObjectForReadAccess (GALGAS_universalValuedObjectMap & ioObject,
                                                      const GALGAS_lstring constinArgument_inValuedObjectName,
                                                      GALGAS_objectIR & outArgument_outObjectIR,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outObjectIR.drop () ; // Release 'out' argument
  GALGAS_valuedObjectState var_valueState_8098 ;
  GALGAS_valuedObject var_property_8115 ;
  GALGAS_bool joker_8100 ; // Joker input parameter
  ioObject.mProperty_mInternalPropertyAndRoutineMap.method_searchKey (constinArgument_inValuedObjectName, var_valueState_8098, joker_8100, var_property_8115, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 223)) ;
  switch (var_property_8115.enumValue ()) {
  case GALGAS_valuedObject::kNotBuilt:
    break ;
  case GALGAS_valuedObject::kEnum_task:
    {
      const cEnumAssociatedValues_valuedObject_task * extractPtr_8264 = (const cEnumAssociatedValues_valuedObject_task *) (var_property_8115.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_8264->mAssociatedValue0 ;
      outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForGlobalVariable (constinArgument_inValuedObjectName.getter_string (SOURCE_FILE ("universal-map.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 226))  COMMA_SOURCE_FILE ("universal-map.galgas", 226)) ;
    }
    break ;
  case GALGAS_valuedObject::kEnum_driver:
    {
      const cEnumAssociatedValues_valuedObject_driver * extractPtr_8530 = (const cEnumAssociatedValues_valuedObject_driver *) (var_property_8115.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_8530->mAssociatedValue0 ;
      const GALGAS_bool extractedValue_instancied = extractPtr_8530->mAssociatedValue1 ;
      const enumGalgasBool test_0 = extractedValue_instancied.boolEnum () ;
      if (kBoolTrue == test_0) {
        outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForGlobalVariable (constinArgument_inValuedObjectName.getter_string (SOURCE_FILE ("universal-map.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 229))  COMMA_SOURCE_FILE ("universal-map.galgas", 229)) ;
      }else if (kBoolFalse == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 231)), GALGAS_string ("the driver should be instancied"), fixItArray1  COMMA_SOURCE_FILE ("universal-map.galgas", 231)) ;
        outArgument_outObjectIR.drop () ; // Release error dropped variable
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_registerGroup:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 234)), GALGAS_string ("control register \?"), fixItArray2  COMMA_SOURCE_FILE ("universal-map.galgas", 234)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalConstant:
    {
      const cEnumAssociatedValues_valuedObject_globalConstant * extractPtr_8696 = (const cEnumAssociatedValues_valuedObject_globalConstant *) (var_property_8115.unsafePointer ()) ;
      const GALGAS_objectIR extractedValue_objectIR = extractPtr_8696->mAssociatedValue0 ;
      outArgument_outObjectIR = extractedValue_objectIR ;
    }
    break ;
  case GALGAS_valuedObject::kEnum_localConstant:
    {
      const cEnumAssociatedValues_valuedObject_localConstant * extractPtr_8999 = (const cEnumAssociatedValues_valuedObject_localConstant *) (var_property_8115.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_8999->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_8999->mAssociatedValue1 ;
      outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("universal-map.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 238))  COMMA_SOURCE_FILE ("universal-map.galgas", 238)) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_valueState_8098.objectCompare (GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 239)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        {
        ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_setMObjectStateForKey (GALGAS_valuedObjectState::constructor_hasReadValue (SOURCE_FILE ("universal-map.galgas", 240)), constinArgument_inValuedObjectName.getter_string (SOURCE_FILE ("universal-map.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 240)) ;
        }
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalSyncInstance:
    {
      const cEnumAssociatedValues_valuedObject_globalSyncInstance * extractPtr_9153 = (const cEnumAssociatedValues_valuedObject_globalSyncInstance *) (var_property_8115.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_9153->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_9153->mAssociatedValue1 ;
      outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForGlobalSyncInstance (extractedValue_plmName.getter_string (SOURCE_FILE ("universal-map.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 243))  COMMA_SOURCE_FILE ("universal-map.galgas", 243)) ;
    }
    break ;
  case GALGAS_valuedObject::kEnum_localVariable:
    {
      const cEnumAssociatedValues_valuedObject_localVariable * extractPtr_9678 = (const cEnumAssociatedValues_valuedObject_localVariable *) (var_property_8115.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_9678->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_9678->mAssociatedValue1 ;
      switch (var_valueState_8098.enumValue ()) {
      case GALGAS_valuedObjectState::kNotBuilt:
        break ;
      case GALGAS_valuedObjectState::kEnum_noValue:
        {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 247)), GALGAS_string ("'").add_operation (constinArgument_inValuedObjectName.getter_string (SOURCE_FILE ("universal-map.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 247)).add_operation (GALGAS_string ("' has no value"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 247)), fixItArray4  COMMA_SOURCE_FILE ("universal-map.galgas", 247)) ;
          outArgument_outObjectIR.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_valuedObjectState::kEnum_hasUnreadValue:
        {
          {
          ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_setMObjectStateForKey (GALGAS_valuedObjectState::constructor_hasReadValue (SOURCE_FILE ("universal-map.galgas", 249)), constinArgument_inValuedObjectName.getter_string (SOURCE_FILE ("universal-map.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 249)) ;
          }
          outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("universal-map.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 250))  COMMA_SOURCE_FILE ("universal-map.galgas", 250)) ;
        }
        break ;
      case GALGAS_valuedObjectState::kEnum_hasReadValue:
        {
          outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("universal-map.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 252))  COMMA_SOURCE_FILE ("universal-map.galgas", 252)) ;
        }
        break ;
      }
    }
    break ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Extension method '@universalValuedObjectMap searchValuedObjectForWriteAccess'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_searchValuedObjectForWriteAccess (GALGAS_universalValuedObjectMap & ioObject,
                                                       const GALGAS_lstring constinArgument_inValuedObjectName,
                                                       GALGAS_objectIR & outArgument_outObjectIR,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outObjectIR.drop () ; // Release 'out' argument
  GALGAS_valuedObjectState var_valueState_10017 ;
  GALGAS_valuedObject var_property_10034 ;
  GALGAS_bool joker_10019 ; // Joker input parameter
  ioObject.mProperty_mInternalPropertyAndRoutineMap.method_searchKey (constinArgument_inValuedObjectName, var_valueState_10017, joker_10019, var_property_10034, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 263)) ;
  switch (var_property_10034.enumValue ()) {
  case GALGAS_valuedObject::kNotBuilt:
    break ;
  case GALGAS_valuedObject::kEnum_task:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 266)), GALGAS_string ("a task has no value"), fixItArray0  COMMA_SOURCE_FILE ("universal-map.galgas", 266)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_driver:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 268)), GALGAS_string ("a driver has no value"), fixItArray1  COMMA_SOURCE_FILE ("universal-map.galgas", 268)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_registerGroup:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 270)), GALGAS_string ("control register \?"), fixItArray2  COMMA_SOURCE_FILE ("universal-map.galgas", 270)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalConstant:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 272)), GALGAS_string ("a constant cannot be written"), fixItArray3  COMMA_SOURCE_FILE ("universal-map.galgas", 272)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalSyncInstance:
    {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 274)), GALGAS_string ("a global sync instance cannot be written"), fixItArray4  COMMA_SOURCE_FILE ("universal-map.galgas", 274)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_localConstant:
    {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 276)), GALGAS_string ("a constant cannot be written"), fixItArray5  COMMA_SOURCE_FILE ("universal-map.galgas", 276)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_localVariable:
    {
      const cEnumAssociatedValues_valuedObject_localVariable * extractPtr_11094 = (const cEnumAssociatedValues_valuedObject_localVariable *) (var_property_10034.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_11094->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_11094->mAssociatedValue1 ;
      outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("universal-map.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 278))  COMMA_SOURCE_FILE ("universal-map.galgas", 278)) ;
      switch (var_valueState_10017.enumValue ()) {
      case GALGAS_valuedObjectState::kNotBuilt:
        break ;
      case GALGAS_valuedObjectState::kEnum_noValue:
      case GALGAS_valuedObjectState::kEnum_hasReadValue:
        {
          {
          ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_setMObjectStateForKey (GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 281)), constinArgument_inValuedObjectName.getter_string (SOURCE_FILE ("universal-map.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 281)) ;
          }
        }
        break ;
      case GALGAS_valuedObjectState::kEnum_hasUnreadValue:
        {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticWarning (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 283)), GALGAS_string ("previous '").add_operation (constinArgument_inValuedObjectName.getter_string (SOURCE_FILE ("universal-map.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 283)).add_operation (GALGAS_string ("' value has not been read"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 283)), fixItArray6  COMMA_SOURCE_FILE ("universal-map.galgas", 283)) ;
        }
        break ;
      }
    }
    break ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Extension method '@universalValuedObjectMap searchValuedObjectForReadWriteAccess'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_searchValuedObjectForReadWriteAccess (GALGAS_universalValuedObjectMap & ioObject,
                                                           const GALGAS_lstring constinArgument_inValuedObjectName,
                                                           GALGAS_objectIR & outArgument_outObjectIR,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outObjectIR.drop () ; // Release 'out' argument
  GALGAS_valuedObjectState var_valueState_11437 ;
  GALGAS_valuedObject var_property_11454 ;
  GALGAS_bool joker_11439 ; // Joker input parameter
  ioObject.mProperty_mInternalPropertyAndRoutineMap.method_searchKey (constinArgument_inValuedObjectName, var_valueState_11437, joker_11439, var_property_11454, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 294)) ;
  switch (var_property_11454.enumValue ()) {
  case GALGAS_valuedObject::kNotBuilt:
    break ;
  case GALGAS_valuedObject::kEnum_task:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 297)), GALGAS_string ("a task has no value"), fixItArray0  COMMA_SOURCE_FILE ("universal-map.galgas", 297)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_driver:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 299)), GALGAS_string ("a driver has no value"), fixItArray1  COMMA_SOURCE_FILE ("universal-map.galgas", 299)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_registerGroup:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 301)), GALGAS_string ("control register \?"), fixItArray2  COMMA_SOURCE_FILE ("universal-map.galgas", 301)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalConstant:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 303)), GALGAS_string ("a constant cannot be written"), fixItArray3  COMMA_SOURCE_FILE ("universal-map.galgas", 303)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_localConstant:
    {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 305)), GALGAS_string ("a constant cannot be written"), fixItArray4  COMMA_SOURCE_FILE ("universal-map.galgas", 305)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalSyncInstance:
    {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 307)), GALGAS_string ("a global sync instance cannot be written"), fixItArray5  COMMA_SOURCE_FILE ("universal-map.galgas", 307)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_localVariable:
    {
      const cEnumAssociatedValues_valuedObject_localVariable * extractPtr_12595 = (const cEnumAssociatedValues_valuedObject_localVariable *) (var_property_11454.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_12595->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_12595->mAssociatedValue1 ;
      switch (var_valueState_11437.enumValue ()) {
      case GALGAS_valuedObjectState::kNotBuilt:
        break ;
      case GALGAS_valuedObjectState::kEnum_noValue:
        {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 311)), GALGAS_string ("object has no value"), fixItArray6  COMMA_SOURCE_FILE ("universal-map.galgas", 311)) ;
          outArgument_outObjectIR.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_valuedObjectState::kEnum_hasUnreadValue:
        {
          outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("universal-map.galgas", 313)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 313))  COMMA_SOURCE_FILE ("universal-map.galgas", 313)) ;
        }
        break ;
      case GALGAS_valuedObjectState::kEnum_hasReadValue:
        {
          {
          ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_setMObjectStateForKey (GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 315)), constinArgument_inValuedObjectName.getter_string (SOURCE_FILE ("universal-map.galgas", 315)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 315)) ;
          }
          outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("universal-map.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 316))  COMMA_SOURCE_FILE ("universal-map.galgas", 316)) ;
        }
        break ;
      }
    }
    break ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Extension method '@universalValuedObjectMap searchValuedObjectType'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_searchValuedObjectType (const GALGAS_universalValuedObjectMap inObject,
                                             const GALGAS_PLMType constinArgument_inSelfType,
                                             const GALGAS_LValueAST constinArgument_inLValue,
                                             GALGAS_PLMType & outArgument_outType,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  GALGAS_accessInAssignmentListAST var_accessList_12885 = constinArgument_inLValue.getter_mAccessList (HERE) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inLValue.getter_mIdentifier (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outType = constinArgument_inSelfType ;
  }else if (kBoolFalse == test_0) {
    GALGAS_valuedObject var_property_13089 ;
    GALGAS_valuedObjectState joker_13073_2 ; // Joker input parameter
    GALGAS_bool joker_13073_1 ; // Joker input parameter
    inObject.mProperty_mInternalPropertyAndRoutineMap.method_searchKey (constinArgument_inLValue.getter_mIdentifier (HERE), joker_13073_2, joker_13073_1, var_property_13089, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 332)) ;
    switch (var_property_13089.enumValue ()) {
    case GALGAS_valuedObject::kNotBuilt:
      break ;
    case GALGAS_valuedObject::kEnum_task:
      {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (constinArgument_inLValue.getter_mIdentifier (HERE).getter_location (SOURCE_FILE ("universal-map.galgas", 335)), GALGAS_string ("undefined in this context"), fixItArray1  COMMA_SOURCE_FILE ("universal-map.galgas", 335)) ;
        outArgument_outType.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_driver:
      {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (constinArgument_inLValue.getter_mIdentifier (HERE).getter_location (SOURCE_FILE ("universal-map.galgas", 337)), GALGAS_string ("undefined in this context"), fixItArray2  COMMA_SOURCE_FILE ("universal-map.galgas", 337)) ;
        outArgument_outType.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_registerGroup:
      {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (constinArgument_inLValue.getter_mIdentifier (HERE).getter_location (SOURCE_FILE ("universal-map.galgas", 339)), GALGAS_string ("undefined in this context"), fixItArray3  COMMA_SOURCE_FILE ("universal-map.galgas", 339)) ;
        outArgument_outType.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_globalConstant:
      {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inLValue.getter_mIdentifier (HERE).getter_location (SOURCE_FILE ("universal-map.galgas", 341)), GALGAS_string ("undefined in this context"), fixItArray4  COMMA_SOURCE_FILE ("universal-map.galgas", 341)) ;
        outArgument_outType.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_localConstant:
      {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (constinArgument_inLValue.getter_mIdentifier (HERE).getter_location (SOURCE_FILE ("universal-map.galgas", 343)), GALGAS_string ("undefined in this context"), fixItArray5  COMMA_SOURCE_FILE ("universal-map.galgas", 343)) ;
        outArgument_outType.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_localVariable:
      {
        const cEnumAssociatedValues_valuedObject_localVariable * extractPtr_13673 = (const cEnumAssociatedValues_valuedObject_localVariable *) (var_property_13089.unsafePointer ()) ;
        const GALGAS_PLMType extractedValue_type = extractPtr_13673->mAssociatedValue0 ;
        outArgument_outType = extractedValue_type ;
      }
      break ;
    case GALGAS_valuedObject::kEnum_globalSyncInstance:
      {
        const cEnumAssociatedValues_valuedObject_globalSyncInstance * extractPtr_13742 = (const cEnumAssociatedValues_valuedObject_globalSyncInstance *) (var_property_13089.unsafePointer ()) ;
        const GALGAS_PLMType extractedValue_type = extractPtr_13742->mAssociatedValue0 ;
        outArgument_outType = extractedValue_type ;
      }
      break ;
    }
  }
  cEnumerator_accessInAssignmentListAST enumerator_13785 (var_accessList_12885, kENUMERATION_UP) ;
  while (enumerator_13785.hasCurrentObject ()) {
    switch (enumerator_13785.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::kNotBuilt:
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_property:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_14309 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_13785.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_14309->mAssociatedValue0 ;
        GALGAS_propertyMap var_propertyMap_13885 = outArgument_outType.getter_propertyMap (HERE) ;
        GALGAS_propertyAccessKind var_accessKind_13969 ;
        GALGAS_bool joker_13952 ; // Joker input parameter
        var_propertyMap_13885.method_searchKey (extractedValue_propertyName, joker_13952, var_accessKind_13969, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 354)) ;
        switch (var_accessKind_13969.enumValue ()) {
        case GALGAS_propertyAccessKind::kNotBuilt:
          break ;
        case GALGAS_propertyAccessKind::kEnum_constantProperty:
          {
            const cEnumAssociatedValues_propertyAccessKind_constantProperty * extractPtr_14063 = (const cEnumAssociatedValues_propertyAccessKind_constantProperty *) (var_accessKind_13969.unsafePointer ()) ;
            const GALGAS_objectIR extractedValue_value = extractPtr_14063->mAssociatedValue0 ;
            outArgument_outType = extensionGetter_type (extractedValue_value, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 357)) ;
          }
          break ;
        case GALGAS_propertyAccessKind::kEnum_singleton:
          {
            const cEnumAssociatedValues_propertyAccessKind_singleton * extractPtr_14130 = (const cEnumAssociatedValues_propertyAccessKind_singleton *) (var_accessKind_13969.unsafePointer ()) ;
            const GALGAS_objectIR extractedValue_object = extractPtr_14130->mAssociatedValue0 ;
            outArgument_outType = extensionGetter_type (extractedValue_object, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 359)) ;
          }
          break ;
        case GALGAS_propertyAccessKind::kEnum_indexed:
          {
            const cEnumAssociatedValues_propertyAccessKind_indexed * extractPtr_14184 = (const cEnumAssociatedValues_propertyAccessKind_indexed *) (var_accessKind_13969.unsafePointer ()) ;
            const GALGAS_PLMType extractedValue_type = extractPtr_14184->mAssociatedValue0 ;
            outArgument_outType = extractedValue_type ;
          }
          break ;
        case GALGAS_propertyAccessKind::kEnum_nonVirtualMethod:
          {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("universal-map.galgas", 363)), GALGAS_string ("a method cannot be used in this context"), fixItArray6  COMMA_SOURCE_FILE ("universal-map.galgas", 363)) ;
            outArgument_outType.drop () ; // Release error dropped variable
          }
          break ;
        }
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
      {
        const enumGalgasBool test_7 = outArgument_outType.getter_kind (HERE).getter_isArrayType (SOURCE_FILE ("universal-map.galgas", 366)).boolEnum () ;
        if (kBoolTrue == test_7) {
          GALGAS_bigint joker_14434_1 ; // Joker input parameter
          outArgument_outType.getter_kind (HERE).method_arrayType (outArgument_outType, joker_14434_1, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 367)) ;
        }
      }
      break ;
    }
    enumerator_13785.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Extension method '@universalValuedObjectMap checkLocalVariableFinalState'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_checkLocalVariableFinalState (const GALGAS_universalValuedObjectMap inObject,
                                                   GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_flatValuedObjectMap enumerator_14884 (inObject.mProperty_mInternalPropertyAndRoutineMap, kENUMERATION_UP) ;
  while (enumerator_14884.hasCurrentObject ()) {
    switch (enumerator_14884.current (HERE).getter_mValuedObject (HERE).enumValue ()) {
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
    case GALGAS_valuedObject::kEnum_registerGroup:
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
        const cEnumAssociatedValues_valuedObject_localConstant * extractPtr_15382 = (const cEnumAssociatedValues_valuedObject_localConstant *) (enumerator_14884.current (HERE).getter_mValuedObject (HERE).unsafePointer ()) ;
        const GALGAS_PLMType extractedValue_type = extractPtr_15382->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_plmName = extractPtr_15382->mAssociatedValue1 ;
        const GALGAS_bool extractedValue_isFormalInputArg = extractPtr_15382->mAssociatedValue2 ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_14884.current (HERE).getter_mObjectState (HERE).objectCompare (GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 386)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticWarning (enumerator_14884.current (HERE).getter_lkey (HERE).getter_location (SOURCE_FILE ("universal-map.galgas", 387)), GALGAS_string ("'").add_operation (enumerator_14884.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("universal-map.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 387)).add_operation (GALGAS_string ("' is never read"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 387)), fixItArray1  COMMA_SOURCE_FILE ("universal-map.galgas", 387)) ;
        }
        const enumGalgasBool test_2 = extractedValue_isFormalInputArg.operator_not (SOURCE_FILE ("universal-map.galgas", 389)).boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          extensionSetter_generateRelease (ioArgument_ioInstructionGenerationList, extractedValue_type, extractedValue_plmName, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 390)) ;
          }
        }
      }
      break ;
    case GALGAS_valuedObject::kEnum_localVariable:
      {
        const cEnumAssociatedValues_valuedObject_localVariable * extractPtr_15698 = (const cEnumAssociatedValues_valuedObject_localVariable *) (enumerator_14884.current (HERE).getter_mValuedObject (HERE).unsafePointer ()) ;
        const GALGAS_PLMType extractedValue_type = extractPtr_15698->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_plmName = extractPtr_15698->mAssociatedValue1 ;
        GALGAS_bool test_3 = GALGAS_bool (kIsEqual, enumerator_14884.current (HERE).getter_mObjectState (HERE).objectCompare (GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("universal-map.galgas", 393)))) ;
        if (kBoolTrue == test_3.boolEnum ()) {
          test_3 = enumerator_14884.current (HERE).getter_mObjectShouldBeValuedAtEndOfScope (HERE) ;
        }
        const enumGalgasBool test_4 = test_3.boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (enumerator_14884.current (HERE).getter_lkey (HERE).getter_location (SOURCE_FILE ("universal-map.galgas", 394)), GALGAS_string ("'").add_operation (enumerator_14884.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("universal-map.galgas", 394)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 394)).add_operation (GALGAS_string ("' should be valued at the end of routine"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 394)), fixItArray5  COMMA_SOURCE_FILE ("universal-map.galgas", 394)) ;
        }
        {
        extensionSetter_generateRelease (ioArgument_ioInstructionGenerationList, extractedValue_type, extractedValue_plmName, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 396)) ;
        }
      }
      break ;
    }
    enumerator_14884.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Extension method '@universalValuedObjectMap openOverrideForSelectBlock'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_openOverrideForSelectBlock (GALGAS_universalValuedObjectMap & ioObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_referenceStateMap var_initialStateMap_15936 = GALGAS_referenceStateMap::constructor_emptyMap (SOURCE_FILE ("universal-map.galgas", 404)) ;
  cEnumerator_flatValuedObjectMap enumerator_15987 (ioObject.mProperty_mInternalPropertyAndRoutineMap, kENUMERATION_UP) ;
  while (enumerator_15987.hasCurrentObject ()) {
    switch (enumerator_15987.current (HERE).getter_mValuedObject (HERE).enumValue ()) {
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
    case GALGAS_valuedObject::kEnum_registerGroup:
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
        var_initialStateMap_15936.setter_insertKey (enumerator_15987.current (HERE).getter_lkey (HERE), enumerator_15987.current (HERE).getter_mObjectState (HERE), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 413)) ;
        }
      }
      break ;
    case GALGAS_valuedObject::kEnum_localVariable:
      {
        {
        var_initialStateMap_15936.setter_insertKey (enumerator_15987.current (HERE).getter_lkey (HERE), enumerator_15987.current (HERE).getter_mObjectState (HERE), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 415)) ;
        }
      }
      break ;
    }
    enumerator_15987.gotoNextObject () ;
  }
  ioObject.mProperty_mScopeStack.addAssign_operation (GALGAS_scopeKind::constructor_selectScope (SOURCE_FILE ("universal-map.galgas", 418)), GALGAS_bool (true), var_initialStateMap_15936, GALGAS_referenceStateMap::constructor_emptyMap (SOURCE_FILE ("universal-map.galgas", 418)), ioObject.mProperty_mLocalObjectList  COMMA_SOURCE_FILE ("universal-map.galgas", 418)) ;
  ioObject.mProperty_mLocalObjectList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("universal-map.galgas", 419)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Extension method '@universalValuedObjectMap openOverrideForRepeatBlock'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_openOverrideForRepeatBlock (GALGAS_universalValuedObjectMap & ioObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_referenceStateMap var_initialStateMap_16694 = GALGAS_referenceStateMap::constructor_emptyMap (SOURCE_FILE ("universal-map.galgas", 425)) ;
  cEnumerator_flatValuedObjectMap enumerator_16745 (ioObject.mProperty_mInternalPropertyAndRoutineMap, kENUMERATION_UP) ;
  while (enumerator_16745.hasCurrentObject ()) {
    switch (enumerator_16745.current (HERE).getter_mValuedObject (HERE).enumValue ()) {
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
    case GALGAS_valuedObject::kEnum_registerGroup:
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
        var_initialStateMap_16694.setter_insertKey (enumerator_16745.current (HERE).getter_lkey (HERE), enumerator_16745.current (HERE).getter_mObjectState (HERE), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 434)) ;
        }
      }
      break ;
    case GALGAS_valuedObject::kEnum_localVariable:
      {
        {
        var_initialStateMap_16694.setter_insertKey (enumerator_16745.current (HERE).getter_lkey (HERE), enumerator_16745.current (HERE).getter_mObjectState (HERE), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 436)) ;
        }
      }
      break ;
    }
    enumerator_16745.gotoNextObject () ;
  }
  ioObject.mProperty_mScopeStack.addAssign_operation (GALGAS_scopeKind::constructor_repeatScope (SOURCE_FILE ("universal-map.galgas", 439)), GALGAS_bool (true), var_initialStateMap_16694, GALGAS_referenceStateMap::constructor_emptyMap (SOURCE_FILE ("universal-map.galgas", 439)), ioObject.mProperty_mLocalObjectList  COMMA_SOURCE_FILE ("universal-map.galgas", 439)) ;
  ioObject.mProperty_mLocalObjectList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("universal-map.galgas", 440)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Extension method '@universalValuedObjectMap openBranch'                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_openBranch (GALGAS_universalValuedObjectMap & ioObject,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_referenceStateMap var_initialStateMap_17447 ;
  GALGAS_scopeKind joker_17422 ; // Joker input parameter
  GALGAS_bool joker_17425 ; // Joker input parameter
  GALGAS_referenceStateMap joker_17449_2 ; // Joker input parameter
  GALGAS_lstringlist joker_17449_1 ; // Joker input parameter
  ioObject.mProperty_mScopeStack.method_last (joker_17422, joker_17425, var_initialStateMap_17447, joker_17449_2, joker_17449_1, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 446)) ;
  cEnumerator_referenceStateMap enumerator_17495 (var_initialStateMap_17447, kENUMERATION_UP) ;
  while (enumerator_17495.hasCurrentObject ()) {
    {
    ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_setMObjectStateForKey (enumerator_17495.current_mState (HERE), enumerator_17495.current_lkey (HERE).getter_string (SOURCE_FILE ("universal-map.galgas", 448)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 448)) ;
    }
    enumerator_17495.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Extension method '@universalValuedObjectMap closeBranch'                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_closeBranch (GALGAS_universalValuedObjectMap & ioObject,
                                  const GALGAS_location constinArgument_inErrorLocation,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_scopeKind var_scopeKind_17826 ;
  GALGAS_bool var_firstBranch_17843 ;
  GALGAS_referenceStateMap var_initialStateMap_17864 ;
  GALGAS_referenceStateMap var_referenceStateMap_17887 ;
  GALGAS_lstringlist var_localObjectList_17908 ;
  {
  ioObject.mProperty_mScopeStack.setter_popLast (var_scopeKind_17826, var_firstBranch_17843, var_initialStateMap_17864, var_referenceStateMap_17887, var_localObjectList_17908, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 455)) ;
  }
  const enumGalgasBool test_0 = var_firstBranch_17843.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_referenceStateMap var_newReferenceStateMap_17975 = GALGAS_referenceStateMap::constructor_emptyMap (SOURCE_FILE ("universal-map.galgas", 457)) ;
    cEnumerator_flatValuedObjectMap enumerator_18028 (ioObject.mProperty_mInternalPropertyAndRoutineMap, kENUMERATION_UP) ;
    while (enumerator_18028.hasCurrentObject ()) {
      switch (enumerator_18028.current (HERE).getter_mValuedObject (HERE).enumValue ()) {
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
      case GALGAS_valuedObject::kEnum_registerGroup:
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
          var_newReferenceStateMap_17975.setter_insertKey (enumerator_18028.current (HERE).getter_lkey (HERE), enumerator_18028.current (HERE).getter_mObjectState (HERE), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 466)) ;
          }
        }
        break ;
      case GALGAS_valuedObject::kEnum_localVariable:
        {
          {
          var_newReferenceStateMap_17975.setter_insertKey (enumerator_18028.current (HERE).getter_lkey (HERE), enumerator_18028.current (HERE).getter_mObjectState (HERE), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 468)) ;
          }
        }
        break ;
      }
      enumerator_18028.gotoNextObject () ;
    }
    ioObject.mProperty_mScopeStack.addAssign_operation (var_scopeKind_17826, GALGAS_bool (false), var_initialStateMap_17864, var_newReferenceStateMap_17975, var_localObjectList_17908  COMMA_SOURCE_FILE ("universal-map.galgas", 471)) ;
  }else if (kBoolFalse == test_0) {
    switch (var_scopeKind_17826.enumValue ()) {
    case GALGAS_scopeKind::kNotBuilt:
      break ;
    case GALGAS_scopeKind::kEnum_selectScope:
      {
        cEnumerator_referenceStateMap enumerator_18642 (var_referenceStateMap_17887, kENUMERATION_UP) ;
        while (enumerator_18642.hasCurrentObject ()) {
          GALGAS_valuedObjectState var_currentObjectState_18725 ;
          GALGAS_bool joker_18727_2 ; // Joker input parameter
          GALGAS_valuedObject joker_18727_1 ; // Joker input parameter
          ioObject.mProperty_mInternalPropertyAndRoutineMap.method_searchKey (enumerator_18642.current_lkey (HERE), var_currentObjectState_18725, joker_18727_2, joker_18727_1, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 476)) ;
          const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_18642.current_mState (HERE).objectCompare (var_currentObjectState_18725)).boolEnum () ;
          if (kBoolTrue == test_1) {
          }else if (kBoolFalse == test_1) {
            const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_currentObjectState_18725.objectCompare (GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 478)))).operator_and (GALGAS_bool (kIsEqual, enumerator_18642.current_mState (HERE).objectCompare (GALGAS_valuedObjectState::constructor_hasReadValue (SOURCE_FILE ("universal-map.galgas", 478)))) COMMA_SOURCE_FILE ("universal-map.galgas", 478)).boolEnum () ;
            if (kBoolTrue == test_2) {
            }else if (kBoolFalse == test_2) {
              const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_currentObjectState_18725.objectCompare (GALGAS_valuedObjectState::constructor_hasReadValue (SOURCE_FILE ("universal-map.galgas", 479)))).operator_and (GALGAS_bool (kIsEqual, enumerator_18642.current_mState (HERE).objectCompare (GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 479)))) COMMA_SOURCE_FILE ("universal-map.galgas", 479)).boolEnum () ;
              if (kBoolTrue == test_3) {
                {
                var_referenceStateMap_17887.setter_setMStateForKey (GALGAS_valuedObjectState::constructor_hasReadValue (SOURCE_FILE ("universal-map.galgas", 480)), enumerator_18642.current_lkey (HERE).getter_string (SOURCE_FILE ("universal-map.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 480)) ;
                }
              }else if (kBoolFalse == test_3) {
                TC_Array <C_FixItDescription> fixItArray4 ;
                inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid state for object '").add_operation (enumerator_18642.current_lkey (HERE).getter_string (SOURCE_FILE ("universal-map.galgas", 483)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 483)).add_operation (GALGAS_string ("': found "), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 483)).add_operation (extensionGetter_string (var_currentObjectState_18725, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 483)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 483)).add_operation (GALGAS_string (", required "), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 483)).add_operation (extensionGetter_string (enumerator_18642.current_mState (HERE), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 483)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 483)), fixItArray4  COMMA_SOURCE_FILE ("universal-map.galgas", 482)) ;
              }
            }
          }
          enumerator_18642.gotoNextObject () ;
        }
        ioObject.mProperty_mScopeStack.addAssign_operation (var_scopeKind_17826, GALGAS_bool (false), var_initialStateMap_17864, var_referenceStateMap_17887, var_localObjectList_17908  COMMA_SOURCE_FILE ("universal-map.galgas", 486)) ;
      }
      break ;
    case GALGAS_scopeKind::kEnum_repeatScope:
      {
        cEnumerator_referenceStateMap enumerator_19430 (var_referenceStateMap_17887, kENUMERATION_UP) ;
        while (enumerator_19430.hasCurrentObject ()) {
          GALGAS_valuedObjectState var_currentObjectState_19513 ;
          GALGAS_bool joker_19515_2 ; // Joker input parameter
          GALGAS_valuedObject joker_19515_1 ; // Joker input parameter
          ioObject.mProperty_mInternalPropertyAndRoutineMap.method_searchKey (enumerator_19430.current_lkey (HERE), var_currentObjectState_19513, joker_19515_2, joker_19515_1, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 489)) ;
          const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_19430.current_mState (HERE).objectCompare (var_currentObjectState_19513)).boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid state for object '").add_operation (enumerator_19430.current_lkey (HERE).getter_string (SOURCE_FILE ("universal-map.galgas", 492)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 492)).add_operation (GALGAS_string ("': found "), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 492)).add_operation (extensionGetter_string (var_currentObjectState_19513, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 492)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 492)).add_operation (GALGAS_string (", required "), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 492)).add_operation (extensionGetter_string (enumerator_19430.current_mState (HERE), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 492)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 492)), fixItArray6  COMMA_SOURCE_FILE ("universal-map.galgas", 491)) ;
          }
          enumerator_19430.gotoNextObject () ;
        }
        ioObject.mProperty_mScopeStack.addAssign_operation (var_scopeKind_17826, GALGAS_bool (false), var_initialStateMap_17864, var_referenceStateMap_17887, var_localObjectList_17908  COMMA_SOURCE_FILE ("universal-map.galgas", 495)) ;
      }
      break ;
    }
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Extension method '@universalValuedObjectMap closeOverride'                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_closeOverride (GALGAS_universalValuedObjectMap & ioObject,
                                    const GALGAS_location constinArgument_inErrorLocation,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_referenceStateMap var_referenceStateMap_20105 ;
  GALGAS_lstringlist var_localObjectList_20126 ;
  {
  GALGAS_scopeKind joker_20075 ; // Joker input parameter
  GALGAS_bool joker_20078 ; // Joker input parameter
  GALGAS_referenceStateMap joker_20081 ; // Joker input parameter
  ioObject.mProperty_mScopeStack.setter_popLast (joker_20075, joker_20078, joker_20081, var_referenceStateMap_20105, var_localObjectList_20126, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 503)) ;
  }
  cEnumerator_referenceStateMap enumerator_20204 (var_referenceStateMap_20105, kENUMERATION_UP) ;
  while (enumerator_20204.hasCurrentObject ()) {
    {
    ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_setMObjectStateForKey (enumerator_20204.current_mState (HERE), enumerator_20204.current_lkey (HERE).getter_string (SOURCE_FILE ("universal-map.galgas", 506)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 506)) ;
    }
    enumerator_20204.gotoNextObject () ;
  }
  cEnumerator_lstringlist enumerator_20381 (ioObject.mProperty_mLocalObjectList, kENUMERATION_UP) ;
  while (enumerator_20381.hasCurrentObject ()) {
    GALGAS_valuedObjectState var_currentObjectState_20472 ;
    GALGAS_bool var_objectShouldBeValuedAtEndOfScope_20516 ;
    GALGAS_valuedObject var_possibleValuedObject_20548 ;
    ioObject.mProperty_mInternalPropertyAndRoutineMap.method_searchKey (enumerator_20381.current_mValue (HERE), var_currentObjectState_20472, var_objectShouldBeValuedAtEndOfScope_20516, var_possibleValuedObject_20548, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 510)) ;
    switch (var_possibleValuedObject_20548.enumValue ()) {
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
    case GALGAS_valuedObject::kEnum_registerGroup:
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
        const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_currentObjectState_20472.objectCompare (GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 523)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticWarning (constinArgument_inErrorLocation, GALGAS_string ("'").add_operation (enumerator_20381.current_mValue (HERE).getter_string (SOURCE_FILE ("universal-map.galgas", 524)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 524)).add_operation (GALGAS_string ("' is never read"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 524)), fixItArray1  COMMA_SOURCE_FILE ("universal-map.galgas", 524)) ;
        }
      }
      break ;
    case GALGAS_valuedObject::kEnum_localVariable:
      {
        GALGAS_bool test_2 = GALGAS_bool (kIsEqual, var_currentObjectState_20472.objectCompare (GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("universal-map.galgas", 527)))) ;
        if (kBoolTrue == test_2.boolEnum ()) {
          test_2 = var_objectShouldBeValuedAtEndOfScope_20516 ;
        }
        const enumGalgasBool test_3 = test_2.boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("'").add_operation (enumerator_20381.current_mValue (HERE).getter_string (SOURCE_FILE ("universal-map.galgas", 528)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 528)).add_operation (GALGAS_string ("' should be valued at the end of routine"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 528)), fixItArray4  COMMA_SOURCE_FILE ("universal-map.galgas", 528)) ;
        }
      }
      break ;
    }
    enumerator_20381.gotoNextObject () ;
  }
  cEnumerator_lstringlist enumerator_21173 (ioObject.mProperty_mLocalObjectList, kENUMERATION_UP) ;
  while (enumerator_21173.hasCurrentObject ()) {
    {
    GALGAS_valuedObjectState joker_21232_3 ; // Joker input parameter
    GALGAS_bool joker_21232_2 ; // Joker input parameter
    GALGAS_valuedObject joker_21232_1 ; // Joker input parameter
    ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_removeKey (enumerator_21173.current_mValue (HERE), joker_21232_3, joker_21232_2, joker_21232_1, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 534)) ;
    }
    enumerator_21173.gotoNextObject () ;
  }
  ioObject.mProperty_mLocalObjectList = var_localObjectList_20126 ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticEntityMap::GALGAS_staticEntityMap (void) :
mProperty_mStaticStringMap (),
mProperty_mGlobalStructuredConstantList () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticEntityMap::~ GALGAS_staticEntityMap (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticEntityMap::GALGAS_staticEntityMap (const GALGAS_staticStringMap & inOperand0,
                                                const GALGAS_globalStructuredConstantList & inOperand1) :
mProperty_mStaticStringMap (inOperand0),
mProperty_mGlobalStructuredConstantList (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticEntityMap GALGAS_staticEntityMap::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_staticEntityMap (GALGAS_staticStringMap::constructor_emptyMap (HERE),
                                 GALGAS_globalStructuredConstantList::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticEntityMap GALGAS_staticEntityMap::constructor_new (const GALGAS_staticStringMap & inOperand0,
                                                                const GALGAS_globalStructuredConstantList & inOperand1 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_staticEntityMap result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_staticEntityMap (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_staticEntityMap::isValid (void) const {
  return mProperty_mStaticStringMap.isValid () && mProperty_mGlobalStructuredConstantList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_staticEntityMap::drop (void) {
  mProperty_mStaticStringMap.drop () ;
  mProperty_mGlobalStructuredConstantList.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticStringMap GALGAS_staticEntityMap::getter_mStaticStringMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStaticStringMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalStructuredConstantList GALGAS_staticEntityMap::getter_mGlobalStructuredConstantList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGlobalStructuredConstantList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @staticEntityMap type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticEntityMap ("staticEntityMap",
                                        NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_staticEntityMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticEntityMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_staticEntityMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticEntityMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Extension method '@staticEntityMap findOrAddStaticString'                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_findOrAddStaticString (GALGAS_staticEntityMap & ioObject,
                                            GALGAS_string inArgument_inString,
                                            GALGAS_uint & outArgument_outIndex,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outIndex.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = ioObject.mProperty_mStaticStringMap.getter_hasKey (inArgument_inString COMMA_SOURCE_FILE ("context.galgas", 59)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioObject.mProperty_mStaticStringMap.method_searchKey (inArgument_inString.getter_nowhere (SOURCE_FILE ("context.galgas", 60)), outArgument_outIndex, inCompiler COMMA_SOURCE_FILE ("context.galgas", 60)) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outIndex = ioObject.mProperty_mStaticStringMap.getter_count (SOURCE_FILE ("context.galgas", 62)) ;
    {
    ioObject.mProperty_mStaticStringMap.setter_insertKey (inArgument_inString.getter_nowhere (SOURCE_FILE ("context.galgas", 63)), outArgument_outIndex, inCompiler COMMA_SOURCE_FILE ("context.galgas", 63)) ;
    }
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Extension Getter '@PLMType llvmTypeName'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string extensionGetter_llvmTypeName (const GALGAS_PLMType & inObject,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_PLMType temp_0 = inObject ;
  switch (temp_0.getter_kind (HERE).enumValue ()) {
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
      const cEnumAssociatedValues_typeKind_enumeration * extractPtr_1661 = (const cEnumAssociatedValues_typeKind_enumeration *) (temp_0.getter_kind (HERE).unsafePointer ()) ;
      const GALGAS_uint extractedValue_bitCount = extractPtr_1661->mAssociatedValue0 ;
      result_result = GALGAS_string ("i").add_operation (extractedValue_bitCount.getter_string (SOURCE_FILE ("types.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 35)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      const GALGAS_PLMType temp_1 = inObject ;
      result_result = GALGAS_string ("%").add_operation (temp_1.getter_llvmBaseTypeName (SOURCE_FILE ("types.galgas", 37)).getter_assemblerRepresentation (SOURCE_FILE ("types.galgas", 37)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 37)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_syncTool:
    {
      const GALGAS_PLMType temp_2 = inObject ;
      result_result = GALGAS_string ("%").add_operation (temp_2.getter_llvmBaseTypeName (SOURCE_FILE ("types.galgas", 39)).getter_assemblerRepresentation (SOURCE_FILE ("types.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 39)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_1912 = (const cEnumAssociatedValues_typeKind_integer *) (temp_0.getter_kind (HERE).unsafePointer ()) ;
      const GALGAS_uint extractedValue_bitCount = extractPtr_1912->mAssociatedValue3 ;
      result_result = GALGAS_string ("i").add_operation (extractedValue_bitCount.getter_string (SOURCE_FILE ("types.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 41)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_staticInteger:
    {
      result_result = GALGAS_string ("i32") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_opaque:
    {
      const cEnumAssociatedValues_typeKind_opaque * extractPtr_2017 = (const cEnumAssociatedValues_typeKind_opaque *) (temp_0.getter_kind (HERE).unsafePointer ()) ;
      const GALGAS_bigint extractedValue_bitCount = extractPtr_2017->mAssociatedValue0 ;
      result_result = GALGAS_string ("i").add_operation (extractedValue_bitCount.getter_string (SOURCE_FILE ("types.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 45)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_arrayType:
    {
      const GALGAS_PLMType temp_3 = inObject ;
      result_result = GALGAS_string ("%").add_operation (temp_3.getter_llvmBaseTypeName (SOURCE_FILE ("types.galgas", 47)).getter_assemblerRepresentation (SOURCE_FILE ("types.galgas", 47)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 47)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dynamicArrayType:
    {
      result_result = GALGAS_string ("%ptrtype") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_function:
    {
      const cEnumAssociatedValues_typeKind_function * extractPtr_2662 = (const cEnumAssociatedValues_typeKind_function *) (temp_0.getter_kind (HERE).unsafePointer ()) ;
      const GALGAS_routineDescriptor extractedValue_descriptor = extractPtr_2662->mAssociatedValue0 ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, extractedValue_descriptor.getter_returnTypeProxy (HERE).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("types.galgas", 51)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result_result = GALGAS_string ("void") ;
      }else if (kBoolFalse == test_4) {
        result_result = extensionGetter_llvmTypeName (extractedValue_descriptor.getter_returnTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("types.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 54)) ;
      }
      result_result.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 56)) ;
      cEnumerator_routineTypedSignature enumerator_2435 (extractedValue_descriptor.getter_signature (HERE), kENUMERATION_UP) ;
      while (enumerator_2435.hasCurrentObject ()) {
        result_result.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_2435.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("types.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 59)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 59)) ;
        switch (enumerator_2435.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
        case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
        case GALGAS_procFormalArgumentPassingMode::kEnum_output:
          {
            result_result.plusAssign_operation(GALGAS_string ("*"), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 61)) ;
          }
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_input:
          {
          }
          break ;
        }
        if (enumerator_2435.hasNextObject ()) {
          result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 64)) ;
        }
        enumerator_2435.gotoNextObject () ;
      }
      result_result.plusAssign_operation(GALGAS_string (")*"), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 66)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_pointer:
    {
      const cEnumAssociatedValues_typeKind_pointer * extractPtr_2731 = (const cEnumAssociatedValues_typeKind_pointer *) (temp_0.getter_kind (HERE).unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_pointee = extractPtr_2731->mAssociatedValue0 ;
      result_result = extensionGetter_llvmTypeName (extractedValue_pointee, inCompiler COMMA_SOURCE_FILE ("types.galgas", 68)).add_operation (GALGAS_string ("*"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 68)) ;
    }
    break ;
  }
//---
  return result_result ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Extension Getter '@PLMType equatable'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool extensionGetter_equatable (const GALGAS_PLMType & inObject,
                                       C_Compiler * /* inCompiler */
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = inObject.mProperty_attributes.getter_equatable (SOURCE_FILE ("types.galgas", 171)) ;
//---
  return result_result ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Extension Getter '@unifiedTypeMap-proxy instanciable'                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool extensionGetter_instanciable (const GALGAS_unifiedTypeMap_2D_proxy & inObject,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const GALGAS_unifiedTypeMap_2D_proxy temp_0 = inObject ;
  result_result = extensionGetter_instanciable (temp_0.getter_type (inCompiler COMMA_SOURCE_FILE ("types.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 177)) ;
//---
  return result_result ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Extension Getter '@PLMType instanciable'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool extensionGetter_instanciable (const GALGAS_PLMType & inObject,
                                          C_Compiler * /* inCompiler */
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = inObject.mProperty_attributes.getter_instanciable (SOURCE_FILE ("types.galgas", 183)) ;
//---
  return result_result ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Extension Getter '@unifiedTypeMap-proxy copyable'                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool extensionGetter_copyable (const GALGAS_unifiedTypeMap_2D_proxy & inObject,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const GALGAS_unifiedTypeMap_2D_proxy temp_0 = inObject ;
  result_result = extensionGetter_copyable (temp_0.getter_type (inCompiler COMMA_SOURCE_FILE ("types.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 189)) ;
//---
  return result_result ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Extension Getter '@PLMType copyable'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool extensionGetter_copyable (const GALGAS_PLMType & inObject,
                                      C_Compiler * /* inCompiler */
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = inObject.mProperty_attributes.getter_copyable (SOURCE_FILE ("types.galgas", 195)) ;
//---
  return result_result ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Extension method '@PLMType generateRetain'                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_generateRetain (const GALGAS_PLMType inObject,
                                     const GALGAS_string constinArgument_inPLMName,
                                     GALGAS_string & ioArgument_ioLLVMcode,
                                     GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_PLMType temp_0 = inObject ;
  GALGAS_string var_llvmTypeName_6867 = extensionGetter_llvmTypeName (temp_0, inCompiler COMMA_SOURCE_FILE ("types.galgas", 205)) ;
  GALGAS_string var_LLVMVariable_6908 = function_llvmNameForLocalVariable (constinArgument_inPLMName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 206)) ;
  const GALGAS_PLMType temp_1 = inObject ;
  const enumGalgasBool test_2 = temp_1.getter_kind (HERE).getter_isDynamicArrayType (SOURCE_FILE ("types.galgas", 207)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_string var_tempLLVMVariable_7015 = GALGAS_string ("%temp.").add_operation (constinArgument_inPLMName.getter_assemblerRepresentation (SOURCE_FILE ("types.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 208)).add_operation (GALGAS_string (".loaded."), inCompiler COMMA_SOURCE_FILE ("types.galgas", 208)).add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("types.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 208)) ;
    ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("types.galgas", 209)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_tempLLVMVariable_7015, inCompiler COMMA_SOURCE_FILE ("types.galgas", 210)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 210)).add_operation (var_llvmTypeName_6867, inCompiler COMMA_SOURCE_FILE ("types.galgas", 210)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 210)).add_operation (var_llvmTypeName_6867, inCompiler COMMA_SOURCE_FILE ("types.galgas", 210)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 210)).add_operation (var_LLVMVariable_6908, inCompiler COMMA_SOURCE_FILE ("types.galgas", 210)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 210)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.retain (").add_operation (var_llvmTypeName_6867, inCompiler COMMA_SOURCE_FILE ("types.galgas", 211)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 211)).add_operation (var_tempLLVMVariable_7015, inCompiler COMMA_SOURCE_FILE ("types.galgas", 211)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 211)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 211)) ;
  }else if (kBoolFalse == test_2) {
    const GALGAS_PLMType temp_3 = inObject ;
    GALGAS_arcAssignmentList var_arcAssignmentList_7394 = extensionGetter_arcList (temp_3, GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("types.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 213)) ;
    cEnumerator_arcAssignmentList enumerator_7482 (var_arcAssignmentList_7394, kENUMERATION_UP) ;
    while (enumerator_7482.hasCurrentObject ()) {
      GALGAS_string var_llvmVarName_7508 = GALGAS_string ("%arc.retain.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("types.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 215)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("types.galgas", 216)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmVarName_7508, inCompiler COMMA_SOURCE_FILE ("types.galgas", 217)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 217)).add_operation (var_llvmTypeName_6867, inCompiler COMMA_SOURCE_FILE ("types.galgas", 217)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 217)).add_operation (var_llvmTypeName_6867, inCompiler COMMA_SOURCE_FILE ("types.galgas", 217)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 217)).add_operation (var_LLVMVariable_6908, inCompiler COMMA_SOURCE_FILE ("types.galgas", 217)).add_operation (GALGAS_string (", i32 0"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 217)) ;
      cEnumerator_uintlist enumerator_7766 (enumerator_7482.current_mPropertyIndexPath (HERE), kENUMERATION_UP) ;
      while (enumerator_7766.hasCurrentObject ()) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_7766.current_mValue (HERE).getter_string (SOURCE_FILE ("types.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 219)) ;
        enumerator_7766.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ; ").add_operation (enumerator_7482.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("types.galgas", 221)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 221)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 221)) ;
      GALGAS_string var_propertyTypeLLVMName_7895 = extensionGetter_llvmTypeName (enumerator_7482.current_mPropertyType (HERE), inCompiler COMMA_SOURCE_FILE ("types.galgas", 222)) ;
      GALGAS_string var_llvmLoadedVarName_7953 = var_llvmVarName_7508.add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 223)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmLoadedVarName_7953, inCompiler COMMA_SOURCE_FILE ("types.galgas", 224)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 224)).add_operation (var_propertyTypeLLVMName_7895, inCompiler COMMA_SOURCE_FILE ("types.galgas", 224)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 224)).add_operation (var_propertyTypeLLVMName_7895, inCompiler COMMA_SOURCE_FILE ("types.galgas", 224)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 224)).add_operation (var_llvmVarName_7508, inCompiler COMMA_SOURCE_FILE ("types.galgas", 224)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 224)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 224)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.retain (").add_operation (var_propertyTypeLLVMName_7895, inCompiler COMMA_SOURCE_FILE ("types.galgas", 225)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 225)).add_operation (var_llvmLoadedVarName_7953, inCompiler COMMA_SOURCE_FILE ("types.galgas", 225)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 225)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 225)) ;
      enumerator_7482.gotoNextObject () ;
    }
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Extension method '@PLMType generateInsulate'                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_generateInsulate (const GALGAS_PLMType inObject,
                                       const GALGAS_string constinArgument_inPLMName,
                                       GALGAS_string & ioArgument_ioLLVMcode,
                                       GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_PLMType temp_0 = inObject ;
  GALGAS_string var_llvmTypeName_8503 = extensionGetter_llvmTypeName (temp_0, inCompiler COMMA_SOURCE_FILE ("types.galgas", 237)) ;
  GALGAS_string var_LLVMVariable_8544 = function_llvmNameForLocalVariable (constinArgument_inPLMName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 238)) ;
  const GALGAS_PLMType temp_1 = inObject ;
  const enumGalgasBool test_2 = temp_1.getter_kind (HERE).getter_isDynamicArrayType (SOURCE_FILE ("types.galgas", 239)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_string var_loadedVar_8644 = GALGAS_string ("%temp.").add_operation (constinArgument_inPLMName.getter_assemblerRepresentation (SOURCE_FILE ("types.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 240)).add_operation (GALGAS_string (".loaded."), inCompiler COMMA_SOURCE_FILE ("types.galgas", 240)).add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("types.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 240)) ;
    GALGAS_string var_insulatedVar_8762 = GALGAS_string ("%temp.").add_operation (constinArgument_inPLMName.getter_assemblerRepresentation (SOURCE_FILE ("types.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 241)).add_operation (GALGAS_string (".insulated."), inCompiler COMMA_SOURCE_FILE ("types.galgas", 241)).add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("types.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 241)) ;
    ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("types.galgas", 242)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_loadedVar_8644, inCompiler COMMA_SOURCE_FILE ("types.galgas", 243)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 243)).add_operation (var_llvmTypeName_8503, inCompiler COMMA_SOURCE_FILE ("types.galgas", 243)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 243)).add_operation (var_llvmTypeName_8503, inCompiler COMMA_SOURCE_FILE ("types.galgas", 243)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 243)).add_operation (var_LLVMVariable_8544, inCompiler COMMA_SOURCE_FILE ("types.galgas", 243)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 243)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 243)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_insulatedVar_8762, inCompiler COMMA_SOURCE_FILE ("types.galgas", 244)).add_operation (GALGAS_string (" = call "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 244)).add_operation (var_llvmTypeName_8503, inCompiler COMMA_SOURCE_FILE ("types.galgas", 244)).add_operation (GALGAS_string (" @arc.insulate ("), inCompiler COMMA_SOURCE_FILE ("types.galgas", 244)).add_operation (var_llvmTypeName_8503, inCompiler COMMA_SOURCE_FILE ("types.galgas", 244)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 244)).add_operation (var_loadedVar_8644, inCompiler COMMA_SOURCE_FILE ("types.galgas", 244)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 244)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 244)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmTypeName_8503, inCompiler COMMA_SOURCE_FILE ("types.galgas", 245)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 245)).add_operation (var_insulatedVar_8762, inCompiler COMMA_SOURCE_FILE ("types.galgas", 245)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 245)).add_operation (var_llvmTypeName_8503, inCompiler COMMA_SOURCE_FILE ("types.galgas", 245)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 245)).add_operation (var_LLVMVariable_8544, inCompiler COMMA_SOURCE_FILE ("types.galgas", 245)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 245)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 245)) ;
  }else if (kBoolFalse == test_2) {
    const GALGAS_PLMType temp_3 = inObject ;
    GALGAS_arcAssignmentList var_arcAssignmentList_9290 = extensionGetter_arcList (temp_3, GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("types.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 247)) ;
    cEnumerator_arcAssignmentList enumerator_9378 (var_arcAssignmentList_9290, kENUMERATION_UP) ;
    while (enumerator_9378.hasCurrentObject ()) {
      GALGAS_string var_llvmVarName_9404 = GALGAS_string ("%arc.release.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("types.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 249)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("types.galgas", 250)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmVarName_9404, inCompiler COMMA_SOURCE_FILE ("types.galgas", 251)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 251)).add_operation (var_llvmTypeName_8503, inCompiler COMMA_SOURCE_FILE ("types.galgas", 251)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 251)).add_operation (var_llvmTypeName_8503, inCompiler COMMA_SOURCE_FILE ("types.galgas", 251)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 251)).add_operation (var_LLVMVariable_8544, inCompiler COMMA_SOURCE_FILE ("types.galgas", 251)).add_operation (GALGAS_string (", i32 0"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 251)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 251)) ;
      cEnumerator_uintlist enumerator_9663 (enumerator_9378.current_mPropertyIndexPath (HERE), kENUMERATION_UP) ;
      while (enumerator_9663.hasCurrentObject ()) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_9663.current_mValue (HERE).getter_string (SOURCE_FILE ("types.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 253)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 253)) ;
        enumerator_9663.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ; ").add_operation (enumerator_9378.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("types.galgas", 255)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 255)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 255)) ;
      GALGAS_string var_propertyTypeLLVMName_9792 = extensionGetter_llvmTypeName (enumerator_9378.current_mPropertyType (HERE), inCompiler COMMA_SOURCE_FILE ("types.galgas", 256)) ;
      GALGAS_string var_loadedVar_9842 = var_llvmVarName_9404.add_operation (GALGAS_string (".loaded."), inCompiler COMMA_SOURCE_FILE ("types.galgas", 257)).add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("types.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 257)) ;
      GALGAS_string var_insulatedVar_9925 = var_llvmVarName_9404.add_operation (GALGAS_string (".insulated."), inCompiler COMMA_SOURCE_FILE ("types.galgas", 258)).add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("types.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 258)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("types.galgas", 259)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_loadedVar_9842, inCompiler COMMA_SOURCE_FILE ("types.galgas", 260)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 260)).add_operation (var_propertyTypeLLVMName_9792, inCompiler COMMA_SOURCE_FILE ("types.galgas", 260)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 260)).add_operation (var_propertyTypeLLVMName_9792, inCompiler COMMA_SOURCE_FILE ("types.galgas", 260)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 260)).add_operation (var_llvmVarName_9404, inCompiler COMMA_SOURCE_FILE ("types.galgas", 260)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 260)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 260)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_insulatedVar_9925, inCompiler COMMA_SOURCE_FILE ("types.galgas", 261)).add_operation (GALGAS_string (" = call "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 261)).add_operation (var_propertyTypeLLVMName_9792, inCompiler COMMA_SOURCE_FILE ("types.galgas", 261)).add_operation (GALGAS_string (" @arc.insulate ("), inCompiler COMMA_SOURCE_FILE ("types.galgas", 261)).add_operation (var_propertyTypeLLVMName_9792, inCompiler COMMA_SOURCE_FILE ("types.galgas", 261)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 261)).add_operation (var_loadedVar_9842, inCompiler COMMA_SOURCE_FILE ("types.galgas", 261)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 261)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 261)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_propertyTypeLLVMName_9792, inCompiler COMMA_SOURCE_FILE ("types.galgas", 262)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 262)).add_operation (var_insulatedVar_9925, inCompiler COMMA_SOURCE_FILE ("types.galgas", 262)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 262)).add_operation (var_propertyTypeLLVMName_9792, inCompiler COMMA_SOURCE_FILE ("types.galgas", 262)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 262)).add_operation (var_llvmVarName_9404, inCompiler COMMA_SOURCE_FILE ("types.galgas", 262)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 262)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 262)) ;
      enumerator_9378.gotoNextObject () ;
    }
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Extension method '@PLMType generateRelease'                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_generateRelease (const GALGAS_PLMType inObject,
                                      const GALGAS_string constinArgument_inPLMName,
                                      GALGAS_string & ioArgument_ioLLVMcode,
                                      GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_PLMType temp_0 = inObject ;
  GALGAS_string var_llvmTypeName_10716 = extensionGetter_llvmTypeName (temp_0, inCompiler COMMA_SOURCE_FILE ("types.galgas", 274)) ;
  GALGAS_string var_LLVMVariable_10757 = function_llvmNameForLocalVariable (constinArgument_inPLMName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 275)) ;
  const GALGAS_PLMType temp_1 = inObject ;
  const enumGalgasBool test_2 = temp_1.getter_kind (HERE).getter_isDynamicArrayType (SOURCE_FILE ("types.galgas", 276)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_string var_tempLLVMVariable_10864 = GALGAS_string ("%temp.").add_operation (constinArgument_inPLMName.getter_assemblerRepresentation (SOURCE_FILE ("types.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 277)).add_operation (GALGAS_string (".loaded."), inCompiler COMMA_SOURCE_FILE ("types.galgas", 277)).add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("types.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 277)) ;
    ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("types.galgas", 278)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_tempLLVMVariable_10864, inCompiler COMMA_SOURCE_FILE ("types.galgas", 279)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 279)).add_operation (var_llvmTypeName_10716, inCompiler COMMA_SOURCE_FILE ("types.galgas", 279)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 279)).add_operation (var_llvmTypeName_10716, inCompiler COMMA_SOURCE_FILE ("types.galgas", 279)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 279)).add_operation (var_LLVMVariable_10757, inCompiler COMMA_SOURCE_FILE ("types.galgas", 279)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 279)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 279)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.release (").add_operation (var_llvmTypeName_10716, inCompiler COMMA_SOURCE_FILE ("types.galgas", 280)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 280)).add_operation (var_tempLLVMVariable_10864, inCompiler COMMA_SOURCE_FILE ("types.galgas", 280)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 280)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 280)) ;
  }else if (kBoolFalse == test_2) {
    const GALGAS_PLMType temp_3 = inObject ;
    GALGAS_arcAssignmentList var_arcAssignmentList_11247 = extensionGetter_arcList (temp_3, GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("types.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 282)) ;
    cEnumerator_arcAssignmentList enumerator_11335 (var_arcAssignmentList_11247, kENUMERATION_UP) ;
    while (enumerator_11335.hasCurrentObject ()) {
      GALGAS_string var_llvmVarName_11361 = GALGAS_string ("%arc.release.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("types.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 284)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("types.galgas", 285)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmVarName_11361, inCompiler COMMA_SOURCE_FILE ("types.galgas", 286)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 286)).add_operation (var_llvmTypeName_10716, inCompiler COMMA_SOURCE_FILE ("types.galgas", 286)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 286)).add_operation (var_llvmTypeName_10716, inCompiler COMMA_SOURCE_FILE ("types.galgas", 286)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 286)).add_operation (var_LLVMVariable_10757, inCompiler COMMA_SOURCE_FILE ("types.galgas", 286)).add_operation (GALGAS_string (", i32 0"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 286)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 286)) ;
      cEnumerator_uintlist enumerator_11620 (enumerator_11335.current_mPropertyIndexPath (HERE), kENUMERATION_UP) ;
      while (enumerator_11620.hasCurrentObject ()) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_11620.current_mValue (HERE).getter_string (SOURCE_FILE ("types.galgas", 288)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 288)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 288)) ;
        enumerator_11620.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ; ").add_operation (enumerator_11335.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("types.galgas", 290)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 290)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 290)) ;
      GALGAS_string var_propertyTypeLLVMName_11749 = extensionGetter_llvmTypeName (enumerator_11335.current_mPropertyType (HERE), inCompiler COMMA_SOURCE_FILE ("types.galgas", 291)) ;
      GALGAS_string var_llvmLoadedVarName_11807 = var_llvmVarName_11361.add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 292)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmLoadedVarName_11807, inCompiler COMMA_SOURCE_FILE ("types.galgas", 293)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 293)).add_operation (var_propertyTypeLLVMName_11749, inCompiler COMMA_SOURCE_FILE ("types.galgas", 293)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 293)).add_operation (var_propertyTypeLLVMName_11749, inCompiler COMMA_SOURCE_FILE ("types.galgas", 293)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 293)).add_operation (var_llvmVarName_11361, inCompiler COMMA_SOURCE_FILE ("types.galgas", 293)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 293)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 293)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.release (").add_operation (var_propertyTypeLLVMName_11749, inCompiler COMMA_SOURCE_FILE ("types.galgas", 294)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 294)).add_operation (var_llvmLoadedVarName_11807, inCompiler COMMA_SOURCE_FILE ("types.galgas", 294)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 294)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 294)) ;
      enumerator_11335.gotoNextObject () ;
    }
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Extension Getter '@PLMType descriptionForHTMLFile'                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string extensionGetter_descriptionForHTMLFile (const GALGAS_PLMType & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_PLMType temp_0 = inObject ;
  switch (temp_0.getter_kind (HERE).enumValue ()) {
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
      const cEnumAssociatedValues_typeKind_integer * extractPtr_12784 = (const cEnumAssociatedValues_typeKind_integer *) (temp_0.getter_kind (HERE).unsafePointer ()) ;
      const GALGAS_bool extractedValue_unsigned = extractPtr_12784->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_bitCount = extractPtr_12784->mAssociatedValue3 ;
      GALGAS_string temp_1 ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, extractedValue_bitCount.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        temp_1 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_2) {
        temp_1 = GALGAS_string::makeEmptyString () ;
      }
      GALGAS_string temp_3 ;
      const enumGalgasBool test_4 = extractedValue_unsigned.boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = GALGAS_string ("unsigned") ;
      }else if (kBoolFalse == test_4) {
        temp_3 = GALGAS_string ("signed") ;
      }
      result_result = GALGAS_string ("Integer (").add_operation (extractedValue_bitCount.getter_string (SOURCE_FILE ("types.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 316)).add_operation (GALGAS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 316)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("types.galgas", 316)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 316)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("types.galgas", 317)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 317)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_staticInteger:
    {
      result_result = GALGAS_string ("Static Integer") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_opaque:
    {
      const cEnumAssociatedValues_typeKind_opaque * extractPtr_12918 = (const cEnumAssociatedValues_typeKind_opaque *) (temp_0.getter_kind (HERE).unsafePointer ()) ;
      const GALGAS_bigint extractedValue_bitCount = extractPtr_12918->mAssociatedValue0 ;
      result_result = GALGAS_string ("Opaque (").add_operation (extractedValue_bitCount.getter_string (SOURCE_FILE ("types.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 321)).add_operation (GALGAS_string (" bits)"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 321)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_arrayType:
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
  case GALGAS_typeKind::kEnum_pointer:
    {
      const cEnumAssociatedValues_typeKind_pointer * extractPtr_13155 = (const cEnumAssociatedValues_typeKind_pointer *) (temp_0.getter_kind (HERE).unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_pointee = extractPtr_13155->mAssociatedValue0 ;
      result_result = GALGAS_string ("Pointer to ").add_operation (extensionGetter_llvmTypeName (extractedValue_pointee, inCompiler COMMA_SOURCE_FILE ("types.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 329)) ;
    }
    break ;
  }
//---
  return result_result ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Extension Getter '@PLMType defaultAlignment'                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint extensionGetter_defaultAlignment (const GALGAS_PLMType & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_result ; // Returned variable
  const GALGAS_PLMType temp_0 = inObject ;
  switch (temp_0.getter_kind (HERE).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_void:
    {
      result_result = GALGAS_uint ((uint32_t) 0U) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_boolean:
    {
      result_result = GALGAS_uint ((uint32_t) 1U) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_literalString:
    {
      result_result = GALGAS_uint ((uint32_t) 4U) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
      const cEnumAssociatedValues_typeKind_enumeration * extractPtr_13603 = (const cEnumAssociatedValues_typeKind_enumeration *) (temp_0.getter_kind (HERE).unsafePointer ()) ;
      const GALGAS_uint extractedValue_bitCount = extractPtr_13603->mAssociatedValue0 ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsInfOrEqual, extractedValue_bitCount.objectCompare (GALGAS_uint ((uint32_t) 8U))).boolEnum () ;
      if (kBoolTrue == test_1) {
        result_result = GALGAS_uint ((uint32_t) 1U) ;
      }else if (kBoolFalse == test_1) {
        const enumGalgasBool test_2 = GALGAS_bool (kIsInfOrEqual, extractedValue_bitCount.objectCompare (GALGAS_uint ((uint32_t) 16U))).boolEnum () ;
        if (kBoolTrue == test_2) {
          result_result = GALGAS_uint ((uint32_t) 2U) ;
        }else if (kBoolFalse == test_2) {
          result_result = GALGAS_uint ((uint32_t) 4U) ;
        }
      }
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      result_result = GALGAS_uint ((uint32_t) 4U) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_syncTool:
    {
      result_result = GALGAS_uint ((uint32_t) 4U) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_13839 = (const cEnumAssociatedValues_typeKind_integer *) (temp_0.getter_kind (HERE).unsafePointer ()) ;
      const GALGAS_uint extractedValue_bitCount = extractPtr_13839->mAssociatedValue3 ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsInfOrEqual, extractedValue_bitCount.objectCompare (GALGAS_uint ((uint32_t) 8U))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result_result = GALGAS_uint ((uint32_t) 1U) ;
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsInfOrEqual, extractedValue_bitCount.objectCompare (GALGAS_uint ((uint32_t) 16U))).boolEnum () ;
        if (kBoolTrue == test_4) {
          result_result = GALGAS_uint ((uint32_t) 2U) ;
        }else if (kBoolFalse == test_4) {
          result_result = GALGAS_uint ((uint32_t) 4U) ;
        }
      }
    }
    break ;
  case GALGAS_typeKind::kEnum_staticInteger:
    {
      result_result = GALGAS_uint ((uint32_t) 0U) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_opaque:
    {
      const cEnumAssociatedValues_typeKind_opaque * extractPtr_14036 = (const cEnumAssociatedValues_typeKind_opaque *) (temp_0.getter_kind (HERE).unsafePointer ()) ;
      const GALGAS_bigint extractedValue_bitCount = extractPtr_14036->mAssociatedValue0 ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsInfOrEqual, extractedValue_bitCount.objectCompare (GALGAS_uint ((uint32_t) 8U).getter_bigint (SOURCE_FILE ("types.galgas", 366)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        result_result = GALGAS_uint ((uint32_t) 1U) ;
      }else if (kBoolFalse == test_5) {
        const enumGalgasBool test_6 = GALGAS_bool (kIsInfOrEqual, extractedValue_bitCount.objectCompare (GALGAS_uint ((uint32_t) 16U).getter_bigint (SOURCE_FILE ("types.galgas", 368)))).boolEnum () ;
        if (kBoolTrue == test_6) {
          result_result = GALGAS_uint ((uint32_t) 2U) ;
        }else if (kBoolFalse == test_6) {
          result_result = GALGAS_uint ((uint32_t) 4U) ;
        }
      }
    }
    break ;
  case GALGAS_typeKind::kEnum_arrayType:
    {
      const cEnumAssociatedValues_typeKind_arrayType * extractPtr_14115 = (const cEnumAssociatedValues_typeKind_arrayType *) (temp_0.getter_kind (HERE).unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_elementType = extractPtr_14115->mAssociatedValue0 ;
      result_result = extensionGetter_defaultAlignment (extractedValue_elementType, inCompiler COMMA_SOURCE_FILE ("types.galgas", 374)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dynamicArrayType:
    {
      result_result = GALGAS_uint ((uint32_t) 4U) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_function:
    {
      result_result = GALGAS_uint ((uint32_t) 4U) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_pointer:
    {
      result_result = GALGAS_uint ((uint32_t) 4U) ;
    }
    break ;
  }
//---
  return result_result ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         Extension Getter '@PLMType arcList'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arcAssignmentList extensionGetter_arcList (const GALGAS_PLMType & inObject,
                                                  const GALGAS_uintlist & constinArgument_inPropertyIndexPath,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_arcAssignmentList result_result ; // Returned variable
  result_result = GALGAS_arcAssignmentList::constructor_emptyList (SOURCE_FILE ("types.galgas", 395)) ;
  const enumGalgasBool test_0 = inObject.mProperty_kind.getter_isDynamicArrayType (SOURCE_FILE ("types.galgas", 396)).boolEnum () ;
  if (kBoolTrue == test_0) {
    const GALGAS_PLMType temp_1 = inObject ;
    result_result.addAssign_operation (GALGAS_string::makeEmptyString (), temp_1, constinArgument_inPropertyIndexPath  COMMA_SOURCE_FILE ("types.galgas", 397)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = inObject.mProperty_kind.getter_isStructure (SOURCE_FILE ("types.galgas", 398)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_propertyList var_propertyList_14870 ;
      inObject.mProperty_kind.method_structure (var_propertyList_14870, inCompiler COMMA_SOURCE_FILE ("types.galgas", 399)) ;
      cEnumerator_propertyList enumerator_14923 (var_propertyList_14870, kENUMERATION_UP) ;
      GALGAS_uint index_14879 ((uint32_t) 0) ;
      while (enumerator_14923.hasCurrentObject ()) {
        GALGAS_uintlist temp_3 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("types.galgas", 401)) ;
        temp_3.addAssign_operation (index_14879  COMMA_SOURCE_FILE ("types.galgas", 401)) ;
        GALGAS_uintlist var_indexPath_14952 = constinArgument_inPropertyIndexPath.add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("types.galgas", 401)) ;
        result_result.plusAssign_operation(extensionGetter_arcList (enumerator_14923.current_mType (HERE), var_indexPath_14952, inCompiler COMMA_SOURCE_FILE ("types.galgas", 402)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 402)) ;
        enumerator_14923.gotoNextObject () ;
        index_14879.increment_operation (inCompiler  COMMA_SOURCE_FILE ("types.galgas", 400)) ;
      }
    }
  }
//---
  return result_result ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Extension Getter '@PLMType deinitNeeded'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool extensionGetter_deinitNeeded (const GALGAS_PLMType & inObject,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = inObject.mProperty_kind.getter_isDynamicArrayType (SOURCE_FILE ("types.galgas", 410)) ;
  const enumGalgasBool test_0 = inObject.mProperty_kind.getter_isStructure (SOURCE_FILE ("types.galgas", 411)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_propertyList var_propertyList_15343 ;
    inObject.mProperty_kind.method_structure (var_propertyList_15343, inCompiler COMMA_SOURCE_FILE ("types.galgas", 412)) ;
    cEnumerator_propertyList enumerator_15396 (var_propertyList_15343, kENUMERATION_UP) ;
    bool bool_1 = result_result.operator_not (SOURCE_FILE ("types.galgas", 413)).isValidAndTrue () ;
    if (enumerator_15396.hasCurrentObject () && bool_1) {
      while (enumerator_15396.hasCurrentObject () && bool_1) {
        result_result = extensionGetter_deinitNeeded (enumerator_15396.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("types.galgas", 414)) ;
        enumerator_15396.gotoNextObject () ;
        if (enumerator_15396.hasCurrentObject ()) {
          bool_1 = result_result.operator_not (SOURCE_FILE ("types.galgas", 413)).isValidAndTrue () ;
        }
      }
    }
  }
//---
  return result_result ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Extension method '@PLMType generateLLVMTypeDefinition'                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_generateLLVMTypeDefinition (const GALGAS_PLMType inObject,
                                                 GALGAS_string & ioArgument_ioLLVMcode,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_PLMType temp_0 = inObject ;
  switch (temp_0.getter_kind (HERE).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_void:
    {
    }
    break ;
  case GALGAS_typeKind::kEnum_boolean:
    {
    }
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
    }
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      const cEnumAssociatedValues_typeKind_structure * extractPtr_18988 = (const cEnumAssociatedValues_typeKind_structure *) (temp_0.getter_kind (HERE).unsafePointer ()) ;
      const GALGAS_propertyList extractedValue_propertyList = extractPtr_18988->mAssociatedValue0 ;
      const GALGAS_PLMType temp_1 = inObject ;
      ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (temp_1, inCompiler COMMA_SOURCE_FILE ("types.galgas", 497)).add_operation (GALGAS_string (" = type {"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 497)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 497)) ;
      cEnumerator_propertyList enumerator_18879 (extractedValue_propertyList, kENUMERATION_UP) ;
      while (enumerator_18879.hasCurrentObject ()) {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_18879.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("types.galgas", 499)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 499)) ;
        if (enumerator_18879.hasNextObject ()) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 500)) ;
        }
        enumerator_18879.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 502)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_syncTool:
    {
      const cEnumAssociatedValues_typeKind_syncTool * extractPtr_19209 = (const cEnumAssociatedValues_typeKind_syncTool *) (temp_0.getter_kind (HERE).unsafePointer ()) ;
      const GALGAS_propertyList extractedValue_propertyList = extractPtr_19209->mAssociatedValue0 ;
      const GALGAS_PLMType temp_2 = inObject ;
      ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (temp_2, inCompiler COMMA_SOURCE_FILE ("types.galgas", 504)).add_operation (GALGAS_string (" = type {"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 504)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 504)) ;
      cEnumerator_propertyList enumerator_19100 (extractedValue_propertyList, kENUMERATION_UP) ;
      while (enumerator_19100.hasCurrentObject ()) {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_19100.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("types.galgas", 506)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 506)) ;
        if (enumerator_19100.hasNextObject ()) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 507)) ;
        }
        enumerator_19100.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 509)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_literalString:
    {
    }
    break ;
  case GALGAS_typeKind::kEnum_staticInteger:
    {
    }
    break ;
  case GALGAS_typeKind::kEnum_opaque:
    {
    }
    break ;
  case GALGAS_typeKind::kEnum_arrayType:
    {
      const cEnumAssociatedValues_typeKind_arrayType * extractPtr_19429 = (const cEnumAssociatedValues_typeKind_arrayType *) (temp_0.getter_kind (HERE).unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_elementType = extractPtr_19429->mAssociatedValue0 ;
      const GALGAS_bigint extractedValue_arraySize = extractPtr_19429->mAssociatedValue1 ;
      const GALGAS_PLMType temp_3 = inObject ;
      ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (temp_3, inCompiler COMMA_SOURCE_FILE ("types.galgas", 514)).add_operation (GALGAS_string (" = type ["), inCompiler COMMA_SOURCE_FILE ("types.galgas", 514)).add_operation (extractedValue_arraySize.getter_string (SOURCE_FILE ("types.galgas", 514)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 514)).add_operation (GALGAS_string (" x "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 514)).add_operation (extensionGetter_llvmTypeName (extractedValue_elementType, inCompiler COMMA_SOURCE_FILE ("types.galgas", 514)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 514)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 514)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 514)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dynamicArrayType:
    {
    }
    break ;
  case GALGAS_typeKind::kEnum_function:
    {
    }
    break ;
  case GALGAS_typeKind::kEnum_pointer:
    {
      const cEnumAssociatedValues_typeKind_pointer * extractPtr_19515 = (const cEnumAssociatedValues_typeKind_pointer *) (temp_0.getter_kind (HERE).unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_pointee = extractPtr_19515->mAssociatedValue0 ;
    }
    break ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticTemporariesStruct::GALGAS_semanticTemporariesStruct (void) :
mProperty_mTemporaryIndex (),
mProperty_mPanicSetupRoutinePriorityMap (),
mProperty_mPanicLoopRoutinePriorityMap (),
mProperty_mSubprogramInvocationGraph (),
mProperty_mStaticArrayMapForTemporaries (),
mProperty_mInitializedDriverSet () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticTemporariesStruct::~ GALGAS_semanticTemporariesStruct (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticTemporariesStruct::GALGAS_semanticTemporariesStruct (const GALGAS_uint & inOperand0,
                                                                    const GALGAS_panicRoutinePriorityMap & inOperand1,
                                                                    const GALGAS_panicRoutinePriorityMap & inOperand2,
                                                                    const GALGAS_subprogramInvocationGraph & inOperand3,
                                                                    const GALGAS_staticListInvokedFunctionSetMap & inOperand4,
                                                                    const GALGAS_stringset & inOperand5) :
mProperty_mTemporaryIndex (inOperand0),
mProperty_mPanicSetupRoutinePriorityMap (inOperand1),
mProperty_mPanicLoopRoutinePriorityMap (inOperand2),
mProperty_mSubprogramInvocationGraph (inOperand3),
mProperty_mStaticArrayMapForTemporaries (inOperand4),
mProperty_mInitializedDriverSet (inOperand5) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticTemporariesStruct GALGAS_semanticTemporariesStruct::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_semanticTemporariesStruct (GALGAS_uint::constructor_default (HERE),
                                           GALGAS_panicRoutinePriorityMap::constructor_emptyMap (HERE),
                                           GALGAS_panicRoutinePriorityMap::constructor_emptyMap (HERE),
                                           GALGAS_subprogramInvocationGraph::constructor_emptyGraph (HERE),
                                           GALGAS_staticListInvokedFunctionSetMap::constructor_emptyMap (HERE),
                                           GALGAS_stringset::constructor_emptySet (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticTemporariesStruct GALGAS_semanticTemporariesStruct::constructor_new (const GALGAS_uint & inOperand0,
                                                                                    const GALGAS_panicRoutinePriorityMap & inOperand1,
                                                                                    const GALGAS_panicRoutinePriorityMap & inOperand2,
                                                                                    const GALGAS_subprogramInvocationGraph & inOperand3,
                                                                                    const GALGAS_staticListInvokedFunctionSetMap & inOperand4,
                                                                                    const GALGAS_stringset & inOperand5 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticTemporariesStruct result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_semanticTemporariesStruct (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    result = mProperty_mSubprogramInvocationGraph.objectCompare (inOperand.mProperty_mSubprogramInvocationGraph) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStaticArrayMapForTemporaries.objectCompare (inOperand.mProperty_mStaticArrayMapForTemporaries) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInitializedDriverSet.objectCompare (inOperand.mProperty_mInitializedDriverSet) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_semanticTemporariesStruct::isValid (void) const {
  return mProperty_mTemporaryIndex.isValid () && mProperty_mPanicSetupRoutinePriorityMap.isValid () && mProperty_mPanicLoopRoutinePriorityMap.isValid () && mProperty_mSubprogramInvocationGraph.isValid () && mProperty_mStaticArrayMapForTemporaries.isValid () && mProperty_mInitializedDriverSet.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_semanticTemporariesStruct::drop (void) {
  mProperty_mTemporaryIndex.drop () ;
  mProperty_mPanicSetupRoutinePriorityMap.drop () ;
  mProperty_mPanicLoopRoutinePriorityMap.drop () ;
  mProperty_mSubprogramInvocationGraph.drop () ;
  mProperty_mStaticArrayMapForTemporaries.drop () ;
  mProperty_mInitializedDriverSet.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    mProperty_mSubprogramInvocationGraph.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStaticArrayMapForTemporaries.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInitializedDriverSet.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_semanticTemporariesStruct::getter_mTemporaryIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTemporaryIndex ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_panicRoutinePriorityMap GALGAS_semanticTemporariesStruct::getter_mPanicSetupRoutinePriorityMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicSetupRoutinePriorityMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_panicRoutinePriorityMap GALGAS_semanticTemporariesStruct::getter_mPanicLoopRoutinePriorityMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicLoopRoutinePriorityMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_subprogramInvocationGraph GALGAS_semanticTemporariesStruct::getter_mSubprogramInvocationGraph (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSubprogramInvocationGraph ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListInvokedFunctionSetMap GALGAS_semanticTemporariesStruct::getter_mStaticArrayMapForTemporaries (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStaticArrayMapForTemporaries ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringset GALGAS_semanticTemporariesStruct::getter_mInitializedDriverSet (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInitializedDriverSet ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @semanticTemporariesStruct type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticTemporariesStruct ("semanticTemporariesStruct",
                                                  NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_semanticTemporariesStruct::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticTemporariesStruct ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_semanticTemporariesStruct::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticTemporariesStruct (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Extension method '@semanticTemporariesStruct newTempLLVMVar'                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_newTempLLVMVar (GALGAS_semanticTemporariesStruct & ioObject,
                                     GALGAS_string & outArgument_outTempLLVMVar,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTempLLVMVar.drop () ; // Release 'out' argument
  outArgument_outTempLLVMVar = GALGAS_string ("%temp.").add_operation (ioObject.mProperty_mTemporaryIndex.getter_string (SOURCE_FILE ("semantic-analysis.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 61)) ;
  ioObject.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 62)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineMapIR_2D_element::GALGAS_routineMapIR_2D_element (void) :
mProperty_lkey (),
mProperty_mReceiverType (),
mProperty_mRoutineNameForGeneration (),
mProperty_mFormalArgumentListForGeneration (),
mProperty_mAllocaList (),
mProperty_mInstructionGenerationList (),
mProperty_mIsRequired (),
mProperty_mWarnIfUnused (),
mProperty_mExportedFunction (),
mProperty_mKind (),
mProperty_mReturnType (),
mProperty_mAppendFileAndLineArgumentForPanicLocation () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineMapIR_2D_element::~ GALGAS_routineMapIR_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineMapIR_2D_element::GALGAS_routineMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_PLMType & inOperand1,
                                                                const GALGAS_lstring & inOperand2,
                                                                const GALGAS_routineFormalArgumentListIR & inOperand3,
                                                                const GALGAS_allocaList & inOperand4,
                                                                const GALGAS_instructionListIR & inOperand5,
                                                                const GALGAS_bool & inOperand6,
                                                                const GALGAS_bool & inOperand7,
                                                                const GALGAS_bool & inOperand8,
                                                                const GALGAS_routineKind & inOperand9,
                                                                const GALGAS_PLMType & inOperand10,
                                                                const GALGAS_bool & inOperand11) :
mProperty_lkey (inOperand0),
mProperty_mReceiverType (inOperand1),
mProperty_mRoutineNameForGeneration (inOperand2),
mProperty_mFormalArgumentListForGeneration (inOperand3),
mProperty_mAllocaList (inOperand4),
mProperty_mInstructionGenerationList (inOperand5),
mProperty_mIsRequired (inOperand6),
mProperty_mWarnIfUnused (inOperand7),
mProperty_mExportedFunction (inOperand8),
mProperty_mKind (inOperand9),
mProperty_mReturnType (inOperand10),
mProperty_mAppendFileAndLineArgumentForPanicLocation (inOperand11) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineMapIR_2D_element GALGAS_routineMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_PLMType & inOperand1,
                                                                                const GALGAS_lstring & inOperand2,
                                                                                const GALGAS_routineFormalArgumentListIR & inOperand3,
                                                                                const GALGAS_allocaList & inOperand4,
                                                                                const GALGAS_instructionListIR & inOperand5,
                                                                                const GALGAS_bool & inOperand6,
                                                                                const GALGAS_bool & inOperand7,
                                                                                const GALGAS_bool & inOperand8,
                                                                                const GALGAS_routineKind & inOperand9,
                                                                                const GALGAS_PLMType & inOperand10,
                                                                                const GALGAS_bool & inOperand11 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineMapIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid ()) {
    result = GALGAS_routineMapIR_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_routineMapIR_2D_element::objectCompare (const GALGAS_routineMapIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mReceiverType.objectCompare (inOperand.mProperty_mReceiverType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRoutineNameForGeneration.objectCompare (inOperand.mProperty_mRoutineNameForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentListForGeneration.objectCompare (inOperand.mProperty_mFormalArgumentListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAllocaList.objectCompare (inOperand.mProperty_mAllocaList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInstructionGenerationList.objectCompare (inOperand.mProperty_mInstructionGenerationList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsRequired.objectCompare (inOperand.mProperty_mIsRequired) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mWarnIfUnused.objectCompare (inOperand.mProperty_mWarnIfUnused) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExportedFunction.objectCompare (inOperand.mProperty_mExportedFunction) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mKind.objectCompare (inOperand.mProperty_mKind) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mReturnType.objectCompare (inOperand.mProperty_mReturnType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAppendFileAndLineArgumentForPanicLocation.objectCompare (inOperand.mProperty_mAppendFileAndLineArgumentForPanicLocation) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_routineMapIR_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mReceiverType.isValid () && mProperty_mRoutineNameForGeneration.isValid () && mProperty_mFormalArgumentListForGeneration.isValid () && mProperty_mAllocaList.isValid () && mProperty_mInstructionGenerationList.isValid () && mProperty_mIsRequired.isValid () && mProperty_mWarnIfUnused.isValid () && mProperty_mExportedFunction.isValid () && mProperty_mKind.isValid () && mProperty_mReturnType.isValid () && mProperty_mAppendFileAndLineArgumentForPanicLocation.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineMapIR_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mReceiverType.drop () ;
  mProperty_mRoutineNameForGeneration.drop () ;
  mProperty_mFormalArgumentListForGeneration.drop () ;
  mProperty_mAllocaList.drop () ;
  mProperty_mInstructionGenerationList.drop () ;
  mProperty_mIsRequired.drop () ;
  mProperty_mWarnIfUnused.drop () ;
  mProperty_mExportedFunction.drop () ;
  mProperty_mKind.drop () ;
  mProperty_mReturnType.drop () ;
  mProperty_mAppendFileAndLineArgumentForPanicLocation.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineMapIR_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @routineMapIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mReceiverType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRoutineNameForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAllocaList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInstructionGenerationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsRequired.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mWarnIfUnused.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExportedFunction.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mReturnType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAppendFileAndLineArgumentForPanicLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_routineMapIR_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_routineMapIR_2D_element::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_routineMapIR_2D_element::getter_mRoutineNameForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineNameForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListIR GALGAS_routineMapIR_2D_element::getter_mFormalArgumentListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_allocaList GALGAS_routineMapIR_2D_element::getter_mAllocaList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAllocaList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListIR GALGAS_routineMapIR_2D_element::getter_mInstructionGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_routineMapIR_2D_element::getter_mIsRequired (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsRequired ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_routineMapIR_2D_element::getter_mWarnIfUnused (UNUSED_LOCATION_ARGS) const {
  return mProperty_mWarnIfUnused ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_routineMapIR_2D_element::getter_mExportedFunction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExportedFunction ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineKind GALGAS_routineMapIR_2D_element::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_routineMapIR_2D_element::getter_mReturnType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReturnType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_routineMapIR_2D_element::getter_mAppendFileAndLineArgumentForPanicLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAppendFileAndLineArgumentForPanicLocation ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @routineMapIR-element type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineMapIR_2D_element ("routineMapIR-element",
                                                NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_routineMapIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineMapIR_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_routineMapIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineMapIR_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineMapIR_2D_element GALGAS_routineMapIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_routineMapIR_2D_element result ;
  const GALGAS_routineMapIR_2D_element * p = (const GALGAS_routineMapIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineMapIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineMapIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_panicAST::GALGAS_panicAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_panicAST GALGAS_panicAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_panicAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                           GALGAS_instructionListAST::constructor_emptyList (HERE),
                                           GALGAS_location::constructor_nowhere (HERE),
                                           GALGAS_lbigint::constructor_default (HERE)
                                           COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_panicAST::GALGAS_panicAST (const cPtr_panicAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_panicAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_panicAST::getter_mIsSetup (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_panicAST * p = (const cPtr_panicAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicAST) ;
    result = p->mProperty_mIsSetup ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_panicAST::getter_mIsSetup (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsSetup ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListAST GALGAS_panicAST::getter_mPanicInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_panicAST * p = (const cPtr_panicAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicAST) ;
    result = p->mProperty_mPanicInstructionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListAST cPtr_panicAST::getter_mPanicInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_panicAST::getter_mEndOfPanicInstructions (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_panicAST * p = (const cPtr_panicAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicAST) ;
    result = p->mProperty_mEndOfPanicInstructions ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_panicAST::getter_mEndOfPanicInstructions (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfPanicInstructions ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lbigint GALGAS_panicAST::getter_mPriority (UNUSED_LOCATION_ARGS) const {
  GALGAS_lbigint result ;
  if (NULL != mObjectPtr) {
    const cPtr_panicAST * p = (const cPtr_panicAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicAST) ;
    result = p->mProperty_mPriority ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lbigint cPtr_panicAST::getter_mPriority (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPriority ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                          Pointer class for @panicAST class                                          *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_panicAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_panicAST (mProperty_mIsSetup, mProperty_mPanicInstructionList, mProperty_mEndOfPanicInstructions, mProperty_mPriority COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                   @panicAST type                                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_panicAST ("panicAST",
                                 & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_panicAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_panicAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_panicAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Extension method '@panicAST noteTypesInPrecedenceGraph'                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_panicAST_noteTypesInPrecedenceGraph> gExtensionMethodTable_panicAST_noteTypesInPrecedenceGraph ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_noteTypesInPrecedenceGraph (const int32_t inClassIndex,
                                                      extensionMethodSignature_panicAST_noteTypesInPrecedenceGraph inMethod) {
  gExtensionMethodTable_panicAST_noteTypesInPrecedenceGraph.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_panicAST_noteTypesInPrecedenceGraph (const cPtr_panicAST * inObject,
                                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_panicAST * object = inObject ;
  macroValidSharedObject (object, cPtr_panicAST) ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mProperty_mPanicInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 53)) ;
}
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_panicAST_noteTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_panicAST.mSlotID,
                                                   extensionMethod_panicAST_noteTypesInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_panicAST_noteTypesInPrecedenceGraph (void) {
  gExtensionMethodTable_panicAST_noteTypesInPrecedenceGraph.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_panicAST_noteTypesInPrecedenceGraph (defineExtensionMethod_panicAST_noteTypesInPrecedenceGraph,
                                                                freeExtensionMethod_panicAST_noteTypesInPrecedenceGraph) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedPanicRoutine::GALGAS_decoratedPanicRoutine (void) :
GALGAS_abstractDecoratedDeclaration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedPanicRoutine GALGAS_decoratedPanicRoutine::constructor_default (LOCATION_ARGS) {
  return GALGAS_decoratedPanicRoutine::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                        GALGAS_instructionListAST::constructor_emptyList (HERE),
                                                        GALGAS_location::constructor_nowhere (HERE),
                                                        GALGAS_lbigint::constructor_default (HERE)
                                                        COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedPanicRoutine::GALGAS_decoratedPanicRoutine (const cPtr_decoratedPanicRoutine * inSourcePtr) :
GALGAS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedPanicRoutine) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_decoratedPanicRoutine::getter_mIsSetup (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedPanicRoutine * p = (const cPtr_decoratedPanicRoutine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedPanicRoutine) ;
    result = p->mProperty_mIsSetup ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_decoratedPanicRoutine::getter_mIsSetup (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsSetup ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListAST GALGAS_decoratedPanicRoutine::getter_mPanicInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedPanicRoutine * p = (const cPtr_decoratedPanicRoutine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedPanicRoutine) ;
    result = p->mProperty_mPanicInstructionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListAST cPtr_decoratedPanicRoutine::getter_mPanicInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_decoratedPanicRoutine::getter_mEndOfPanicInstructions (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedPanicRoutine * p = (const cPtr_decoratedPanicRoutine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedPanicRoutine) ;
    result = p->mProperty_mEndOfPanicInstructions ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_decoratedPanicRoutine::getter_mEndOfPanicInstructions (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfPanicInstructions ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lbigint GALGAS_decoratedPanicRoutine::getter_mPriority (UNUSED_LOCATION_ARGS) const {
  GALGAS_lbigint result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedPanicRoutine * p = (const cPtr_decoratedPanicRoutine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedPanicRoutine) ;
    result = p->mProperty_mPriority ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lbigint cPtr_decoratedPanicRoutine::getter_mPriority (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPriority ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @decoratedPanicRoutine class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_decoratedPanicRoutine::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_decoratedPanicRoutine (mProperty_mIsSetup, mProperty_mPanicInstructionList, mProperty_mEndOfPanicInstructions, mProperty_mPriority COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @decoratedPanicRoutine type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedPanicRoutine ("decoratedPanicRoutine",
                                              & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_decoratedPanicRoutine::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedPanicRoutine ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_decoratedPanicRoutine::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedPanicRoutine (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_convertExpressionAST::GALGAS_convertExpressionAST (void) :
GALGAS_expressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_convertExpressionAST::GALGAS_convertExpressionAST (const cPtr_convertExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_convertExpressionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST GALGAS_convertExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_convertExpressionAST * p = (const cPtr_convertExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertExpressionAST) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST cPtr_convertExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_convertExpressionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_convertExpressionAST * p = (const cPtr_convertExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertExpressionAST) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_convertExpressionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_convertExpressionAST::getter_mEndOfExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_convertExpressionAST * p = (const cPtr_convertExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertExpressionAST) ;
    result = p->mProperty_mEndOfExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_convertExpressionAST::getter_mEndOfExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @convertExpressionAST class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_convertExpressionAST::cPtr_convertExpressionAST (const GALGAS_expressionAST & in_mExpression,
                                                      const GALGAS_lstring & in_mTypeName,
                                                      const GALGAS_location & in_mEndOfExpression
                                                      COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mExpression (in_mExpression),
mProperty_mTypeName (in_mTypeName),
mProperty_mEndOfExpression (in_mEndOfExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_convertExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_convertExpressionAST (mProperty_mExpression, mProperty_mTypeName, mProperty_mEndOfExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @convertExpressionAST type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_convertExpressionAST ("convertExpressionAST",
                                             & kTypeDescriptor_GALGAS_expressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_convertExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_convertExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_convertExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_convertExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_convertInstructionIR::GALGAS_convertInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_convertInstructionIR::GALGAS_convertInstructionIR (const cPtr_convertInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_convertInstructionIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_convertInstructionIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_convertInstructionIR * p = (const cPtr_convertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertInstructionIR) ;
    result = p->mProperty_mTarget ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR cPtr_convertInstructionIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTarget ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_convertInstructionIR::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_convertInstructionIR * p = (const cPtr_convertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertInstructionIR) ;
    result = p->mProperty_mOperand ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR cPtr_convertInstructionIR::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperand ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_convertInstructionIR::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_convertInstructionIR * p = (const cPtr_convertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertInstructionIR) ;
    result = p->mProperty_mLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_convertInstructionIR::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @convertInstructionIR class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_convertInstructionIR::cPtr_convertInstructionIR (const GALGAS_objectIR & in_mTarget,
                                                      const GALGAS_objectIR & in_mOperand,
                                                      const GALGAS_location & in_mLocation
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mTarget (in_mTarget),
mProperty_mOperand (in_mOperand),
mProperty_mLocation (in_mLocation) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_convertInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_convertInstructionIR (mProperty_mTarget, mProperty_mOperand, mProperty_mLocation COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @convertInstructionIR type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_convertInstructionIR ("convertInstructionIR",
                                             & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_convertInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_convertInstructionIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_convertInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_convertInstructionIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extendExpressionAST::GALGAS_extendExpressionAST (void) :
GALGAS_expressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extendExpressionAST::GALGAS_extendExpressionAST (const cPtr_extendExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extendExpressionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST GALGAS_extendExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_extendExpressionAST * p = (const cPtr_extendExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendExpressionAST) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST cPtr_extendExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_extendExpressionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_extendExpressionAST * p = (const cPtr_extendExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendExpressionAST) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_extendExpressionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_extendExpressionAST::getter_mEndOfExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_extendExpressionAST * p = (const cPtr_extendExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendExpressionAST) ;
    result = p->mProperty_mEndOfExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_extendExpressionAST::getter_mEndOfExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @extendExpressionAST class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_extendExpressionAST::cPtr_extendExpressionAST (const GALGAS_expressionAST & in_mExpression,
                                                    const GALGAS_lstring & in_mTypeName,
                                                    const GALGAS_location & in_mEndOfExpression
                                                    COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mExpression (in_mExpression),
mProperty_mTypeName (in_mTypeName),
mProperty_mEndOfExpression (in_mEndOfExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_extendExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_extendExpressionAST (mProperty_mExpression, mProperty_mTypeName, mProperty_mEndOfExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @extendExpressionAST type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extendExpressionAST ("extendExpressionAST",
                                            & kTypeDescriptor_GALGAS_expressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_extendExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_extendExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extendExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_truncateExpressionAST::GALGAS_truncateExpressionAST (void) :
GALGAS_expressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_truncateExpressionAST::GALGAS_truncateExpressionAST (const cPtr_truncateExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_truncateExpressionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST GALGAS_truncateExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_truncateExpressionAST * p = (const cPtr_truncateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateExpressionAST) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST cPtr_truncateExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_truncateExpressionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_truncateExpressionAST * p = (const cPtr_truncateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateExpressionAST) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_truncateExpressionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_truncateExpressionAST::getter_mEndOfExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_truncateExpressionAST * p = (const cPtr_truncateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateExpressionAST) ;
    result = p->mProperty_mEndOfExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_truncateExpressionAST::getter_mEndOfExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @truncateExpressionAST class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_truncateExpressionAST::cPtr_truncateExpressionAST (const GALGAS_expressionAST & in_mExpression,
                                                        const GALGAS_lstring & in_mTypeName,
                                                        const GALGAS_location & in_mEndOfExpression
                                                        COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mExpression (in_mExpression),
mProperty_mTypeName (in_mTypeName),
mProperty_mEndOfExpression (in_mEndOfExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_truncateExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_truncateExpressionAST (mProperty_mExpression, mProperty_mTypeName, mProperty_mEndOfExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @truncateExpressionAST type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_truncateExpressionAST ("truncateExpressionAST",
                                              & kTypeDescriptor_GALGAS_expressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_truncateExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_truncateExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_truncateExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_truncateExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterLValueAST::GALGAS_controlRegisterLValueAST (void) :
mProperty_mRegisterGroupName (),
mProperty_mGroupIndex (),
mProperty_mRegisterName (),
mProperty_mRegisterIndex () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterLValueAST::~ GALGAS_controlRegisterLValueAST (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterLValueAST::GALGAS_controlRegisterLValueAST (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_registerGroupIndexAST & inOperand1,
                                                                  const GALGAS_lstring & inOperand2,
                                                                  const GALGAS_registerIndexAST & inOperand3) :
mProperty_mRegisterGroupName (inOperand0),
mProperty_mGroupIndex (inOperand1),
mProperty_mRegisterName (inOperand2),
mProperty_mRegisterIndex (inOperand3) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_controlRegisterLValueAST::isValid (void) const {
  return mProperty_mRegisterGroupName.isValid () && mProperty_mGroupIndex.isValid () && mProperty_mRegisterName.isValid () && mProperty_mRegisterIndex.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterLValueAST::drop (void) {
  mProperty_mRegisterGroupName.drop () ;
  mProperty_mGroupIndex.drop () ;
  mProperty_mRegisterName.drop () ;
  mProperty_mRegisterIndex.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_controlRegisterLValueAST::getter_mRegisterGroupName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterGroupName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerGroupIndexAST GALGAS_controlRegisterLValueAST::getter_mGroupIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGroupIndex ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_controlRegisterLValueAST::getter_mRegisterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerIndexAST GALGAS_controlRegisterLValueAST::getter_mRegisterIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterIndex ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @controlRegisterLValueAST type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterLValueAST ("controlRegisterLValueAST",
                                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_controlRegisterLValueAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterLValueAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_controlRegisterLValueAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterLValueAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_LValueAST::GALGAS_LValueAST (void) :
mProperty_mIdentifier (),
mProperty_mAccessList () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_LValueAST::~ GALGAS_LValueAST (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_LValueAST::GALGAS_LValueAST (const GALGAS_lstring & inOperand0,
                                    const GALGAS_accessInAssignmentListAST & inOperand1) :
mProperty_mIdentifier (inOperand0),
mProperty_mAccessList (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_LValueAST GALGAS_LValueAST::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_LValueAST (GALGAS_lstring::constructor_default (HERE),
                           GALGAS_accessInAssignmentListAST::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_LValueAST GALGAS_LValueAST::constructor_new (const GALGAS_lstring & inOperand0,
                                                    const GALGAS_accessInAssignmentListAST & inOperand1 
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_LValueAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_LValueAST (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_LValueAST::isValid (void) const {
  return mProperty_mIdentifier.isValid () && mProperty_mAccessList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_LValueAST::drop (void) {
  mProperty_mIdentifier.drop () ;
  mProperty_mAccessList.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_LValueAST::getter_mIdentifier (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIdentifier ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_accessInAssignmentListAST GALGAS_LValueAST::getter_mAccessList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAccessList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                   @LValueAST type                                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_LValueAST ("LValueAST",
                                  NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_LValueAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_LValueAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_LValueAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_LValueAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_LValueRepresentation::GALGAS_LValueRepresentation (void) :
mProperty_type (),
mProperty_llvmName () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_LValueRepresentation::~ GALGAS_LValueRepresentation (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_LValueRepresentation::GALGAS_LValueRepresentation (const GALGAS_PLMType & inOperand0,
                                                          const GALGAS_string & inOperand1) :
mProperty_type (inOperand0),
mProperty_llvmName (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_LValueRepresentation GALGAS_LValueRepresentation::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_LValueRepresentation (GALGAS_PLMType::constructor_default (HERE),
                                      GALGAS_string::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_LValueRepresentation GALGAS_LValueRepresentation::constructor_new (const GALGAS_PLMType & inOperand0,
                                                                          const GALGAS_string & inOperand1 
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_LValueRepresentation result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_LValueRepresentation (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_LValueRepresentation::isValid (void) const {
  return mProperty_type.isValid () && mProperty_llvmName.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_LValueRepresentation::drop (void) {
  mProperty_type.drop () ;
  mProperty_llvmName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_LValueRepresentation::getter_type (UNUSED_LOCATION_ARGS) const {
  return mProperty_type ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_LValueRepresentation::getter_llvmName (UNUSED_LOCATION_ARGS) const {
  return mProperty_llvmName ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @LValueRepresentation type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_LValueRepresentation ("LValueRepresentation",
                                             NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_LValueRepresentation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_LValueRepresentation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_LValueRepresentation::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_LValueRepresentation (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_sizeofExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_sizeofExpressionAST * p = (const cPtr_sizeofExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sizeofExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLValue.objectCompare (p->mProperty_mLValue) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sizeofExpressionAST::GALGAS_sizeofExpressionAST (void) :
GALGAS_expressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sizeofExpressionAST GALGAS_sizeofExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_sizeofExpressionAST::constructor_new (GALGAS_LValueAST::constructor_default (HERE)
                                                      COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sizeofExpressionAST::GALGAS_sizeofExpressionAST (const cPtr_sizeofExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sizeofExpressionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sizeofExpressionAST GALGAS_sizeofExpressionAST::constructor_new (const GALGAS_LValueAST & inAttribute_mLValue
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_sizeofExpressionAST result ;
  if (inAttribute_mLValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_sizeofExpressionAST (inAttribute_mLValue COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_LValueAST GALGAS_sizeofExpressionAST::getter_mLValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_LValueAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_sizeofExpressionAST * p = (const cPtr_sizeofExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sizeofExpressionAST) ;
    result = p->mProperty_mLValue ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_LValueAST cPtr_sizeofExpressionAST::getter_mLValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @sizeofExpressionAST class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_sizeofExpressionAST::cPtr_sizeofExpressionAST (const GALGAS_LValueAST & in_mLValue
                                                    COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mLValue (in_mLValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_sizeofExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sizeofExpressionAST ;
}

void cPtr_sizeofExpressionAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@sizeofExpressionAST:" ;
  mProperty_mLValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_sizeofExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_sizeofExpressionAST (mProperty_mLValue COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @sizeofExpressionAST type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sizeofExpressionAST ("sizeofExpressionAST",
                                            & kTypeDescriptor_GALGAS_expressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_sizeofExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sizeofExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_sizeofExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sizeofExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_sizeofTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_sizeofTypeAST * p = (const cPtr_sizeofTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sizeofTypeAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sizeofTypeAST::GALGAS_sizeofTypeAST (void) :
GALGAS_expressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sizeofTypeAST GALGAS_sizeofTypeAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_sizeofTypeAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sizeofTypeAST::GALGAS_sizeofTypeAST (const cPtr_sizeofTypeAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sizeofTypeAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sizeofTypeAST GALGAS_sizeofTypeAST::constructor_new (const GALGAS_lstring & inAttribute_mTypeName
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_sizeofTypeAST result ;
  if (inAttribute_mTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_sizeofTypeAST (inAttribute_mTypeName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_sizeofTypeAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_sizeofTypeAST * p = (const cPtr_sizeofTypeAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sizeofTypeAST) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_sizeofTypeAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                       Pointer class for @sizeofTypeAST class                                        *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_sizeofTypeAST::cPtr_sizeofTypeAST (const GALGAS_lstring & in_mTypeName
                                        COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mTypeName (in_mTypeName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_sizeofTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sizeofTypeAST ;
}

void cPtr_sizeofTypeAST::description (C_String & ioString,
                                      const int32_t inIndentation) const {
  ioString << "[@sizeofTypeAST:" ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_sizeofTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_sizeofTypeAST (mProperty_mTypeName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                 @sizeofTypeAST type                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sizeofTypeAST ("sizeofTypeAST",
                                      & kTypeDescriptor_GALGAS_expressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_sizeofTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sizeofTypeAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_sizeofTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sizeofTypeAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sizeofInstructionIR::GALGAS_sizeofInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sizeofInstructionIR::GALGAS_sizeofInstructionIR (const cPtr_sizeofInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sizeofInstructionIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sizeofInstructionIR GALGAS_sizeofInstructionIR::constructor_new (const GALGAS_objectIR & inAttribute_mTarget,
                                                                        const GALGAS_PLMType & inAttribute_mSourceType
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_sizeofInstructionIR result ;
  if (inAttribute_mTarget.isValid () && inAttribute_mSourceType.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_sizeofInstructionIR (inAttribute_mTarget, inAttribute_mSourceType COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_sizeofInstructionIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_sizeofInstructionIR * p = (const cPtr_sizeofInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sizeofInstructionIR) ;
    result = p->mProperty_mTarget ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR cPtr_sizeofInstructionIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTarget ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_sizeofInstructionIR::getter_mSourceType (UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMType result ;
  if (NULL != mObjectPtr) {
    const cPtr_sizeofInstructionIR * p = (const cPtr_sizeofInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sizeofInstructionIR) ;
    result = p->mProperty_mSourceType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType cPtr_sizeofInstructionIR::getter_mSourceType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @sizeofInstructionIR class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_sizeofInstructionIR::cPtr_sizeofInstructionIR (const GALGAS_objectIR & in_mTarget,
                                                    const GALGAS_PLMType & in_mSourceType
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mTarget (in_mTarget),
mProperty_mSourceType (in_mSourceType) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_sizeofInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_sizeofInstructionIR (mProperty_mTarget, mProperty_mSourceType COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @sizeofInstructionIR type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sizeofInstructionIR ("sizeofInstructionIR",
                                            & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_sizeofInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sizeofInstructionIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_sizeofInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sizeofInstructionIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constructorCallAST::GALGAS_constructorCallAST (void) :
GALGAS_expressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constructorCallAST GALGAS_constructorCallAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_constructorCallAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_functionCallEffectiveParameterListAST::constructor_emptyList (HERE),
                                                     GALGAS_location::constructor_nowhere (HERE)
                                                     COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constructorCallAST::GALGAS_constructorCallAST (const cPtr_constructorCallAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_constructorCallAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_constructorCallAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_constructorCallAST * p = (const cPtr_constructorCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorCallAST) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_constructorCallAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionCallEffectiveParameterListAST GALGAS_constructorCallAST::getter_mParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_functionCallEffectiveParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_constructorCallAST * p = (const cPtr_constructorCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorCallAST) ;
    result = p->mProperty_mParameterList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionCallEffectiveParameterListAST cPtr_constructorCallAST::getter_mParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mParameterList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_constructorCallAST::getter_mErrorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_constructorCallAST * p = (const cPtr_constructorCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorCallAST) ;
    result = p->mProperty_mErrorLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_constructorCallAST::getter_mErrorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mErrorLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                     Pointer class for @constructorCallAST class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_constructorCallAST::cPtr_constructorCallAST (const GALGAS_lstring & in_mTypeName,
                                                  const GALGAS_functionCallEffectiveParameterListAST & in_mParameterList,
                                                  const GALGAS_location & in_mErrorLocation
                                                  COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mTypeName (in_mTypeName),
mProperty_mParameterList (in_mParameterList),
mProperty_mErrorLocation (in_mErrorLocation) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_constructorCallAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_constructorCallAST (mProperty_mTypeName, mProperty_mParameterList, mProperty_mErrorLocation COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @constructorCallAST type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constructorCallAST ("constructorCallAST",
                                           & kTypeDescriptor_GALGAS_expressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_constructorCallAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorCallAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_constructorCallAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constructorCallAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typedConstantCallAST::GALGAS_typedConstantCallAST (void) :
GALGAS_expressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typedConstantCallAST GALGAS_typedConstantCallAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_typedConstantCallAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_primaryInExpressionAccessListAST::constructor_emptyList (HERE)
                                                       COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typedConstantCallAST::GALGAS_typedConstantCallAST (const cPtr_typedConstantCallAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typedConstantCallAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_typedConstantCallAST::getter_mOptionalTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_typedConstantCallAST * p = (const cPtr_typedConstantCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typedConstantCallAST) ;
    result = p->mProperty_mOptionalTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_typedConstantCallAST::getter_mOptionalTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOptionalTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_typedConstantCallAST::getter_mConstructorName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_typedConstantCallAST * p = (const cPtr_typedConstantCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typedConstantCallAST) ;
    result = p->mProperty_mConstructorName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_typedConstantCallAST::getter_mConstructorName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConstructorName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_primaryInExpressionAccessListAST GALGAS_typedConstantCallAST::getter_mAccessList (UNUSED_LOCATION_ARGS) const {
  GALGAS_primaryInExpressionAccessListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_typedConstantCallAST * p = (const cPtr_typedConstantCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typedConstantCallAST) ;
    result = p->mProperty_mAccessList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_primaryInExpressionAccessListAST cPtr_typedConstantCallAST::getter_mAccessList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAccessList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @typedConstantCallAST class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_typedConstantCallAST::cPtr_typedConstantCallAST (const GALGAS_lstring & in_mOptionalTypeName,
                                                      const GALGAS_lstring & in_mConstructorName,
                                                      const GALGAS_primaryInExpressionAccessListAST & in_mAccessList
                                                      COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mOptionalTypeName (in_mOptionalTypeName),
mProperty_mConstructorName (in_mConstructorName),
mProperty_mAccessList (in_mAccessList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_typedConstantCallAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_typedConstantCallAST (mProperty_mOptionalTypeName, mProperty_mConstructorName, mProperty_mAccessList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @typedConstantCallAST type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typedConstantCallAST ("typedConstantCallAST",
                                             & kTypeDescriptor_GALGAS_expressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_typedConstantCallAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typedConstantCallAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_typedConstantCallAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typedConstantCallAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Abstract extension method '@infixOperatorDescription generateInfixOperatorCode'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_infixOperatorDescription_generateInfixOperatorCode> gExtensionMethodTable_infixOperatorDescription_generateInfixOperatorCode ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_generateInfixOperatorCode (const int32_t inClassIndex,
                                                     extensionMethodSignature_infixOperatorDescription_generateInfixOperatorCode inMethod) {
  gExtensionMethodTable_infixOperatorDescription_generateInfixOperatorCode.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_infixOperatorDescription_generateInfixOperatorCode (void) {
  gExtensionMethodTable_infixOperatorDescription_generateInfixOperatorCode.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_infixOperatorDescription_generateInfixOperatorCode (NULL,
                                                                               freeExtensionMethod_infixOperatorDescription_generateInfixOperatorCode) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Extension getter '@infixOperatorDescription performStaticOperation'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <enterExtensionGetter_infixOperatorDescription_performStaticOperation> gExtensionGetterTable_infixOperatorDescription_performStaticOperation ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_performStaticOperation (const int32_t inClassIndex,
                                                  enterExtensionGetter_infixOperatorDescription_performStaticOperation inGetter) {
  gExtensionGetterTable_infixOperatorDescription_performStaticOperation.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_infixOperatorDescription_performStaticOperation (void) {
  enterExtensionGetter_performStaticOperation (kTypeDescriptor_GALGAS_infixOperatorDescription.mSlotID,
                                               extensionGetter_infixOperatorDescription_performStaticOperation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionGetter_infixOperatorDescription_performStaticOperation (void) {
  gExtensionGetterTable_infixOperatorDescription_performStaticOperation.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_infixOperatorDescription_performStaticOperation (defineExtensionGetter_infixOperatorDescription_performStaticOperation,
                                                                            freeExtensionGetter_infixOperatorDescription_performStaticOperation) ;

