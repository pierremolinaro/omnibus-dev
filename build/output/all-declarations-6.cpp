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
, C_Lexique_plm_5F_lexique::kToken_integer, REDUCE (0)
, C_Lexique_plm_5F_lexique::kToken_yes, REDUCE (0)
, C_Lexique_plm_5F_lexique::kToken_no, REDUCE (0)
, C_Lexique_plm_5F_lexique::kToken_, REDUCE (0)
, END
// State S6 (index = 30)
, C_Lexique_plm_5F_lexique::kToken__2D__3E_, SHIFT (9)
, END
// State S7 (index = 33)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (1)
, END
// State S8 (index = 36)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (10)
, END
// State S9 (index = 39)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (11)
, END
// State S10 (index = 42)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S11 (index = 45)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (4)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (6)
, END
// State S12 (index = 50)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (14)
, END
// State S13 (index = 53)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (5)
, END
// State S14 (index = 56)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S15 (index = 59)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (16)
, END
// State S16 (index = 62)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S17 (index = 65)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (18)
, END
// State S18 (index = 68)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S19 (index = 71)
, C_Lexique_plm_5F_lexique::kToken_integer, SHIFT (20)
, END
// State S20 (index = 74)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S21 (index = 77)
, C_Lexique_plm_5F_lexique::kToken_yes, SHIFT (22)
, C_Lexique_plm_5F_lexique::kToken_no, SHIFT (23)
, END
// State S22 (index = 82)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (6)
, END
// State S23 (index = 85)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (7)
, END
// State S24 (index = 88)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S25 (index = 91)
, C_Lexique_plm_5F_lexique::kToken_integer, SHIFT (26)
, END
// State S26 (index = 94)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S27 (index = 97)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (28)
, END
// State S28 (index = 100)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S29 (index = 103)
, C_Lexique_plm_5F_lexique::kToken_integer, SHIFT (30)
, C_Lexique_plm_5F_lexique::kToken_no, SHIFT (31)
, END
// State S30 (index = 108)
, C_Lexique_plm_5F_lexique::kToken_integer, SHIFT (33)
, END
// State S31 (index = 111)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (8)
, END
// State S32 (index = 114)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S33 (index = 117)
, C_Lexique_plm_5F_lexique::kToken_integer, SHIFT (35)
, END
// State S34 (index = 120)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (36)
, END
// State S35 (index = 123)
, C_Lexique_plm_5F_lexique::kToken_integer, SHIFT (37)
, END
// State S36 (index = 126)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S37 (index = 129)
, C_Lexique_plm_5F_lexique::kToken_integer, SHIFT (39)
, END
// State S38 (index = 132)
, C_Lexique_plm_5F_lexique::kToken_integer, SHIFT (40)
, END
// State S39 (index = 135)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (9)
, END
// State S40 (index = 138)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S41 (index = 141)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (42)
, END
// State S42 (index = 144)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S43 (index = 147)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (44)
, END
// State S44 (index = 150)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S45 (index = 153)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (46)
, END
// State S46 (index = 156)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S47 (index = 159)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (48)
, END
// State S48 (index = 162)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S49 (index = 165)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (50)
, END
// State S50 (index = 168)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S51 (index = 171)
, C_Lexique_plm_5F_lexique::kToken_integer, SHIFT (52)
, END
// State S52 (index = 174)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S53 (index = 177)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (54)
, END
// State S54 (index = 180)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S55 (index = 183)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (56)
, END
// State S56 (index = 186)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S57 (index = 189)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (58)
, END
// State S58 (index = 192)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S59 (index = 195)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (60)
, END
// State S60 (index = 198)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S61 (index = 201)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (62)
, END
// State S62 (index = 204)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S63 (index = 207)
, C_Lexique_plm_5F_lexique::kToken_integer, SHIFT (64)
, END
// State S64 (index = 210)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S65 (index = 213)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (66)
, END
// State S66 (index = 216)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S67 (index = 219)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (10)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (68)
, END
// State S68 (index = 224)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (10)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (68)
, END
// State S69 (index = 229)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S70 (index = 232)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (11)
, END
// State S71 (index = 235)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (12)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (72)
, END
// State S72 (index = 240)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (12)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (72)
, END
// State S73 (index = 245)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S74 (index = 248)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (13)
, END
// State S75 (index = 251)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (14)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (76)
, END
// State S76 (index = 256)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (14)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (76)
, END
// State S77 (index = 261)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S78 (index = 264)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (15)
, END
// State S79 (index = 267)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (16)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (80)
, END
// State S80 (index = 272)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (16)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (80)
, END
// State S81 (index = 277)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S82 (index = 280)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (17)
, END
// State S83 (index = 283)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (85)
, C_Lexique_plm_5F_lexique::kToken_, REDUCE (18)
, END
// State S84 (index = 288)
, C_Lexique_plm_5F_lexique::kToken_, REDUCE (2)
, END
// State S85 (index = 291)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (20)
, C_Lexique_plm_5F_lexique::kToken__2D__3E_, SHIFT (87)
, C_Lexique_plm_5F_lexique::kToken_, REDUCE (20)
, END
// State S86 (index = 298)
, C_Lexique_plm_5F_lexique::kToken_, REDUCE (3)
, END
// State S87 (index = 301)
, C_Lexique_plm_5F_lexique::kToken_integer, SHIFT (89)
, END
// State S88 (index = 304)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (85)
, C_Lexique_plm_5F_lexique::kToken_, REDUCE (18)
, END
// State S89 (index = 309)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (21)
, C_Lexique_plm_5F_lexique::kToken_, REDUCE (21)
, END
// State S90 (index = 314)
, C_Lexique_plm_5F_lexique::kToken_, REDUCE (19)
, END} ;

static const uint32_t gActionTableIndex_plm_target_grammar [91] = {
  0  // S0
, 3  // S1
, 6  // S2
, 11  // S3
, 14  // S4
, 17  // S5
, 30  // S6
, 33  // S7
, 36  // S8
, 39  // S9
, 42  // S10
, 45  // S11
, 50  // S12
, 53  // S13
, 56  // S14
, 59  // S15
, 62  // S16
, 65  // S17
, 68  // S18
, 71  // S19
, 74  // S20
, 77  // S21
, 82  // S22
, 85  // S23
, 88  // S24
, 91  // S25
, 94  // S26
, 97  // S27
, 100  // S28
, 103  // S29
, 108  // S30
, 111  // S31
, 114  // S32
, 117  // S33
, 120  // S34
, 123  // S35
, 126  // S36
, 129  // S37
, 132  // S38
, 135  // S39
, 138  // S40
, 141  // S41
, 144  // S42
, 147  // S43
, 150  // S44
, 153  // S45
, 156  // S46
, 159  // S47
, 162  // S48
, 165  // S49
, 168  // S50
, 171  // S51
, 174  // S52
, 177  // S53
, 180  // S54
, 183  // S55
, 186  // S56
, 189  // S57
, 192  // S58
, 195  // S59
, 198  // S60
, 201  // S61
, 204  // S62
, 207  // S63
, 210  // S64
, 213  // S65
, 216  // S66
, 219  // S67
, 224  // S68
, 229  // S69
, 232  // S70
, 235  // S71
, 240  // S72
, 245  // S73
, 248  // S74
, 251  // S75
, 256  // S76
, 261  // S77
, 264  // S78
, 267  // S79
, 272  // S80
, 277  // S81
, 280  // S82
, 283  // S83
, 288  // S84
, 291  // S85
, 298  // S86
, 301  // S87
, 304  // S88
, 309  // S89
, 314  // S90
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



typeComparisonResult GALGAS_userLLVMTypeDefinitionIR::objectCompare (const GALGAS_userLLVMTypeDefinitionIR & inOperand) const {
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

GALGAS_userLLVMTypeDefinitionIR::GALGAS_userLLVMTypeDefinitionIR (void) :
AC_GALGAS_class (false) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_userLLVMTypeDefinitionIR::GALGAS_userLLVMTypeDefinitionIR (const cPtr_userLLVMTypeDefinitionIR * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_userLLVMTypeDefinitionIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_userLLVMTypeDefinitionIR::getter_mLLVMDefinedTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_userLLVMTypeDefinitionIR * p = (const cPtr_userLLVMTypeDefinitionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_userLLVMTypeDefinitionIR) ;
    result = p->mProperty_mLLVMDefinedTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_userLLVMTypeDefinitionIR::getter_mLLVMDefinedTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLLVMDefinedTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                  Pointer class for @userLLVMTypeDefinitionIR class                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_userLLVMTypeDefinitionIR::cPtr_userLLVMTypeDefinitionIR (const GALGAS_string & in_mLLVMDefinedTypeName
                                                              COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mProperty_mLLVMDefinedTypeName (in_mLLVMDefinedTypeName) {
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @userLLVMTypeDefinitionIR type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_userLLVMTypeDefinitionIR ("userLLVMTypeDefinitionIR",
                                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_userLLVMTypeDefinitionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_userLLVMTypeDefinitionIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_userLLVMTypeDefinitionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_userLLVMTypeDefinitionIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_userLLVMTypeDefinitionIR GALGAS_userLLVMTypeDefinitionIR::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_userLLVMTypeDefinitionIR result ;
  const GALGAS_userLLVMTypeDefinitionIR * p = (const GALGAS_userLLVMTypeDefinitionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_userLLVMTypeDefinitionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("userLLVMTypeDefinitionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_PLMType::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_PLMType * p = (const cPtr_PLMType *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_PLMType) ;
  if (kOperandEqual == result) {
    result = mProperty_propertyGetterMap.objectCompare (p->mProperty_propertyGetterMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_propertySetterMap.objectCompare (p->mProperty_propertySetterMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_routineMap.objectCompare (p->mProperty_routineMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_classConstantMap.objectCompare (p->mProperty_classConstantMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_constructorMap.objectCompare (p->mProperty_constructorMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_guardMap.objectCompare (p->mProperty_guardMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_subscript.objectCompare (p->mProperty_subscript) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_assignmentSources.objectCompare (p->mProperty_assignmentSources) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_attributes.objectCompare (p->mProperty_attributes) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_plmTypeDescriptionName.objectCompare (p->mProperty_plmTypeDescriptionName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_kind.objectCompare (p->mProperty_kind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_llvmBaseTypeName.objectCompare (p->mProperty_llvmBaseTypeName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_PLMType::objectCompare (const GALGAS_PLMType & inOperand) const {
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

GALGAS_PLMType::GALGAS_PLMType (void) :
AC_GALGAS_class (true) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_PLMType::constructor_default (LOCATION_ARGS) {
  return GALGAS_PLMType::constructor_new (GALGAS_propertyGetterMap::constructor_emptyMap (HERE),
                                          GALGAS_propertySetterMap::constructor_emptyMap (HERE),
                                          GALGAS_routineMapCTXT::constructor_emptyMap (HERE),
                                          GALGAS_classConstantMap::constructor_emptyMap (HERE),
                                          GALGAS_constructorMap::constructor_emptyMap (HERE),
                                          GALGAS_guardMapCTXT::constructor_emptyMap (HERE),
                                          GALGAS_subscript::constructor_noSubscript (HERE),
                                          GALGAS_stringset::constructor_emptySet (HERE),
                                          GALGAS_PLMTypeAttributes::constructor_none (HERE),
                                          GALGAS_string::constructor_default (HERE),
                                          GALGAS_typeKind::constructor_void (HERE),
                                          GALGAS_string::constructor_default (HERE)
                                          COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType::GALGAS_PLMType (const cPtr_PLMType * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, true) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_PLMType) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_PLMType::constructor_new (const GALGAS_propertyGetterMap & inAttribute_propertyGetterMap,
                                                const GALGAS_propertySetterMap & inAttribute_propertySetterMap,
                                                const GALGAS_routineMapCTXT & inAttribute_routineMap,
                                                const GALGAS_classConstantMap & inAttribute_classConstantMap,
                                                const GALGAS_constructorMap & inAttribute_constructorMap,
                                                const GALGAS_guardMapCTXT & inAttribute_guardMap,
                                                const GALGAS_subscript & inAttribute_subscript,
                                                const GALGAS_stringset & inAttribute_assignmentSources,
                                                const GALGAS_PLMTypeAttributes & inAttribute_attributes,
                                                const GALGAS_string & inAttribute_plmTypeDescriptionName,
                                                const GALGAS_typeKind & inAttribute_kind,
                                                const GALGAS_string & inAttribute_llvmBaseTypeName
                                                COMMA_LOCATION_ARGS) {
  GALGAS_PLMType result ;
  if (inAttribute_propertyGetterMap.isValid () && inAttribute_propertySetterMap.isValid () && inAttribute_routineMap.isValid () && inAttribute_classConstantMap.isValid () && inAttribute_constructorMap.isValid () && inAttribute_guardMap.isValid () && inAttribute_subscript.isValid () && inAttribute_assignmentSources.isValid () && inAttribute_attributes.isValid () && inAttribute_plmTypeDescriptionName.isValid () && inAttribute_kind.isValid () && inAttribute_llvmBaseTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_PLMType (inAttribute_propertyGetterMap, inAttribute_propertySetterMap, inAttribute_routineMap, inAttribute_classConstantMap, inAttribute_constructorMap, inAttribute_guardMap, inAttribute_subscript, inAttribute_assignmentSources, inAttribute_attributes, inAttribute_plmTypeDescriptionName, inAttribute_kind, inAttribute_llvmBaseTypeName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyGetterMap GALGAS_PLMType::getter_propertyGetterMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyGetterMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_PLMType * p = (const cPtr_PLMType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_PLMType) ;
    result = p->mProperty_propertyGetterMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyGetterMap cPtr_PLMType::getter_propertyGetterMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_propertyGetterMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertySetterMap GALGAS_PLMType::getter_propertySetterMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertySetterMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_PLMType * p = (const cPtr_PLMType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_PLMType) ;
    result = p->mProperty_propertySetterMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertySetterMap cPtr_PLMType::getter_propertySetterMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_propertySetterMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineMapCTXT GALGAS_PLMType::getter_routineMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_routineMapCTXT result ;
  if (NULL != mObjectPtr) {
    const cPtr_PLMType * p = (const cPtr_PLMType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_PLMType) ;
    result = p->mProperty_routineMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineMapCTXT cPtr_PLMType::getter_routineMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_routineMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classConstantMap GALGAS_PLMType::getter_classConstantMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_classConstantMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_PLMType * p = (const cPtr_PLMType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_PLMType) ;
    result = p->mProperty_classConstantMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classConstantMap cPtr_PLMType::getter_classConstantMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_classConstantMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constructorMap GALGAS_PLMType::getter_constructorMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_constructorMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_PLMType * p = (const cPtr_PLMType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_PLMType) ;
    result = p->mProperty_constructorMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constructorMap cPtr_PLMType::getter_constructorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_constructorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardMapCTXT GALGAS_PLMType::getter_guardMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_guardMapCTXT result ;
  if (NULL != mObjectPtr) {
    const cPtr_PLMType * p = (const cPtr_PLMType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_PLMType) ;
    result = p->mProperty_guardMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardMapCTXT cPtr_PLMType::getter_guardMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_guardMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_subscript GALGAS_PLMType::getter_subscript (UNUSED_LOCATION_ARGS) const {
  GALGAS_subscript result ;
  if (NULL != mObjectPtr) {
    const cPtr_PLMType * p = (const cPtr_PLMType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_PLMType) ;
    result = p->mProperty_subscript ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_subscript cPtr_PLMType::getter_subscript (UNUSED_LOCATION_ARGS) const {
  return mProperty_subscript ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringset GALGAS_PLMType::getter_assignmentSources (UNUSED_LOCATION_ARGS) const {
  GALGAS_stringset result ;
  if (NULL != mObjectPtr) {
    const cPtr_PLMType * p = (const cPtr_PLMType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_PLMType) ;
    result = p->mProperty_assignmentSources ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringset cPtr_PLMType::getter_assignmentSources (UNUSED_LOCATION_ARGS) const {
  return mProperty_assignmentSources ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMTypeAttributes GALGAS_PLMType::getter_attributes (UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMTypeAttributes result ;
  if (NULL != mObjectPtr) {
    const cPtr_PLMType * p = (const cPtr_PLMType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_PLMType) ;
    result = p->mProperty_attributes ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMTypeAttributes cPtr_PLMType::getter_attributes (UNUSED_LOCATION_ARGS) const {
  return mProperty_attributes ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_PLMType::getter_plmTypeDescriptionName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_PLMType * p = (const cPtr_PLMType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_PLMType) ;
    result = p->mProperty_plmTypeDescriptionName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_PLMType::getter_plmTypeDescriptionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_plmTypeDescriptionName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_PLMType::getter_kind (UNUSED_LOCATION_ARGS) const {
  GALGAS_typeKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_PLMType * p = (const cPtr_PLMType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_PLMType) ;
    result = p->mProperty_kind ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind cPtr_PLMType::getter_kind (UNUSED_LOCATION_ARGS) const {
  return mProperty_kind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_PLMType::getter_llvmBaseTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_PLMType * p = (const cPtr_PLMType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_PLMType) ;
    result = p->mProperty_llvmBaseTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_PLMType::getter_llvmBaseTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_llvmBaseTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                          Pointer class for @PLMType class                                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_PLMType::cPtr_PLMType (const GALGAS_propertyGetterMap & in_propertyGetterMap,
                            const GALGAS_propertySetterMap & in_propertySetterMap,
                            const GALGAS_routineMapCTXT & in_routineMap,
                            const GALGAS_classConstantMap & in_classConstantMap,
                            const GALGAS_constructorMap & in_constructorMap,
                            const GALGAS_guardMapCTXT & in_guardMap,
                            const GALGAS_subscript & in_subscript,
                            const GALGAS_stringset & in_assignmentSources,
                            const GALGAS_PLMTypeAttributes & in_attributes,
                            const GALGAS_string & in_plmTypeDescriptionName,
                            const GALGAS_typeKind & in_kind,
                            const GALGAS_string & in_llvmBaseTypeName
                            COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mProperty_propertyGetterMap (in_propertyGetterMap),
mProperty_propertySetterMap (in_propertySetterMap),
mProperty_routineMap (in_routineMap),
mProperty_classConstantMap (in_classConstantMap),
mProperty_constructorMap (in_constructorMap),
mProperty_guardMap (in_guardMap),
mProperty_subscript (in_subscript),
mProperty_assignmentSources (in_assignmentSources),
mProperty_attributes (in_attributes),
mProperty_plmTypeDescriptionName (in_plmTypeDescriptionName),
mProperty_kind (in_kind),
mProperty_llvmBaseTypeName (in_llvmBaseTypeName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_PLMType::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_PLMType ;
}

void cPtr_PLMType::description (C_String & ioString,
                                const int32_t inIndentation) const {
  ioString << "[@PLMType:" ;
  mProperty_propertyGetterMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_propertySetterMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_routineMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_classConstantMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_constructorMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_guardMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_subscript.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_assignmentSources.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_attributes.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_plmTypeDescriptionName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_kind.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_llvmBaseTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_PLMType::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_PLMType (mProperty_propertyGetterMap, mProperty_propertySetterMap, mProperty_routineMap, mProperty_classConstantMap, mProperty_constructorMap, mProperty_guardMap, mProperty_subscript, mProperty_assignmentSources, mProperty_attributes, mProperty_plmTypeDescriptionName, mProperty_kind, mProperty_llvmBaseTypeName COMMA_THERE)) ;
  return ptr ;
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
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*



typeComparisonResult GALGAS_abstractRoutineIR::objectCompare (const GALGAS_abstractRoutineIR & inOperand) const {
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

GALGAS_abstractRoutineIR::GALGAS_abstractRoutineIR (void) :
AC_GALGAS_class (false) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractRoutineIR::GALGAS_abstractRoutineIR (const cPtr_abstractRoutineIR * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractRoutineIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_abstractRoutineIR::getter_mRoutineMangledName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractRoutineIR * p = (const cPtr_abstractRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractRoutineIR) ;
    result = p->mProperty_mRoutineMangledName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_abstractRoutineIR::getter_mRoutineMangledName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineMangledName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_abstractRoutineIR::getter_isRequired (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractRoutineIR * p = (const cPtr_abstractRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractRoutineIR) ;
    result = p->mProperty_isRequired ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_abstractRoutineIR::getter_isRequired (UNUSED_LOCATION_ARGS) const {
  return mProperty_isRequired ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_abstractRoutineIR::getter_warnsIfUnused (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractRoutineIR * p = (const cPtr_abstractRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractRoutineIR) ;
    result = p->mProperty_warnsIfUnused ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_abstractRoutineIR::getter_warnsIfUnused (UNUSED_LOCATION_ARGS) const {
  return mProperty_warnsIfUnused ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                     Pointer class for @abstractRoutineIR class                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_abstractRoutineIR::cPtr_abstractRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                const GALGAS_bool & in_isRequired,
                                                const GALGAS_bool & in_warnsIfUnused
                                                COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mProperty_mRoutineMangledName (in_mRoutineMangledName),
mProperty_isRequired (in_isRequired),
mProperty_warnsIfUnused (in_warnsIfUnused) {
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @abstractRoutineIR type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractRoutineIR ("abstractRoutineIR",
                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_abstractRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractRoutineIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_abstractRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractRoutineIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_dynArrayRemoveAllFunctionIR::objectCompare (const GALGAS_dynArrayRemoveAllFunctionIR & inOperand) const {
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

GALGAS_dynArrayRemoveAllFunctionIR::GALGAS_dynArrayRemoveAllFunctionIR (void) :
GALGAS_abstractRoutineIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_dynArrayRemoveAllFunctionIR GALGAS_dynArrayRemoveAllFunctionIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_dynArrayRemoveAllFunctionIR::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_bool::constructor_default (HERE),
                                                              GALGAS_bool::constructor_default (HERE)
                                                              COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_dynArrayRemoveAllFunctionIR::GALGAS_dynArrayRemoveAllFunctionIR (const cPtr_dynArrayRemoveAllFunctionIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dynArrayRemoveAllFunctionIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @dynArrayRemoveAllFunctionIR class                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_dynArrayRemoveAllFunctionIR::cPtr_dynArrayRemoveAllFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                                    const GALGAS_bool & in_isRequired,
                                                                    const GALGAS_bool & in_warnsIfUnused
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_dynArrayRemoveAllFunctionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_dynArrayRemoveAllFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @dynArrayRemoveAllFunctionIR type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dynArrayRemoveAllFunctionIR ("dynArrayRemoveAllFunctionIR",
                                                    & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_dynArrayRemoveAllFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayRemoveAllFunctionIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_dynArrayRemoveAllFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dynArrayRemoveAllFunctionIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_dynArrayLengthFunctionIR::objectCompare (const GALGAS_dynArrayLengthFunctionIR & inOperand) const {
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

GALGAS_dynArrayLengthFunctionIR::GALGAS_dynArrayLengthFunctionIR (void) :
GALGAS_abstractRoutineIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_dynArrayLengthFunctionIR GALGAS_dynArrayLengthFunctionIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_dynArrayLengthFunctionIR::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_bool::constructor_default (HERE),
                                                           GALGAS_bool::constructor_default (HERE)
                                                           COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_dynArrayLengthFunctionIR::GALGAS_dynArrayLengthFunctionIR (const cPtr_dynArrayLengthFunctionIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dynArrayLengthFunctionIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                  Pointer class for @dynArrayLengthFunctionIR class                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_dynArrayLengthFunctionIR::cPtr_dynArrayLengthFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                              const GALGAS_bool & in_isRequired,
                                                              const GALGAS_bool & in_warnsIfUnused
                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_dynArrayLengthFunctionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_dynArrayLengthFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @dynArrayLengthFunctionIR type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dynArrayLengthFunctionIR ("dynArrayLengthFunctionIR",
                                                 & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_dynArrayLengthFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayLengthFunctionIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_dynArrayLengthFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dynArrayLengthFunctionIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_dynArrayInsertFunctionIR::objectCompare (const GALGAS_dynArrayInsertFunctionIR & inOperand) const {
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

GALGAS_dynArrayInsertFunctionIR::GALGAS_dynArrayInsertFunctionIR (void) :
GALGAS_abstractRoutineIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_dynArrayInsertFunctionIR GALGAS_dynArrayInsertFunctionIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_dynArrayInsertFunctionIR::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_bool::constructor_default (HERE),
                                                           GALGAS_bool::constructor_default (HERE),
                                                           GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE)
                                                           COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_dynArrayInsertFunctionIR::GALGAS_dynArrayInsertFunctionIR (const cPtr_dynArrayInsertFunctionIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dynArrayInsertFunctionIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_dynArrayInsertFunctionIR GALGAS_dynArrayInsertFunctionIR::constructor_new (const GALGAS_lstring & inAttribute_mRoutineMangledName,
                                                                                  const GALGAS_bool & inAttribute_isRequired,
                                                                                  const GALGAS_bool & inAttribute_warnsIfUnused,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mElementTypeProxy
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_dynArrayInsertFunctionIR result ;
  if (inAttribute_mRoutineMangledName.isValid () && inAttribute_isRequired.isValid () && inAttribute_warnsIfUnused.isValid () && inAttribute_mElementTypeProxy.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_dynArrayInsertFunctionIR (inAttribute_mRoutineMangledName, inAttribute_isRequired, inAttribute_warnsIfUnused, inAttribute_mElementTypeProxy COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_dynArrayInsertFunctionIR::getter_mElementTypeProxy (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_dynArrayInsertFunctionIR * p = (const cPtr_dynArrayInsertFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynArrayInsertFunctionIR) ;
    result = p->mProperty_mElementTypeProxy ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy cPtr_dynArrayInsertFunctionIR::getter_mElementTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElementTypeProxy ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                  Pointer class for @dynArrayInsertFunctionIR class                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_dynArrayInsertFunctionIR::cPtr_dynArrayInsertFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                              const GALGAS_bool & in_isRequired,
                                                              const GALGAS_bool & in_warnsIfUnused,
                                                              const GALGAS_unifiedTypeMap_2D_proxy & in_mElementTypeProxy
                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
mProperty_mElementTypeProxy (in_mElementTypeProxy) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_dynArrayInsertFunctionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_dynArrayInsertFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mElementTypeProxy COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @dynArrayInsertFunctionIR type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dynArrayInsertFunctionIR ("dynArrayInsertFunctionIR",
                                                 & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_dynArrayInsertFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayInsertFunctionIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_dynArrayInsertFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dynArrayInsertFunctionIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_dynamicArrayTypeAssignFunctionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_dynamicArrayTypeAssignFunctionIR * p = (const cPtr_dynamicArrayTypeAssignFunctionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_dynamicArrayTypeAssignFunctionIR) ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_dynamicArrayTypeAssignFunctionIR::objectCompare (const GALGAS_dynamicArrayTypeAssignFunctionIR & inOperand) const {
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

GALGAS_dynamicArrayTypeAssignFunctionIR::GALGAS_dynamicArrayTypeAssignFunctionIR (void) :
GALGAS_abstractRoutineIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_dynamicArrayTypeAssignFunctionIR GALGAS_dynamicArrayTypeAssignFunctionIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_dynamicArrayTypeAssignFunctionIR::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                   GALGAS_bool::constructor_default (HERE),
                                                                   GALGAS_bool::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_dynamicArrayTypeAssignFunctionIR::GALGAS_dynamicArrayTypeAssignFunctionIR (const cPtr_dynamicArrayTypeAssignFunctionIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dynamicArrayTypeAssignFunctionIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_dynamicArrayTypeAssignFunctionIR GALGAS_dynamicArrayTypeAssignFunctionIR::constructor_new (const GALGAS_lstring & inAttribute_mRoutineMangledName,
                                                                                                  const GALGAS_bool & inAttribute_isRequired,
                                                                                                  const GALGAS_bool & inAttribute_warnsIfUnused
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_dynamicArrayTypeAssignFunctionIR result ;
  if (inAttribute_mRoutineMangledName.isValid () && inAttribute_isRequired.isValid () && inAttribute_warnsIfUnused.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_dynamicArrayTypeAssignFunctionIR (inAttribute_mRoutineMangledName, inAttribute_isRequired, inAttribute_warnsIfUnused COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                              Pointer class for @dynamicArrayTypeAssignFunctionIR class                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_dynamicArrayTypeAssignFunctionIR::cPtr_dynamicArrayTypeAssignFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                                              const GALGAS_bool & in_isRequired,
                                                                              const GALGAS_bool & in_warnsIfUnused
                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_dynamicArrayTypeAssignFunctionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynamicArrayTypeAssignFunctionIR ;
}

void cPtr_dynamicArrayTypeAssignFunctionIR::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@dynamicArrayTypeAssignFunctionIR:" ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_dynamicArrayTypeAssignFunctionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_dynamicArrayTypeAssignFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @dynamicArrayTypeAssignFunctionIR type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dynamicArrayTypeAssignFunctionIR ("dynamicArrayTypeAssignFunctionIR",
                                                         & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_dynamicArrayTypeAssignFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynamicArrayTypeAssignFunctionIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_dynamicArrayTypeAssignFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dynamicArrayTypeAssignFunctionIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_dynamicArrayTypeAssignFunctionIR GALGAS_dynamicArrayTypeAssignFunctionIR::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_dynamicArrayTypeAssignFunctionIR result ;
  const GALGAS_dynamicArrayTypeAssignFunctionIR * p = (const GALGAS_dynamicArrayTypeAssignFunctionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_dynamicArrayTypeAssignFunctionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynamicArrayTypeAssignFunctionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_basicIntegerAssignFunctionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_basicIntegerAssignFunctionIR * p = (const cPtr_basicIntegerAssignFunctionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_basicIntegerAssignFunctionIR) ;
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
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_basicIntegerAssignFunctionIR::objectCompare (const GALGAS_basicIntegerAssignFunctionIR & inOperand) const {
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

GALGAS_basicIntegerAssignFunctionIR::GALGAS_basicIntegerAssignFunctionIR (void) :
GALGAS_abstractRoutineIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_basicIntegerAssignFunctionIR GALGAS_basicIntegerAssignFunctionIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_basicIntegerAssignFunctionIR::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                               GALGAS_bool::constructor_default (HERE),
                                                               GALGAS_bool::constructor_default (HERE),
                                                               GALGAS_string::constructor_default (HERE)
                                                               COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_basicIntegerAssignFunctionIR::GALGAS_basicIntegerAssignFunctionIR (const cPtr_basicIntegerAssignFunctionIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_basicIntegerAssignFunctionIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_basicIntegerAssignFunctionIR GALGAS_basicIntegerAssignFunctionIR::constructor_new (const GALGAS_lstring & inAttribute_mRoutineMangledName,
                                                                                          const GALGAS_bool & inAttribute_isRequired,
                                                                                          const GALGAS_bool & inAttribute_warnsIfUnused,
                                                                                          const GALGAS_string & inAttribute_mLLVMTypeName
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_basicIntegerAssignFunctionIR result ;
  if (inAttribute_mRoutineMangledName.isValid () && inAttribute_isRequired.isValid () && inAttribute_warnsIfUnused.isValid () && inAttribute_mLLVMTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_basicIntegerAssignFunctionIR (inAttribute_mRoutineMangledName, inAttribute_isRequired, inAttribute_warnsIfUnused, inAttribute_mLLVMTypeName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_basicIntegerAssignFunctionIR::getter_mLLVMTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_basicIntegerAssignFunctionIR * p = (const cPtr_basicIntegerAssignFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_basicIntegerAssignFunctionIR) ;
    result = p->mProperty_mLLVMTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_basicIntegerAssignFunctionIR::getter_mLLVMTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLLVMTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @basicIntegerAssignFunctionIR class                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_basicIntegerAssignFunctionIR::cPtr_basicIntegerAssignFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                                      const GALGAS_bool & in_isRequired,
                                                                      const GALGAS_bool & in_warnsIfUnused,
                                                                      const GALGAS_string & in_mLLVMTypeName
                                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
mProperty_mLLVMTypeName (in_mLLVMTypeName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_basicIntegerAssignFunctionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_basicIntegerAssignFunctionIR ;
}

void cPtr_basicIntegerAssignFunctionIR::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@basicIntegerAssignFunctionIR:" ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLLVMTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_basicIntegerAssignFunctionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_basicIntegerAssignFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mLLVMTypeName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @basicIntegerAssignFunctionIR type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_basicIntegerAssignFunctionIR ("basicIntegerAssignFunctionIR",
                                                     & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_basicIntegerAssignFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_basicIntegerAssignFunctionIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_basicIntegerAssignFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_basicIntegerAssignFunctionIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_basicIntegerAssignFunctionIR GALGAS_basicIntegerAssignFunctionIR::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_basicIntegerAssignFunctionIR result ;
  const GALGAS_basicIntegerAssignFunctionIR * p = (const GALGAS_basicIntegerAssignFunctionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_basicIntegerAssignFunctionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("basicIntegerAssignFunctionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_enumToUintRoutineIR::objectCompare (const GALGAS_enumToUintRoutineIR & inOperand) const {
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

GALGAS_enumToUintRoutineIR::GALGAS_enumToUintRoutineIR (void) :
GALGAS_abstractRoutineIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumToUintRoutineIR GALGAS_enumToUintRoutineIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_enumToUintRoutineIR::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_string::constructor_default (HERE)
                                                      COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumToUintRoutineIR::GALGAS_enumToUintRoutineIR (const cPtr_enumToUintRoutineIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumToUintRoutineIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_enumToUintRoutineIR::getter_mEnumerationLLVMTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumToUintRoutineIR * p = (const cPtr_enumToUintRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumToUintRoutineIR) ;
    result = p->mProperty_mEnumerationLLVMTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_enumToUintRoutineIR::getter_mEnumerationLLVMTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumerationLLVMTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @enumToUintRoutineIR class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_enumToUintRoutineIR::cPtr_enumToUintRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                    const GALGAS_bool & in_isRequired,
                                                    const GALGAS_bool & in_warnsIfUnused,
                                                    const GALGAS_string & in_mEnumerationLLVMTypeName
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
mProperty_mEnumerationLLVMTypeName (in_mEnumerationLLVMTypeName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_enumToUintRoutineIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_enumToUintRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mEnumerationLLVMTypeName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @enumToUintRoutineIR type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumToUintRoutineIR ("enumToUintRoutineIR",
                                            & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_enumToUintRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumToUintRoutineIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_enumToUintRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumToUintRoutineIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_structureDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_structureDeclarationAST * p = (const cPtr_structureDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mReceiverTypeName.objectCompare (p->mProperty_mReceiverTypeName) ;
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

GALGAS_structureDeclarationAST GALGAS_structureDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mReceiverTypeName,
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
  if (inAttribute_mReceiverTypeName.isValid () && inAttribute_mPLMTypeSpecificName.isValid () && inAttribute_mLLVMBaseTypeName.isValid () && inAttribute_mAttributeListAST.isValid () && inAttribute_mGenerateAssignmentRoutine.isValid () && inAttribute_mStructurePropertyListAST.isValid () && inAttribute_mFunctionDeclarationListAST.isValid () && inAttribute_mSystemRoutineListAST.isValid () && inAttribute_mGuardListAST.isValid () && inAttribute_mMayImplementDeinit.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_structureDeclarationAST (inAttribute_mReceiverTypeName, inAttribute_mPLMTypeSpecificName, inAttribute_mLLVMBaseTypeName, inAttribute_mAttributeListAST, inAttribute_mGenerateAssignmentRoutine, inAttribute_mStructurePropertyListAST, inAttribute_mFunctionDeclarationListAST, inAttribute_mSystemRoutineListAST, inAttribute_mGuardListAST, inAttribute_mMayImplementDeinit COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_structureDeclarationAST::getter_mReceiverTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_structureDeclarationAST * p = (const cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    result = p->mProperty_mReceiverTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_structureDeclarationAST::getter_mReceiverTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverTypeName ;
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

cPtr_structureDeclarationAST::cPtr_structureDeclarationAST (const GALGAS_lstring & in_mReceiverTypeName,
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
mProperty_mReceiverTypeName (in_mReceiverTypeName),
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
  mProperty_mReceiverTypeName.description (ioString, inIndentation+1) ;
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
  macroMyNew (ptr, cPtr_structureDeclarationAST (mProperty_mReceiverTypeName, mProperty_mPLMTypeSpecificName, mProperty_mLLVMBaseTypeName, mProperty_mAttributeListAST, mProperty_mGenerateAssignmentRoutine, mProperty_mStructurePropertyListAST, mProperty_mFunctionDeclarationListAST, mProperty_mSystemRoutineListAST, mProperty_mGuardListAST, mProperty_mMayImplementDeinit COMMA_THERE)) ;
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

GALGAS_structurePropertyListAST_2D_element::GALGAS_structurePropertyListAST_2D_element (void) :
mProperty_mPropertyName (),
mProperty_mPropertyAttributeList (),
mProperty_mIsPublic (),
mProperty_mPropertyTypeName (),
mProperty_mPropertyKind () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structurePropertyListAST_2D_element::~ GALGAS_structurePropertyListAST_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structurePropertyListAST_2D_element::GALGAS_structurePropertyListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_propertyAttributeList & inOperand1,
                                                                                        const GALGAS_bool & inOperand2,
                                                                                        const GALGAS_lstring & inOperand3,
                                                                                        const GALGAS_propertyKindAST & inOperand4) :
mProperty_mPropertyName (inOperand0),
mProperty_mPropertyAttributeList (inOperand1),
mProperty_mIsPublic (inOperand2),
mProperty_mPropertyTypeName (inOperand3),
mProperty_mPropertyKind (inOperand4) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structurePropertyListAST_2D_element GALGAS_structurePropertyListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_propertyAttributeList & inOperand1,
                                                                                                        const GALGAS_bool & inOperand2,
                                                                                                        const GALGAS_lstring & inOperand3,
                                                                                                        const GALGAS_propertyKindAST & inOperand4 
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_structurePropertyListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_structurePropertyListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
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
    result = mProperty_mIsPublic.objectCompare (inOperand.mProperty_mIsPublic) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPropertyTypeName.objectCompare (inOperand.mProperty_mPropertyTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPropertyKind.objectCompare (inOperand.mProperty_mPropertyKind) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_structurePropertyListAST_2D_element::isValid (void) const {
  return mProperty_mPropertyName.isValid () && mProperty_mPropertyAttributeList.isValid () && mProperty_mIsPublic.isValid () && mProperty_mPropertyTypeName.isValid () && mProperty_mPropertyKind.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_structurePropertyListAST_2D_element::drop (void) {
  mProperty_mPropertyName.drop () ;
  mProperty_mPropertyAttributeList.drop () ;
  mProperty_mIsPublic.drop () ;
  mProperty_mPropertyTypeName.drop () ;
  mProperty_mPropertyKind.drop () ;
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
    mProperty_mIsPublic.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPropertyTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPropertyKind.description (ioString, inIndentation+1) ;
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

GALGAS_bool GALGAS_structurePropertyListAST_2D_element::getter_mIsPublic (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsPublic ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_structurePropertyListAST_2D_element::getter_mPropertyTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyKindAST GALGAS_structurePropertyListAST_2D_element::getter_mPropertyKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyKind ;
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

typeComparisonResult cPtr_userLLVMSructureTypeDefinitionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_userLLVMSructureTypeDefinitionIR * p = (const cPtr_userLLVMSructureTypeDefinitionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_userLLVMSructureTypeDefinitionIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mLLVMDefinedTypeName.objectCompare (p->mProperty_mLLVMDefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyList.objectCompare (p->mProperty_mPropertyList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_userLLVMSructureTypeDefinitionIR::objectCompare (const GALGAS_userLLVMSructureTypeDefinitionIR & inOperand) const {
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

GALGAS_userLLVMSructureTypeDefinitionIR::GALGAS_userLLVMSructureTypeDefinitionIR (void) :
GALGAS_userLLVMTypeDefinitionIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_userLLVMSructureTypeDefinitionIR GALGAS_userLLVMSructureTypeDefinitionIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_userLLVMSructureTypeDefinitionIR::constructor_new (GALGAS_string::constructor_default (HERE),
                                                                   GALGAS_propertyList::constructor_emptyList (HERE)
                                                                   COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_userLLVMSructureTypeDefinitionIR::GALGAS_userLLVMSructureTypeDefinitionIR (const cPtr_userLLVMSructureTypeDefinitionIR * inSourcePtr) :
GALGAS_userLLVMTypeDefinitionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_userLLVMSructureTypeDefinitionIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_userLLVMSructureTypeDefinitionIR GALGAS_userLLVMSructureTypeDefinitionIR::constructor_new (const GALGAS_string & inAttribute_mLLVMDefinedTypeName,
                                                                                                  const GALGAS_propertyList & inAttribute_mPropertyList
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_userLLVMSructureTypeDefinitionIR result ;
  if (inAttribute_mLLVMDefinedTypeName.isValid () && inAttribute_mPropertyList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_userLLVMSructureTypeDefinitionIR (inAttribute_mLLVMDefinedTypeName, inAttribute_mPropertyList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyList GALGAS_userLLVMSructureTypeDefinitionIR::getter_mPropertyList (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_userLLVMSructureTypeDefinitionIR * p = (const cPtr_userLLVMSructureTypeDefinitionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_userLLVMSructureTypeDefinitionIR) ;
    result = p->mProperty_mPropertyList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyList cPtr_userLLVMSructureTypeDefinitionIR::getter_mPropertyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                              Pointer class for @userLLVMSructureTypeDefinitionIR class                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_userLLVMSructureTypeDefinitionIR::cPtr_userLLVMSructureTypeDefinitionIR (const GALGAS_string & in_mLLVMDefinedTypeName,
                                                                              const GALGAS_propertyList & in_mPropertyList
                                                                              COMMA_LOCATION_ARGS) :
cPtr_userLLVMTypeDefinitionIR (in_mLLVMDefinedTypeName COMMA_THERE),
mProperty_mPropertyList (in_mPropertyList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_userLLVMSructureTypeDefinitionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_userLLVMSructureTypeDefinitionIR ;
}

void cPtr_userLLVMSructureTypeDefinitionIR::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@userLLVMSructureTypeDefinitionIR:" ;
  mProperty_mLLVMDefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPropertyList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_userLLVMSructureTypeDefinitionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_userLLVMSructureTypeDefinitionIR (mProperty_mLLVMDefinedTypeName, mProperty_mPropertyList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @userLLVMSructureTypeDefinitionIR type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_userLLVMSructureTypeDefinitionIR ("userLLVMSructureTypeDefinitionIR",
                                                         & kTypeDescriptor_GALGAS_userLLVMTypeDefinitionIR) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_userLLVMSructureTypeDefinitionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_userLLVMSructureTypeDefinitionIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_userLLVMSructureTypeDefinitionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_userLLVMSructureTypeDefinitionIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_userLLVMSructureTypeDefinitionIR GALGAS_userLLVMSructureTypeDefinitionIR::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_userLLVMSructureTypeDefinitionIR result ;
  const GALGAS_userLLVMSructureTypeDefinitionIR * p = (const GALGAS_userLLVMSructureTypeDefinitionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_userLLVMSructureTypeDefinitionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("userLLVMSructureTypeDefinitionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_structureTypeAssignFunctionIR::objectCompare (const GALGAS_structureTypeAssignFunctionIR & inOperand) const {
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

GALGAS_structureTypeAssignFunctionIR::GALGAS_structureTypeAssignFunctionIR (void) :
GALGAS_abstractRoutineIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structureTypeAssignFunctionIR GALGAS_structureTypeAssignFunctionIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_structureTypeAssignFunctionIR::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_bool::constructor_default (HERE),
                                                                GALGAS_bool::constructor_default (HERE),
                                                                GALGAS_PLMType::constructor_default (HERE)
                                                                COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structureTypeAssignFunctionIR::GALGAS_structureTypeAssignFunctionIR (const cPtr_structureTypeAssignFunctionIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structureTypeAssignFunctionIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structureTypeAssignFunctionIR GALGAS_structureTypeAssignFunctionIR::constructor_new (const GALGAS_lstring & inAttribute_mRoutineMangledName,
                                                                                            const GALGAS_bool & inAttribute_isRequired,
                                                                                            const GALGAS_bool & inAttribute_warnsIfUnused,
                                                                                            const GALGAS_PLMType & inAttribute_mStructureType
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_structureTypeAssignFunctionIR result ;
  if (inAttribute_mRoutineMangledName.isValid () && inAttribute_isRequired.isValid () && inAttribute_warnsIfUnused.isValid () && inAttribute_mStructureType.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_structureTypeAssignFunctionIR (inAttribute_mRoutineMangledName, inAttribute_isRequired, inAttribute_warnsIfUnused, inAttribute_mStructureType COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_structureTypeAssignFunctionIR::getter_mStructureType (UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMType result ;
  if (NULL != mObjectPtr) {
    const cPtr_structureTypeAssignFunctionIR * p = (const cPtr_structureTypeAssignFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureTypeAssignFunctionIR) ;
    result = p->mProperty_mStructureType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType cPtr_structureTypeAssignFunctionIR::getter_mStructureType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStructureType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                               Pointer class for @structureTypeAssignFunctionIR class                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_structureTypeAssignFunctionIR::cPtr_structureTypeAssignFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                                        const GALGAS_bool & in_isRequired,
                                                                        const GALGAS_bool & in_warnsIfUnused,
                                                                        const GALGAS_PLMType & in_mStructureType
                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
mProperty_mStructureType (in_mStructureType) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_structureTypeAssignFunctionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_structureTypeAssignFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mStructureType COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @structureTypeAssignFunctionIR type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structureTypeAssignFunctionIR ("structureTypeAssignFunctionIR",
                                                      & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_structureTypeAssignFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structureTypeAssignFunctionIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_structureTypeAssignFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structureTypeAssignFunctionIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

typeComparisonResult cPtr_uint_31_ToBoolFunctionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_uint_31_ToBoolFunctionIR * p = (const cPtr_uint_31_ToBoolFunctionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_uint_31_ToBoolFunctionIR) ;
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
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_uint_31_ToBoolFunctionIR::objectCompare (const GALGAS_uint_31_ToBoolFunctionIR & inOperand) const {
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

GALGAS_uint_31_ToBoolFunctionIR::GALGAS_uint_31_ToBoolFunctionIR (void) :
GALGAS_abstractRoutineIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint_31_ToBoolFunctionIR GALGAS_uint_31_ToBoolFunctionIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_uint_31_ToBoolFunctionIR::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_bool::constructor_default (HERE),
                                                           GALGAS_bool::constructor_default (HERE),
                                                           GALGAS_string::constructor_default (HERE)
                                                           COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint_31_ToBoolFunctionIR::GALGAS_uint_31_ToBoolFunctionIR (const cPtr_uint_31_ToBoolFunctionIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_uint_31_ToBoolFunctionIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint_31_ToBoolFunctionIR GALGAS_uint_31_ToBoolFunctionIR::constructor_new (const GALGAS_lstring & inAttribute_mRoutineMangledName,
                                                                                  const GALGAS_bool & inAttribute_isRequired,
                                                                                  const GALGAS_bool & inAttribute_warnsIfUnused,
                                                                                  const GALGAS_string & inAttribute_mLLVMTypeName
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_uint_31_ToBoolFunctionIR result ;
  if (inAttribute_mRoutineMangledName.isValid () && inAttribute_isRequired.isValid () && inAttribute_warnsIfUnused.isValid () && inAttribute_mLLVMTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_uint_31_ToBoolFunctionIR (inAttribute_mRoutineMangledName, inAttribute_isRequired, inAttribute_warnsIfUnused, inAttribute_mLLVMTypeName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_uint_31_ToBoolFunctionIR::getter_mLLVMTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_uint_31_ToBoolFunctionIR * p = (const cPtr_uint_31_ToBoolFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_uint_31_ToBoolFunctionIR) ;
    result = p->mProperty_mLLVMTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_uint_31_ToBoolFunctionIR::getter_mLLVMTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLLVMTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @uint1ToBoolFunctionIR class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_uint_31_ToBoolFunctionIR::cPtr_uint_31_ToBoolFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                              const GALGAS_bool & in_isRequired,
                                                              const GALGAS_bool & in_warnsIfUnused,
                                                              const GALGAS_string & in_mLLVMTypeName
                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
mProperty_mLLVMTypeName (in_mLLVMTypeName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_uint_31_ToBoolFunctionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint_31_ToBoolFunctionIR ;
}

void cPtr_uint_31_ToBoolFunctionIR::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@uint1ToBoolFunctionIR:" ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLLVMTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_uint_31_ToBoolFunctionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_uint_31_ToBoolFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mLLVMTypeName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @uint1ToBoolFunctionIR type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_uint_31_ToBoolFunctionIR ("uint1ToBoolFunctionIR",
                                                 & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_uint_31_ToBoolFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint_31_ToBoolFunctionIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_uint_31_ToBoolFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_uint_31_ToBoolFunctionIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint_31_ToBoolFunctionIR GALGAS_uint_31_ToBoolFunctionIR::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_uint_31_ToBoolFunctionIR result ;
  const GALGAS_uint_31_ToBoolFunctionIR * p = (const GALGAS_uint_31_ToBoolFunctionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_uint_31_ToBoolFunctionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uint1ToBoolFunctionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_integerBuiltinFunctionIR::objectCompare (const GALGAS_integerBuiltinFunctionIR & inOperand) const {
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

GALGAS_integerBuiltinFunctionIR::GALGAS_integerBuiltinFunctionIR (void) :
GALGAS_abstractRoutineIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_integerBuiltinFunctionIR GALGAS_integerBuiltinFunctionIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_integerBuiltinFunctionIR::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_bool::constructor_default (HERE),
                                                           GALGAS_bool::constructor_default (HERE),
                                                           GALGAS_string::constructor_default (HERE),
                                                           GALGAS_string::constructor_default (HERE)
                                                           COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_integerBuiltinFunctionIR::GALGAS_integerBuiltinFunctionIR (const cPtr_integerBuiltinFunctionIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_integerBuiltinFunctionIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_integerBuiltinFunctionIR::getter_mLLVMTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_integerBuiltinFunctionIR * p = (const cPtr_integerBuiltinFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerBuiltinFunctionIR) ;
    result = p->mProperty_mLLVMTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_integerBuiltinFunctionIR::getter_mLLVMTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLLVMTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_integerBuiltinFunctionIR::getter_mIntrinsicName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_integerBuiltinFunctionIR * p = (const cPtr_integerBuiltinFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerBuiltinFunctionIR) ;
    result = p->mProperty_mIntrinsicName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_integerBuiltinFunctionIR::getter_mIntrinsicName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIntrinsicName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                  Pointer class for @integerBuiltinFunctionIR class                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_integerBuiltinFunctionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_integerBuiltinFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mLLVMTypeName, mProperty_mIntrinsicName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @integerBuiltinFunctionIR type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_integerBuiltinFunctionIR ("integerBuiltinFunctionIR",
                                                 & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_integerBuiltinFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerBuiltinFunctionIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_integerBuiltinFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_integerBuiltinFunctionIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_integerTypeAssignFunctionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_integerTypeAssignFunctionIR * p = (const cPtr_integerTypeAssignFunctionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_integerTypeAssignFunctionIR) ;
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
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_integerTypeAssignFunctionIR::objectCompare (const GALGAS_integerTypeAssignFunctionIR & inOperand) const {
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

GALGAS_integerTypeAssignFunctionIR::GALGAS_integerTypeAssignFunctionIR (void) :
GALGAS_abstractRoutineIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_integerTypeAssignFunctionIR GALGAS_integerTypeAssignFunctionIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_integerTypeAssignFunctionIR::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_bool::constructor_default (HERE),
                                                              GALGAS_bool::constructor_default (HERE),
                                                              GALGAS_string::constructor_default (HERE)
                                                              COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_integerTypeAssignFunctionIR::GALGAS_integerTypeAssignFunctionIR (const cPtr_integerTypeAssignFunctionIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_integerTypeAssignFunctionIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_integerTypeAssignFunctionIR GALGAS_integerTypeAssignFunctionIR::constructor_new (const GALGAS_lstring & inAttribute_mRoutineMangledName,
                                                                                        const GALGAS_bool & inAttribute_isRequired,
                                                                                        const GALGAS_bool & inAttribute_warnsIfUnused,
                                                                                        const GALGAS_string & inAttribute_mLLVMTypeName
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_integerTypeAssignFunctionIR result ;
  if (inAttribute_mRoutineMangledName.isValid () && inAttribute_isRequired.isValid () && inAttribute_warnsIfUnused.isValid () && inAttribute_mLLVMTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_integerTypeAssignFunctionIR (inAttribute_mRoutineMangledName, inAttribute_isRequired, inAttribute_warnsIfUnused, inAttribute_mLLVMTypeName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_integerTypeAssignFunctionIR::getter_mLLVMTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_integerTypeAssignFunctionIR * p = (const cPtr_integerTypeAssignFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerTypeAssignFunctionIR) ;
    result = p->mProperty_mLLVMTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_integerTypeAssignFunctionIR::getter_mLLVMTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLLVMTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @integerTypeAssignFunctionIR class                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_integerTypeAssignFunctionIR::cPtr_integerTypeAssignFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                                    const GALGAS_bool & in_isRequired,
                                                                    const GALGAS_bool & in_warnsIfUnused,
                                                                    const GALGAS_string & in_mLLVMTypeName
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
mProperty_mLLVMTypeName (in_mLLVMTypeName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_integerTypeAssignFunctionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerTypeAssignFunctionIR ;
}

void cPtr_integerTypeAssignFunctionIR::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@integerTypeAssignFunctionIR:" ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLLVMTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_integerTypeAssignFunctionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_integerTypeAssignFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mLLVMTypeName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @integerTypeAssignFunctionIR type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_integerTypeAssignFunctionIR ("integerTypeAssignFunctionIR",
                                                    & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_integerTypeAssignFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerTypeAssignFunctionIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_integerTypeAssignFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_integerTypeAssignFunctionIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_integerTypeAssignFunctionIR GALGAS_integerTypeAssignFunctionIR::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_integerTypeAssignFunctionIR result ;
  const GALGAS_integerTypeAssignFunctionIR * p = (const GALGAS_integerTypeAssignFunctionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_integerTypeAssignFunctionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("integerTypeAssignFunctionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_controlRegisterGroupArrayList temp_1 = inObject ;
    test_0 = GALGAS_bool (kIsStrictSup, temp_1.getter_length (SOURCE_FILE ("declaration-control-register.galgas", 624)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Control Register Group Arraies"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 625)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 625)) ;
      GALGAS_string var_int_25133 = GALGAS_string ("i").add_operation (constinArgument_inPointerSize.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 626)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 626)) ;
      const GALGAS_controlRegisterGroupArrayList temp_2 = inObject ;
      cEnumerator_controlRegisterGroupArrayList enumerator_25197 (temp_2, kENUMERATION_UP) ;
      while (enumerator_25197.hasCurrentObject ()) {
        ioArgument_ioLLVMcode.plusAssign_operation(function_registerGroupAddressArrayLLVMname (enumerator_25197.current_mGroupName (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 628)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 628)).add_operation (GALGAS_string (" = private unnamed_addr constant ["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 628)).add_operation (enumerator_25197.current_mBaseAddresses (HERE).getter_length (SOURCE_FILE ("declaration-control-register.galgas", 629)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 629)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 629)).add_operation (GALGAS_string (" x "), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 629)).add_operation (var_int_25133, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 629)).add_operation (GALGAS_string ("] ["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 629)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 628)) ;
        cEnumerator_lbigintlist enumerator_25404 (enumerator_25197.current_mBaseAddresses (HERE), kENUMERATION_UP) ;
        while (enumerator_25404.hasCurrentObject ()) {
          ioArgument_ioLLVMcode.plusAssign_operation(var_int_25133.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 632)).add_operation (enumerator_25404.current_mValue (HERE).getter_bigint (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 632)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 632)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 632)) ;
          if (enumerator_25404.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 634)) ;
          }
          enumerator_25404.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("] ; "), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 636)) ;
        cEnumerator_lbigintlist enumerator_25580 (enumerator_25197.current_mBaseAddresses (HERE), kENUMERATION_UP) ;
        while (enumerator_25580.hasCurrentObject ()) {
          ioArgument_ioLLVMcode.plusAssign_operation(enumerator_25580.current_mValue (HERE).getter_bigint (HERE).getter_hexString (SOURCE_FILE ("declaration-control-register.galgas", 639)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 639)) ;
          if (enumerator_25580.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 641)) ;
          }
          enumerator_25580.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 643)) ;
        enumerator_25197.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 645)) ;
    }
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
mProperty_mPropertyListAST (),
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
                                                          const GALGAS_structurePropertyListAST & inOperand2,
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
mProperty_mPropertyListAST (inOperand2),
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
                                      GALGAS_structurePropertyListAST::constructor_emptyList (HERE),
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
                                                                          const GALGAS_structurePropertyListAST & inOperand2,
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
    result = mProperty_mPropertyListAST.objectCompare (inOperand.mProperty_mPropertyListAST) ;
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
  return mProperty_mDriverName.isValid () && mProperty_mDriverDependanceList.isValid () && mProperty_mPropertyListAST.isValid () && mProperty_mDriverFunctionDeclarationListAST.isValid () && mProperty_mDriverSystemRoutineListAST.isValid () && mProperty_mDriverGuardListAST.isValid () && mProperty_mBootLocation.isValid () && mProperty_mBootInstructionList.isValid () && mProperty_mBootEndLocation.isValid () && mProperty_mStartupLocation.isValid () && mProperty_mStartupInstructionList.isValid () && mProperty_mStartupEndLocation.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverDeclarationAST::drop (void) {
  mProperty_mDriverName.drop () ;
  mProperty_mDriverDependanceList.drop () ;
  mProperty_mPropertyListAST.drop () ;
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
    mProperty_mPropertyListAST.description (ioString, inIndentation+1) ;
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

GALGAS_structurePropertyListAST GALGAS_driverDeclarationAST::getter_mPropertyListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyListAST ;
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
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_staticListIndirectRoutineIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_staticListIndirectRoutineIR * p = (const cPtr_staticListIndirectRoutineIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_staticListIndirectRoutineIR) ;
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
    result = mProperty_mStaticListElementType.objectCompare (p->mProperty_mStaticListElementType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFormalArgumentListForGeneration.objectCompare (p->mProperty_mFormalArgumentListForGeneration) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReturnTypeProxy.objectCompare (p->mProperty_mReturnTypeProxy) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyIndex.objectCompare (p->mProperty_mPropertyIndex) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_staticListIndirectRoutineIR::objectCompare (const GALGAS_staticListIndirectRoutineIR & inOperand) const {
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

GALGAS_staticListIndirectRoutineIR::GALGAS_staticListIndirectRoutineIR (void) :
GALGAS_abstractRoutineIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListIndirectRoutineIR GALGAS_staticListIndirectRoutineIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_staticListIndirectRoutineIR::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_bool::constructor_default (HERE),
                                                              GALGAS_bool::constructor_default (HERE),
                                                              GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                              GALGAS_routineTypedSignature::constructor_emptyList (HERE),
                                                              GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                              GALGAS_uint::constructor_default (HERE)
                                                              COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListIndirectRoutineIR::GALGAS_staticListIndirectRoutineIR (const cPtr_staticListIndirectRoutineIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_staticListIndirectRoutineIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListIndirectRoutineIR GALGAS_staticListIndirectRoutineIR::constructor_new (const GALGAS_lstring & inAttribute_mRoutineMangledName,
                                                                                        const GALGAS_bool & inAttribute_isRequired,
                                                                                        const GALGAS_bool & inAttribute_warnsIfUnused,
                                                                                        const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mStaticListElementType,
                                                                                        const GALGAS_routineTypedSignature & inAttribute_mFormalArgumentListForGeneration,
                                                                                        const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReturnTypeProxy,
                                                                                        const GALGAS_uint & inAttribute_mPropertyIndex
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_staticListIndirectRoutineIR result ;
  if (inAttribute_mRoutineMangledName.isValid () && inAttribute_isRequired.isValid () && inAttribute_warnsIfUnused.isValid () && inAttribute_mStaticListElementType.isValid () && inAttribute_mFormalArgumentListForGeneration.isValid () && inAttribute_mReturnTypeProxy.isValid () && inAttribute_mPropertyIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_staticListIndirectRoutineIR (inAttribute_mRoutineMangledName, inAttribute_isRequired, inAttribute_warnsIfUnused, inAttribute_mStaticListElementType, inAttribute_mFormalArgumentListForGeneration, inAttribute_mReturnTypeProxy, inAttribute_mPropertyIndex COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_staticListIndirectRoutineIR::getter_mStaticListElementType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_staticListIndirectRoutineIR * p = (const cPtr_staticListIndirectRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListIndirectRoutineIR) ;
    result = p->mProperty_mStaticListElementType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy cPtr_staticListIndirectRoutineIR::getter_mStaticListElementType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStaticListElementType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineTypedSignature GALGAS_staticListIndirectRoutineIR::getter_mFormalArgumentListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_routineTypedSignature result ;
  if (NULL != mObjectPtr) {
    const cPtr_staticListIndirectRoutineIR * p = (const cPtr_staticListIndirectRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListIndirectRoutineIR) ;
    result = p->mProperty_mFormalArgumentListForGeneration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineTypedSignature cPtr_staticListIndirectRoutineIR::getter_mFormalArgumentListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_staticListIndirectRoutineIR::getter_mReturnTypeProxy (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_staticListIndirectRoutineIR * p = (const cPtr_staticListIndirectRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListIndirectRoutineIR) ;
    result = p->mProperty_mReturnTypeProxy ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy cPtr_staticListIndirectRoutineIR::getter_mReturnTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReturnTypeProxy ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_staticListIndirectRoutineIR::getter_mPropertyIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_staticListIndirectRoutineIR * p = (const cPtr_staticListIndirectRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListIndirectRoutineIR) ;
    result = p->mProperty_mPropertyIndex ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cPtr_staticListIndirectRoutineIR::getter_mPropertyIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyIndex ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @staticListIndirectRoutineIR class                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_staticListIndirectRoutineIR::cPtr_staticListIndirectRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                                    const GALGAS_bool & in_isRequired,
                                                                    const GALGAS_bool & in_warnsIfUnused,
                                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mStaticListElementType,
                                                                    const GALGAS_routineTypedSignature & in_mFormalArgumentListForGeneration,
                                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mReturnTypeProxy,
                                                                    const GALGAS_uint & in_mPropertyIndex
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
mProperty_mStaticListElementType (in_mStaticListElementType),
mProperty_mFormalArgumentListForGeneration (in_mFormalArgumentListForGeneration),
mProperty_mReturnTypeProxy (in_mReturnTypeProxy),
mProperty_mPropertyIndex (in_mPropertyIndex) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_staticListIndirectRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListIndirectRoutineIR ;
}

void cPtr_staticListIndirectRoutineIR::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@staticListIndirectRoutineIR:" ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStaticListElementType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFormalArgumentListForGeneration.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReturnTypeProxy.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPropertyIndex.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_staticListIndirectRoutineIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_staticListIndirectRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mStaticListElementType, mProperty_mFormalArgumentListForGeneration, mProperty_mReturnTypeProxy, mProperty_mPropertyIndex COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @staticListIndirectRoutineIR type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticListIndirectRoutineIR ("staticListIndirectRoutineIR",
                                                    & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_staticListIndirectRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListIndirectRoutineIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_staticListIndirectRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticListIndirectRoutineIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListIndirectRoutineIR GALGAS_staticListIndirectRoutineIR::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_staticListIndirectRoutineIR result ;
  const GALGAS_staticListIndirectRoutineIR * p = (const GALGAS_staticListIndirectRoutineIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_staticListIndirectRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListIndirectRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
                                                                          const GALGAS_location & inOperand7,
                                                                          const GALGAS_bool & inOperand8) :
mProperty_mTaskName (inOperand0),
mProperty_mStackSize (inOperand1),
mProperty_mVarList (inOperand2),
mProperty_mTaskProcList (inOperand3),
mProperty_mTaskSetupListAST (inOperand4),
mProperty_mTaskActivateListAST (inOperand5),
mProperty_mTaskDeactivateListAST (inOperand6),
mProperty_mEndOfTaskDeclaration (inOperand7),
mProperty_mActivate (inOperand8) {
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
                                                                                          const GALGAS_location & inOperand7,
                                                                                          const GALGAS_bool & inOperand8 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_decoratedTaskList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid ()) {
    result = GALGAS_decoratedTaskList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8) ;
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
    result = mProperty_mEndOfTaskDeclaration.objectCompare (inOperand.mProperty_mEndOfTaskDeclaration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mActivate.objectCompare (inOperand.mProperty_mActivate) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_decoratedTaskList_2D_element::isValid (void) const {
  return mProperty_mTaskName.isValid () && mProperty_mStackSize.isValid () && mProperty_mVarList.isValid () && mProperty_mTaskProcList.isValid () && mProperty_mTaskSetupListAST.isValid () && mProperty_mTaskActivateListAST.isValid () && mProperty_mTaskDeactivateListAST.isValid () && mProperty_mEndOfTaskDeclaration.isValid () && mProperty_mActivate.isValid () ;
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
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_taskActivateFunctionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_taskActivateFunctionIR * p = (const cPtr_taskActivateFunctionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_taskActivateFunctionIR) ;
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
    result = mProperty_mAssemblerTaskName.objectCompare (p->mProperty_mAssemblerTaskName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActivateServiceInvocationName.objectCompare (p->mProperty_mActivateServiceInvocationName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTaskIndex.objectCompare (p->mProperty_mTaskIndex) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_taskActivateFunctionIR::objectCompare (const GALGAS_taskActivateFunctionIR & inOperand) const {
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

GALGAS_taskActivateFunctionIR::GALGAS_taskActivateFunctionIR (void) :
GALGAS_abstractRoutineIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskActivateFunctionIR GALGAS_taskActivateFunctionIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_taskActivateFunctionIR::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_bool::constructor_default (HERE),
                                                         GALGAS_bool::constructor_default (HERE),
                                                         GALGAS_string::constructor_default (HERE),
                                                         GALGAS_string::constructor_default (HERE),
                                                         GALGAS_uint::constructor_default (HERE)
                                                         COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskActivateFunctionIR::GALGAS_taskActivateFunctionIR (const cPtr_taskActivateFunctionIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_taskActivateFunctionIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskActivateFunctionIR GALGAS_taskActivateFunctionIR::constructor_new (const GALGAS_lstring & inAttribute_mRoutineMangledName,
                                                                              const GALGAS_bool & inAttribute_isRequired,
                                                                              const GALGAS_bool & inAttribute_warnsIfUnused,
                                                                              const GALGAS_string & inAttribute_mAssemblerTaskName,
                                                                              const GALGAS_string & inAttribute_mActivateServiceInvocationName,
                                                                              const GALGAS_uint & inAttribute_mTaskIndex
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_taskActivateFunctionIR result ;
  if (inAttribute_mRoutineMangledName.isValid () && inAttribute_isRequired.isValid () && inAttribute_warnsIfUnused.isValid () && inAttribute_mAssemblerTaskName.isValid () && inAttribute_mActivateServiceInvocationName.isValid () && inAttribute_mTaskIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_taskActivateFunctionIR (inAttribute_mRoutineMangledName, inAttribute_isRequired, inAttribute_warnsIfUnused, inAttribute_mAssemblerTaskName, inAttribute_mActivateServiceInvocationName, inAttribute_mTaskIndex COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_taskActivateFunctionIR::getter_mAssemblerTaskName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_taskActivateFunctionIR * p = (const cPtr_taskActivateFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskActivateFunctionIR) ;
    result = p->mProperty_mAssemblerTaskName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_taskActivateFunctionIR::getter_mAssemblerTaskName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAssemblerTaskName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_taskActivateFunctionIR::getter_mActivateServiceInvocationName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_taskActivateFunctionIR * p = (const cPtr_taskActivateFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskActivateFunctionIR) ;
    result = p->mProperty_mActivateServiceInvocationName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_taskActivateFunctionIR::getter_mActivateServiceInvocationName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActivateServiceInvocationName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_taskActivateFunctionIR::getter_mTaskIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_taskActivateFunctionIR * p = (const cPtr_taskActivateFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskActivateFunctionIR) ;
    result = p->mProperty_mTaskIndex ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cPtr_taskActivateFunctionIR::getter_mTaskIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskIndex ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @taskActivateFunctionIR class                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_taskActivateFunctionIR::cPtr_taskActivateFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                          const GALGAS_bool & in_isRequired,
                                                          const GALGAS_bool & in_warnsIfUnused,
                                                          const GALGAS_string & in_mAssemblerTaskName,
                                                          const GALGAS_string & in_mActivateServiceInvocationName,
                                                          const GALGAS_uint & in_mTaskIndex
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
mProperty_mAssemblerTaskName (in_mAssemblerTaskName),
mProperty_mActivateServiceInvocationName (in_mActivateServiceInvocationName),
mProperty_mTaskIndex (in_mTaskIndex) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_taskActivateFunctionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskActivateFunctionIR ;
}

void cPtr_taskActivateFunctionIR::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@taskActivateFunctionIR:" ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAssemblerTaskName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActivateServiceInvocationName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTaskIndex.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_taskActivateFunctionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_taskActivateFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mAssemblerTaskName, mProperty_mActivateServiceInvocationName, mProperty_mTaskIndex COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @taskActivateFunctionIR type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_taskActivateFunctionIR ("taskActivateFunctionIR",
                                               & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_taskActivateFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskActivateFunctionIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_taskActivateFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskActivateFunctionIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskActivateFunctionIR GALGAS_taskActivateFunctionIR::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_taskActivateFunctionIR result ;
  const GALGAS_taskActivateFunctionIR * p = (const GALGAS_taskActivateFunctionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_taskActivateFunctionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskActivateFunctionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Extension method '@propertyGetterMap addPropertyGetter'                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_addPropertyGetter (GALGAS_propertyGetterMap & ioObject,
                                        const GALGAS_string constinArgument_inLLVMBaseTypeName,
                                        const GALGAS_lstring constinArgument_inPropertyName,
                                        const GALGAS_mode constinArgument_inMode,
                                        const GALGAS_bool constinArgument_inPublic,
                                        const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inResultTypeProxy,
                                        GALGAS_lstring & outArgument_outRoutineLLVMName,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRoutineLLVMName.drop () ; // Release 'out' argument
  outArgument_outRoutineLLVMName = GALGAS_lstring::constructor_new (function_getterLLVMName (constinArgument_inLLVMBaseTypeName, constinArgument_inPropertyName.getter_string (SOURCE_FILE ("declaration-func.galgas", 335)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 335)), constinArgument_inPropertyName.getter_location (SOURCE_FILE ("declaration-func.galgas", 335))  COMMA_SOURCE_FILE ("declaration-func.galgas", 335)) ;
  GALGAS_routineLLVMNameDict var_modeDictionary_11956 = extensionGetter_routineLLVMDictionaryForFunction (constinArgument_inMode, outArgument_outRoutineLLVMName.getter_string (SOURCE_FILE ("declaration-func.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 336)) ;
  {
  ioObject.setter_insertKey (constinArgument_inPropertyName, constinArgument_inPublic, GALGAS_propertyGetterKind::constructor_computedProperty (constinArgument_inResultTypeProxy, var_modeDictionary_11956  COMMA_SOURCE_FILE ("declaration-func.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 337)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_systemUserRoutineIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_systemUserRoutineIR * p = (const cPtr_systemUserRoutineIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_systemUserRoutineIR) ;
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
    result = mProperty_mMangledImplementationName.objectCompare (p->mProperty_mMangledImplementationName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFormalArgumentList.objectCompare (p->mProperty_mFormalArgumentList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverTypeProxy.objectCompare (p->mProperty_mReceiverTypeProxy) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsSection.objectCompare (p->mProperty_mIsSection) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReturnTypeProxy.objectCompare (p->mProperty_mReturnTypeProxy) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_systemUserRoutineIR::objectCompare (const GALGAS_systemUserRoutineIR & inOperand) const {
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

GALGAS_systemUserRoutineIR::GALGAS_systemUserRoutineIR (void) :
GALGAS_abstractRoutineIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_systemUserRoutineIR GALGAS_systemUserRoutineIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_systemUserRoutineIR::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_string::constructor_default (HERE),
                                                      GALGAS_routineTypedSignature::constructor_emptyList (HERE),
                                                      GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                      GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE)
                                                      COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_systemUserRoutineIR::GALGAS_systemUserRoutineIR (const cPtr_systemUserRoutineIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_systemUserRoutineIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_systemUserRoutineIR GALGAS_systemUserRoutineIR::constructor_new (const GALGAS_lstring & inAttribute_mRoutineMangledName,
                                                                        const GALGAS_bool & inAttribute_isRequired,
                                                                        const GALGAS_bool & inAttribute_warnsIfUnused,
                                                                        const GALGAS_string & inAttribute_mMangledImplementationName,
                                                                        const GALGAS_routineTypedSignature & inAttribute_mFormalArgumentList,
                                                                        const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReceiverTypeProxy,
                                                                        const GALGAS_bool & inAttribute_mIsSection,
                                                                        const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReturnTypeProxy
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_systemUserRoutineIR result ;
  if (inAttribute_mRoutineMangledName.isValid () && inAttribute_isRequired.isValid () && inAttribute_warnsIfUnused.isValid () && inAttribute_mMangledImplementationName.isValid () && inAttribute_mFormalArgumentList.isValid () && inAttribute_mReceiverTypeProxy.isValid () && inAttribute_mIsSection.isValid () && inAttribute_mReturnTypeProxy.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_systemUserRoutineIR (inAttribute_mRoutineMangledName, inAttribute_isRequired, inAttribute_warnsIfUnused, inAttribute_mMangledImplementationName, inAttribute_mFormalArgumentList, inAttribute_mReceiverTypeProxy, inAttribute_mIsSection, inAttribute_mReturnTypeProxy COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_systemUserRoutineIR::getter_mMangledImplementationName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_systemUserRoutineIR * p = (const cPtr_systemUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemUserRoutineIR) ;
    result = p->mProperty_mMangledImplementationName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_systemUserRoutineIR::getter_mMangledImplementationName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMangledImplementationName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineTypedSignature GALGAS_systemUserRoutineIR::getter_mFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  GALGAS_routineTypedSignature result ;
  if (NULL != mObjectPtr) {
    const cPtr_systemUserRoutineIR * p = (const cPtr_systemUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemUserRoutineIR) ;
    result = p->mProperty_mFormalArgumentList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineTypedSignature cPtr_systemUserRoutineIR::getter_mFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_systemUserRoutineIR::getter_mReceiverTypeProxy (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_systemUserRoutineIR * p = (const cPtr_systemUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemUserRoutineIR) ;
    result = p->mProperty_mReceiverTypeProxy ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy cPtr_systemUserRoutineIR::getter_mReceiverTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverTypeProxy ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_systemUserRoutineIR::getter_mIsSection (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_systemUserRoutineIR * p = (const cPtr_systemUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemUserRoutineIR) ;
    result = p->mProperty_mIsSection ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_systemUserRoutineIR::getter_mIsSection (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsSection ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_systemUserRoutineIR::getter_mReturnTypeProxy (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_systemUserRoutineIR * p = (const cPtr_systemUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemUserRoutineIR) ;
    result = p->mProperty_mReturnTypeProxy ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy cPtr_systemUserRoutineIR::getter_mReturnTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReturnTypeProxy ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @systemUserRoutineIR class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_systemUserRoutineIR::cPtr_systemUserRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                    const GALGAS_bool & in_isRequired,
                                                    const GALGAS_bool & in_warnsIfUnused,
                                                    const GALGAS_string & in_mMangledImplementationName,
                                                    const GALGAS_routineTypedSignature & in_mFormalArgumentList,
                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverTypeProxy,
                                                    const GALGAS_bool & in_mIsSection,
                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mReturnTypeProxy
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
mProperty_mMangledImplementationName (in_mMangledImplementationName),
mProperty_mFormalArgumentList (in_mFormalArgumentList),
mProperty_mReceiverTypeProxy (in_mReceiverTypeProxy),
mProperty_mIsSection (in_mIsSection),
mProperty_mReturnTypeProxy (in_mReturnTypeProxy) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_systemUserRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_systemUserRoutineIR ;
}

void cPtr_systemUserRoutineIR::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@systemUserRoutineIR:" ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMangledImplementationName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverTypeProxy.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsSection.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReturnTypeProxy.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_systemUserRoutineIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_systemUserRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mMangledImplementationName, mProperty_mFormalArgumentList, mProperty_mReceiverTypeProxy, mProperty_mIsSection, mProperty_mReturnTypeProxy COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @systemUserRoutineIR type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_systemUserRoutineIR ("systemUserRoutineIR",
                                            & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_systemUserRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_systemUserRoutineIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_systemUserRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_systemUserRoutineIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_systemUserRoutineIR GALGAS_systemUserRoutineIR::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_systemUserRoutineIR result ;
  const GALGAS_systemUserRoutineIR * p = (const GALGAS_systemUserRoutineIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_systemUserRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("systemUserRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externFunctionDeclarationListAST_2D_element::GALGAS_externFunctionDeclarationListAST_2D_element (void) :
mProperty_mExternProcedureName (),
mProperty_mMode (),
mProperty_mAttributeList (),
mProperty_mProcFormalArgumentList (),
mProperty_mReturnTypeName (),
mProperty_mRoutineNameForGeneration (),
mProperty_mEndOfProcLocation () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externFunctionDeclarationListAST_2D_element::~ GALGAS_externFunctionDeclarationListAST_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externFunctionDeclarationListAST_2D_element::GALGAS_externFunctionDeclarationListAST_2D_element (const GALGAS_lstring & inOperand0,
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

GALGAS_externFunctionDeclarationListAST_2D_element GALGAS_externFunctionDeclarationListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                        const GALGAS_mode & inOperand1,
                                                                                                                        const GALGAS_lstringlist & inOperand2,
                                                                                                                        const GALGAS_routineFormalArgumentListAST & inOperand3,
                                                                                                                        const GALGAS_lstring & inOperand4,
                                                                                                                        const GALGAS_lstring & inOperand5,
                                                                                                                        const GALGAS_location & inOperand6 
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_externFunctionDeclarationListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_externFunctionDeclarationListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_externFunctionDeclarationListAST_2D_element::objectCompare (const GALGAS_externFunctionDeclarationListAST_2D_element & inOperand) const {
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

bool GALGAS_externFunctionDeclarationListAST_2D_element::isValid (void) const {
  return mProperty_mExternProcedureName.isValid () && mProperty_mMode.isValid () && mProperty_mAttributeList.isValid () && mProperty_mProcFormalArgumentList.isValid () && mProperty_mReturnTypeName.isValid () && mProperty_mRoutineNameForGeneration.isValid () && mProperty_mEndOfProcLocation.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externFunctionDeclarationListAST_2D_element::drop (void) {
  mProperty_mExternProcedureName.drop () ;
  mProperty_mMode.drop () ;
  mProperty_mAttributeList.drop () ;
  mProperty_mProcFormalArgumentList.drop () ;
  mProperty_mReturnTypeName.drop () ;
  mProperty_mRoutineNameForGeneration.drop () ;
  mProperty_mEndOfProcLocation.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externFunctionDeclarationListAST_2D_element::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "<struct @externFunctionDeclarationListAST-element:" ;
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

GALGAS_lstring GALGAS_externFunctionDeclarationListAST_2D_element::getter_mExternProcedureName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternProcedureName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mode GALGAS_externFunctionDeclarationListAST_2D_element::getter_mMode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMode ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_externFunctionDeclarationListAST_2D_element::getter_mAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListAST GALGAS_externFunctionDeclarationListAST_2D_element::getter_mProcFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProcFormalArgumentList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_externFunctionDeclarationListAST_2D_element::getter_mReturnTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReturnTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_externFunctionDeclarationListAST_2D_element::getter_mRoutineNameForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineNameForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_externFunctionDeclarationListAST_2D_element::getter_mEndOfProcLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfProcLocation ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   @externFunctionDeclarationListAST-element type                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externFunctionDeclarationListAST_2D_element ("externFunctionDeclarationListAST-element",
                                                                    NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_externFunctionDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externFunctionDeclarationListAST_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_externFunctionDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externFunctionDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externFunctionDeclarationListAST_2D_element GALGAS_externFunctionDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_externFunctionDeclarationListAST_2D_element result ;
  const GALGAS_externFunctionDeclarationListAST_2D_element * p = (const GALGAS_externFunctionDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externFunctionDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externFunctionDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Extension method '@externFunctionDeclarationListAST-element externProcedureSemanticAnalysis'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_externProcedureSemanticAnalysis (const GALGAS_externFunctionDeclarationListAST_2D_element inObject,
                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                      GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                      GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineFormalArgumentListIR var_formalArguments_5247 = GALGAS_routineFormalArgumentListIR::constructor_emptyList (SOURCE_FILE ("declaration-extern-proc.galgas", 130)) ;
  GALGAS_universalValuedObjectMap joker_5336 = GALGAS_universalValuedObjectMap::constructor_default (SOURCE_FILE ("declaration-extern-proc.galgas", 134)) ;
  {
  routine_enterFormalArguments (constinArgument_inContext, inObject.mProperty_mProcFormalArgumentList, joker_5336, var_formalArguments_5247, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 131)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, inObject.mProperty_mReturnTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-extern-proc.galgas", 140)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), inObject.mProperty_mReturnTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 142)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_returnType_5443 = temp_0 ;
  {
  ioArgument_ioIntermediateCodeStruct.mProperty_mExternProcedureMapIR.setter_insertKey (inObject.mProperty_mRoutineNameForGeneration, var_formalArguments_5247, var_returnType_5443, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 145)) ;
  }
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssign_operation (GALGAS_externRoutineIR::constructor_new (inObject.mProperty_mRoutineNameForGeneration, GALGAS_bool (false), GALGAS_bool (false), var_formalArguments_5247, var_returnType_5443  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 150))  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 150)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_externRoutineIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_externRoutineIR * p = (const cPtr_externRoutineIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_externRoutineIR) ;
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
    result = mProperty_mFormalArgumentListForGeneration.objectCompare (p->mProperty_mFormalArgumentListForGeneration) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReturnType.objectCompare (p->mProperty_mReturnType) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_externRoutineIR::objectCompare (const GALGAS_externRoutineIR & inOperand) const {
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

GALGAS_externRoutineIR::GALGAS_externRoutineIR (void) :
GALGAS_abstractRoutineIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externRoutineIR GALGAS_externRoutineIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_externRoutineIR::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                  GALGAS_bool::constructor_default (HERE),
                                                  GALGAS_bool::constructor_default (HERE),
                                                  GALGAS_routineFormalArgumentListIR::constructor_emptyList (HERE),
                                                  GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE)
                                                  COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externRoutineIR::GALGAS_externRoutineIR (const cPtr_externRoutineIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_externRoutineIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externRoutineIR GALGAS_externRoutineIR::constructor_new (const GALGAS_lstring & inAttribute_mRoutineMangledName,
                                                                const GALGAS_bool & inAttribute_isRequired,
                                                                const GALGAS_bool & inAttribute_warnsIfUnused,
                                                                const GALGAS_routineFormalArgumentListIR & inAttribute_mFormalArgumentListForGeneration,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReturnType
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_externRoutineIR result ;
  if (inAttribute_mRoutineMangledName.isValid () && inAttribute_isRequired.isValid () && inAttribute_warnsIfUnused.isValid () && inAttribute_mFormalArgumentListForGeneration.isValid () && inAttribute_mReturnType.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_externRoutineIR (inAttribute_mRoutineMangledName, inAttribute_isRequired, inAttribute_warnsIfUnused, inAttribute_mFormalArgumentListForGeneration, inAttribute_mReturnType COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListIR GALGAS_externRoutineIR::getter_mFormalArgumentListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_routineFormalArgumentListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_externRoutineIR * p = (const cPtr_externRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externRoutineIR) ;
    result = p->mProperty_mFormalArgumentListForGeneration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListIR cPtr_externRoutineIR::getter_mFormalArgumentListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_externRoutineIR::getter_mReturnType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_externRoutineIR * p = (const cPtr_externRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externRoutineIR) ;
    result = p->mProperty_mReturnType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy cPtr_externRoutineIR::getter_mReturnType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReturnType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                      Pointer class for @externRoutineIR class                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_externRoutineIR::cPtr_externRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                            const GALGAS_bool & in_isRequired,
                                            const GALGAS_bool & in_warnsIfUnused,
                                            const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                            const GALGAS_unifiedTypeMap_2D_proxy & in_mReturnType
                                            COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
mProperty_mFormalArgumentListForGeneration (in_mFormalArgumentListForGeneration),
mProperty_mReturnType (in_mReturnType) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_externRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externRoutineIR ;
}

void cPtr_externRoutineIR::description (C_String & ioString,
                                        const int32_t inIndentation) const {
  ioString << "[@externRoutineIR:" ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFormalArgumentListForGeneration.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReturnType.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_externRoutineIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_externRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mFormalArgumentListForGeneration, mProperty_mReturnType COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @externRoutineIR type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externRoutineIR ("externRoutineIR",
                                        & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_externRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externRoutineIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_externRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externRoutineIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externRoutineIR GALGAS_externRoutineIR::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_externRoutineIR result ;
  const GALGAS_externRoutineIR * p = (const GALGAS_externRoutineIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

typeComparisonResult cPtr_decoratedGuardDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_decoratedGuardDeclaration * p = (const cPtr_decoratedGuardDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
  if (kOperandEqual == result) {
    result = mProperty_mReceiverTypeName.objectCompare (p->mProperty_mReceiverTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGuardName.objectCompare (p->mProperty_mGuardName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsPublic.objectCompare (p->mProperty_mIsPublic) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGuardAttributeList.objectCompare (p->mProperty_mGuardAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGuardFormalArgumentList.objectCompare (p->mProperty_mGuardFormalArgumentList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGuardKind.objectCompare (p->mProperty_mGuardKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGuardInstructionList.objectCompare (p->mProperty_mGuardInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfGuardDeclaration.objectCompare (p->mProperty_mEndOfGuardDeclaration) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_decoratedGuardDeclaration::objectCompare (const GALGAS_decoratedGuardDeclaration & inOperand) const {
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

GALGAS_decoratedGuardDeclaration::GALGAS_decoratedGuardDeclaration (void) :
GALGAS_abstractDecoratedDeclaration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedGuardDeclaration::GALGAS_decoratedGuardDeclaration (const cPtr_decoratedGuardDeclaration * inSourcePtr) :
GALGAS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedGuardDeclaration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedGuardDeclaration GALGAS_decoratedGuardDeclaration::constructor_new (const GALGAS_lstring & inAttribute_mReceiverTypeName,
                                                                                    const GALGAS_lstring & inAttribute_mGuardName,
                                                                                    const GALGAS_bool & inAttribute_mIsPublic,
                                                                                    const GALGAS_lstringlist & inAttribute_mGuardAttributeList,
                                                                                    const GALGAS_routineFormalArgumentListAST & inAttribute_mGuardFormalArgumentList,
                                                                                    const GALGAS_guardKind & inAttribute_mGuardKind,
                                                                                    const GALGAS_instructionListAST & inAttribute_mGuardInstructionList,
                                                                                    const GALGAS_location & inAttribute_mEndOfGuardDeclaration
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_decoratedGuardDeclaration result ;
  if (inAttribute_mReceiverTypeName.isValid () && inAttribute_mGuardName.isValid () && inAttribute_mIsPublic.isValid () && inAttribute_mGuardAttributeList.isValid () && inAttribute_mGuardFormalArgumentList.isValid () && inAttribute_mGuardKind.isValid () && inAttribute_mGuardInstructionList.isValid () && inAttribute_mEndOfGuardDeclaration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_decoratedGuardDeclaration (inAttribute_mReceiverTypeName, inAttribute_mGuardName, inAttribute_mIsPublic, inAttribute_mGuardAttributeList, inAttribute_mGuardFormalArgumentList, inAttribute_mGuardKind, inAttribute_mGuardInstructionList, inAttribute_mEndOfGuardDeclaration COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_decoratedGuardDeclaration::getter_mReceiverTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedGuardDeclaration * p = (const cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    result = p->mProperty_mReceiverTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_decoratedGuardDeclaration::getter_mReceiverTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_decoratedGuardDeclaration::getter_mGuardName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedGuardDeclaration * p = (const cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    result = p->mProperty_mGuardName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_decoratedGuardDeclaration::getter_mGuardName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_decoratedGuardDeclaration::getter_mIsPublic (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedGuardDeclaration * p = (const cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    result = p->mProperty_mIsPublic ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_decoratedGuardDeclaration::getter_mIsPublic (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsPublic ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_decoratedGuardDeclaration::getter_mGuardAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedGuardDeclaration * p = (const cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    result = p->mProperty_mGuardAttributeList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_decoratedGuardDeclaration::getter_mGuardAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListAST GALGAS_decoratedGuardDeclaration::getter_mGuardFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  GALGAS_routineFormalArgumentListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedGuardDeclaration * p = (const cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    result = p->mProperty_mGuardFormalArgumentList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListAST cPtr_decoratedGuardDeclaration::getter_mGuardFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardFormalArgumentList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardKind GALGAS_decoratedGuardDeclaration::getter_mGuardKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_guardKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedGuardDeclaration * p = (const cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    result = p->mProperty_mGuardKind ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardKind cPtr_decoratedGuardDeclaration::getter_mGuardKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListAST GALGAS_decoratedGuardDeclaration::getter_mGuardInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedGuardDeclaration * p = (const cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    result = p->mProperty_mGuardInstructionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListAST cPtr_decoratedGuardDeclaration::getter_mGuardInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_decoratedGuardDeclaration::getter_mEndOfGuardDeclaration (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedGuardDeclaration * p = (const cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    result = p->mProperty_mEndOfGuardDeclaration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_decoratedGuardDeclaration::getter_mEndOfGuardDeclaration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfGuardDeclaration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                 Pointer class for @decoratedGuardDeclaration class                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_decoratedGuardDeclaration::cPtr_decoratedGuardDeclaration (const GALGAS_lstring & in_mReceiverTypeName,
                                                                const GALGAS_lstring & in_mGuardName,
                                                                const GALGAS_bool & in_mIsPublic,
                                                                const GALGAS_lstringlist & in_mGuardAttributeList,
                                                                const GALGAS_routineFormalArgumentListAST & in_mGuardFormalArgumentList,
                                                                const GALGAS_guardKind & in_mGuardKind,
                                                                const GALGAS_instructionListAST & in_mGuardInstructionList,
                                                                const GALGAS_location & in_mEndOfGuardDeclaration
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (THERE),
mProperty_mReceiverTypeName (in_mReceiverTypeName),
mProperty_mGuardName (in_mGuardName),
mProperty_mIsPublic (in_mIsPublic),
mProperty_mGuardAttributeList (in_mGuardAttributeList),
mProperty_mGuardFormalArgumentList (in_mGuardFormalArgumentList),
mProperty_mGuardKind (in_mGuardKind),
mProperty_mGuardInstructionList (in_mGuardInstructionList),
mProperty_mEndOfGuardDeclaration (in_mEndOfGuardDeclaration) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_decoratedGuardDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedGuardDeclaration ;
}

void cPtr_decoratedGuardDeclaration::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@decoratedGuardDeclaration:" ;
  mProperty_mReceiverTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGuardName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsPublic.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGuardAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGuardFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGuardKind.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGuardInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfGuardDeclaration.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_decoratedGuardDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_decoratedGuardDeclaration (mProperty_mReceiverTypeName, mProperty_mGuardName, mProperty_mIsPublic, mProperty_mGuardAttributeList, mProperty_mGuardFormalArgumentList, mProperty_mGuardKind, mProperty_mGuardInstructionList, mProperty_mEndOfGuardDeclaration COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @decoratedGuardDeclaration type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedGuardDeclaration ("decoratedGuardDeclaration",
                                                  & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_decoratedGuardDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedGuardDeclaration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_decoratedGuardDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedGuardDeclaration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedGuardDeclaration GALGAS_decoratedGuardDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_decoratedGuardDeclaration result ;
  const GALGAS_decoratedGuardDeclaration * p = (const GALGAS_decoratedGuardDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedGuardDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedGuardDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_guardUserRoutineIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_guardUserRoutineIR * p = (const cPtr_guardUserRoutineIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_guardUserRoutineIR) ;
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
    result = mProperty_mMangledImplementationGuardName.objectCompare (p->mProperty_mMangledImplementationGuardName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFormalArgumentListForGeneration.objectCompare (p->mProperty_mFormalArgumentListForGeneration) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverType.objectCompare (p->mProperty_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGuardKindGenerationIR.objectCompare (p->mProperty_mGuardKindGenerationIR) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_guardUserRoutineIR::objectCompare (const GALGAS_guardUserRoutineIR & inOperand) const {
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

GALGAS_guardUserRoutineIR::GALGAS_guardUserRoutineIR (void) :
GALGAS_abstractRoutineIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardUserRoutineIR::GALGAS_guardUserRoutineIR (const cPtr_guardUserRoutineIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_guardUserRoutineIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardUserRoutineIR GALGAS_guardUserRoutineIR::constructor_new (const GALGAS_lstring & inAttribute_mRoutineMangledName,
                                                                      const GALGAS_bool & inAttribute_isRequired,
                                                                      const GALGAS_bool & inAttribute_warnsIfUnused,
                                                                      const GALGAS_string & inAttribute_mMangledImplementationGuardName,
                                                                      const GALGAS_routineFormalArgumentListIR & inAttribute_mFormalArgumentListForGeneration,
                                                                      const GALGAS_PLMType & inAttribute_mReceiverType,
                                                                      const GALGAS_guardKindGenerationIR & inAttribute_mGuardKindGenerationIR
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_guardUserRoutineIR result ;
  if (inAttribute_mRoutineMangledName.isValid () && inAttribute_isRequired.isValid () && inAttribute_warnsIfUnused.isValid () && inAttribute_mMangledImplementationGuardName.isValid () && inAttribute_mFormalArgumentListForGeneration.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mGuardKindGenerationIR.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_guardUserRoutineIR (inAttribute_mRoutineMangledName, inAttribute_isRequired, inAttribute_warnsIfUnused, inAttribute_mMangledImplementationGuardName, inAttribute_mFormalArgumentListForGeneration, inAttribute_mReceiverType, inAttribute_mGuardKindGenerationIR COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_guardUserRoutineIR::getter_mMangledImplementationGuardName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_guardUserRoutineIR * p = (const cPtr_guardUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardUserRoutineIR) ;
    result = p->mProperty_mMangledImplementationGuardName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_guardUserRoutineIR::getter_mMangledImplementationGuardName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMangledImplementationGuardName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListIR GALGAS_guardUserRoutineIR::getter_mFormalArgumentListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_routineFormalArgumentListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_guardUserRoutineIR * p = (const cPtr_guardUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardUserRoutineIR) ;
    result = p->mProperty_mFormalArgumentListForGeneration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListIR cPtr_guardUserRoutineIR::getter_mFormalArgumentListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_guardUserRoutineIR::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMType result ;
  if (NULL != mObjectPtr) {
    const cPtr_guardUserRoutineIR * p = (const cPtr_guardUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardUserRoutineIR) ;
    result = p->mProperty_mReceiverType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType cPtr_guardUserRoutineIR::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardKindGenerationIR GALGAS_guardUserRoutineIR::getter_mGuardKindGenerationIR (UNUSED_LOCATION_ARGS) const {
  GALGAS_guardKindGenerationIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_guardUserRoutineIR * p = (const cPtr_guardUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardUserRoutineIR) ;
    result = p->mProperty_mGuardKindGenerationIR ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardKindGenerationIR cPtr_guardUserRoutineIR::getter_mGuardKindGenerationIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardKindGenerationIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                     Pointer class for @guardUserRoutineIR class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_guardUserRoutineIR::cPtr_guardUserRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                  const GALGAS_bool & in_isRequired,
                                                  const GALGAS_bool & in_warnsIfUnused,
                                                  const GALGAS_string & in_mMangledImplementationGuardName,
                                                  const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                  const GALGAS_PLMType & in_mReceiverType,
                                                  const GALGAS_guardKindGenerationIR & in_mGuardKindGenerationIR
                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
mProperty_mMangledImplementationGuardName (in_mMangledImplementationGuardName),
mProperty_mFormalArgumentListForGeneration (in_mFormalArgumentListForGeneration),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mGuardKindGenerationIR (in_mGuardKindGenerationIR) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_guardUserRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardUserRoutineIR ;
}

void cPtr_guardUserRoutineIR::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@guardUserRoutineIR:" ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMangledImplementationGuardName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFormalArgumentListForGeneration.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGuardKindGenerationIR.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_guardUserRoutineIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_guardUserRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mMangledImplementationGuardName, mProperty_mFormalArgumentListForGeneration, mProperty_mReceiverType, mProperty_mGuardKindGenerationIR COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @guardUserRoutineIR type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guardUserRoutineIR ("guardUserRoutineIR",
                                           & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_guardUserRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardUserRoutineIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_guardUserRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardUserRoutineIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardUserRoutineIR GALGAS_guardUserRoutineIR::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_guardUserRoutineIR result ;
  const GALGAS_guardUserRoutineIR * p = (const GALGAS_guardUserRoutineIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guardUserRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardUserRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_guardImplementationRoutineIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_guardImplementationRoutineIR * p = (const cPtr_guardImplementationRoutineIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_guardImplementationRoutineIR) ;
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
    result = mProperty_mFormalArgumentListForGeneration.objectCompare (p->mProperty_mFormalArgumentListForGeneration) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverType.objectCompare (p->mProperty_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGuardKindGenerationIR.objectCompare (p->mProperty_mGuardKindGenerationIR) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAllocaList.objectCompare (p->mProperty_mAllocaList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionGenerationList.objectCompare (p->mProperty_mInstructionGenerationList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_guardImplementationRoutineIR::objectCompare (const GALGAS_guardImplementationRoutineIR & inOperand) const {
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

GALGAS_guardImplementationRoutineIR::GALGAS_guardImplementationRoutineIR (void) :
GALGAS_abstractRoutineIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardImplementationRoutineIR::GALGAS_guardImplementationRoutineIR (const cPtr_guardImplementationRoutineIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_guardImplementationRoutineIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardImplementationRoutineIR GALGAS_guardImplementationRoutineIR::constructor_new (const GALGAS_lstring & inAttribute_mRoutineMangledName,
                                                                                          const GALGAS_bool & inAttribute_isRequired,
                                                                                          const GALGAS_bool & inAttribute_warnsIfUnused,
                                                                                          const GALGAS_routineFormalArgumentListIR & inAttribute_mFormalArgumentListForGeneration,
                                                                                          const GALGAS_PLMType & inAttribute_mReceiverType,
                                                                                          const GALGAS_guardKindGenerationIR & inAttribute_mGuardKindGenerationIR,
                                                                                          const GALGAS_allocaList & inAttribute_mAllocaList,
                                                                                          const GALGAS_instructionListIR & inAttribute_mInstructionGenerationList
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_guardImplementationRoutineIR result ;
  if (inAttribute_mRoutineMangledName.isValid () && inAttribute_isRequired.isValid () && inAttribute_warnsIfUnused.isValid () && inAttribute_mFormalArgumentListForGeneration.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mGuardKindGenerationIR.isValid () && inAttribute_mAllocaList.isValid () && inAttribute_mInstructionGenerationList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_guardImplementationRoutineIR (inAttribute_mRoutineMangledName, inAttribute_isRequired, inAttribute_warnsIfUnused, inAttribute_mFormalArgumentListForGeneration, inAttribute_mReceiverType, inAttribute_mGuardKindGenerationIR, inAttribute_mAllocaList, inAttribute_mInstructionGenerationList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListIR GALGAS_guardImplementationRoutineIR::getter_mFormalArgumentListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_routineFormalArgumentListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_guardImplementationRoutineIR * p = (const cPtr_guardImplementationRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardImplementationRoutineIR) ;
    result = p->mProperty_mFormalArgumentListForGeneration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListIR cPtr_guardImplementationRoutineIR::getter_mFormalArgumentListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_guardImplementationRoutineIR::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMType result ;
  if (NULL != mObjectPtr) {
    const cPtr_guardImplementationRoutineIR * p = (const cPtr_guardImplementationRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardImplementationRoutineIR) ;
    result = p->mProperty_mReceiverType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType cPtr_guardImplementationRoutineIR::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardKindGenerationIR GALGAS_guardImplementationRoutineIR::getter_mGuardKindGenerationIR (UNUSED_LOCATION_ARGS) const {
  GALGAS_guardKindGenerationIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_guardImplementationRoutineIR * p = (const cPtr_guardImplementationRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardImplementationRoutineIR) ;
    result = p->mProperty_mGuardKindGenerationIR ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardKindGenerationIR cPtr_guardImplementationRoutineIR::getter_mGuardKindGenerationIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardKindGenerationIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_allocaList GALGAS_guardImplementationRoutineIR::getter_mAllocaList (UNUSED_LOCATION_ARGS) const {
  GALGAS_allocaList result ;
  if (NULL != mObjectPtr) {
    const cPtr_guardImplementationRoutineIR * p = (const cPtr_guardImplementationRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardImplementationRoutineIR) ;
    result = p->mProperty_mAllocaList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_allocaList cPtr_guardImplementationRoutineIR::getter_mAllocaList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAllocaList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListIR GALGAS_guardImplementationRoutineIR::getter_mInstructionGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_guardImplementationRoutineIR * p = (const cPtr_guardImplementationRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardImplementationRoutineIR) ;
    result = p->mProperty_mInstructionGenerationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListIR cPtr_guardImplementationRoutineIR::getter_mInstructionGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @guardImplementationRoutineIR class                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_guardImplementationRoutineIR::cPtr_guardImplementationRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                                      const GALGAS_bool & in_isRequired,
                                                                      const GALGAS_bool & in_warnsIfUnused,
                                                                      const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                                      const GALGAS_PLMType & in_mReceiverType,
                                                                      const GALGAS_guardKindGenerationIR & in_mGuardKindGenerationIR,
                                                                      const GALGAS_allocaList & in_mAllocaList,
                                                                      const GALGAS_instructionListIR & in_mInstructionGenerationList
                                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
mProperty_mFormalArgumentListForGeneration (in_mFormalArgumentListForGeneration),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mGuardKindGenerationIR (in_mGuardKindGenerationIR),
mProperty_mAllocaList (in_mAllocaList),
mProperty_mInstructionGenerationList (in_mInstructionGenerationList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_guardImplementationRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardImplementationRoutineIR ;
}

void cPtr_guardImplementationRoutineIR::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@guardImplementationRoutineIR:" ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
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
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_guardImplementationRoutineIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_guardImplementationRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mFormalArgumentListForGeneration, mProperty_mReceiverType, mProperty_mGuardKindGenerationIR, mProperty_mAllocaList, mProperty_mInstructionGenerationList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @guardImplementationRoutineIR type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guardImplementationRoutineIR ("guardImplementationRoutineIR",
                                                     & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_guardImplementationRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardImplementationRoutineIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_guardImplementationRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardImplementationRoutineIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardImplementationRoutineIR GALGAS_guardImplementationRoutineIR::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_guardImplementationRoutineIR result ;
  const GALGAS_guardImplementationRoutineIR * p = (const GALGAS_guardImplementationRoutineIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guardImplementationRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardImplementationRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
  GALGAS_string var_key_8136 = GALGAS_string ("(") ;
  const GALGAS_effectiveArgumentListAST temp_0 = inObject ;
  cEnumerator_effectiveArgumentListAST enumerator_8179 (temp_0, kENUMERATION_UP) ;
  while (enumerator_8179.hasCurrentObject ()) {
    var_key_8136.plusAssign_operation(extensionGetter_matchingFormalArgument (enumerator_8179.current_mEffectiveParameterKind (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 202)).add_operation (enumerator_8179.current_mSelector (HERE).getter_string (SOURCE_FILE ("formal-arguments.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 202)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 202)), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 202)) ;
    enumerator_8179.gotoNextObject () ;
  }
  var_key_8136.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 204)) ;
  result_result = GALGAS_lstring::constructor_new (var_key_8136, constinArgument_inRoutineNameLocation  COMMA_SOURCE_FILE ("formal-arguments.galgas", 205)) ;
//---
  return result_result ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedRegularRoutineList_2D_element::GALGAS_decoratedRegularRoutineList_2D_element (void) :
mProperty_receiverTypeName (),
mProperty_mode (),
mProperty_isRequired (),
mProperty_mRoutineKind (),
mProperty_warnIfUnused (),
mProperty_exportedRoutine (),
mProperty_mRoutineAttributes (),
mProperty_mRoutineMangledName (),
mProperty_mRoutineFormalArgumentList (),
mProperty_warningOnUnusedArgs (),
mProperty_mRoutineInstructionList (),
mProperty_mEndOfRoutineDeclaration (),
mProperty_returnTypeName () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedRegularRoutineList_2D_element::~ GALGAS_decoratedRegularRoutineList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedRegularRoutineList_2D_element::GALGAS_decoratedRegularRoutineList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_mode & inOperand1,
                                                                                              const GALGAS_bool & inOperand2,
                                                                                              const GALGAS_routineKind & inOperand3,
                                                                                              const GALGAS_bool & inOperand4,
                                                                                              const GALGAS_bool & inOperand5,
                                                                                              const GALGAS_routineAttributes & inOperand6,
                                                                                              const GALGAS_lstring & inOperand7,
                                                                                              const GALGAS_routineFormalArgumentListAST & inOperand8,
                                                                                              const GALGAS_bool & inOperand9,
                                                                                              const GALGAS_instructionListAST & inOperand10,
                                                                                              const GALGAS_location & inOperand11,
                                                                                              const GALGAS_lstring & inOperand12) :
mProperty_receiverTypeName (inOperand0),
mProperty_mode (inOperand1),
mProperty_isRequired (inOperand2),
mProperty_mRoutineKind (inOperand3),
mProperty_warnIfUnused (inOperand4),
mProperty_exportedRoutine (inOperand5),
mProperty_mRoutineAttributes (inOperand6),
mProperty_mRoutineMangledName (inOperand7),
mProperty_mRoutineFormalArgumentList (inOperand8),
mProperty_warningOnUnusedArgs (inOperand9),
mProperty_mRoutineInstructionList (inOperand10),
mProperty_mEndOfRoutineDeclaration (inOperand11),
mProperty_returnTypeName (inOperand12) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedRegularRoutineList_2D_element GALGAS_decoratedRegularRoutineList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_mode & inOperand1,
                                                                                                              const GALGAS_bool & inOperand2,
                                                                                                              const GALGAS_routineKind & inOperand3,
                                                                                                              const GALGAS_bool & inOperand4,
                                                                                                              const GALGAS_bool & inOperand5,
                                                                                                              const GALGAS_routineAttributes & inOperand6,
                                                                                                              const GALGAS_lstring & inOperand7,
                                                                                                              const GALGAS_routineFormalArgumentListAST & inOperand8,
                                                                                                              const GALGAS_bool & inOperand9,
                                                                                                              const GALGAS_instructionListAST & inOperand10,
                                                                                                              const GALGAS_location & inOperand11,
                                                                                                              const GALGAS_lstring & inOperand12 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_decoratedRegularRoutineList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid ()) {
    result = GALGAS_decoratedRegularRoutineList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_decoratedRegularRoutineList_2D_element::objectCompare (const GALGAS_decoratedRegularRoutineList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_receiverTypeName.objectCompare (inOperand.mProperty_receiverTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mode.objectCompare (inOperand.mProperty_mode) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_isRequired.objectCompare (inOperand.mProperty_isRequired) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRoutineKind.objectCompare (inOperand.mProperty_mRoutineKind) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_warnIfUnused.objectCompare (inOperand.mProperty_warnIfUnused) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_exportedRoutine.objectCompare (inOperand.mProperty_exportedRoutine) ;
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
    result = mProperty_warningOnUnusedArgs.objectCompare (inOperand.mProperty_warningOnUnusedArgs) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRoutineInstructionList.objectCompare (inOperand.mProperty_mRoutineInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfRoutineDeclaration.objectCompare (inOperand.mProperty_mEndOfRoutineDeclaration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_returnTypeName.objectCompare (inOperand.mProperty_returnTypeName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_decoratedRegularRoutineList_2D_element::isValid (void) const {
  return mProperty_receiverTypeName.isValid () && mProperty_mode.isValid () && mProperty_isRequired.isValid () && mProperty_mRoutineKind.isValid () && mProperty_warnIfUnused.isValid () && mProperty_exportedRoutine.isValid () && mProperty_mRoutineAttributes.isValid () && mProperty_mRoutineMangledName.isValid () && mProperty_mRoutineFormalArgumentList.isValid () && mProperty_warningOnUnusedArgs.isValid () && mProperty_mRoutineInstructionList.isValid () && mProperty_mEndOfRoutineDeclaration.isValid () && mProperty_returnTypeName.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedRegularRoutineList_2D_element::drop (void) {
  mProperty_receiverTypeName.drop () ;
  mProperty_mode.drop () ;
  mProperty_isRequired.drop () ;
  mProperty_mRoutineKind.drop () ;
  mProperty_warnIfUnused.drop () ;
  mProperty_exportedRoutine.drop () ;
  mProperty_mRoutineAttributes.drop () ;
  mProperty_mRoutineMangledName.drop () ;
  mProperty_mRoutineFormalArgumentList.drop () ;
  mProperty_warningOnUnusedArgs.drop () ;
  mProperty_mRoutineInstructionList.drop () ;
  mProperty_mEndOfRoutineDeclaration.drop () ;
  mProperty_returnTypeName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedRegularRoutineList_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @decoratedRegularRoutineList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_receiverTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_isRequired.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRoutineKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_warnIfUnused.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_exportedRoutine.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRoutineAttributes.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRoutineFormalArgumentList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_warningOnUnusedArgs.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRoutineInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfRoutineDeclaration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_returnTypeName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_decoratedRegularRoutineList_2D_element::getter_receiverTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_receiverTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mode GALGAS_decoratedRegularRoutineList_2D_element::getter_mode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mode ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_decoratedRegularRoutineList_2D_element::getter_isRequired (UNUSED_LOCATION_ARGS) const {
  return mProperty_isRequired ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineKind GALGAS_decoratedRegularRoutineList_2D_element::getter_mRoutineKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_decoratedRegularRoutineList_2D_element::getter_warnIfUnused (UNUSED_LOCATION_ARGS) const {
  return mProperty_warnIfUnused ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_decoratedRegularRoutineList_2D_element::getter_exportedRoutine (UNUSED_LOCATION_ARGS) const {
  return mProperty_exportedRoutine ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineAttributes GALGAS_decoratedRegularRoutineList_2D_element::getter_mRoutineAttributes (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineAttributes ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_decoratedRegularRoutineList_2D_element::getter_mRoutineMangledName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineMangledName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListAST GALGAS_decoratedRegularRoutineList_2D_element::getter_mRoutineFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineFormalArgumentList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_decoratedRegularRoutineList_2D_element::getter_warningOnUnusedArgs (UNUSED_LOCATION_ARGS) const {
  return mProperty_warningOnUnusedArgs ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListAST GALGAS_decoratedRegularRoutineList_2D_element::getter_mRoutineInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_decoratedRegularRoutineList_2D_element::getter_mEndOfRoutineDeclaration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfRoutineDeclaration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_decoratedRegularRoutineList_2D_element::getter_returnTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_returnTypeName ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @decoratedRegularRoutineList-element type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedRegularRoutineList_2D_element ("decoratedRegularRoutineList-element",
                                                               NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_decoratedRegularRoutineList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedRegularRoutineList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_decoratedRegularRoutineList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedRegularRoutineList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedRegularRoutineList_2D_element GALGAS_decoratedRegularRoutineList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_decoratedRegularRoutineList_2D_element result ;
  const GALGAS_decoratedRegularRoutineList_2D_element * p = (const GALGAS_decoratedRegularRoutineList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedRegularRoutineList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedRegularRoutineList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_regularRoutineIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_regularRoutineIR * p = (const cPtr_regularRoutineIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_regularRoutineIR) ;
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
    result = mProperty_mReceiverType.objectCompare (p->mProperty_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFormalArgumentListForGeneration.objectCompare (p->mProperty_mFormalArgumentListForGeneration) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAllocaList.objectCompare (p->mProperty_mAllocaList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionGenerationList.objectCompare (p->mProperty_mInstructionGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExportedFunction.objectCompare (p->mProperty_mExportedFunction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReturnType.objectCompare (p->mProperty_mReturnType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAppendFileAndLineArgumentForPanicLocation.objectCompare (p->mProperty_mAppendFileAndLineArgumentForPanicLocation) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_regularRoutineIR::objectCompare (const GALGAS_regularRoutineIR & inOperand) const {
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

GALGAS_regularRoutineIR::GALGAS_regularRoutineIR (void) :
GALGAS_abstractRoutineIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularRoutineIR::GALGAS_regularRoutineIR (const cPtr_regularRoutineIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_regularRoutineIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularRoutineIR GALGAS_regularRoutineIR::constructor_new (const GALGAS_lstring & inAttribute_mRoutineMangledName,
                                                                  const GALGAS_bool & inAttribute_isRequired,
                                                                  const GALGAS_bool & inAttribute_warnsIfUnused,
                                                                  const GALGAS_PLMType & inAttribute_mReceiverType,
                                                                  const GALGAS_routineFormalArgumentListIR & inAttribute_mFormalArgumentListForGeneration,
                                                                  const GALGAS_allocaList & inAttribute_mAllocaList,
                                                                  const GALGAS_instructionListIR & inAttribute_mInstructionGenerationList,
                                                                  const GALGAS_bool & inAttribute_mExportedFunction,
                                                                  const GALGAS_routineKind & inAttribute_mKind,
                                                                  const GALGAS_PLMType & inAttribute_mReturnType,
                                                                  const GALGAS_bool & inAttribute_mAppendFileAndLineArgumentForPanicLocation
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_regularRoutineIR result ;
  if (inAttribute_mRoutineMangledName.isValid () && inAttribute_isRequired.isValid () && inAttribute_warnsIfUnused.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mFormalArgumentListForGeneration.isValid () && inAttribute_mAllocaList.isValid () && inAttribute_mInstructionGenerationList.isValid () && inAttribute_mExportedFunction.isValid () && inAttribute_mKind.isValid () && inAttribute_mReturnType.isValid () && inAttribute_mAppendFileAndLineArgumentForPanicLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_regularRoutineIR (inAttribute_mRoutineMangledName, inAttribute_isRequired, inAttribute_warnsIfUnused, inAttribute_mReceiverType, inAttribute_mFormalArgumentListForGeneration, inAttribute_mAllocaList, inAttribute_mInstructionGenerationList, inAttribute_mExportedFunction, inAttribute_mKind, inAttribute_mReturnType, inAttribute_mAppendFileAndLineArgumentForPanicLocation COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_regularRoutineIR::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMType result ;
  if (NULL != mObjectPtr) {
    const cPtr_regularRoutineIR * p = (const cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    result = p->mProperty_mReceiverType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType cPtr_regularRoutineIR::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListIR GALGAS_regularRoutineIR::getter_mFormalArgumentListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_routineFormalArgumentListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_regularRoutineIR * p = (const cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    result = p->mProperty_mFormalArgumentListForGeneration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListIR cPtr_regularRoutineIR::getter_mFormalArgumentListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_allocaList GALGAS_regularRoutineIR::getter_mAllocaList (UNUSED_LOCATION_ARGS) const {
  GALGAS_allocaList result ;
  if (NULL != mObjectPtr) {
    const cPtr_regularRoutineIR * p = (const cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    result = p->mProperty_mAllocaList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_allocaList cPtr_regularRoutineIR::getter_mAllocaList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAllocaList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListIR GALGAS_regularRoutineIR::getter_mInstructionGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_regularRoutineIR * p = (const cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    result = p->mProperty_mInstructionGenerationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListIR cPtr_regularRoutineIR::getter_mInstructionGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_regularRoutineIR::getter_mExportedFunction (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_regularRoutineIR * p = (const cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    result = p->mProperty_mExportedFunction ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_regularRoutineIR::getter_mExportedFunction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExportedFunction ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineKind GALGAS_regularRoutineIR::getter_mKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_routineKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_regularRoutineIR * p = (const cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    result = p->mProperty_mKind ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineKind cPtr_regularRoutineIR::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_regularRoutineIR::getter_mReturnType (UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMType result ;
  if (NULL != mObjectPtr) {
    const cPtr_regularRoutineIR * p = (const cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    result = p->mProperty_mReturnType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType cPtr_regularRoutineIR::getter_mReturnType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReturnType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_regularRoutineIR::getter_mAppendFileAndLineArgumentForPanicLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_regularRoutineIR * p = (const cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    result = p->mProperty_mAppendFileAndLineArgumentForPanicLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_regularRoutineIR::getter_mAppendFileAndLineArgumentForPanicLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAppendFileAndLineArgumentForPanicLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                      Pointer class for @regularRoutineIR class                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_regularRoutineIR::cPtr_regularRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                              const GALGAS_bool & in_isRequired,
                                              const GALGAS_bool & in_warnsIfUnused,
                                              const GALGAS_PLMType & in_mReceiverType,
                                              const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                              const GALGAS_allocaList & in_mAllocaList,
                                              const GALGAS_instructionListIR & in_mInstructionGenerationList,
                                              const GALGAS_bool & in_mExportedFunction,
                                              const GALGAS_routineKind & in_mKind,
                                              const GALGAS_PLMType & in_mReturnType,
                                              const GALGAS_bool & in_mAppendFileAndLineArgumentForPanicLocation
                                              COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mFormalArgumentListForGeneration (in_mFormalArgumentListForGeneration),
mProperty_mAllocaList (in_mAllocaList),
mProperty_mInstructionGenerationList (in_mInstructionGenerationList),
mProperty_mExportedFunction (in_mExportedFunction),
mProperty_mKind (in_mKind),
mProperty_mReturnType (in_mReturnType),
mProperty_mAppendFileAndLineArgumentForPanicLocation (in_mAppendFileAndLineArgumentForPanicLocation) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_regularRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_regularRoutineIR ;
}

void cPtr_regularRoutineIR::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "[@regularRoutineIR:" ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFormalArgumentListForGeneration.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAllocaList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstructionGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExportedFunction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReturnType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAppendFileAndLineArgumentForPanicLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_regularRoutineIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_regularRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mReceiverType, mProperty_mFormalArgumentListForGeneration, mProperty_mAllocaList, mProperty_mInstructionGenerationList, mProperty_mExportedFunction, mProperty_mKind, mProperty_mReturnType, mProperty_mAppendFileAndLineArgumentForPanicLocation COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @regularRoutineIR type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_regularRoutineIR ("regularRoutineIR",
                                         & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_regularRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_regularRoutineIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_regularRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_regularRoutineIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularRoutineIR GALGAS_regularRoutineIR::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_regularRoutineIR result ;
  const GALGAS_regularRoutineIR * p = (const GALGAS_regularRoutineIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_regularRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("regularRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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
//                               Extension method '@universalValuedObjectMap insertType'                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_insertType (GALGAS_universalValuedObjectMap & ioObject,
                                 const GALGAS_lstring constinArgument_inTypeName,
                                 const GALGAS_PLMType constinArgument_inType,
                                 const GALGAS_unifiedTypeMap constinArgument_inTypeMap,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyGetterMap var_propertyGetterMap_962 = GALGAS_propertyGetterMap::constructor_emptyMap (SOURCE_FILE ("universal-map.galgas", 24)) ;
  cEnumerator_classConstantMap enumerator_1032 (constinArgument_inType.getter_classConstantMap (SOURCE_FILE ("universal-map.galgas", 25)), kENUMERATION_UP) ;
  while (enumerator_1032.hasCurrentObject ()) {
    GALGAS_PLMType var_propertyType_1055 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inTypeMap, enumerator_1032.current_mClassTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("universal-map.galgas", 26)).getter_type (inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 26)) ;
    GALGAS_objectIR var_valueIR_1152 = GALGAS_objectIR::constructor_literalInteger (var_propertyType_1055, enumerator_1032.current_mIndex (HERE)  COMMA_SOURCE_FILE ("universal-map.galgas", 27)) ;
    {
    var_propertyGetterMap_962.setter_insertKey (enumerator_1032.current_lkey (HERE), GALGAS_bool (true), GALGAS_propertyGetterKind::constructor_constantProperty (var_valueIR_1152  COMMA_SOURCE_FILE ("universal-map.galgas", 31)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 28)) ;
    }
    enumerator_1032.gotoNextObject () ;
  }
  GALGAS_PLMType var_type_1330 = GALGAS_PLMType::constructor_new (var_propertyGetterMap_962, GALGAS_propertySetterMap::constructor_emptyMap (SOURCE_FILE ("universal-map.galgas", 36)), GALGAS_routineMapCTXT::constructor_emptyMap (SOURCE_FILE ("universal-map.galgas", 37)), GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("universal-map.galgas", 38)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("universal-map.galgas", 39)), GALGAS_guardMapCTXT::constructor_emptyMap (SOURCE_FILE ("universal-map.galgas", 40)), GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("universal-map.galgas", 41)), GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("universal-map.galgas", 42)), GALGAS_PLMTypeAttributes::constructor_none (SOURCE_FILE ("universal-map.galgas", 43)), GALGAS_string::makeEmptyString (), GALGAS_typeKind::constructor_void (SOURCE_FILE ("universal-map.galgas", 45)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("universal-map.galgas", 34)) ;
  {
  ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_insertKey (constinArgument_inTypeName, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("universal-map.galgas", 50)), GALGAS_bool (false), GALGAS_valuedObject::constructor_type (var_type_1330  COMMA_SOURCE_FILE ("universal-map.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 48)) ;
  }
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
  ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_insertKey (constinArgument_inTaskName, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("universal-map.galgas", 64)), GALGAS_bool (false), GALGAS_valuedObject::constructor_task (constinArgument_inTaskType  COMMA_SOURCE_FILE ("universal-map.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 62)) ;
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
  ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_insertKey (constinArgument_inDriverName, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("universal-map.galgas", 79)), GALGAS_bool (false), GALGAS_valuedObject::constructor_driver (constinArgument_inDriverType, constinArgument_inIsInstancied  COMMA_SOURCE_FILE ("universal-map.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 77)) ;
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
  ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_insertKey (constinArgument_inConstantName, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("universal-map.galgas", 93)), GALGAS_bool (false), GALGAS_valuedObject::constructor_globalConstant (constinArgument_inConstantObjectIR  COMMA_SOURCE_FILE ("universal-map.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 91)) ;
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
  ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_insertKey (constinArgument_inSyncInstanceName, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("universal-map.galgas", 107)), GALGAS_bool (false), GALGAS_valuedObject::constructor_globalSyncInstance (constinArgument_inType, constinArgument_inSyncInstanceName  COMMA_SOURCE_FILE ("universal-map.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 105)) ;
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
  ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_insertKey (constinArgument_inLocalConstantName, GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 123)), GALGAS_bool (false), GALGAS_valuedObject::constructor_localConstant (constinArgument_inType, constinArgument_inPLMConstantName, constinArgument_inIsFormalInputArgument  COMMA_SOURCE_FILE ("universal-map.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 121)) ;
  }
  ioObject.mProperty_mLocalObjectList.addAssign_operation (constinArgument_inLocalConstantName  COMMA_SOURCE_FILE ("universal-map.galgas", 127)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Extension method '@universalValuedObjectMap insertUsedLocalConstant'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_insertUsedLocalConstant (GALGAS_universalValuedObjectMap & ioObject,
                                              const GALGAS_lstring constinArgument_inLocalConstantName,
                                              const GALGAS_bool constinArgument_inIsFormalInputArgument,
                                              const GALGAS_PLMType constinArgument_inType,
                                              const GALGAS_lstring constinArgument_inPLMConstantName,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_insertKey (constinArgument_inLocalConstantName, GALGAS_valuedObjectState::constructor_hasReadValue (SOURCE_FILE ("universal-map.galgas", 140)), GALGAS_bool (false), GALGAS_valuedObject::constructor_localConstant (constinArgument_inType, constinArgument_inPLMConstantName, constinArgument_inIsFormalInputArgument  COMMA_SOURCE_FILE ("universal-map.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 138)) ;
  }
  ioObject.mProperty_mLocalObjectList.addAssign_operation (constinArgument_inLocalConstantName  COMMA_SOURCE_FILE ("universal-map.galgas", 144)) ;
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
  ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_insertKey (constinArgument_inLocalVariableName, constinArgument_inVariableInitialState, constinArgument_inObjectShouldBeValuedAtEndOfScope, GALGAS_valuedObject::constructor_localVariable (constinArgument_inType, constinArgument_inPLMName  COMMA_SOURCE_FILE ("universal-map.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 156)) ;
  }
  ioObject.mProperty_mLocalObjectList.addAssign_operation (constinArgument_inLocalVariableName  COMMA_SOURCE_FILE ("universal-map.galgas", 162)) ;
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
  GALGAS_valuedObjectState joker_5520_2 ; // Joker input parameter
  GALGAS_bool joker_5520_1 ; // Joker input parameter
  inObject.mProperty_mInternalPropertyAndRoutineMap.method_searchKey (constinArgument_inValuedObjectName, joker_5520_2, joker_5520_1, outArgument_outEntity, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 173)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Extension method '@universalValuedObjectMap searchValuedObject'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_searchValuedObject (const GALGAS_universalValuedObjectMap inObject,
                                         const GALGAS_lstring constinArgument_inValuedObjectName,
                                         const GALGAS_mode constinArgument_inMode,
                                         const GALGAS_stringset constinArgument_inInitializedDriverSet,
                                         GALGAS_objectIR & outArgument_outObjectIR,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outObjectIR.drop () ; // Release 'out' argument
  GALGAS_valuedObject var_entity_5914 ;
  GALGAS_valuedObjectState joker_5900_2 ; // Joker input parameter
  GALGAS_bool joker_5900_1 ; // Joker input parameter
  inObject.mProperty_mInternalPropertyAndRoutineMap.method_searchKey (constinArgument_inValuedObjectName, joker_5900_2, joker_5900_1, var_entity_5914, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 184)) ;
  switch (var_entity_5914.enumValue ()) {
  case GALGAS_valuedObject::kNotBuilt:
    break ;
  case GALGAS_valuedObject::kEnum_type:
    {
      const cEnumAssociatedValues_valuedObject_type * extractPtr_5998 = (const cEnumAssociatedValues_valuedObject_type *) (var_entity_5914.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_5998->mAssociatedValue0 ;
      outArgument_outObjectIR = GALGAS_objectIR::constructor_type (extractedValue_type  COMMA_SOURCE_FILE ("universal-map.galgas", 187)) ;
    }
    break ;
  case GALGAS_valuedObject::kEnum_task:
    {
      const cEnumAssociatedValues_valuedObject_task * extractPtr_6271 = (const cEnumAssociatedValues_valuedObject_task *) (var_entity_5914.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_6271->mAssociatedValue0 ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsEqual, constinArgument_inMode.objectCompare (GALGAS_mode::constructor_bootMode (SOURCE_FILE ("universal-map.galgas", 189)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 190)), GALGAS_string ("cannot call a task entry in a boot routine"), fixItArray1  COMMA_SOURCE_FILE ("universal-map.galgas", 190)) ;
          outArgument_outObjectIR.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_0) {
        outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForGlobalVariable (constinArgument_inValuedObjectName.getter_string (SOURCE_FILE ("universal-map.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 192))  COMMA_SOURCE_FILE ("universal-map.galgas", 192)) ;
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_driver:
    {
      const cEnumAssociatedValues_valuedObject_driver * extractPtr_6837 = (const cEnumAssociatedValues_valuedObject_driver *) (var_entity_5914.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_6837->mAssociatedValue0 ;
      const GALGAS_bool extractedValue_instancied = extractPtr_6837->mAssociatedValue1 ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsEqual, constinArgument_inMode.objectCompare (GALGAS_mode::constructor_bootMode (SOURCE_FILE ("universal-map.galgas", 195)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 196)), GALGAS_string ("cannot call a driver in a boot routine"), fixItArray3  COMMA_SOURCE_FILE ("universal-map.galgas", 196)) ;
          outArgument_outObjectIR.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_2) {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = extractedValue_instancied.operator_not (SOURCE_FILE ("universal-map.galgas", 197)).boolEnum () ;
          if (kBoolTrue == test_4) {
            TC_Array <C_FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 198)), GALGAS_string ("the driver should be instancied"), fixItArray5  COMMA_SOURCE_FILE ("universal-map.galgas", 198)) ;
            outArgument_outObjectIR.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_4) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = constinArgument_inInitializedDriverSet.getter_hasKey (constinArgument_inValuedObjectName.getter_string (SOURCE_FILE ("universal-map.galgas", 199)) COMMA_SOURCE_FILE ("universal-map.galgas", 199)).operator_not (SOURCE_FILE ("universal-map.galgas", 199)).boolEnum () ;
            if (kBoolTrue == test_6) {
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 200)), GALGAS_string ("the driver should be named in driver dependence list"), fixItArray7  COMMA_SOURCE_FILE ("universal-map.galgas", 200)) ;
              outArgument_outObjectIR.drop () ; // Release error dropped variable
            }
          }
          if (kBoolFalse == test_6) {
            outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForGlobalVariable (constinArgument_inValuedObjectName.getter_string (SOURCE_FILE ("universal-map.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 202))  COMMA_SOURCE_FILE ("universal-map.galgas", 202)) ;
          }
        }
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalConstant:
    {
      const cEnumAssociatedValues_valuedObject_globalConstant * extractPtr_6909 = (const cEnumAssociatedValues_valuedObject_globalConstant *) (var_entity_5914.unsafePointer ()) ;
      const GALGAS_objectIR extractedValue_objectIR = extractPtr_6909->mAssociatedValue0 ;
      outArgument_outObjectIR = extractedValue_objectIR ;
    }
    break ;
  case GALGAS_valuedObject::kEnum_localConstant:
    {
      const cEnumAssociatedValues_valuedObject_localConstant * extractPtr_7055 = (const cEnumAssociatedValues_valuedObject_localConstant *) (var_entity_5914.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_7055->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_7055->mAssociatedValue1 ;
      outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("universal-map.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 207))  COMMA_SOURCE_FILE ("universal-map.galgas", 207)) ;
    }
    break ;
  case GALGAS_valuedObject::kEnum_localVariable:
    {
      const cEnumAssociatedValues_valuedObject_localVariable * extractPtr_7199 = (const cEnumAssociatedValues_valuedObject_localVariable *) (var_entity_5914.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_7199->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_7199->mAssociatedValue1 ;
      outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("universal-map.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 209))  COMMA_SOURCE_FILE ("universal-map.galgas", 209)) ;
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalSyncInstance:
    {
      const cEnumAssociatedValues_valuedObject_globalSyncInstance * extractPtr_7353 = (const cEnumAssociatedValues_valuedObject_globalSyncInstance *) (var_entity_5914.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_7353->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_7353->mAssociatedValue1 ;
      outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForGlobalSyncInstance (extractedValue_plmName.getter_string (SOURCE_FILE ("universal-map.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 211))  COMMA_SOURCE_FILE ("universal-map.galgas", 211)) ;
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
  GALGAS_valuedObjectState var_valueState_7645 ;
  GALGAS_valuedObject var_property_7662 ;
  GALGAS_bool joker_7647 ; // Joker input parameter
  ioObject.mProperty_mInternalPropertyAndRoutineMap.method_searchKey (constinArgument_inValuedObjectName, var_valueState_7645, joker_7647, var_property_7662, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 220)) ;
  switch (var_property_7662.enumValue ()) {
  case GALGAS_valuedObject::kNotBuilt:
    break ;
  case GALGAS_valuedObject::kEnum_type:
    {
    }
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
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsEqual, var_valueState_7645.objectCompare (GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 228)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          {
          ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_setMObjectStateForKey (GALGAS_valuedObjectState::constructor_hasReadValue (SOURCE_FILE ("universal-map.galgas", 229)), constinArgument_inValuedObjectName.getter_string (SOURCE_FILE ("universal-map.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 229)) ;
          }
        }
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_localVariable:
    {
      switch (var_valueState_7645.enumValue ()) {
      case GALGAS_valuedObjectState::kNotBuilt:
        break ;
      case GALGAS_valuedObjectState::kEnum_noValue:
        {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 234)), GALGAS_string ("'").add_operation (constinArgument_inValuedObjectName.getter_string (SOURCE_FILE ("universal-map.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 234)).add_operation (GALGAS_string ("' has no value"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 234)), fixItArray1  COMMA_SOURCE_FILE ("universal-map.galgas", 234)) ;
        }
        break ;
      case GALGAS_valuedObjectState::kEnum_hasUnreadValue:
        {
          {
          ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_setMObjectStateForKey (GALGAS_valuedObjectState::constructor_hasReadValue (SOURCE_FILE ("universal-map.galgas", 236)), constinArgument_inValuedObjectName.getter_string (SOURCE_FILE ("universal-map.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 236)) ;
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
  GALGAS_valuedObjectState var_valueState_8617 ;
  GALGAS_valuedObject var_property_8634 ;
  GALGAS_bool joker_8619 ; // Joker input parameter
  ioObject.mProperty_mInternalPropertyAndRoutineMap.method_searchKey (constinArgument_inValuedObjectName, var_valueState_8617, joker_8619, var_property_8634, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 248)) ;
  switch (var_property_8634.enumValue ()) {
  case GALGAS_valuedObject::kNotBuilt:
    break ;
  case GALGAS_valuedObject::kEnum_type:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 251)), GALGAS_string ("a type cannot be read"), fixItArray0  COMMA_SOURCE_FILE ("universal-map.galgas", 251)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_task:
    {
      const cEnumAssociatedValues_valuedObject_task * extractPtr_8870 = (const cEnumAssociatedValues_valuedObject_task *) (var_property_8634.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_8870->mAssociatedValue0 ;
      outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForGlobalVariable (constinArgument_inValuedObjectName.getter_string (SOURCE_FILE ("universal-map.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 253))  COMMA_SOURCE_FILE ("universal-map.galgas", 253)) ;
    }
    break ;
  case GALGAS_valuedObject::kEnum_driver:
    {
      const cEnumAssociatedValues_valuedObject_driver * extractPtr_9136 = (const cEnumAssociatedValues_valuedObject_driver *) (var_property_8634.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_9136->mAssociatedValue0 ;
      const GALGAS_bool extractedValue_instancied = extractPtr_9136->mAssociatedValue1 ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = extractedValue_instancied.boolEnum () ;
        if (kBoolTrue == test_1) {
          outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForGlobalVariable (constinArgument_inValuedObjectName.getter_string (SOURCE_FILE ("universal-map.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 256))  COMMA_SOURCE_FILE ("universal-map.galgas", 256)) ;
        }
      }
      if (kBoolFalse == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 258)), GALGAS_string ("the driver should be instancied"), fixItArray2  COMMA_SOURCE_FILE ("universal-map.galgas", 258)) ;
        outArgument_outObjectIR.drop () ; // Release error dropped variable
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalConstant:
    {
      const cEnumAssociatedValues_valuedObject_globalConstant * extractPtr_9208 = (const cEnumAssociatedValues_valuedObject_globalConstant *) (var_property_8634.unsafePointer ()) ;
      const GALGAS_objectIR extractedValue_objectIR = extractPtr_9208->mAssociatedValue0 ;
      outArgument_outObjectIR = extractedValue_objectIR ;
    }
    break ;
  case GALGAS_valuedObject::kEnum_localConstant:
    {
      const cEnumAssociatedValues_valuedObject_localConstant * extractPtr_9511 = (const cEnumAssociatedValues_valuedObject_localConstant *) (var_property_8634.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_9511->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_9511->mAssociatedValue1 ;
      outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("universal-map.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 263))  COMMA_SOURCE_FILE ("universal-map.galgas", 263)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, var_valueState_8617.objectCompare (GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 264)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          {
          ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_setMObjectStateForKey (GALGAS_valuedObjectState::constructor_hasReadValue (SOURCE_FILE ("universal-map.galgas", 265)), constinArgument_inValuedObjectName.getter_string (SOURCE_FILE ("universal-map.galgas", 265)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 265)) ;
          }
        }
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalSyncInstance:
    {
      const cEnumAssociatedValues_valuedObject_globalSyncInstance * extractPtr_9665 = (const cEnumAssociatedValues_valuedObject_globalSyncInstance *) (var_property_8634.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_9665->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_9665->mAssociatedValue1 ;
      outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForGlobalSyncInstance (extractedValue_plmName.getter_string (SOURCE_FILE ("universal-map.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 268))  COMMA_SOURCE_FILE ("universal-map.galgas", 268)) ;
    }
    break ;
  case GALGAS_valuedObject::kEnum_localVariable:
    {
      const cEnumAssociatedValues_valuedObject_localVariable * extractPtr_10190 = (const cEnumAssociatedValues_valuedObject_localVariable *) (var_property_8634.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_10190->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_10190->mAssociatedValue1 ;
      switch (var_valueState_8617.enumValue ()) {
      case GALGAS_valuedObjectState::kNotBuilt:
        break ;
      case GALGAS_valuedObjectState::kEnum_noValue:
        {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 272)), GALGAS_string ("'").add_operation (constinArgument_inValuedObjectName.getter_string (SOURCE_FILE ("universal-map.galgas", 272)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 272)).add_operation (GALGAS_string ("' has no value"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 272)), fixItArray4  COMMA_SOURCE_FILE ("universal-map.galgas", 272)) ;
          outArgument_outObjectIR.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_valuedObjectState::kEnum_hasUnreadValue:
        {
          {
          ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_setMObjectStateForKey (GALGAS_valuedObjectState::constructor_hasReadValue (SOURCE_FILE ("universal-map.galgas", 274)), constinArgument_inValuedObjectName.getter_string (SOURCE_FILE ("universal-map.galgas", 274)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 274)) ;
          }
          outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("universal-map.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 275))  COMMA_SOURCE_FILE ("universal-map.galgas", 275)) ;
        }
        break ;
      case GALGAS_valuedObjectState::kEnum_hasReadValue:
        {
          outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("universal-map.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 277))  COMMA_SOURCE_FILE ("universal-map.galgas", 277)) ;
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
  GALGAS_valuedObjectState var_valueState_10529 ;
  GALGAS_valuedObject var_property_10546 ;
  GALGAS_bool joker_10531 ; // Joker input parameter
  ioObject.mProperty_mInternalPropertyAndRoutineMap.method_searchKey (constinArgument_inValuedObjectName, var_valueState_10529, joker_10531, var_property_10546, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 288)) ;
  switch (var_property_10546.enumValue ()) {
  case GALGAS_valuedObject::kNotBuilt:
    break ;
  case GALGAS_valuedObject::kEnum_type:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 291)), GALGAS_string ("a type cannot be written"), fixItArray0  COMMA_SOURCE_FILE ("universal-map.galgas", 291)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_task:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 293)), GALGAS_string ("a task cannot be written"), fixItArray1  COMMA_SOURCE_FILE ("universal-map.galgas", 293)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_driver:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 295)), GALGAS_string ("a driver cannot be written"), fixItArray2  COMMA_SOURCE_FILE ("universal-map.galgas", 295)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalConstant:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 297)), GALGAS_string ("a constant cannot be written"), fixItArray3  COMMA_SOURCE_FILE ("universal-map.galgas", 297)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalSyncInstance:
    {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 299)), GALGAS_string ("a global sync instance cannot be written"), fixItArray4  COMMA_SOURCE_FILE ("universal-map.galgas", 299)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_localConstant:
    {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 301)), GALGAS_string ("a constant cannot be written"), fixItArray5  COMMA_SOURCE_FILE ("universal-map.galgas", 301)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_localVariable:
    {
      const cEnumAssociatedValues_valuedObject_localVariable * extractPtr_11612 = (const cEnumAssociatedValues_valuedObject_localVariable *) (var_property_10546.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_11612->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_11612->mAssociatedValue1 ;
      outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("universal-map.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 303))  COMMA_SOURCE_FILE ("universal-map.galgas", 303)) ;
      switch (var_valueState_10529.enumValue ()) {
      case GALGAS_valuedObjectState::kNotBuilt:
        break ;
      case GALGAS_valuedObjectState::kEnum_noValue:
      case GALGAS_valuedObjectState::kEnum_hasReadValue:
        {
          {
          ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_setMObjectStateForKey (GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 306)), constinArgument_inValuedObjectName.getter_string (SOURCE_FILE ("universal-map.galgas", 306)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 306)) ;
          }
        }
        break ;
      case GALGAS_valuedObjectState::kEnum_hasUnreadValue:
        {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticWarning (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 308)), GALGAS_string ("previous '").add_operation (constinArgument_inValuedObjectName.getter_string (SOURCE_FILE ("universal-map.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 308)).add_operation (GALGAS_string ("' value has not been read"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 308)), fixItArray6  COMMA_SOURCE_FILE ("universal-map.galgas", 308)) ;
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
  GALGAS_valuedObjectState var_valueState_11955 ;
  GALGAS_valuedObject var_property_11972 ;
  GALGAS_bool joker_11957 ; // Joker input parameter
  ioObject.mProperty_mInternalPropertyAndRoutineMap.method_searchKey (constinArgument_inValuedObjectName, var_valueState_11955, joker_11957, var_property_11972, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 319)) ;
  switch (var_property_11972.enumValue ()) {
  case GALGAS_valuedObject::kNotBuilt:
    break ;
  case GALGAS_valuedObject::kEnum_type:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 322)), GALGAS_string ("a type has no value"), fixItArray0  COMMA_SOURCE_FILE ("universal-map.galgas", 322)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_task:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 324)), GALGAS_string ("a task has no value"), fixItArray1  COMMA_SOURCE_FILE ("universal-map.galgas", 324)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_driver:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 326)), GALGAS_string ("a driver has no value"), fixItArray2  COMMA_SOURCE_FILE ("universal-map.galgas", 326)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalConstant:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 328)), GALGAS_string ("a constant cannot be written"), fixItArray3  COMMA_SOURCE_FILE ("universal-map.galgas", 328)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_localConstant:
    {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 330)), GALGAS_string ("a constant cannot be written"), fixItArray4  COMMA_SOURCE_FILE ("universal-map.galgas", 330)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalSyncInstance:
    {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 332)), GALGAS_string ("a global sync instance cannot be written"), fixItArray5  COMMA_SOURCE_FILE ("universal-map.galgas", 332)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_localVariable:
    {
      const cEnumAssociatedValues_valuedObject_localVariable * extractPtr_13104 = (const cEnumAssociatedValues_valuedObject_localVariable *) (var_property_11972.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_13104->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_13104->mAssociatedValue1 ;
      switch (var_valueState_11955.enumValue ()) {
      case GALGAS_valuedObjectState::kNotBuilt:
        break ;
      case GALGAS_valuedObjectState::kEnum_noValue:
        {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (constinArgument_inValuedObjectName.getter_location (SOURCE_FILE ("universal-map.galgas", 336)), GALGAS_string ("object has no value"), fixItArray6  COMMA_SOURCE_FILE ("universal-map.galgas", 336)) ;
          outArgument_outObjectIR.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_valuedObjectState::kEnum_hasUnreadValue:
        {
          outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("universal-map.galgas", 338)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 338))  COMMA_SOURCE_FILE ("universal-map.galgas", 338)) ;
        }
        break ;
      case GALGAS_valuedObjectState::kEnum_hasReadValue:
        {
          {
          ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_setMObjectStateForKey (GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 340)), constinArgument_inValuedObjectName.getter_string (SOURCE_FILE ("universal-map.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 340)) ;
          }
          outArgument_outObjectIR = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("universal-map.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 341))  COMMA_SOURCE_FILE ("universal-map.galgas", 341)) ;
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, constinArgument_inLValue.getter_mIdentifier (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outType = constinArgument_inSelfType ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_valuedObject var_property_13558 ;
    GALGAS_valuedObjectState joker_13542_2 ; // Joker input parameter
    GALGAS_bool joker_13542_1 ; // Joker input parameter
    inObject.mProperty_mInternalPropertyAndRoutineMap.method_searchKey (constinArgument_inLValue.getter_mIdentifier (HERE), joker_13542_2, joker_13542_1, var_property_13558, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 356)) ;
    switch (var_property_13558.enumValue ()) {
    case GALGAS_valuedObject::kNotBuilt:
      break ;
    case GALGAS_valuedObject::kEnum_type:
      {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (constinArgument_inLValue.getter_mIdentifier (HERE).getter_location (SOURCE_FILE ("universal-map.galgas", 359)), GALGAS_string ("undefined in this context"), fixItArray1  COMMA_SOURCE_FILE ("universal-map.galgas", 359)) ;
        outArgument_outType.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_task:
      {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (constinArgument_inLValue.getter_mIdentifier (HERE).getter_location (SOURCE_FILE ("universal-map.galgas", 361)), GALGAS_string ("undefined in this context"), fixItArray2  COMMA_SOURCE_FILE ("universal-map.galgas", 361)) ;
        outArgument_outType.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_driver:
      {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (constinArgument_inLValue.getter_mIdentifier (HERE).getter_location (SOURCE_FILE ("universal-map.galgas", 363)), GALGAS_string ("undefined in this context"), fixItArray3  COMMA_SOURCE_FILE ("universal-map.galgas", 363)) ;
        outArgument_outType.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_globalConstant:
      {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inLValue.getter_mIdentifier (HERE).getter_location (SOURCE_FILE ("universal-map.galgas", 365)), GALGAS_string ("undefined in this context"), fixItArray4  COMMA_SOURCE_FILE ("universal-map.galgas", 365)) ;
        outArgument_outType.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_localConstant:
      {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (constinArgument_inLValue.getter_mIdentifier (HERE).getter_location (SOURCE_FILE ("universal-map.galgas", 367)), GALGAS_string ("undefined in this context"), fixItArray5  COMMA_SOURCE_FILE ("universal-map.galgas", 367)) ;
        outArgument_outType.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_localVariable:
      {
        const cEnumAssociatedValues_valuedObject_localVariable * extractPtr_14132 = (const cEnumAssociatedValues_valuedObject_localVariable *) (var_property_13558.unsafePointer ()) ;
        const GALGAS_PLMType extractedValue_type = extractPtr_14132->mAssociatedValue0 ;
        outArgument_outType = extractedValue_type ;
      }
      break ;
    case GALGAS_valuedObject::kEnum_globalSyncInstance:
      {
        const cEnumAssociatedValues_valuedObject_globalSyncInstance * extractPtr_14201 = (const cEnumAssociatedValues_valuedObject_globalSyncInstance *) (var_property_13558.unsafePointer ()) ;
        const GALGAS_PLMType extractedValue_type = extractPtr_14201->mAssociatedValue0 ;
        outArgument_outType = extractedValue_type ;
      }
      break ;
    }
  }
  extensionMethod_getValuedObjectType (constinArgument_inLValue.getter_mOperand (HERE), outArgument_outType, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 374)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Extension method '@LValueOperandAST getValuedObjectType'                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_getValuedObjectType (const GALGAS_LValueOperandAST inObject,
                                          GALGAS_PLMType & ioArgument_ioType,
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
      const cEnumAssociatedValues_LValueOperandAST_property * extractPtr_14973 = (const cEnumAssociatedValues_LValueOperandAST_property *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_14973->mAssociatedValue0 ;
      const GALGAS_LValueOperandAST extractedValue_next = extractPtr_14973->mAssociatedValue1 ;
      GALGAS_propertyGetterMap var_propertyGetterMap_14600 = ioArgument_ioType.getter_propertyGetterMap (HERE) ;
      GALGAS_propertyGetterKind var_accessKind_14693 ;
      GALGAS_bool joker_14676 ; // Joker input parameter
      var_propertyGetterMap_14600.method_searchKey (extractedValue_propertyName, joker_14676, var_accessKind_14693, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 384)) ;
      switch (var_accessKind_14693.enumValue ()) {
      case GALGAS_propertyGetterKind::kNotBuilt:
        break ;
      case GALGAS_propertyGetterKind::kEnum_constantProperty:
        {
          const cEnumAssociatedValues_propertyGetterKind_constantProperty * extractPtr_14780 = (const cEnumAssociatedValues_propertyGetterKind_constantProperty *) (var_accessKind_14693.unsafePointer ()) ;
          const GALGAS_objectIR extractedValue_value = extractPtr_14780->mAssociatedValue0 ;
          ioArgument_ioType = extensionGetter_type (extractedValue_value, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 387)) ;
        }
        break ;
      case GALGAS_propertyGetterKind::kEnum_storedProperty:
        {
          const cEnumAssociatedValues_propertyGetterKind_storedProperty * extractPtr_14835 = (const cEnumAssociatedValues_propertyGetterKind_storedProperty *) (var_accessKind_14693.unsafePointer ()) ;
          const GALGAS_PLMType extractedValue_type = extractPtr_14835->mAssociatedValue0 ;
          ioArgument_ioType = extractedValue_type ;
        }
        break ;
      case GALGAS_propertyGetterKind::kEnum_computedProperty:
        {
          const cEnumAssociatedValues_propertyGetterKind_computedProperty * extractPtr_14925 = (const cEnumAssociatedValues_propertyGetterKind_computedProperty *) (var_accessKind_14693.unsafePointer ()) ;
          const GALGAS_unifiedTypeMap_2D_proxy extractedValue_propertyTypeProxy = extractPtr_14925->mAssociatedValue0 ;
          ioArgument_ioType = extractedValue_propertyTypeProxy.getter_type (inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 391)) ;
        }
        break ;
      }
      extensionMethod_getValuedObjectType (extractedValue_next, ioArgument_ioType, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 393)) ;
    }
    break ;
  case GALGAS_LValueOperandAST::kEnum_arrayAccess:
    {
      const cEnumAssociatedValues_LValueOperandAST_arrayAccess * extractPtr_15225 = (const cEnumAssociatedValues_LValueOperandAST_arrayAccess *) (temp_0.unsafePointer ()) ;
      const GALGAS_LValueOperandAST extractedValue_next = extractPtr_15225->mAssociatedValue3 ;
      switch (ioArgument_ioType.getter_subscript (HERE).enumValue ()) {
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
          const cEnumAssociatedValues_subscript_staticSubscript * extractPtr_15177 = (const cEnumAssociatedValues_subscript_staticSubscript *) (ioArgument_ioType.getter_subscript (HERE).unsafePointer ()) ;
          const GALGAS_PLMType extractedValue_elementType = extractPtr_15177->mAssociatedValue0 ;
          ioArgument_ioType = extractedValue_elementType ;
        }
        break ;
      }
      extensionMethod_getValuedObjectType (extractedValue_next, ioArgument_ioType, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 401)) ;
    }
    break ;
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
  cEnumerator_flatValuedObjectMap enumerator_15655 (inObject.mProperty_mInternalPropertyAndRoutineMap, kENUMERATION_UP) ;
  while (enumerator_15655.hasCurrentObject ()) {
    switch (enumerator_15655.current (HERE).getter_mValuedObject (HERE).enumValue ()) {
    case GALGAS_valuedObject::kNotBuilt:
      break ;
    case GALGAS_valuedObject::kEnum_type:
      {
      }
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
        const cEnumAssociatedValues_valuedObject_localConstant * extractPtr_16143 = (const cEnumAssociatedValues_valuedObject_localConstant *) (enumerator_15655.current (HERE).getter_mValuedObject (HERE).unsafePointer ()) ;
        const GALGAS_PLMType extractedValue_type = extractPtr_16143->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_plmName = extractPtr_16143->mAssociatedValue1 ;
        const GALGAS_bool extractedValue_isFormalInputArg = extractPtr_16143->mAssociatedValue2 ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = GALGAS_bool (kIsEqual, enumerator_15655.current (HERE).getter_mObjectState (HERE).objectCompare (GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 419)))).boolEnum () ;
          if (kBoolTrue == test_0) {
            TC_Array <C_FixItDescription> fixItArray1 ;
            inCompiler->emitSemanticWarning (enumerator_15655.current (HERE).getter_lkey (HERE).getter_location (SOURCE_FILE ("universal-map.galgas", 420)), GALGAS_string ("'").add_operation (enumerator_15655.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("universal-map.galgas", 420)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 420)).add_operation (GALGAS_string ("' is never read"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 420)), fixItArray1  COMMA_SOURCE_FILE ("universal-map.galgas", 420)) ;
          }
        }
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = extractedValue_isFormalInputArg.operator_not (SOURCE_FILE ("universal-map.galgas", 422)).boolEnum () ;
          if (kBoolTrue == test_2) {
            {
            extensionSetter_generateRelease (ioArgument_ioInstructionGenerationList, extractedValue_type, extractedValue_plmName, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 423)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_valuedObject::kEnum_localVariable:
      {
        const cEnumAssociatedValues_valuedObject_localVariable * extractPtr_16459 = (const cEnumAssociatedValues_valuedObject_localVariable *) (enumerator_15655.current (HERE).getter_mValuedObject (HERE).unsafePointer ()) ;
        const GALGAS_PLMType extractedValue_type = extractPtr_16459->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_plmName = extractPtr_16459->mAssociatedValue1 ;
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          GALGAS_bool test_4 = GALGAS_bool (kIsEqual, enumerator_15655.current (HERE).getter_mObjectState (HERE).objectCompare (GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("universal-map.galgas", 426)))) ;
          if (kBoolTrue == test_4.boolEnum ()) {
            test_4 = enumerator_15655.current (HERE).getter_mObjectShouldBeValuedAtEndOfScope (HERE) ;
          }
          test_3 = test_4.boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (enumerator_15655.current (HERE).getter_lkey (HERE).getter_location (SOURCE_FILE ("universal-map.galgas", 427)), GALGAS_string ("'").add_operation (enumerator_15655.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("universal-map.galgas", 427)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 427)).add_operation (GALGAS_string ("' should be valued at the end of routine"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 427)), fixItArray5  COMMA_SOURCE_FILE ("universal-map.galgas", 427)) ;
          }
        }
        {
        extensionSetter_generateRelease (ioArgument_ioInstructionGenerationList, extractedValue_type, extractedValue_plmName, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 429)) ;
        }
      }
      break ;
    }
    enumerator_15655.gotoNextObject () ;
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
  GALGAS_referenceStateMap var_initialStateMap_16697 = GALGAS_referenceStateMap::constructor_emptyMap (SOURCE_FILE ("universal-map.galgas", 437)) ;
  cEnumerator_flatValuedObjectMap enumerator_16748 (ioObject.mProperty_mInternalPropertyAndRoutineMap, kENUMERATION_UP) ;
  while (enumerator_16748.hasCurrentObject ()) {
    switch (enumerator_16748.current (HERE).getter_mValuedObject (HERE).enumValue ()) {
    case GALGAS_valuedObject::kNotBuilt:
      break ;
    case GALGAS_valuedObject::kEnum_type:
      {
      }
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
        var_initialStateMap_16697.setter_insertKey (enumerator_16748.current (HERE).getter_lkey (HERE), enumerator_16748.current (HERE).getter_mObjectState (HERE), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 446)) ;
        }
      }
      break ;
    case GALGAS_valuedObject::kEnum_localVariable:
      {
        {
        var_initialStateMap_16697.setter_insertKey (enumerator_16748.current (HERE).getter_lkey (HERE), enumerator_16748.current (HERE).getter_mObjectState (HERE), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 448)) ;
        }
      }
      break ;
    }
    enumerator_16748.gotoNextObject () ;
  }
  ioObject.mProperty_mScopeStack.addAssign_operation (GALGAS_scopeKind::constructor_selectScope (SOURCE_FILE ("universal-map.galgas", 451)), GALGAS_bool (true), var_initialStateMap_16697, GALGAS_referenceStateMap::constructor_emptyMap (SOURCE_FILE ("universal-map.galgas", 451)), ioObject.mProperty_mLocalObjectList  COMMA_SOURCE_FILE ("universal-map.galgas", 451)) ;
  ioObject.mProperty_mLocalObjectList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("universal-map.galgas", 452)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Extension method '@universalValuedObjectMap openOverrideForRepeatBlock'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_openOverrideForRepeatBlock (GALGAS_universalValuedObjectMap & ioObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_referenceStateMap var_initialStateMap_17445 = GALGAS_referenceStateMap::constructor_emptyMap (SOURCE_FILE ("universal-map.galgas", 458)) ;
  cEnumerator_flatValuedObjectMap enumerator_17496 (ioObject.mProperty_mInternalPropertyAndRoutineMap, kENUMERATION_UP) ;
  while (enumerator_17496.hasCurrentObject ()) {
    switch (enumerator_17496.current (HERE).getter_mValuedObject (HERE).enumValue ()) {
    case GALGAS_valuedObject::kNotBuilt:
      break ;
    case GALGAS_valuedObject::kEnum_type:
      {
      }
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
        var_initialStateMap_17445.setter_insertKey (enumerator_17496.current (HERE).getter_lkey (HERE), enumerator_17496.current (HERE).getter_mObjectState (HERE), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 467)) ;
        }
      }
      break ;
    case GALGAS_valuedObject::kEnum_localVariable:
      {
        {
        var_initialStateMap_17445.setter_insertKey (enumerator_17496.current (HERE).getter_lkey (HERE), enumerator_17496.current (HERE).getter_mObjectState (HERE), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 469)) ;
        }
      }
      break ;
    }
    enumerator_17496.gotoNextObject () ;
  }
  ioObject.mProperty_mScopeStack.addAssign_operation (GALGAS_scopeKind::constructor_repeatScope (SOURCE_FILE ("universal-map.galgas", 472)), GALGAS_bool (true), var_initialStateMap_17445, GALGAS_referenceStateMap::constructor_emptyMap (SOURCE_FILE ("universal-map.galgas", 472)), ioObject.mProperty_mLocalObjectList  COMMA_SOURCE_FILE ("universal-map.galgas", 472)) ;
  ioObject.mProperty_mLocalObjectList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("universal-map.galgas", 473)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Extension method '@universalValuedObjectMap openBranch'                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_openBranch (GALGAS_universalValuedObjectMap & ioObject,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_referenceStateMap var_initialStateMap_18188 ;
  GALGAS_scopeKind joker_18163 ; // Joker input parameter
  GALGAS_bool joker_18166 ; // Joker input parameter
  GALGAS_referenceStateMap joker_18190_2 ; // Joker input parameter
  GALGAS_lstringlist joker_18190_1 ; // Joker input parameter
  ioObject.mProperty_mScopeStack.method_last (joker_18163, joker_18166, var_initialStateMap_18188, joker_18190_2, joker_18190_1, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 479)) ;
  cEnumerator_referenceStateMap enumerator_18236 (var_initialStateMap_18188, kENUMERATION_UP) ;
  while (enumerator_18236.hasCurrentObject ()) {
    {
    ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_setMObjectStateForKey (enumerator_18236.current_mState (HERE), enumerator_18236.current_lkey (HERE).getter_string (SOURCE_FILE ("universal-map.galgas", 481)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 481)) ;
    }
    enumerator_18236.gotoNextObject () ;
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
  GALGAS_scopeKind var_scopeKind_18567 ;
  GALGAS_bool var_firstBranch_18584 ;
  GALGAS_referenceStateMap var_initialStateMap_18605 ;
  GALGAS_referenceStateMap var_referenceStateMap_18628 ;
  GALGAS_lstringlist var_localObjectList_18649 ;
  {
  ioObject.mProperty_mScopeStack.setter_popLast (var_scopeKind_18567, var_firstBranch_18584, var_initialStateMap_18605, var_referenceStateMap_18628, var_localObjectList_18649, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 488)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_firstBranch_18584.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_referenceStateMap var_newReferenceStateMap_18716 = GALGAS_referenceStateMap::constructor_emptyMap (SOURCE_FILE ("universal-map.galgas", 490)) ;
      cEnumerator_flatValuedObjectMap enumerator_18769 (ioObject.mProperty_mInternalPropertyAndRoutineMap, kENUMERATION_UP) ;
      while (enumerator_18769.hasCurrentObject ()) {
        switch (enumerator_18769.current (HERE).getter_mValuedObject (HERE).enumValue ()) {
        case GALGAS_valuedObject::kNotBuilt:
          break ;
        case GALGAS_valuedObject::kEnum_type:
          {
          }
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
            var_newReferenceStateMap_18716.setter_insertKey (enumerator_18769.current (HERE).getter_lkey (HERE), enumerator_18769.current (HERE).getter_mObjectState (HERE), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 499)) ;
            }
          }
          break ;
        case GALGAS_valuedObject::kEnum_localVariable:
          {
            {
            var_newReferenceStateMap_18716.setter_insertKey (enumerator_18769.current (HERE).getter_lkey (HERE), enumerator_18769.current (HERE).getter_mObjectState (HERE), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 501)) ;
            }
          }
          break ;
        }
        enumerator_18769.gotoNextObject () ;
      }
      ioObject.mProperty_mScopeStack.addAssign_operation (var_scopeKind_18567, GALGAS_bool (false), var_initialStateMap_18605, var_newReferenceStateMap_18716, var_localObjectList_18649  COMMA_SOURCE_FILE ("universal-map.galgas", 504)) ;
    }
  }
  if (kBoolFalse == test_0) {
    switch (var_scopeKind_18567.enumValue ()) {
    case GALGAS_scopeKind::kNotBuilt:
      break ;
    case GALGAS_scopeKind::kEnum_selectScope:
      {
        cEnumerator_referenceStateMap enumerator_19373 (var_referenceStateMap_18628, kENUMERATION_UP) ;
        while (enumerator_19373.hasCurrentObject ()) {
          GALGAS_valuedObjectState var_currentObjectState_19456 ;
          GALGAS_bool joker_19458_2 ; // Joker input parameter
          GALGAS_valuedObject joker_19458_1 ; // Joker input parameter
          ioObject.mProperty_mInternalPropertyAndRoutineMap.method_searchKey (enumerator_19373.current_lkey (HERE), var_currentObjectState_19456, joker_19458_2, joker_19458_1, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 509)) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = GALGAS_bool (kIsEqual, enumerator_19373.current_mState (HERE).objectCompare (var_currentObjectState_19456)).boolEnum () ;
            if (kBoolTrue == test_1) {
            }
          }
          if (kBoolFalse == test_1) {
            enumGalgasBool test_2 = kBoolTrue ;
            if (kBoolTrue == test_2) {
              test_2 = GALGAS_bool (kIsEqual, var_currentObjectState_19456.objectCompare (GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 511)))).operator_and (GALGAS_bool (kIsEqual, enumerator_19373.current_mState (HERE).objectCompare (GALGAS_valuedObjectState::constructor_hasReadValue (SOURCE_FILE ("universal-map.galgas", 511)))) COMMA_SOURCE_FILE ("universal-map.galgas", 511)).boolEnum () ;
              if (kBoolTrue == test_2) {
              }
            }
            if (kBoolFalse == test_2) {
              enumGalgasBool test_3 = kBoolTrue ;
              if (kBoolTrue == test_3) {
                test_3 = GALGAS_bool (kIsEqual, var_currentObjectState_19456.objectCompare (GALGAS_valuedObjectState::constructor_hasReadValue (SOURCE_FILE ("universal-map.galgas", 512)))).operator_and (GALGAS_bool (kIsEqual, enumerator_19373.current_mState (HERE).objectCompare (GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 512)))) COMMA_SOURCE_FILE ("universal-map.galgas", 512)).boolEnum () ;
                if (kBoolTrue == test_3) {
                  {
                  var_referenceStateMap_18628.setter_setMStateForKey (GALGAS_valuedObjectState::constructor_hasReadValue (SOURCE_FILE ("universal-map.galgas", 513)), enumerator_19373.current_lkey (HERE).getter_string (SOURCE_FILE ("universal-map.galgas", 513)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 513)) ;
                  }
                }
              }
              if (kBoolFalse == test_3) {
                TC_Array <C_FixItDescription> fixItArray4 ;
                inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid state for object '").add_operation (enumerator_19373.current_lkey (HERE).getter_string (SOURCE_FILE ("universal-map.galgas", 516)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 516)).add_operation (GALGAS_string ("': found "), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 516)).add_operation (extensionGetter_string (var_currentObjectState_19456, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 516)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 516)).add_operation (GALGAS_string (", required "), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 516)).add_operation (extensionGetter_string (enumerator_19373.current_mState (HERE), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 516)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 516)), fixItArray4  COMMA_SOURCE_FILE ("universal-map.galgas", 515)) ;
              }
            }
          }
          enumerator_19373.gotoNextObject () ;
        }
        ioObject.mProperty_mScopeStack.addAssign_operation (var_scopeKind_18567, GALGAS_bool (false), var_initialStateMap_18605, var_referenceStateMap_18628, var_localObjectList_18649  COMMA_SOURCE_FILE ("universal-map.galgas", 519)) ;
      }
      break ;
    case GALGAS_scopeKind::kEnum_repeatScope:
      {
        cEnumerator_referenceStateMap enumerator_20161 (var_referenceStateMap_18628, kENUMERATION_UP) ;
        while (enumerator_20161.hasCurrentObject ()) {
          GALGAS_valuedObjectState var_currentObjectState_20244 ;
          GALGAS_bool joker_20246_2 ; // Joker input parameter
          GALGAS_valuedObject joker_20246_1 ; // Joker input parameter
          ioObject.mProperty_mInternalPropertyAndRoutineMap.method_searchKey (enumerator_20161.current_lkey (HERE), var_currentObjectState_20244, joker_20246_2, joker_20246_1, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 522)) ;
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = GALGAS_bool (kIsNotEqual, enumerator_20161.current_mState (HERE).objectCompare (var_currentObjectState_20244)).boolEnum () ;
            if (kBoolTrue == test_5) {
              TC_Array <C_FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid state for object '").add_operation (enumerator_20161.current_lkey (HERE).getter_string (SOURCE_FILE ("universal-map.galgas", 525)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 525)).add_operation (GALGAS_string ("': found "), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 525)).add_operation (extensionGetter_string (var_currentObjectState_20244, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 525)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 525)).add_operation (GALGAS_string (", required "), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 525)).add_operation (extensionGetter_string (enumerator_20161.current_mState (HERE), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 525)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 525)), fixItArray6  COMMA_SOURCE_FILE ("universal-map.galgas", 524)) ;
            }
          }
          enumerator_20161.gotoNextObject () ;
        }
        ioObject.mProperty_mScopeStack.addAssign_operation (var_scopeKind_18567, GALGAS_bool (false), var_initialStateMap_18605, var_referenceStateMap_18628, var_localObjectList_18649  COMMA_SOURCE_FILE ("universal-map.galgas", 528)) ;
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
  GALGAS_referenceStateMap var_referenceStateMap_20836 ;
  GALGAS_lstringlist var_localObjectList_20857 ;
  {
  GALGAS_scopeKind joker_20806 ; // Joker input parameter
  GALGAS_bool joker_20809 ; // Joker input parameter
  GALGAS_referenceStateMap joker_20812 ; // Joker input parameter
  ioObject.mProperty_mScopeStack.setter_popLast (joker_20806, joker_20809, joker_20812, var_referenceStateMap_20836, var_localObjectList_20857, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 536)) ;
  }
  cEnumerator_referenceStateMap enumerator_20935 (var_referenceStateMap_20836, kENUMERATION_UP) ;
  while (enumerator_20935.hasCurrentObject ()) {
    {
    ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_setMObjectStateForKey (enumerator_20935.current_mState (HERE), enumerator_20935.current_lkey (HERE).getter_string (SOURCE_FILE ("universal-map.galgas", 539)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 539)) ;
    }
    enumerator_20935.gotoNextObject () ;
  }
  cEnumerator_lstringlist enumerator_21112 (ioObject.mProperty_mLocalObjectList, kENUMERATION_UP) ;
  while (enumerator_21112.hasCurrentObject ()) {
    GALGAS_valuedObjectState var_currentObjectState_21203 ;
    GALGAS_bool var_objectShouldBeValuedAtEndOfScope_21247 ;
    GALGAS_valuedObject var_possibleValuedObject_21279 ;
    ioObject.mProperty_mInternalPropertyAndRoutineMap.method_searchKey (enumerator_21112.current_mValue (HERE), var_currentObjectState_21203, var_objectShouldBeValuedAtEndOfScope_21247, var_possibleValuedObject_21279, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 543)) ;
    switch (var_possibleValuedObject_21279.enumValue ()) {
    case GALGAS_valuedObject::kNotBuilt:
      break ;
    case GALGAS_valuedObject::kEnum_task:
      {
      }
      break ;
    case GALGAS_valuedObject::kEnum_type:
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
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = GALGAS_bool (kIsEqual, var_currentObjectState_21203.objectCompare (GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 556)))).boolEnum () ;
          if (kBoolTrue == test_0) {
            TC_Array <C_FixItDescription> fixItArray1 ;
            inCompiler->emitSemanticWarning (constinArgument_inErrorLocation, GALGAS_string ("'").add_operation (enumerator_21112.current_mValue (HERE).getter_string (SOURCE_FILE ("universal-map.galgas", 557)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 557)).add_operation (GALGAS_string ("' is never read"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 557)), fixItArray1  COMMA_SOURCE_FILE ("universal-map.galgas", 557)) ;
          }
        }
      }
      break ;
    case GALGAS_valuedObject::kEnum_localVariable:
      {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          GALGAS_bool test_3 = GALGAS_bool (kIsEqual, var_currentObjectState_21203.objectCompare (GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("universal-map.galgas", 560)))) ;
          if (kBoolTrue == test_3.boolEnum ()) {
            test_3 = var_objectShouldBeValuedAtEndOfScope_21247 ;
          }
          test_2 = test_3.boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("'").add_operation (enumerator_21112.current_mValue (HERE).getter_string (SOURCE_FILE ("universal-map.galgas", 561)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 561)).add_operation (GALGAS_string ("' should be valued at the end of routine"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 561)), fixItArray4  COMMA_SOURCE_FILE ("universal-map.galgas", 561)) ;
          }
        }
      }
      break ;
    }
    enumerator_21112.gotoNextObject () ;
  }
  cEnumerator_lstringlist enumerator_21894 (ioObject.mProperty_mLocalObjectList, kENUMERATION_UP) ;
  while (enumerator_21894.hasCurrentObject ()) {
    {
    GALGAS_valuedObjectState joker_21953_3 ; // Joker input parameter
    GALGAS_bool joker_21953_2 ; // Joker input parameter
    GALGAS_valuedObject joker_21953_1 ; // Joker input parameter
    ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_removeKey (enumerator_21894.current_mValue (HERE), joker_21953_3, joker_21953_2, joker_21953_1, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 567)) ;
    }
    enumerator_21894.gotoNextObject () ;
  }
  ioObject.mProperty_mLocalObjectList = var_localObjectList_20857 ;
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = ioObject.mProperty_mStaticStringMap.getter_hasKey (inArgument_inString COMMA_SOURCE_FILE ("context.galgas", 59)).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioObject.mProperty_mStaticStringMap.method_searchKey (inArgument_inString.getter_nowhere (SOURCE_FILE ("context.galgas", 60)), outArgument_outIndex, inCompiler COMMA_SOURCE_FILE ("context.galgas", 60)) ;
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outIndex = ioObject.mProperty_mStaticStringMap.getter_count (SOURCE_FILE ("context.galgas", 62)) ;
    {
    ioObject.mProperty_mStaticStringMap.setter_insertKey (inArgument_inString.getter_nowhere (SOURCE_FILE ("context.galgas", 63)), outArgument_outIndex, inCompiler COMMA_SOURCE_FILE ("context.galgas", 63)) ;
    }
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Extension getter '@PLMType llvmTypeName'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <enterExtensionGetter_PLMType_llvmTypeName> gExtensionGetterTable_PLMType_llvmTypeName ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_llvmTypeName (const int32_t inClassIndex,
                                        enterExtensionGetter_PLMType_llvmTypeName inGetter) {
  gExtensionGetterTable_PLMType_llvmTypeName.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string callExtensionGetter_llvmTypeName (const cPtr_PLMType * inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_PLMType) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_PLMType_llvmTypeName f = NULL ;
    if (classIndex < gExtensionGetterTable_PLMType_llvmTypeName.count ()) {
      f = gExtensionGetterTable_PLMType_llvmTypeName (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_PLMType_llvmTypeName.count ()) {
           f = gExtensionGetterTable_PLMType_llvmTypeName (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_PLMType_llvmTypeName.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_PLMType_llvmTypeName (const cPtr_PLMType * inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_PLMType * object = inObject ;
  macroValidSharedObject (object, cPtr_PLMType) ;
  const GALGAS_PLMType temp_0 = object ;
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
      const cEnumAssociatedValues_typeKind_enumeration * extractPtr_4092 = (const cEnumAssociatedValues_typeKind_enumeration *) (temp_0.getter_kind (HERE).unsafePointer ()) ;
      const GALGAS_uint extractedValue_bitCount = extractPtr_4092->mAssociatedValue0 ;
      result_result = GALGAS_string ("i").add_operation (extractedValue_bitCount.getter_string (SOURCE_FILE ("types.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 102)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      const GALGAS_PLMType temp_1 = object ;
      result_result = GALGAS_string ("%").add_operation (temp_1.getter_llvmBaseTypeName (SOURCE_FILE ("types.galgas", 104)).getter_assemblerRepresentation (SOURCE_FILE ("types.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 104)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_syncTool:
    {
      const GALGAS_PLMType temp_2 = object ;
      result_result = GALGAS_string ("%").add_operation (temp_2.getter_llvmBaseTypeName (SOURCE_FILE ("types.galgas", 106)).getter_assemblerRepresentation (SOURCE_FILE ("types.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 106)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_4339 = (const cEnumAssociatedValues_typeKind_integer *) (temp_0.getter_kind (HERE).unsafePointer ()) ;
      const GALGAS_uint extractedValue_bitCount = extractPtr_4339->mAssociatedValue3 ;
      result_result = GALGAS_string ("i").add_operation (extractedValue_bitCount.getter_string (SOURCE_FILE ("types.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 108)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_staticInteger:
    {
      result_result = GALGAS_string ("i32") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_opaque:
    {
      const cEnumAssociatedValues_typeKind_opaque * extractPtr_4444 = (const cEnumAssociatedValues_typeKind_opaque *) (temp_0.getter_kind (HERE).unsafePointer ()) ;
      const GALGAS_bigint extractedValue_bitCount = extractPtr_4444->mAssociatedValue0 ;
      result_result = GALGAS_string ("i").add_operation (extractedValue_bitCount.getter_string (SOURCE_FILE ("types.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 112)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_staticArrayType:
    {
      const GALGAS_PLMType temp_3 = object ;
      result_result = GALGAS_string ("%").add_operation (temp_3.getter_llvmBaseTypeName (SOURCE_FILE ("types.galgas", 114)).getter_assemblerRepresentation (SOURCE_FILE ("types.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 114)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dynamicArrayType:
    {
      result_result = GALGAS_string ("%ptrtype") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_function:
    {
      const cEnumAssociatedValues_typeKind_function * extractPtr_5060 = (const cEnumAssociatedValues_typeKind_function *) (temp_0.getter_kind (HERE).unsafePointer ()) ;
      const GALGAS_routineTypedSignature extractedValue_signature = extractPtr_5060->mAssociatedValue1 ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_returnTypeProxy = extractPtr_5060->mAssociatedValue2 ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (kIsEqual, extractedValue_returnTypeProxy.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("types.galgas", 118)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          result_result = GALGAS_string ("void") ;
        }
      }
      if (kBoolFalse == test_4) {
        result_result = callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) extractedValue_returnTypeProxy.getter_type (inCompiler COMMA_SOURCE_FILE ("types.galgas", 121)).ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 121)) ;
      }
      result_result.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 123)) ;
      cEnumerator_routineTypedSignature enumerator_4833 (extractedValue_signature, kENUMERATION_UP) ;
      while (enumerator_4833.hasCurrentObject ()) {
        result_result.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) enumerator_4833.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("types.galgas", 126)).ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 126)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 126)) ;
        switch (enumerator_4833.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
        case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
        case GALGAS_procFormalArgumentPassingMode::kEnum_output:
          {
            result_result.plusAssign_operation(GALGAS_string ("*"), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 128)) ;
          }
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_input:
          {
          }
          break ;
        }
        if (enumerator_4833.hasNextObject ()) {
          result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 131)) ;
        }
        enumerator_4833.gotoNextObject () ;
      }
      result_result.plusAssign_operation(GALGAS_string (")*"), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 133)) ;
    }
    break ;
  }
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_PLMType_llvmTypeName (void) {
  enterExtensionGetter_llvmTypeName (kTypeDescriptor_GALGAS_PLMType.mSlotID,
                                     extensionGetter_PLMType_llvmTypeName) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionGetter_PLMType_llvmTypeName (void) {
  gExtensionGetterTable_PLMType_llvmTypeName.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_PLMType_llvmTypeName (defineExtensionGetter_PLMType_llvmTypeName,
                                                 freeExtensionGetter_PLMType_llvmTypeName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Extension getter '@PLMType equatable'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <enterExtensionGetter_PLMType_equatable> gExtensionGetterTable_PLMType_equatable ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_equatable (const int32_t inClassIndex,
                                     enterExtensionGetter_PLMType_equatable inGetter) {
  gExtensionGetterTable_PLMType_equatable.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool callExtensionGetter_equatable (const cPtr_PLMType * inObject,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_PLMType) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_PLMType_equatable f = NULL ;
    if (classIndex < gExtensionGetterTable_PLMType_equatable.count ()) {
      f = gExtensionGetterTable_PLMType_equatable (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_PLMType_equatable.count ()) {
           f = gExtensionGetterTable_PLMType_equatable (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_PLMType_equatable.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_bool extensionGetter_PLMType_equatable (const cPtr_PLMType * inObject,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_PLMType * object = inObject ;
  macroValidSharedObject (object, cPtr_PLMType) ;
  result_result = object->mProperty_attributes.getter_equatable (SOURCE_FILE ("types.galgas", 197)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_PLMType_equatable (void) {
  enterExtensionGetter_equatable (kTypeDescriptor_GALGAS_PLMType.mSlotID,
                                  extensionGetter_PLMType_equatable) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionGetter_PLMType_equatable (void) {
  gExtensionGetterTable_PLMType_equatable.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_PLMType_equatable (defineExtensionGetter_PLMType_equatable,
                                              freeExtensionGetter_PLMType_equatable) ;

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
  result_result = callExtensionGetter_instanciable ((const cPtr_PLMType *) temp_0.getter_type (inCompiler COMMA_SOURCE_FILE ("types.galgas", 203)).ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 203)) ;
//---
  return result_result ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Extension getter '@PLMType instanciable'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <enterExtensionGetter_PLMType_instanciable> gExtensionGetterTable_PLMType_instanciable ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_instanciable (const int32_t inClassIndex,
                                        enterExtensionGetter_PLMType_instanciable inGetter) {
  gExtensionGetterTable_PLMType_instanciable.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool callExtensionGetter_instanciable (const cPtr_PLMType * inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_PLMType) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_PLMType_instanciable f = NULL ;
    if (classIndex < gExtensionGetterTable_PLMType_instanciable.count ()) {
      f = gExtensionGetterTable_PLMType_instanciable (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_PLMType_instanciable.count ()) {
           f = gExtensionGetterTable_PLMType_instanciable (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_PLMType_instanciable.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_bool extensionGetter_PLMType_instanciable (const cPtr_PLMType * inObject,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_PLMType * object = inObject ;
  macroValidSharedObject (object, cPtr_PLMType) ;
  result_result = object->mProperty_attributes.getter_instanciable (SOURCE_FILE ("types.galgas", 209)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_PLMType_instanciable (void) {
  enterExtensionGetter_instanciable (kTypeDescriptor_GALGAS_PLMType.mSlotID,
                                     extensionGetter_PLMType_instanciable) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionGetter_PLMType_instanciable (void) {
  gExtensionGetterTable_PLMType_instanciable.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_PLMType_instanciable (defineExtensionGetter_PLMType_instanciable,
                                                 freeExtensionGetter_PLMType_instanciable) ;

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
  result_result = callExtensionGetter_copyable ((const cPtr_PLMType *) temp_0.getter_type (inCompiler COMMA_SOURCE_FILE ("types.galgas", 215)).ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 215)) ;
//---
  return result_result ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Extension getter '@PLMType copyable'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <enterExtensionGetter_PLMType_copyable> gExtensionGetterTable_PLMType_copyable ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_copyable (const int32_t inClassIndex,
                                    enterExtensionGetter_PLMType_copyable inGetter) {
  gExtensionGetterTable_PLMType_copyable.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool callExtensionGetter_copyable (const cPtr_PLMType * inObject,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_PLMType) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_PLMType_copyable f = NULL ;
    if (classIndex < gExtensionGetterTable_PLMType_copyable.count ()) {
      f = gExtensionGetterTable_PLMType_copyable (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_PLMType_copyable.count ()) {
           f = gExtensionGetterTable_PLMType_copyable (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_PLMType_copyable.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_bool extensionGetter_PLMType_copyable (const cPtr_PLMType * inObject,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_PLMType * object = inObject ;
  macroValidSharedObject (object, cPtr_PLMType) ;
  result_result = object->mProperty_attributes.getter_copyable (SOURCE_FILE ("types.galgas", 221)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_PLMType_copyable (void) {
  enterExtensionGetter_copyable (kTypeDescriptor_GALGAS_PLMType.mSlotID,
                                 extensionGetter_PLMType_copyable) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionGetter_PLMType_copyable (void) {
  gExtensionGetterTable_PLMType_copyable.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_PLMType_copyable (defineExtensionGetter_PLMType_copyable,
                                             freeExtensionGetter_PLMType_copyable) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Extension method '@PLMType generateRetain'                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_PLMType_generateRetain> gExtensionMethodTable_PLMType_generateRetain ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_generateRetain (const int32_t inClassIndex,
                                          extensionMethodSignature_PLMType_generateRetain inMethod) {
  gExtensionMethodTable_PLMType_generateRetain.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_generateRetain (const cPtr_PLMType * inObject,
                                         const GALGAS_string constin_inPLMName,
                                         GALGAS_string & io_ioLLVMcode,
                                         GALGAS_generationAdds & io_ioGenerationAdds,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_PLMType) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_PLMType_generateRetain f = NULL ;
    if (classIndex < gExtensionMethodTable_PLMType_generateRetain.count ()) {
      f = gExtensionMethodTable_PLMType_generateRetain (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_PLMType_generateRetain.count ()) {
           f = gExtensionMethodTable_PLMType_generateRetain (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_PLMType_generateRetain.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inPLMName, io_ioLLVMcode, io_ioGenerationAdds, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_PLMType_generateRetain (const cPtr_PLMType * inObject,
                                                    const GALGAS_string constinArgument_inPLMName,
                                                    GALGAS_string & ioArgument_ioLLVMcode,
                                                    GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_PLMType * object = inObject ;
  macroValidSharedObject (object, cPtr_PLMType) ;
  const GALGAS_PLMType temp_0 = object ;
  GALGAS_string var_llvmTypeName_7954 = callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 231)) ;
  GALGAS_string var_LLVMVariable_7995 = function_llvmNameForLocalVariable (constinArgument_inPLMName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 232)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_PLMType temp_2 = object ;
    test_1 = temp_2.getter_kind (HERE).getter_isDynamicArrayType (SOURCE_FILE ("types.galgas", 233)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string var_tempLLVMVariable_8102 = GALGAS_string ("%temp.").add_operation (constinArgument_inPLMName.getter_assemblerRepresentation (SOURCE_FILE ("types.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 234)).add_operation (GALGAS_string (".loaded."), inCompiler COMMA_SOURCE_FILE ("types.galgas", 234)).add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("types.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 234)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("types.galgas", 235)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_tempLLVMVariable_8102, inCompiler COMMA_SOURCE_FILE ("types.galgas", 236)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 236)).add_operation (var_llvmTypeName_7954, inCompiler COMMA_SOURCE_FILE ("types.galgas", 236)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 236)).add_operation (var_llvmTypeName_7954, inCompiler COMMA_SOURCE_FILE ("types.galgas", 236)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 236)).add_operation (var_LLVMVariable_7995, inCompiler COMMA_SOURCE_FILE ("types.galgas", 236)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 236)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 236)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.retain (").add_operation (var_llvmTypeName_7954, inCompiler COMMA_SOURCE_FILE ("types.galgas", 237)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 237)).add_operation (var_tempLLVMVariable_8102, inCompiler COMMA_SOURCE_FILE ("types.galgas", 237)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 237)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 237)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_PLMType temp_3 = object ;
    GALGAS_arcAssignmentList var_arcAssignmentList_8481 = callExtensionGetter_arcList ((const cPtr_PLMType *) temp_3.ptr (), GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("types.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 239)) ;
    cEnumerator_arcAssignmentList enumerator_8569 (var_arcAssignmentList_8481, kENUMERATION_UP) ;
    while (enumerator_8569.hasCurrentObject ()) {
      GALGAS_string var_llvmVarName_8595 = GALGAS_string ("%arc.retain.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("types.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 241)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("types.galgas", 242)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmVarName_8595, inCompiler COMMA_SOURCE_FILE ("types.galgas", 243)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 243)).add_operation (var_llvmTypeName_7954, inCompiler COMMA_SOURCE_FILE ("types.galgas", 243)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 243)).add_operation (var_llvmTypeName_7954, inCompiler COMMA_SOURCE_FILE ("types.galgas", 243)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 243)).add_operation (var_LLVMVariable_7995, inCompiler COMMA_SOURCE_FILE ("types.galgas", 243)).add_operation (GALGAS_string (", i32 0"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 243)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 243)) ;
      cEnumerator_uintlist enumerator_8853 (enumerator_8569.current_mPropertyIndexPath (HERE), kENUMERATION_UP) ;
      while (enumerator_8853.hasCurrentObject ()) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_8853.current_mValue (HERE).getter_string (SOURCE_FILE ("types.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 245)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 245)) ;
        enumerator_8853.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ; ").add_operation (enumerator_8569.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("types.galgas", 247)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 247)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 247)) ;
      GALGAS_string var_propertyTypeLLVMName_8982 = callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) enumerator_8569.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 248)) ;
      GALGAS_string var_llvmLoadedVarName_9040 = var_llvmVarName_8595.add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 249)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmLoadedVarName_9040, inCompiler COMMA_SOURCE_FILE ("types.galgas", 250)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 250)).add_operation (var_propertyTypeLLVMName_8982, inCompiler COMMA_SOURCE_FILE ("types.galgas", 250)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 250)).add_operation (var_propertyTypeLLVMName_8982, inCompiler COMMA_SOURCE_FILE ("types.galgas", 250)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 250)).add_operation (var_llvmVarName_8595, inCompiler COMMA_SOURCE_FILE ("types.galgas", 250)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 250)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 250)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.retain (").add_operation (var_propertyTypeLLVMName_8982, inCompiler COMMA_SOURCE_FILE ("types.galgas", 251)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 251)).add_operation (var_llvmLoadedVarName_9040, inCompiler COMMA_SOURCE_FILE ("types.galgas", 251)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 251)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 251)) ;
      enumerator_8569.gotoNextObject () ;
    }
  }
}
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_PLMType_generateRetain (void) {
  enterExtensionMethod_generateRetain (kTypeDescriptor_GALGAS_PLMType.mSlotID,
                                       extensionMethod_PLMType_generateRetain) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_PLMType_generateRetain (void) {
  gExtensionMethodTable_PLMType_generateRetain.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_PLMType_generateRetain (defineExtensionMethod_PLMType_generateRetain,
                                                   freeExtensionMethod_PLMType_generateRetain) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Extension method '@PLMType generateInsulate'                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_PLMType_generateInsulate> gExtensionMethodTable_PLMType_generateInsulate ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_generateInsulate (const int32_t inClassIndex,
                                            extensionMethodSignature_PLMType_generateInsulate inMethod) {
  gExtensionMethodTable_PLMType_generateInsulate.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_generateInsulate (const cPtr_PLMType * inObject,
                                           const GALGAS_string constin_inPLMName,
                                           GALGAS_string & io_ioLLVMcode,
                                           GALGAS_generationAdds & io_ioGenerationAdds,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_PLMType) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_PLMType_generateInsulate f = NULL ;
    if (classIndex < gExtensionMethodTable_PLMType_generateInsulate.count ()) {
      f = gExtensionMethodTable_PLMType_generateInsulate (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_PLMType_generateInsulate.count ()) {
           f = gExtensionMethodTable_PLMType_generateInsulate (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_PLMType_generateInsulate.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inPLMName, io_ioLLVMcode, io_ioGenerationAdds, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_PLMType_generateInsulate (const cPtr_PLMType * inObject,
                                                      const GALGAS_string constinArgument_inPLMName,
                                                      GALGAS_string & ioArgument_ioLLVMcode,
                                                      GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_PLMType * object = inObject ;
  macroValidSharedObject (object, cPtr_PLMType) ;
  const GALGAS_PLMType temp_0 = object ;
  GALGAS_string var_llvmTypeName_9590 = callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 263)) ;
  GALGAS_string var_LLVMVariable_9631 = function_llvmNameForLocalVariable (constinArgument_inPLMName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 264)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_PLMType temp_2 = object ;
    test_1 = temp_2.getter_kind (HERE).getter_isDynamicArrayType (SOURCE_FILE ("types.galgas", 265)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string var_loadedVar_9731 = GALGAS_string ("%temp.").add_operation (constinArgument_inPLMName.getter_assemblerRepresentation (SOURCE_FILE ("types.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 266)).add_operation (GALGAS_string (".loaded."), inCompiler COMMA_SOURCE_FILE ("types.galgas", 266)).add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("types.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 266)) ;
      GALGAS_string var_insulatedVar_9849 = GALGAS_string ("%temp.").add_operation (constinArgument_inPLMName.getter_assemblerRepresentation (SOURCE_FILE ("types.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 267)).add_operation (GALGAS_string (".insulated."), inCompiler COMMA_SOURCE_FILE ("types.galgas", 267)).add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("types.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 267)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("types.galgas", 268)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_loadedVar_9731, inCompiler COMMA_SOURCE_FILE ("types.galgas", 269)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 269)).add_operation (var_llvmTypeName_9590, inCompiler COMMA_SOURCE_FILE ("types.galgas", 269)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 269)).add_operation (var_llvmTypeName_9590, inCompiler COMMA_SOURCE_FILE ("types.galgas", 269)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 269)).add_operation (var_LLVMVariable_9631, inCompiler COMMA_SOURCE_FILE ("types.galgas", 269)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 269)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 269)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_insulatedVar_9849, inCompiler COMMA_SOURCE_FILE ("types.galgas", 270)).add_operation (GALGAS_string (" = call "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 270)).add_operation (var_llvmTypeName_9590, inCompiler COMMA_SOURCE_FILE ("types.galgas", 270)).add_operation (GALGAS_string (" @arc.insulate ("), inCompiler COMMA_SOURCE_FILE ("types.galgas", 270)).add_operation (var_llvmTypeName_9590, inCompiler COMMA_SOURCE_FILE ("types.galgas", 270)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 270)).add_operation (var_loadedVar_9731, inCompiler COMMA_SOURCE_FILE ("types.galgas", 270)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 270)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 270)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmTypeName_9590, inCompiler COMMA_SOURCE_FILE ("types.galgas", 271)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 271)).add_operation (var_insulatedVar_9849, inCompiler COMMA_SOURCE_FILE ("types.galgas", 271)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 271)).add_operation (var_llvmTypeName_9590, inCompiler COMMA_SOURCE_FILE ("types.galgas", 271)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 271)).add_operation (var_LLVMVariable_9631, inCompiler COMMA_SOURCE_FILE ("types.galgas", 271)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 271)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 271)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_PLMType temp_3 = object ;
    GALGAS_arcAssignmentList var_arcAssignmentList_10377 = callExtensionGetter_arcList ((const cPtr_PLMType *) temp_3.ptr (), GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("types.galgas", 273)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 273)) ;
    cEnumerator_arcAssignmentList enumerator_10465 (var_arcAssignmentList_10377, kENUMERATION_UP) ;
    while (enumerator_10465.hasCurrentObject ()) {
      GALGAS_string var_llvmVarName_10491 = GALGAS_string ("%arc.release.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("types.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 275)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("types.galgas", 276)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmVarName_10491, inCompiler COMMA_SOURCE_FILE ("types.galgas", 277)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 277)).add_operation (var_llvmTypeName_9590, inCompiler COMMA_SOURCE_FILE ("types.galgas", 277)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 277)).add_operation (var_llvmTypeName_9590, inCompiler COMMA_SOURCE_FILE ("types.galgas", 277)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 277)).add_operation (var_LLVMVariable_9631, inCompiler COMMA_SOURCE_FILE ("types.galgas", 277)).add_operation (GALGAS_string (", i32 0"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 277)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 277)) ;
      cEnumerator_uintlist enumerator_10750 (enumerator_10465.current_mPropertyIndexPath (HERE), kENUMERATION_UP) ;
      while (enumerator_10750.hasCurrentObject ()) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_10750.current_mValue (HERE).getter_string (SOURCE_FILE ("types.galgas", 279)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 279)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 279)) ;
        enumerator_10750.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ; ").add_operation (enumerator_10465.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("types.galgas", 281)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 281)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 281)) ;
      GALGAS_string var_propertyTypeLLVMName_10879 = callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) enumerator_10465.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 282)) ;
      GALGAS_string var_loadedVar_10929 = var_llvmVarName_10491.add_operation (GALGAS_string (".loaded."), inCompiler COMMA_SOURCE_FILE ("types.galgas", 283)).add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("types.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 283)) ;
      GALGAS_string var_insulatedVar_11012 = var_llvmVarName_10491.add_operation (GALGAS_string (".insulated."), inCompiler COMMA_SOURCE_FILE ("types.galgas", 284)).add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("types.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 284)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("types.galgas", 285)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_loadedVar_10929, inCompiler COMMA_SOURCE_FILE ("types.galgas", 286)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 286)).add_operation (var_propertyTypeLLVMName_10879, inCompiler COMMA_SOURCE_FILE ("types.galgas", 286)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 286)).add_operation (var_propertyTypeLLVMName_10879, inCompiler COMMA_SOURCE_FILE ("types.galgas", 286)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 286)).add_operation (var_llvmVarName_10491, inCompiler COMMA_SOURCE_FILE ("types.galgas", 286)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 286)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 286)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_insulatedVar_11012, inCompiler COMMA_SOURCE_FILE ("types.galgas", 287)).add_operation (GALGAS_string (" = call "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 287)).add_operation (var_propertyTypeLLVMName_10879, inCompiler COMMA_SOURCE_FILE ("types.galgas", 287)).add_operation (GALGAS_string (" @arc.insulate ("), inCompiler COMMA_SOURCE_FILE ("types.galgas", 287)).add_operation (var_propertyTypeLLVMName_10879, inCompiler COMMA_SOURCE_FILE ("types.galgas", 287)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 287)).add_operation (var_loadedVar_10929, inCompiler COMMA_SOURCE_FILE ("types.galgas", 287)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 287)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 287)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_propertyTypeLLVMName_10879, inCompiler COMMA_SOURCE_FILE ("types.galgas", 288)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 288)).add_operation (var_insulatedVar_11012, inCompiler COMMA_SOURCE_FILE ("types.galgas", 288)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 288)).add_operation (var_propertyTypeLLVMName_10879, inCompiler COMMA_SOURCE_FILE ("types.galgas", 288)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 288)).add_operation (var_llvmVarName_10491, inCompiler COMMA_SOURCE_FILE ("types.galgas", 288)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 288)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 288)) ;
      enumerator_10465.gotoNextObject () ;
    }
  }
}
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_PLMType_generateInsulate (void) {
  enterExtensionMethod_generateInsulate (kTypeDescriptor_GALGAS_PLMType.mSlotID,
                                         extensionMethod_PLMType_generateInsulate) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_PLMType_generateInsulate (void) {
  gExtensionMethodTable_PLMType_generateInsulate.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_PLMType_generateInsulate (defineExtensionMethod_PLMType_generateInsulate,
                                                     freeExtensionMethod_PLMType_generateInsulate) ;

