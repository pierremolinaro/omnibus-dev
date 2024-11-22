#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-9.h"

//--------------------------------------------------------------------------------------------------

#include "MF_MemoryControl.h"
#include "C_galgas_CLI_Options.h"

#include "FileManager.h"

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//
//                             N O N    T E R M I N A L    N A M E S                                
//
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------
//
//                      S L R    A N A L Y Z E R    A C T I O N    T A B L E                        
//
//--------------------------------------------------------------------------------------------------

// Action tables handle shift and reduce actions:
//  - a shift action is (terminal_symbol, SHIFT (n)): if shifts to state n;
//  - the accept action is (terminal_symbol, ACCEPT);
//  - a reduce action is (terminal_symbol, REDUCE (n)); if reduces to state n.

static const int32_t gActionTable_omnibus_target_grammar [] = {
// State S0 (index = 0)
  Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END
// State S1 (index = 3)
, Lexique_omnibus_5F_lexique::kToken__3A_, BOTTOM_UP_SHIFT (5)
, BOTTOM_UP_END
// State S2 (index = 6)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (4)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (6)
, BOTTOM_UP_END
// State S3 (index = 11)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END
// State S4 (index = 14)
, Lexique_omnibus_5F_lexique::kToken_, BOTTOM_UP_ACCEPT
, BOTTOM_UP_END
// State S5 (index = 17)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (0)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_REDUCE (0)
, Lexique_omnibus_5F_lexique::kToken__24_type, BOTTOM_UP_REDUCE (0)
, Lexique_omnibus_5F_lexique::kToken_integer, BOTTOM_UP_REDUCE (0)
, Lexique_omnibus_5F_lexique::kToken_yes, BOTTOM_UP_REDUCE (0)
, Lexique_omnibus_5F_lexique::kToken_no, BOTTOM_UP_REDUCE (0)
, Lexique_omnibus_5F_lexique::kToken_, BOTTOM_UP_REDUCE (0)
, BOTTOM_UP_END
// State S6 (index = 32)
, Lexique_omnibus_5F_lexique::kToken__2D__3E_, BOTTOM_UP_SHIFT (9)
, BOTTOM_UP_END
// State S7 (index = 35)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (1)
, BOTTOM_UP_END
// State S8 (index = 38)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (10)
, BOTTOM_UP_END
// State S9 (index = 41)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (11)
, BOTTOM_UP_END
// State S10 (index = 44)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END
// State S11 (index = 47)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (4)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (6)
, BOTTOM_UP_END
// State S12 (index = 52)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (14)
, BOTTOM_UP_END
// State S13 (index = 55)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (5)
, BOTTOM_UP_END
// State S14 (index = 58)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END
// State S15 (index = 61)
, Lexique_omnibus_5F_lexique::kToken__24_type, BOTTOM_UP_SHIFT (16)
, BOTTOM_UP_END
// State S16 (index = 64)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END
// State S17 (index = 67)
, Lexique_omnibus_5F_lexique::kToken__24_type, BOTTOM_UP_SHIFT (18)
, BOTTOM_UP_END
// State S18 (index = 70)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END
// State S19 (index = 73)
, Lexique_omnibus_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (20)
, BOTTOM_UP_END
// State S20 (index = 76)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END
// State S21 (index = 79)
, Lexique_omnibus_5F_lexique::kToken_yes, BOTTOM_UP_SHIFT (22)
, Lexique_omnibus_5F_lexique::kToken_no, BOTTOM_UP_SHIFT (23)
, BOTTOM_UP_END
// State S22 (index = 84)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (6)
, BOTTOM_UP_END
// State S23 (index = 87)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (7)
, BOTTOM_UP_END
// State S24 (index = 90)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END
// State S25 (index = 93)
, Lexique_omnibus_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (26)
, BOTTOM_UP_END
// State S26 (index = 96)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END
// State S27 (index = 99)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (28)
, BOTTOM_UP_END
// State S28 (index = 102)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END
// State S29 (index = 105)
, Lexique_omnibus_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (30)
, Lexique_omnibus_5F_lexique::kToken_no, BOTTOM_UP_SHIFT (31)
, BOTTOM_UP_END
// State S30 (index = 110)
, Lexique_omnibus_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (33)
, BOTTOM_UP_END
// State S31 (index = 113)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (8)
, BOTTOM_UP_END
// State S32 (index = 116)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END
// State S33 (index = 119)
, Lexique_omnibus_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (35)
, BOTTOM_UP_END
// State S34 (index = 122)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (36)
, BOTTOM_UP_END
// State S35 (index = 125)
, Lexique_omnibus_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (37)
, BOTTOM_UP_END
// State S36 (index = 128)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END
// State S37 (index = 131)
, Lexique_omnibus_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (39)
, BOTTOM_UP_END
// State S38 (index = 134)
, Lexique_omnibus_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (40)
, BOTTOM_UP_END
// State S39 (index = 137)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (9)
, BOTTOM_UP_END
// State S40 (index = 140)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END
// State S41 (index = 143)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (42)
, BOTTOM_UP_END
// State S42 (index = 146)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END
// State S43 (index = 149)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (44)
, BOTTOM_UP_END
// State S44 (index = 152)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END
// State S45 (index = 155)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (46)
, BOTTOM_UP_END
// State S46 (index = 158)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END
// State S47 (index = 161)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (48)
, BOTTOM_UP_END
// State S48 (index = 164)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END
// State S49 (index = 167)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (50)
, BOTTOM_UP_END
// State S50 (index = 170)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END
// State S51 (index = 173)
, Lexique_omnibus_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (52)
, BOTTOM_UP_END
// State S52 (index = 176)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END
// State S53 (index = 179)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (54)
, BOTTOM_UP_END
// State S54 (index = 182)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END
// State S55 (index = 185)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (56)
, BOTTOM_UP_END
// State S56 (index = 188)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END
// State S57 (index = 191)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (58)
, BOTTOM_UP_END
// State S58 (index = 194)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END
// State S59 (index = 197)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (60)
, BOTTOM_UP_END
// State S60 (index = 200)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END
// State S61 (index = 203)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (62)
, BOTTOM_UP_END
// State S62 (index = 206)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END
// State S63 (index = 209)
, Lexique_omnibus_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (64)
, BOTTOM_UP_END
// State S64 (index = 212)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END
// State S65 (index = 215)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (66)
, BOTTOM_UP_END
// State S66 (index = 218)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END
// State S67 (index = 221)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (10)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (68)
, BOTTOM_UP_END
// State S68 (index = 226)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (10)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (68)
, BOTTOM_UP_END
// State S69 (index = 231)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END
// State S70 (index = 234)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (11)
, BOTTOM_UP_END
// State S71 (index = 237)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (12)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (72)
, BOTTOM_UP_END
// State S72 (index = 242)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (12)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (72)
, BOTTOM_UP_END
// State S73 (index = 247)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END
// State S74 (index = 250)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (13)
, BOTTOM_UP_END
// State S75 (index = 253)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (14)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (76)
, BOTTOM_UP_END
// State S76 (index = 258)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (14)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (76)
, BOTTOM_UP_END
// State S77 (index = 263)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END
// State S78 (index = 266)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (15)
, BOTTOM_UP_END
// State S79 (index = 269)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (16)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (80)
, BOTTOM_UP_END
// State S80 (index = 274)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (16)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (80)
, BOTTOM_UP_END
// State S81 (index = 279)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END
// State S82 (index = 282)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (17)
, BOTTOM_UP_END
// State S83 (index = 285)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (85)
, Lexique_omnibus_5F_lexique::kToken_, BOTTOM_UP_REDUCE (18)
, BOTTOM_UP_END
// State S84 (index = 290)
, Lexique_omnibus_5F_lexique::kToken_, BOTTOM_UP_REDUCE (2)
, BOTTOM_UP_END
// State S85 (index = 293)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (20)
, Lexique_omnibus_5F_lexique::kToken__2D__3E_, BOTTOM_UP_SHIFT (87)
, Lexique_omnibus_5F_lexique::kToken_, BOTTOM_UP_REDUCE (20)
, BOTTOM_UP_END
// State S86 (index = 300)
, Lexique_omnibus_5F_lexique::kToken_, BOTTOM_UP_REDUCE (3)
, BOTTOM_UP_END
// State S87 (index = 303)
, Lexique_omnibus_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (89)
, BOTTOM_UP_END
// State S88 (index = 306)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (85)
, Lexique_omnibus_5F_lexique::kToken_, BOTTOM_UP_REDUCE (18)
, BOTTOM_UP_END
// State S89 (index = 311)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (21)
, Lexique_omnibus_5F_lexique::kToken_, BOTTOM_UP_REDUCE (21)
, BOTTOM_UP_END
// State S90 (index = 316)
, Lexique_omnibus_5F_lexique::kToken_, BOTTOM_UP_REDUCE (19)
, BOTTOM_UP_END} ;

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

//--------------------------------------------------------------------------------------------------
//
//                                  SLR states successors table                                     
//
//--------------------------------------------------------------------------------------------------

// Successor tables handle non terminal successors ;
// an entry is (non_terminal_symbol, n) ; successor is state n.

static const int32_t gSuccessorTable_omnibus_target_grammar_0 [7] = {0, 2,
  1, 3,
  2, 4, -1} ;

static const int32_t gSuccessorTable_omnibus_target_grammar_2 [3] = {4, 7, -1} ;

static const int32_t gSuccessorTable_omnibus_target_grammar_3 [3] = {0, 8, -1} ;

static const int32_t gSuccessorTable_omnibus_target_grammar_10 [3] = {0, 12, -1} ;

static const int32_t gSuccessorTable_omnibus_target_grammar_11 [3] = {4, 13, -1} ;

static const int32_t gSuccessorTable_omnibus_target_grammar_14 [3] = {0, 15, -1} ;

static const int32_t gSuccessorTable_omnibus_target_grammar_16 [3] = {0, 17, -1} ;

static const int32_t gSuccessorTable_omnibus_target_grammar_18 [3] = {0, 19, -1} ;

static const int32_t gSuccessorTable_omnibus_target_grammar_20 [3] = {0, 21, -1} ;

static const int32_t gSuccessorTable_omnibus_target_grammar_21 [3] = {5, 24, -1} ;

static const int32_t gSuccessorTable_omnibus_target_grammar_24 [3] = {0, 25, -1} ;

static const int32_t gSuccessorTable_omnibus_target_grammar_26 [3] = {0, 27, -1} ;

static const int32_t gSuccessorTable_omnibus_target_grammar_28 [3] = {0, 29, -1} ;

static const int32_t gSuccessorTable_omnibus_target_grammar_29 [3] = {6, 32, -1} ;

static const int32_t gSuccessorTable_omnibus_target_grammar_32 [3] = {0, 34, -1} ;

static const int32_t gSuccessorTable_omnibus_target_grammar_36 [3] = {0, 38, -1} ;

static const int32_t gSuccessorTable_omnibus_target_grammar_40 [3] = {0, 41, -1} ;

static const int32_t gSuccessorTable_omnibus_target_grammar_42 [3] = {0, 43, -1} ;

static const int32_t gSuccessorTable_omnibus_target_grammar_44 [3] = {0, 45, -1} ;

static const int32_t gSuccessorTable_omnibus_target_grammar_46 [3] = {0, 47, -1} ;

static const int32_t gSuccessorTable_omnibus_target_grammar_48 [3] = {0, 49, -1} ;

static const int32_t gSuccessorTable_omnibus_target_grammar_50 [3] = {0, 51, -1} ;

static const int32_t gSuccessorTable_omnibus_target_grammar_52 [3] = {0, 53, -1} ;

static const int32_t gSuccessorTable_omnibus_target_grammar_54 [3] = {0, 55, -1} ;

static const int32_t gSuccessorTable_omnibus_target_grammar_56 [3] = {0, 57, -1} ;

static const int32_t gSuccessorTable_omnibus_target_grammar_58 [3] = {0, 59, -1} ;

static const int32_t gSuccessorTable_omnibus_target_grammar_60 [3] = {0, 61, -1} ;

static const int32_t gSuccessorTable_omnibus_target_grammar_62 [3] = {0, 63, -1} ;

static const int32_t gSuccessorTable_omnibus_target_grammar_64 [3] = {0, 65, -1} ;

static const int32_t gSuccessorTable_omnibus_target_grammar_66 [3] = {0, 67, -1} ;

static const int32_t gSuccessorTable_omnibus_target_grammar_67 [3] = {7, 69, -1} ;

static const int32_t gSuccessorTable_omnibus_target_grammar_68 [3] = {7, 70, -1} ;

static const int32_t gSuccessorTable_omnibus_target_grammar_69 [3] = {0, 71, -1} ;

static const int32_t gSuccessorTable_omnibus_target_grammar_71 [3] = {8, 73, -1} ;

static const int32_t gSuccessorTable_omnibus_target_grammar_72 [3] = {8, 74, -1} ;

static const int32_t gSuccessorTable_omnibus_target_grammar_73 [3] = {0, 75, -1} ;

static const int32_t gSuccessorTable_omnibus_target_grammar_75 [3] = {9, 77, -1} ;

static const int32_t gSuccessorTable_omnibus_target_grammar_76 [3] = {9, 78, -1} ;

static const int32_t gSuccessorTable_omnibus_target_grammar_77 [3] = {0, 79, -1} ;

static const int32_t gSuccessorTable_omnibus_target_grammar_79 [3] = {10, 81, -1} ;

static const int32_t gSuccessorTable_omnibus_target_grammar_80 [3] = {10, 82, -1} ;

static const int32_t gSuccessorTable_omnibus_target_grammar_81 [5] = {0, 83,
  3, 84, -1} ;

static const int32_t gSuccessorTable_omnibus_target_grammar_83 [3] = {11, 86, -1} ;

static const int32_t gSuccessorTable_omnibus_target_grammar_85 [3] = {12, 88, -1} ;

static const int32_t gSuccessorTable_omnibus_target_grammar_88 [3] = {11, 90, -1} ;

static const int32_t * gSuccessorTable_omnibus_target_grammar [91] = {
gSuccessorTable_omnibus_target_grammar_0, nullptr, gSuccessorTable_omnibus_target_grammar_2, gSuccessorTable_omnibus_target_grammar_3, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, gSuccessorTable_omnibus_target_grammar_10, gSuccessorTable_omnibus_target_grammar_11, 
  nullptr, nullptr, gSuccessorTable_omnibus_target_grammar_14, nullptr, 
  gSuccessorTable_omnibus_target_grammar_16, nullptr, gSuccessorTable_omnibus_target_grammar_18, nullptr, 
  gSuccessorTable_omnibus_target_grammar_20, gSuccessorTable_omnibus_target_grammar_21, nullptr, nullptr, 
  gSuccessorTable_omnibus_target_grammar_24, nullptr, gSuccessorTable_omnibus_target_grammar_26, nullptr, 
  gSuccessorTable_omnibus_target_grammar_28, gSuccessorTable_omnibus_target_grammar_29, nullptr, nullptr, 
  gSuccessorTable_omnibus_target_grammar_32, nullptr, nullptr, nullptr, 
  gSuccessorTable_omnibus_target_grammar_36, nullptr, nullptr, nullptr, 
  gSuccessorTable_omnibus_target_grammar_40, nullptr, gSuccessorTable_omnibus_target_grammar_42, nullptr, 
  gSuccessorTable_omnibus_target_grammar_44, nullptr, gSuccessorTable_omnibus_target_grammar_46, nullptr, 
  gSuccessorTable_omnibus_target_grammar_48, nullptr, gSuccessorTable_omnibus_target_grammar_50, nullptr, 
  gSuccessorTable_omnibus_target_grammar_52, nullptr, gSuccessorTable_omnibus_target_grammar_54, nullptr, 
  gSuccessorTable_omnibus_target_grammar_56, nullptr, gSuccessorTable_omnibus_target_grammar_58, nullptr, 
  gSuccessorTable_omnibus_target_grammar_60, nullptr, gSuccessorTable_omnibus_target_grammar_62, nullptr, 
  gSuccessorTable_omnibus_target_grammar_64, nullptr, gSuccessorTable_omnibus_target_grammar_66, gSuccessorTable_omnibus_target_grammar_67, 
  gSuccessorTable_omnibus_target_grammar_68, gSuccessorTable_omnibus_target_grammar_69, nullptr, gSuccessorTable_omnibus_target_grammar_71, 
  gSuccessorTable_omnibus_target_grammar_72, gSuccessorTable_omnibus_target_grammar_73, nullptr, gSuccessorTable_omnibus_target_grammar_75, 
  gSuccessorTable_omnibus_target_grammar_76, gSuccessorTable_omnibus_target_grammar_77, nullptr, gSuccessorTable_omnibus_target_grammar_79, 
  gSuccessorTable_omnibus_target_grammar_80, gSuccessorTable_omnibus_target_grammar_81, nullptr, gSuccessorTable_omnibus_target_grammar_83, 
  nullptr, gSuccessorTable_omnibus_target_grammar_85, nullptr, nullptr, 
  gSuccessorTable_omnibus_target_grammar_88, nullptr, nullptr} ;

//--------------------------------------------------------------------------------------------------
//
//                Production rules infos (left non terminal, size of right string)                  
//
//--------------------------------------------------------------------------------------------------

static const int32_t gProductionsTable_omnibus_target_grammar [23 * 2] = {
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

//--------------------------------------------------------------------------------------------------
//
//                        'configuration_key' non terminal implementation                           
//
//--------------------------------------------------------------------------------------------------

void cGrammar_omnibus_5F_target_5F_grammar::nt_configuration_5F_key_parse (Lexique_omnibus_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 0) {
  rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_key_i0_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_omnibus_5F_target_5F_grammar::nt_configuration_5F_key_indexing (Lexique_omnibus_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 0) {
  rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_key_i0_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_omnibus_5F_target_5F_grammar::nt_configuration_5F_key_ (const GGS_string  parameter_1,
                                Lexique_omnibus_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 0) {
  rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_key_i0_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                     'python_utility_tool_list' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

void cGrammar_omnibus_5F_target_5F_grammar::nt_python_5F_utility_5F_tool_5F_list_parse (Lexique_omnibus_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 1) {
  rule_omnibus_5F_target_5F_specific_5F_syntax_python_5F_utility_5F_tool_5F_list_i1_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_omnibus_5F_target_5F_grammar::nt_python_5F_utility_5F_tool_5F_list_indexing (Lexique_omnibus_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 1) {
  rule_omnibus_5F_target_5F_specific_5F_syntax_python_5F_utility_5F_tool_5F_list_i1_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_omnibus_5F_target_5F_grammar::nt_python_5F_utility_5F_tool_5F_list_ (GGS__32_lstringlist &  parameter_1,
                                Lexique_omnibus_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 1) {
  rule_omnibus_5F_target_5F_specific_5F_syntax_python_5F_utility_5F_tool_5F_list_i1_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                    'configuration_start_symbol' non terminal implementation                      
//
//--------------------------------------------------------------------------------------------------

void cGrammar_omnibus_5F_target_5F_grammar::nt_configuration_5F_start_5F_symbol_parse (Lexique_omnibus_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 2) {
  rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_start_5F_symbol_i2_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_omnibus_5F_target_5F_grammar::nt_configuration_5F_start_5F_symbol_indexing (Lexique_omnibus_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 2) {
  rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_start_5F_symbol_i2_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_omnibus_5F_target_5F_grammar::nt_configuration_5F_start_5F_symbol_ (GGS_ast &  parameter_1,
                                GGS_lstringlist &  parameter_2,
                                GGS_location &  parameter_3,
                                Lexique_omnibus_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 2) {
  rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_start_5F_symbol_i2_(parameter_1, parameter_2, parameter_3, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_omnibus_5F_target_5F_grammar::performIndexing (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_omnibus_5F_lexique * scanner = nullptr ;
  macroMyNew (scanner, Lexique_omnibus_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  scanner->enableIndexing () ;
  if (scanner->sourceText ().isValid ()) {
    const bool ok = scanner->performBottomUpParsing (gActionTable_omnibus_target_grammar, gNonTerminalNames_omnibus_target_grammar,
                                                     gActionTableIndex_omnibus_target_grammar, gSuccessorTable_omnibus_target_grammar,
                                                     gProductionsTable_omnibus_target_grammar) ;
    if (ok) {
      cGrammar_omnibus_5F_target_5F_grammar grammar ;
      grammar.nt_configuration_5F_start_5F_symbol_indexing (scanner) ;
    }
    scanner->generateIndexFile () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_omnibus_5F_target_5F_grammar::performOnlyLexicalAnalysis (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_omnibus_5F_lexique * scanner = nullptr ;
  macroMyNew (scanner, Lexique_omnibus_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_omnibus_5F_target_5F_grammar::performOnlySyntaxAnalysis (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_omnibus_5F_lexique * scanner = nullptr ;
  macroMyNew (scanner, Lexique_omnibus_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performBottomUpParsing (gActionTable_omnibus_target_grammar, gNonTerminalNames_omnibus_target_grammar,
                                     gActionTableIndex_omnibus_target_grammar, gSuccessorTable_omnibus_target_grammar,
                                     gProductionsTable_omnibus_target_grammar) ;
  }
  macroDetachSharedObject (scanner) ;
}

//--------------------------------------------------------------------------------------------------
//
//                              Grammar start symbol implementation                                 
//
//--------------------------------------------------------------------------------------------------

void cGrammar_omnibus_5F_target_5F_grammar::_performSourceFileParsing_ (Compiler * inCompiler,
                                GGS_lstring inFilePath,
                                GGS_ast &  parameter_1,
                                GGS_lstringlist &  parameter_2,
                                GGS_location &  parameter_3
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GGS_string filePathAsString = inFilePath.readProperty_string () ;
    String filePath = filePathAsString.stringValue () ;
    if (! FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().stringByDeletingLastPathComponent ().stringByAppendingPathComponent (filePath) ;
    }
    if (FileManager::fileExistsAtPath (filePath)) {
      Lexique_omnibus_5F_lexique * scanner = nullptr ;
      macroMyNew (scanner, Lexique_omnibus_5F_lexique (inCompiler, filePath COMMA_HERE)) ;
      if (scanner->sourceText ().isValid ()) {
        const bool ok = scanner->performBottomUpParsing (gActionTable_omnibus_target_grammar, gNonTerminalNames_omnibus_target_grammar,
                                                         gActionTableIndex_omnibus_target_grammar, gSuccessorTable_omnibus_target_grammar,
                                                         gProductionsTable_omnibus_target_grammar) ;
        if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
          cGrammar_omnibus_5F_target_5F_grammar grammar ;
          grammar.nt_configuration_5F_start_5F_symbol_ (parameter_1, parameter_2, parameter_3, scanner) ;
        }
      }else{
        String message ;
        message.appendString ("the '") ;
        message.appendString (filePath) ;
        message.appendString ("' file exists, but cannot be read") ;
        const GGS_location errorLocation (inFilePath.readProperty_location ()) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <FixItDescription> () COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      String message ;
      message.appendString ("the '") ;
      message.appendString (filePath) ;
      message.appendString ("' file does not exist") ;
      const GGS_location errorLocation (inFilePath.readProperty_location ()) ;
      inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <FixItDescription> () COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void cGrammar_omnibus_5F_target_5F_grammar::_performSourceStringParsing_ (Compiler * inCompiler,
                                GGS_string inSourceString,
                                GGS_string inNameString,
                                GGS_ast &  parameter_1,
                                GGS_lstringlist &  parameter_2,
                                GGS_location &  parameter_3
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inSourceString.isValid () && inNameString.isValid ()) {
    const String sourceString = inSourceString.stringValue () ;
    const String nameString = inNameString.stringValue () ;
    Lexique_omnibus_5F_lexique * scanner = nullptr ;
    macroMyNew (scanner, Lexique_omnibus_5F_lexique (inCompiler, sourceString, nameString COMMA_HERE)) ;
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

//--------------------------------------------------------------------------------------------------
//
//                       'interruptConfigList' non terminal implementation                          
//
//--------------------------------------------------------------------------------------------------

void cGrammar_omnibus_5F_target_5F_grammar::nt_interruptConfigList_parse (Lexique_omnibus_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 3) {
  rule_omnibus_5F_target_5F_specific_5F_syntax_interruptConfigList_i3_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_omnibus_5F_target_5F_grammar::nt_interruptConfigList_indexing (Lexique_omnibus_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 3) {
  rule_omnibus_5F_target_5F_specific_5F_syntax_interruptConfigList_i3_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_omnibus_5F_target_5F_grammar::nt_interruptConfigList_ (GGS_interruptionConfigurationList &  parameter_1,
                                GGS_enumerationConstantList &  parameter_2,
                                Lexique_omnibus_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 3) {
  rule_omnibus_5F_target_5F_specific_5F_syntax_interruptConfigList_i3_(parameter_1, parameter_2, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//         'select_omnibus_5F_target_5F_specific_5F_syntax_0' non terminal implementation           
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_omnibus_5F_target_5F_grammar::select_omnibus_5F_target_5F_specific_5F_syntax_0 (Lexique_omnibus_5F_lexique * inLexique) {
// Productions numbers:  4 5
  return inLexique->nextProductionIndex () - 3 ;
}

//--------------------------------------------------------------------------------------------------
//
//         'select_omnibus_5F_target_5F_specific_5F_syntax_1' non terminal implementation           
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_omnibus_5F_target_5F_grammar::select_omnibus_5F_target_5F_specific_5F_syntax_1 (Lexique_omnibus_5F_lexique * inLexique) {
// Productions numbers:  6 7
  return inLexique->nextProductionIndex () - 5 ;
}

//--------------------------------------------------------------------------------------------------
//
//         'select_omnibus_5F_target_5F_specific_5F_syntax_2' non terminal implementation           
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_omnibus_5F_target_5F_grammar::select_omnibus_5F_target_5F_specific_5F_syntax_2 (Lexique_omnibus_5F_lexique * inLexique) {
// Productions numbers:  8 9
  return inLexique->nextProductionIndex () - 7 ;
}

//--------------------------------------------------------------------------------------------------
//
//         'select_omnibus_5F_target_5F_specific_5F_syntax_3' non terminal implementation           
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_omnibus_5F_target_5F_grammar::select_omnibus_5F_target_5F_specific_5F_syntax_3 (Lexique_omnibus_5F_lexique * inLexique) {
// Productions numbers:  10 11
  return inLexique->nextProductionIndex () - 9 ;
}

//--------------------------------------------------------------------------------------------------
//
//         'select_omnibus_5F_target_5F_specific_5F_syntax_4' non terminal implementation           
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_omnibus_5F_target_5F_grammar::select_omnibus_5F_target_5F_specific_5F_syntax_4 (Lexique_omnibus_5F_lexique * inLexique) {
// Productions numbers:  12 13
  return inLexique->nextProductionIndex () - 11 ;
}

//--------------------------------------------------------------------------------------------------
//
//         'select_omnibus_5F_target_5F_specific_5F_syntax_5' non terminal implementation           
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_omnibus_5F_target_5F_grammar::select_omnibus_5F_target_5F_specific_5F_syntax_5 (Lexique_omnibus_5F_lexique * inLexique) {
// Productions numbers:  14 15
  return inLexique->nextProductionIndex () - 13 ;
}

//--------------------------------------------------------------------------------------------------
//
//         'select_omnibus_5F_target_5F_specific_5F_syntax_6' non terminal implementation           
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_omnibus_5F_target_5F_grammar::select_omnibus_5F_target_5F_specific_5F_syntax_6 (Lexique_omnibus_5F_lexique * inLexique) {
// Productions numbers:  16 17
  return inLexique->nextProductionIndex () - 15 ;
}

//--------------------------------------------------------------------------------------------------
//
//         'select_omnibus_5F_target_5F_specific_5F_syntax_7' non terminal implementation           
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_omnibus_5F_target_5F_grammar::select_omnibus_5F_target_5F_specific_5F_syntax_7 (Lexique_omnibus_5F_lexique * inLexique) {
// Productions numbers:  18 19
  return inLexique->nextProductionIndex () - 17 ;
}

//--------------------------------------------------------------------------------------------------
//
//         'select_omnibus_5F_target_5F_specific_5F_syntax_8' non terminal implementation           
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_omnibus_5F_target_5F_grammar::select_omnibus_5F_target_5F_specific_5F_syntax_8 (Lexique_omnibus_5F_lexique * inLexique) {
// Productions numbers:  20 21
  return inLexique->nextProductionIndex () - 19 ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_configurationDeclarationAST_2E_weak::objectCompare (const GGS_configurationDeclarationAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configurationDeclarationAST_2E_weak::GGS_configurationDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_configurationDeclarationAST_2E_weak & GGS_configurationDeclarationAST_2E_weak::operator = (const GGS_configurationDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_configurationDeclarationAST_2E_weak::GGS_configurationDeclarationAST_2E_weak (const GGS_configurationDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_configurationDeclarationAST_2E_weak GGS_configurationDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_configurationDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configurationDeclarationAST GGS_configurationDeclarationAST_2E_weak::bang_configurationDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_configurationDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_configurationDeclarationAST) ;
      result = GGS_configurationDeclarationAST ((cPtr_configurationDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @configurationDeclarationAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configurationDeclarationAST_2E_weak ("configurationDeclarationAST.weak",
                                                                                           & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_configurationDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configurationDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_configurationDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_configurationDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configurationDeclarationAST_2E_weak GGS_configurationDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_configurationDeclarationAST_2E_weak result ;
  const GGS_configurationDeclarationAST_2E_weak * p = (const GGS_configurationDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_configurationDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configurationDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ast::GGS_ast (void) :
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

//--------------------------------------------------------------------------------------------------

GGS_ast::~ GGS_ast (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ast GGS_ast::init (Compiler * inCompiler
                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ast result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ast::setInitializedProperties (Compiler * inCompiler) {
GGS_declarationListAST temp_0 = GGS_declarationListAST::init (inCompiler COMMA_SOURCE_FILE ("ast.galgas", 6)) ;
  mProperty_mDeclarationListAST = temp_0 ;
  mProperty_mExtendStaticArrayDeclarationAST = GGS_extendStaticArrayDeclarationDictAST::init (inCompiler COMMA_HERE) ;
GGS_requiredFunctionDeclarationListAST temp_1 = GGS_requiredFunctionDeclarationListAST::init (inCompiler COMMA_SOURCE_FILE ("ast.galgas", 8)) ;
  mProperty_mRequiredFunctionListAST = temp_1 ;
GGS_externFunctionDeclarationListAST temp_2 = GGS_externFunctionDeclarationListAST::init (inCompiler COMMA_SOURCE_FILE ("ast.galgas", 9)) ;
  mProperty_mExternFunctionListAST = temp_2 ;
GGS_lstringlist temp_3 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("ast.galgas", 10)) ;
  mProperty_mTargetListAST = temp_3 ;
GGS_taskListAST temp_4 = GGS_taskListAST::init (inCompiler COMMA_SOURCE_FILE ("ast.galgas", 11)) ;
  mProperty_mTaskListAST = temp_4 ;
GGS_checkTargetListAST temp_5 = GGS_checkTargetListAST::init (inCompiler COMMA_SOURCE_FILE ("ast.galgas", 12)) ;
  mProperty_mCheckTargetListAST = temp_5 ;
GGS_driverDeclarationListAST temp_6 = GGS_driverDeclarationListAST::init (inCompiler COMMA_SOURCE_FILE ("ast.galgas", 13)) ;
  mProperty_mDriverDeclarationListAST = temp_6 ;
GGS_driverInstanciationListAST temp_7 = GGS_driverInstanciationListAST::init (inCompiler COMMA_SOURCE_FILE ("ast.galgas", 14)) ;
  mProperty_mRequiredDriverListAST = temp_7 ;
  mProperty_mTypeDeclarationIndex = GGS_uint (uint32_t (0U)) ;
GGS_controlRegisterUserAccesMapAST temp_8 = GGS_controlRegisterUserAccesMapAST::init (inCompiler COMMA_SOURCE_FILE ("ast.galgas", 16)) ;
  mProperty_mControlRegisterUserAccesMapAST = temp_8 ;
}

//--------------------------------------------------------------------------------------------------

GGS_ast::GGS_ast (const GGS_declarationListAST & inOperand0,
                  const GGS_extendStaticArrayDeclarationDictAST & inOperand1,
                  const GGS_requiredFunctionDeclarationListAST & inOperand2,
                  const GGS_externFunctionDeclarationListAST & inOperand3,
                  const GGS_lstringlist & inOperand4,
                  const GGS_taskListAST & inOperand5,
                  const GGS_checkTargetListAST & inOperand6,
                  const GGS_driverDeclarationListAST & inOperand7,
                  const GGS_driverInstanciationListAST & inOperand8,
                  const GGS_uint & inOperand9,
                  const GGS_controlRegisterUserAccesMapAST & inOperand10) :
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

//--------------------------------------------------------------------------------------------------

GGS_ast GGS_ast::class_func_new (Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ast result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ast::isValid (void) const {
  return mProperty_mDeclarationListAST.isValid () && mProperty_mExtendStaticArrayDeclarationAST.isValid () && mProperty_mRequiredFunctionListAST.isValid () && mProperty_mExternFunctionListAST.isValid () && mProperty_mTargetListAST.isValid () && mProperty_mTaskListAST.isValid () && mProperty_mCheckTargetListAST.isValid () && mProperty_mDriverDeclarationListAST.isValid () && mProperty_mRequiredDriverListAST.isValid () && mProperty_mTypeDeclarationIndex.isValid () && mProperty_mControlRegisterUserAccesMapAST.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ast::drop (void) {
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

//--------------------------------------------------------------------------------------------------

void GGS_ast::description (String & ioString,
                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ast:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mDeclarationListAST.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mExtendStaticArrayDeclarationAST.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRequiredFunctionListAST.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mExternFunctionListAST.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTargetListAST.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTaskListAST.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mCheckTargetListAST.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDriverDeclarationListAST.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRequiredDriverListAST.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTypeDeclarationIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mControlRegisterUserAccesMapAST.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ast generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ast ("ast",
                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ast::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ast ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ast::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ast (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ast GGS_ast::extractObject (const GGS_object & inObject,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) {
  GGS_ast result ;
  const GGS_ast * p = (const GGS_ast *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ast *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ast", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_universalValuedObjectMap::GGS_universalValuedObjectMap (void) :
mProperty_mInternalPropertyAndRoutineMap (),
mProperty_mScopeStack (),
mProperty_mLocalObjectList () {
}

//--------------------------------------------------------------------------------------------------

GGS_universalValuedObjectMap::~ GGS_universalValuedObjectMap (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_universalValuedObjectMap GGS_universalValuedObjectMap::init (Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_universalValuedObjectMap result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_universalValuedObjectMap::setInitializedProperties (Compiler * inCompiler) {
GGS_flatValuedObjectMap temp_0 = GGS_flatValuedObjectMap::init (inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 6)) ;
  mProperty_mInternalPropertyAndRoutineMap = temp_0 ;
GGS_scopeStack temp_1 = GGS_scopeStack::init (inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 7)) ;
  mProperty_mScopeStack = temp_1 ;
GGS_lstringlist temp_2 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 8)) ;
  mProperty_mLocalObjectList = temp_2 ;
}

//--------------------------------------------------------------------------------------------------

GGS_universalValuedObjectMap::GGS_universalValuedObjectMap (const GGS_flatValuedObjectMap & inOperand0,
                                                            const GGS_scopeStack & inOperand1,
                                                            const GGS_lstringlist & inOperand2) :
mProperty_mInternalPropertyAndRoutineMap (inOperand0),
mProperty_mScopeStack (inOperand1),
mProperty_mLocalObjectList (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_universalValuedObjectMap GGS_universalValuedObjectMap::class_func_new (Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_universalValuedObjectMap result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_universalValuedObjectMap::isValid (void) const {
  return mProperty_mInternalPropertyAndRoutineMap.isValid () && mProperty_mScopeStack.isValid () && mProperty_mLocalObjectList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_universalValuedObjectMap::drop (void) {
  mProperty_mInternalPropertyAndRoutineMap.drop () ;
  mProperty_mScopeStack.drop () ;
  mProperty_mLocalObjectList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_universalValuedObjectMap::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @universalValuedObjectMap:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInternalPropertyAndRoutineMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mScopeStack.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLocalObjectList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @universalValuedObjectMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_universalValuedObjectMap ("universalValuedObjectMap",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_universalValuedObjectMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_universalValuedObjectMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_universalValuedObjectMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_universalValuedObjectMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_universalValuedObjectMap GGS_universalValuedObjectMap::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_universalValuedObjectMap result ;
  const GGS_universalValuedObjectMap * p = (const GGS_universalValuedObjectMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_universalValuedObjectMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("universalValuedObjectMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap insertTask'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertTask (GGS_universalValuedObjectMap & ioObject,
                                 const GGS_lstring constinArgument_inTaskName,
                                 const GGS_omnibusType constinArgument_inTaskType,
                                 Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_insertKey (constinArgument_inTaskName, GGS_valuedObjectState::class_func_noValue (SOURCE_FILE ("universal-map.galgas", 21)), GGS_bool (false), GGS_valuedObject::class_func_task (constinArgument_inTaskType  COMMA_SOURCE_FILE ("universal-map.galgas", 23)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 19)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap insertDriver'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertDriver (GGS_universalValuedObjectMap & ioObject,
                                   const GGS_lstring constinArgument_inDriverName,
                                   const GGS_bool constinArgument_inIsInstancied,
                                   const GGS_omnibusType constinArgument_inDriverType,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_insertKey (constinArgument_inDriverName, GGS_valuedObjectState::class_func_noValue (SOURCE_FILE ("universal-map.galgas", 36)), GGS_bool (false), GGS_valuedObject::class_func_driver (constinArgument_inDriverType, constinArgument_inIsInstancied  COMMA_SOURCE_FILE ("universal-map.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 34)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap insertGlobalConstant'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertGlobalConstant (GGS_universalValuedObjectMap & ioObject,
                                           const GGS_lstring constinArgument_inConstantName,
                                           const GGS_objectIR constinArgument_inConstantObjectIR,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_insertKey (constinArgument_inConstantName, GGS_valuedObjectState::class_func_noValue (SOURCE_FILE ("universal-map.galgas", 50)), GGS_bool (false), GGS_valuedObject::class_func_globalConstant (constinArgument_inConstantObjectIR  COMMA_SOURCE_FILE ("universal-map.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 48)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap insertGlobalSyncInstance'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertGlobalSyncInstance (GGS_universalValuedObjectMap & ioObject,
                                               const GGS_lstring constinArgument_inSyncInstanceName,
                                               const GGS_omnibusType constinArgument_inType,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_insertKey (constinArgument_inSyncInstanceName, GGS_valuedObjectState::class_func_noValue (SOURCE_FILE ("universal-map.galgas", 64)), GGS_bool (false), GGS_valuedObject::class_func_globalSyncInstance (constinArgument_inType, constinArgument_inSyncInstanceName  COMMA_SOURCE_FILE ("universal-map.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 62)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap insertLocalConstant'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertLocalConstant (GGS_universalValuedObjectMap & ioObject,
                                          const GGS_lstring constinArgument_inLocalConstantName,
                                          const GGS_bool constinArgument_inIsFormalInputArgument,
                                          const GGS_omnibusType constinArgument_inType,
                                          const GGS_lstring constinArgument_inOmnibusConstantName,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_insertKey (constinArgument_inLocalConstantName, GGS_valuedObjectState::class_func_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 80)), GGS_bool (false), GGS_valuedObject::class_func_localConstant (constinArgument_inType, constinArgument_inOmnibusConstantName, constinArgument_inIsFormalInputArgument  COMMA_SOURCE_FILE ("universal-map.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 78)) ;
  }
  ioObject.mProperty_mLocalObjectList.addAssign_operation (constinArgument_inLocalConstantName  COMMA_SOURCE_FILE ("universal-map.galgas", 84)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap insertUsedLocalConstant'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertUsedLocalConstant (GGS_universalValuedObjectMap & ioObject,
                                              const GGS_lstring constinArgument_inLocalConstantName,
                                              const GGS_bool constinArgument_inIsFormalInputArgument,
                                              const GGS_omnibusType constinArgument_inType,
                                              const GGS_lstring constinArgument_inOmnibusConstantName,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_insertKey (constinArgument_inLocalConstantName, GGS_valuedObjectState::class_func_hasReadValue (SOURCE_FILE ("universal-map.galgas", 97)), GGS_bool (false), GGS_valuedObject::class_func_localConstant (constinArgument_inType, constinArgument_inOmnibusConstantName, constinArgument_inIsFormalInputArgument  COMMA_SOURCE_FILE ("universal-map.galgas", 99)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 95)) ;
  }
  ioObject.mProperty_mLocalObjectList.addAssign_operation (constinArgument_inLocalConstantName  COMMA_SOURCE_FILE ("universal-map.galgas", 101)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap insertLocalVariable'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertLocalVariable (GGS_universalValuedObjectMap & ioObject,
                                          const GGS_lstring constinArgument_inLocalVariableName,
                                          const GGS_omnibusType constinArgument_inType,
                                          const GGS_lstring constinArgument_inOmnibusName,
                                          const GGS_valuedObjectState constinArgument_inVariableInitialState,
                                          const GGS_bool constinArgument_inObjectShouldBeValuedAtEndOfScope,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_insertKey (constinArgument_inLocalVariableName, constinArgument_inVariableInitialState, constinArgument_inObjectShouldBeValuedAtEndOfScope, GGS_valuedObject::class_func_localVariable (constinArgument_inType, constinArgument_inOmnibusName  COMMA_SOURCE_FILE ("universal-map.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 113)) ;
  }
  ioObject.mProperty_mLocalObjectList.addAssign_operation (constinArgument_inLocalVariableName  COMMA_SOURCE_FILE ("universal-map.galgas", 119)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap searchEntity'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_searchEntity (const GGS_universalValuedObjectMap inObject,
                                   const GGS_lstring constinArgument_inValuedObjectName,
                                   GGS_valuedObject & outArgument_outEntity,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEntity.drop () ; // Release 'out' argument
  const GGS_universalValuedObjectMap temp_0 = inObject ;
  GGS_valuedObjectState joker_4337_2 ; // Joker input parameter
  GGS_bool joker_4337_1 ; // Joker input parameter
  temp_0.readProperty_mInternalPropertyAndRoutineMap ().method_searchKey (constinArgument_inValuedObjectName, joker_4337_2, joker_4337_1, outArgument_outEntity, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 130)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap searchValuedObject'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_searchValuedObject (const GGS_universalValuedObjectMap inObject,
                                         const GGS_lstring constinArgument_inValuedObjectName,
                                         const GGS_mode constinArgument_inMode,
                                         const GGS_stringset constinArgument_inInitializedDriverSet,
                                         GGS_objectIR & outArgument_outObjectIR,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outObjectIR.drop () ; // Release 'out' argument
  GGS_valuedObject var_entity_4731 ;
  const GGS_universalValuedObjectMap temp_0 = inObject ;
  GGS_valuedObjectState joker_4722_2 ; // Joker input parameter
  GGS_bool joker_4722_1 ; // Joker input parameter
  temp_0.readProperty_mInternalPropertyAndRoutineMap ().method_searchKey (constinArgument_inValuedObjectName, joker_4722_2, joker_4722_1, var_entity_4731, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 141)) ;
  switch (var_entity_4731.enumValue ()) {
  case GGS_valuedObject::Enumeration::invalid:
    break ;
  case GGS_valuedObject::Enumeration::enum_task:
    {
      GGS_omnibusType extractedValue_4781_type_0 ;
      var_entity_4731.getAssociatedValuesFor_task (extractedValue_4781_type_0) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::equal, constinArgument_inMode.objectCompare (GGS_mode::class_func_bootMode (SOURCE_FILE ("universal-map.galgas", 144)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GGS_string ("cannot call a task entry in a boot routine"), fixItArray2  COMMA_SOURCE_FILE ("universal-map.galgas", 145)) ;
          outArgument_outObjectIR.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_1) {
        outArgument_outObjectIR = GGS_objectIR::class_func_reference (extractedValue_4781_type_0, function_llvmNameForGlobalVariable (constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 147))  COMMA_SOURCE_FILE ("universal-map.galgas", 147)) ;
      }
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_driver:
    {
      GGS_omnibusType extractedValue_5060_type_0 ;
      GGS_bool extractedValue_5065_instancied_1 ;
      var_entity_4731.getAssociatedValuesFor_driver (extractedValue_5060_type_0, extractedValue_5065_instancied_1) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, constinArgument_inMode.objectCompare (GGS_mode::class_func_bootMode (SOURCE_FILE ("universal-map.galgas", 150)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GGS_string ("cannot call a driver in a boot routine"), fixItArray4  COMMA_SOURCE_FILE ("universal-map.galgas", 151)) ;
          outArgument_outObjectIR.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_3) {
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = extractedValue_5065_instancied_1.operator_not (SOURCE_FILE ("universal-map.galgas", 152)).boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GGS_string ("the driver should be instancied"), fixItArray6  COMMA_SOURCE_FILE ("universal-map.galgas", 153)) ;
            outArgument_outObjectIR.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_5) {
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = constinArgument_inInitializedDriverSet.getter_hasKey (constinArgument_inValuedObjectName.readProperty_string () COMMA_SOURCE_FILE ("universal-map.galgas", 154)).operator_not (SOURCE_FILE ("universal-map.galgas", 154)).boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GGS_string ("the driver should be named in driver dependence list"), fixItArray8  COMMA_SOURCE_FILE ("universal-map.galgas", 155)) ;
              outArgument_outObjectIR.drop () ; // Release error dropped variable
            }
          }
          if (kBoolFalse == test_7) {
            outArgument_outObjectIR = GGS_objectIR::class_func_reference (extractedValue_5060_type_0, function_llvmNameForGlobalVariable (constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 157))  COMMA_SOURCE_FILE ("universal-map.galgas", 157)) ;
          }
        }
      }
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_globalConstant:
    {
      GGS_objectIR extractedValue_5635_objectIR_0 ;
      var_entity_4731.getAssociatedValuesFor_globalConstant (extractedValue_5635_objectIR_0) ;
      outArgument_outObjectIR = extractedValue_5635_objectIR_0 ;
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_localConstant:
    {
      GGS_omnibusType extractedValue_5709_type_0 ;
      GGS_lstring extractedValue_5723_omnibusName_1 ;
      GGS_bool extractedValue_5735__2 ;
      var_entity_4731.getAssociatedValuesFor_localConstant (extractedValue_5709_type_0, extractedValue_5723_omnibusName_1, extractedValue_5735__2) ;
      outArgument_outObjectIR = GGS_objectIR::class_func_reference (extractedValue_5709_type_0, function_llvmNameForLocalVariable (extractedValue_5723_omnibusName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 162))  COMMA_SOURCE_FILE ("universal-map.galgas", 162)) ;
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_localVariable:
    {
      GGS_omnibusType extractedValue_5867_type_0 ;
      GGS_lstring extractedValue_5881_omnibusName_1 ;
      var_entity_4731.getAssociatedValuesFor_localVariable (extractedValue_5867_type_0, extractedValue_5881_omnibusName_1) ;
      outArgument_outObjectIR = GGS_objectIR::class_func_reference (extractedValue_5867_type_0, function_llvmNameForLocalVariable (extractedValue_5881_omnibusName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 164))  COMMA_SOURCE_FILE ("universal-map.galgas", 164)) ;
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_globalSyncInstance:
    {
      GGS_omnibusType extractedValue_6028_type_0 ;
      GGS_lstring extractedValue_6042_omnibusName_1 ;
      var_entity_4731.getAssociatedValuesFor_globalSyncInstance (extractedValue_6028_type_0, extractedValue_6042_omnibusName_1) ;
      outArgument_outObjectIR = GGS_objectIR::class_func_reference (extractedValue_6028_type_0, function_llvmNameForGlobalSyncInstance (extractedValue_6042_omnibusName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 166))  COMMA_SOURCE_FILE ("universal-map.galgas", 166)) ;
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap readAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_readAccess (GGS_universalValuedObjectMap & ioObject,
                                 const GGS_lstring constinArgument_inValuedObjectName,
                                 Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_valuedObjectState var_valueState_6440 ;
  GGS_valuedObject var_property_6459 ;
  const GGS_universalValuedObjectMap temp_0 = ioObject ;
  GGS_bool joker_6451 ; // Joker input parameter
  temp_0.readProperty_mInternalPropertyAndRoutineMap ().method_searchKey (constinArgument_inValuedObjectName, var_valueState_6440, joker_6451, var_property_6459, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 175)) ;
  switch (var_property_6459.enumValue ()) {
  case GGS_valuedObject::Enumeration::invalid:
    break ;
  case GGS_valuedObject::Enumeration::enum_task:
    break ;
  case GGS_valuedObject::Enumeration::enum_driver:
    break ;
  case GGS_valuedObject::Enumeration::enum_globalConstant:
    break ;
  case GGS_valuedObject::Enumeration::enum_globalSyncInstance:
    break ;
  case GGS_valuedObject::Enumeration::enum_localConstant:
    {
      GGS_omnibusType extractedValue_6611__0 ;
      GGS_lstring extractedValue_6611__1 ;
      GGS_bool extractedValue_6611__2 ;
      var_property_6459.getAssociatedValuesFor_localConstant (extractedValue_6611__0, extractedValue_6611__1, extractedValue_6611__2) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::equal, var_valueState_6440.objectCompare (GGS_valuedObjectState::class_func_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 182)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_setMObjectStateForKey (GGS_valuedObjectState::class_func_hasReadValue (SOURCE_FILE ("universal-map.galgas", 183)), constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 183)) ;
          }
        }
      }
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_localVariable:
    {
      GGS_omnibusType extractedValue_6792__0 ;
      GGS_lstring extractedValue_6792__1 ;
      var_property_6459.getAssociatedValuesFor_localVariable (extractedValue_6792__0, extractedValue_6792__1) ;
      switch (var_valueState_6440.enumValue ()) {
      case GGS_valuedObjectState::Enumeration::invalid:
        break ;
      case GGS_valuedObjectState::Enumeration::enum_noValue:
        {
          TC_Array <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GGS_string ("'").add_operation (constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 188)).add_operation (GGS_string ("' has no value"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 188)), fixItArray2  COMMA_SOURCE_FILE ("universal-map.galgas", 188)) ;
        }
        break ;
      case GGS_valuedObjectState::Enumeration::enum_hasUnreadValue:
        {
          {
          ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_setMObjectStateForKey (GGS_valuedObjectState::class_func_hasReadValue (SOURCE_FILE ("universal-map.galgas", 190)), constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 190)) ;
          }
        }
        break ;
      case GGS_valuedObjectState::Enumeration::enum_hasReadValue:
        break ;
      }
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap searchValuedObjectForReadAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchValuedObjectForReadAccess (GGS_universalValuedObjectMap & ioObject,
                                                      const GGS_lstring constinArgument_inValuedObjectName,
                                                      GGS_objectIR & outArgument_outObjectIR,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outObjectIR.drop () ; // Release 'out' argument
  GGS_valuedObjectState var_valueState_7409 ;
  GGS_valuedObject var_property_7428 ;
  const GGS_universalValuedObjectMap temp_0 = ioObject ;
  GGS_bool joker_7420 ; // Joker input parameter
  temp_0.readProperty_mInternalPropertyAndRoutineMap ().method_searchKey (constinArgument_inValuedObjectName, var_valueState_7409, joker_7420, var_property_7428, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 202)) ;
  switch (var_property_7428.enumValue ()) {
  case GGS_valuedObject::Enumeration::invalid:
    break ;
  case GGS_valuedObject::Enumeration::enum_task:
    {
      GGS_omnibusType extractedValue_7482_type_0 ;
      var_property_7428.getAssociatedValuesFor_task (extractedValue_7482_type_0) ;
      outArgument_outObjectIR = GGS_objectIR::class_func_reference (extractedValue_7482_type_0, function_llvmNameForGlobalVariable (constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 205))  COMMA_SOURCE_FILE ("universal-map.galgas", 205)) ;
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_driver:
    {
      GGS_omnibusType extractedValue_7618_type_0 ;
      GGS_bool extractedValue_7623_instancied_1 ;
      var_property_7428.getAssociatedValuesFor_driver (extractedValue_7618_type_0, extractedValue_7623_instancied_1) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = extractedValue_7623_instancied_1.boolEnum () ;
        if (kBoolTrue == test_1) {
          outArgument_outObjectIR = GGS_objectIR::class_func_reference (extractedValue_7618_type_0, function_llvmNameForGlobalVariable (constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 208))  COMMA_SOURCE_FILE ("universal-map.galgas", 208)) ;
        }
      }
      if (kBoolFalse == test_1) {
        TC_Array <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GGS_string ("the driver should be instancied"), fixItArray2  COMMA_SOURCE_FILE ("universal-map.galgas", 210)) ;
        outArgument_outObjectIR.drop () ; // Release error dropped variable
      }
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_globalConstant:
    {
      GGS_objectIR extractedValue_7893_objectIR_0 ;
      var_property_7428.getAssociatedValuesFor_globalConstant (extractedValue_7893_objectIR_0) ;
      outArgument_outObjectIR = extractedValue_7893_objectIR_0 ;
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_localConstant:
    {
      GGS_omnibusType extractedValue_7967_type_0 ;
      GGS_lstring extractedValue_7981_omnibusName_1 ;
      GGS_bool extractedValue_7993__2 ;
      var_property_7428.getAssociatedValuesFor_localConstant (extractedValue_7967_type_0, extractedValue_7981_omnibusName_1, extractedValue_7993__2) ;
      outArgument_outObjectIR = GGS_objectIR::class_func_reference (extractedValue_7967_type_0, function_llvmNameForLocalVariable (extractedValue_7981_omnibusName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 215))  COMMA_SOURCE_FILE ("universal-map.galgas", 215)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, var_valueState_7409.objectCompare (GGS_valuedObjectState::class_func_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 216)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          {
          ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_setMObjectStateForKey (GGS_valuedObjectState::class_func_hasReadValue (SOURCE_FILE ("universal-map.galgas", 217)), constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 217)) ;
          }
        }
      }
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_globalSyncInstance:
    {
      GGS_omnibusType extractedValue_8292_type_0 ;
      GGS_lstring extractedValue_8306_omnibusName_1 ;
      var_property_7428.getAssociatedValuesFor_globalSyncInstance (extractedValue_8292_type_0, extractedValue_8306_omnibusName_1) ;
      outArgument_outObjectIR = GGS_objectIR::class_func_reference (extractedValue_8292_type_0, function_llvmNameForGlobalSyncInstance (extractedValue_8306_omnibusName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 220))  COMMA_SOURCE_FILE ("universal-map.galgas", 220)) ;
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_localVariable:
    {
      GGS_omnibusType extractedValue_8453_type_0 ;
      GGS_lstring extractedValue_8467_omnibusName_1 ;
      var_property_7428.getAssociatedValuesFor_localVariable (extractedValue_8453_type_0, extractedValue_8467_omnibusName_1) ;
      switch (var_valueState_7409.enumValue ()) {
      case GGS_valuedObjectState::Enumeration::invalid:
        break ;
      case GGS_valuedObjectState::Enumeration::enum_noValue:
        {
          TC_Array <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GGS_string ("'").add_operation (constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 224)).add_operation (GGS_string ("' has no value"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 224)), fixItArray4  COMMA_SOURCE_FILE ("universal-map.galgas", 224)) ;
          outArgument_outObjectIR.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_valuedObjectState::Enumeration::enum_hasUnreadValue:
        {
          {
          ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_setMObjectStateForKey (GGS_valuedObjectState::class_func_hasReadValue (SOURCE_FILE ("universal-map.galgas", 226)), constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 226)) ;
          }
          outArgument_outObjectIR = GGS_objectIR::class_func_reference (extractedValue_8453_type_0, function_llvmNameForLocalVariable (extractedValue_8467_omnibusName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 227))  COMMA_SOURCE_FILE ("universal-map.galgas", 227)) ;
        }
        break ;
      case GGS_valuedObjectState::Enumeration::enum_hasReadValue:
        {
          outArgument_outObjectIR = GGS_objectIR::class_func_reference (extractedValue_8453_type_0, function_llvmNameForLocalVariable (extractedValue_8467_omnibusName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 229))  COMMA_SOURCE_FILE ("universal-map.galgas", 229)) ;
        }
        break ;
      }
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap searchValuedObjectForWriteAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchValuedObjectForWriteAccess (GGS_universalValuedObjectMap & ioObject,
                                                       const GGS_lstring constinArgument_inValuedObjectName,
                                                       GGS_objectIR & outArgument_outObjectIR,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outObjectIR.drop () ; // Release 'out' argument
  GGS_valuedObjectState var_valueState_9297 ;
  GGS_valuedObject var_property_9316 ;
  const GGS_universalValuedObjectMap temp_0 = ioObject ;
  GGS_bool joker_9308 ; // Joker input parameter
  temp_0.readProperty_mInternalPropertyAndRoutineMap ().method_searchKey (constinArgument_inValuedObjectName, var_valueState_9297, joker_9308, var_property_9316, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 240)) ;
  switch (var_property_9316.enumValue ()) {
  case GGS_valuedObject::Enumeration::invalid:
    break ;
  case GGS_valuedObject::Enumeration::enum_task:
    {
      GGS_omnibusType extractedValue_9357__0 ;
      var_property_9316.getAssociatedValuesFor_task (extractedValue_9357__0) ;
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GGS_string ("a task cannot be written"), fixItArray1  COMMA_SOURCE_FILE ("universal-map.galgas", 243)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_driver:
    {
      GGS_omnibusType extractedValue_9449__0 ;
      GGS_bool extractedValue_9451__1 ;
      var_property_9316.getAssociatedValuesFor_driver (extractedValue_9449__0, extractedValue_9451__1) ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GGS_string ("a driver cannot be written"), fixItArray2  COMMA_SOURCE_FILE ("universal-map.galgas", 245)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_globalConstant:
    {
      GGS_objectIR extractedValue_9553__0 ;
      var_property_9316.getAssociatedValuesFor_globalConstant (extractedValue_9553__0) ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GGS_string ("a constant cannot be written"), fixItArray3  COMMA_SOURCE_FILE ("universal-map.galgas", 247)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_globalSyncInstance:
    {
      GGS_omnibusType extractedValue_9662__0 ;
      GGS_lstring extractedValue_9662__1 ;
      var_property_9316.getAssociatedValuesFor_globalSyncInstance (extractedValue_9662__0, extractedValue_9662__1) ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GGS_string ("a global sync instance cannot be written"), fixItArray4  COMMA_SOURCE_FILE ("universal-map.galgas", 249)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_localConstant:
    {
      GGS_omnibusType extractedValue_9778__0 ;
      GGS_lstring extractedValue_9778__1 ;
      GGS_bool extractedValue_9778__2 ;
      var_property_9316.getAssociatedValuesFor_localConstant (extractedValue_9778__0, extractedValue_9778__1, extractedValue_9778__2) ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GGS_string ("a constant cannot be written"), fixItArray5  COMMA_SOURCE_FILE ("universal-map.galgas", 251)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_localVariable:
    {
      GGS_omnibusType extractedValue_9894_type_0 ;
      GGS_lstring extractedValue_9908_omnibusName_1 ;
      var_property_9316.getAssociatedValuesFor_localVariable (extractedValue_9894_type_0, extractedValue_9908_omnibusName_1) ;
      outArgument_outObjectIR = GGS_objectIR::class_func_reference (extractedValue_9894_type_0, function_llvmNameForLocalVariable (extractedValue_9908_omnibusName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 253))  COMMA_SOURCE_FILE ("universal-map.galgas", 253)) ;
      switch (var_valueState_9297.enumValue ()) {
      case GGS_valuedObjectState::Enumeration::invalid:
        break ;
      case GGS_valuedObjectState::Enumeration::enum_noValue:
      case GGS_valuedObjectState::Enumeration::enum_hasReadValue:
        {
          {
          ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_setMObjectStateForKey (GGS_valuedObjectState::class_func_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 256)), constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 256)) ;
          }
        }
        break ;
      case GGS_valuedObjectState::Enumeration::enum_hasUnreadValue:
        {
          TC_Array <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticWarning (constinArgument_inValuedObjectName.readProperty_location (), GGS_string ("previous '").add_operation (constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 258)).add_operation (GGS_string ("' value has not been read"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 258)), fixItArray6  COMMA_SOURCE_FILE ("universal-map.galgas", 258)) ;
        }
        break ;
      }
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap searchValuedObjectForReadWriteAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchValuedObjectForReadWriteAccess (GGS_universalValuedObjectMap & ioObject,
                                                           const GGS_lstring constinArgument_inValuedObjectName,
                                                           GGS_objectIR & outArgument_outObjectIR,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outObjectIR.drop () ; // Release 'out' argument
  GGS_valuedObjectState var_valueState_10655 ;
  GGS_valuedObject var_property_10674 ;
  const GGS_universalValuedObjectMap temp_0 = ioObject ;
  GGS_bool joker_10666 ; // Joker input parameter
  temp_0.readProperty_mInternalPropertyAndRoutineMap ().method_searchKey (constinArgument_inValuedObjectName, var_valueState_10655, joker_10666, var_property_10674, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 269)) ;
  switch (var_property_10674.enumValue ()) {
  case GGS_valuedObject::Enumeration::invalid:
    break ;
  case GGS_valuedObject::Enumeration::enum_task:
    {
      GGS_omnibusType extractedValue_10715__0 ;
      var_property_10674.getAssociatedValuesFor_task (extractedValue_10715__0) ;
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GGS_string ("a task has no value"), fixItArray1  COMMA_SOURCE_FILE ("universal-map.galgas", 272)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_driver:
    {
      GGS_omnibusType extractedValue_10802__0 ;
      GGS_bool extractedValue_10804__1 ;
      var_property_10674.getAssociatedValuesFor_driver (extractedValue_10802__0, extractedValue_10804__1) ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GGS_string ("a driver has no value"), fixItArray2  COMMA_SOURCE_FILE ("universal-map.galgas", 274)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_globalConstant:
    {
      GGS_objectIR extractedValue_10901__0 ;
      var_property_10674.getAssociatedValuesFor_globalConstant (extractedValue_10901__0) ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GGS_string ("a constant cannot be written"), fixItArray3  COMMA_SOURCE_FILE ("universal-map.galgas", 276)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_localConstant:
    {
      GGS_omnibusType extractedValue_11005__0 ;
      GGS_lstring extractedValue_11005__1 ;
      GGS_bool extractedValue_11005__2 ;
      var_property_10674.getAssociatedValuesFor_localConstant (extractedValue_11005__0, extractedValue_11005__1, extractedValue_11005__2) ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GGS_string ("a constant cannot be written"), fixItArray4  COMMA_SOURCE_FILE ("universal-map.galgas", 278)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_globalSyncInstance:
    {
      GGS_omnibusType extractedValue_11114__0 ;
      GGS_lstring extractedValue_11114__1 ;
      var_property_10674.getAssociatedValuesFor_globalSyncInstance (extractedValue_11114__0, extractedValue_11114__1) ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GGS_string ("a global sync instance cannot be written"), fixItArray5  COMMA_SOURCE_FILE ("universal-map.galgas", 280)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_localVariable:
    {
      GGS_omnibusType extractedValue_11242_type_0 ;
      GGS_lstring extractedValue_11256_omnibusName_1 ;
      var_property_10674.getAssociatedValuesFor_localVariable (extractedValue_11242_type_0, extractedValue_11256_omnibusName_1) ;
      switch (var_valueState_10655.enumValue ()) {
      case GGS_valuedObjectState::Enumeration::invalid:
        break ;
      case GGS_valuedObjectState::Enumeration::enum_noValue:
        {
          TC_Array <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GGS_string ("object has no value"), fixItArray6  COMMA_SOURCE_FILE ("universal-map.galgas", 284)) ;
          outArgument_outObjectIR.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_valuedObjectState::Enumeration::enum_hasUnreadValue:
        {
          outArgument_outObjectIR = GGS_objectIR::class_func_reference (extractedValue_11242_type_0, function_llvmNameForLocalVariable (extractedValue_11256_omnibusName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 286))  COMMA_SOURCE_FILE ("universal-map.galgas", 286)) ;
        }
        break ;
      case GGS_valuedObjectState::Enumeration::enum_hasReadValue:
        {
          {
          ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_setMObjectStateForKey (GGS_valuedObjectState::class_func_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 288)), constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 288)) ;
          }
          outArgument_outObjectIR = GGS_objectIR::class_func_reference (extractedValue_11242_type_0, function_llvmNameForLocalVariable (extractedValue_11256_omnibusName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 289))  COMMA_SOURCE_FILE ("universal-map.galgas", 289)) ;
        }
        break ;
      }
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap searchValuedObjectType'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_searchValuedObjectType (const GGS_universalValuedObjectMap inObject,
                                             const GGS_semanticContext constinArgument_inContext,
                                             const GGS_omnibusType constinArgument_inSelfType,
                                             const GGS_LValueAST constinArgument_inLValue,
                                             GGS_omnibusType & outArgument_outType,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, constinArgument_inLValue.readProperty_mIdentifier ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outType = constinArgument_inSelfType ;
    }
  }
  if (kBoolFalse == test_0) {
    GGS_valuedObject var_property_12251 ;
    const GGS_universalValuedObjectMap temp_1 = inObject ;
    GGS_valuedObjectState joker_12242_2 ; // Joker input parameter
    GGS_bool joker_12242_1 ; // Joker input parameter
    temp_1.readProperty_mInternalPropertyAndRoutineMap ().method_searchKey (constinArgument_inLValue.readProperty_mIdentifier (), joker_12242_2, joker_12242_1, var_property_12251, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 305)) ;
    switch (var_property_12251.enumValue ()) {
    case GGS_valuedObject::Enumeration::invalid:
      break ;
    case GGS_valuedObject::Enumeration::enum_task:
      {
        GGS_omnibusType extractedValue_12296__0 ;
        var_property_12251.getAssociatedValuesFor_task (extractedValue_12296__0) ;
        TC_Array <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (constinArgument_inLValue.readProperty_mIdentifier ().readProperty_location (), GGS_string ("undefined in this context"), fixItArray2  COMMA_SOURCE_FILE ("universal-map.galgas", 308)) ;
        outArgument_outType.drop () ; // Release error dropped variable
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_driver:
      {
        GGS_omnibusType extractedValue_12391__0 ;
        GGS_bool extractedValue_12393__1 ;
        var_property_12251.getAssociatedValuesFor_driver (extractedValue_12391__0, extractedValue_12393__1) ;
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (constinArgument_inLValue.readProperty_mIdentifier ().readProperty_location (), GGS_string ("undefined in this context"), fixItArray3  COMMA_SOURCE_FILE ("universal-map.galgas", 310)) ;
        outArgument_outType.drop () ; // Release error dropped variable
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_globalConstant:
      {
        GGS_objectIR extractedValue_12496__0 ;
        var_property_12251.getAssociatedValuesFor_globalConstant (extractedValue_12496__0) ;
        TC_Array <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inLValue.readProperty_mIdentifier ().readProperty_location (), GGS_string ("undefined in this context"), fixItArray4  COMMA_SOURCE_FILE ("universal-map.galgas", 312)) ;
        outArgument_outType.drop () ; // Release error dropped variable
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_localConstant:
      {
        GGS_omnibusType extractedValue_12599__0 ;
        GGS_lstring extractedValue_12599__1 ;
        GGS_bool extractedValue_12599__2 ;
        var_property_12251.getAssociatedValuesFor_localConstant (extractedValue_12599__0, extractedValue_12599__1, extractedValue_12599__2) ;
        TC_Array <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (constinArgument_inLValue.readProperty_mIdentifier ().readProperty_location (), GGS_string ("undefined in this context"), fixItArray5  COMMA_SOURCE_FILE ("universal-map.galgas", 314)) ;
        outArgument_outType.drop () ; // Release error dropped variable
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_localVariable:
      {
        GGS_omnibusType extractedValue_12714_type_0 ;
        GGS_lstring extractedValue_12719__1 ;
        var_property_12251.getAssociatedValuesFor_localVariable (extractedValue_12714_type_0, extractedValue_12719__1) ;
        outArgument_outType = extractedValue_12714_type_0 ;
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_globalSyncInstance:
      {
        GGS_omnibusType extractedValue_12787_type_0 ;
        GGS_lstring extractedValue_12792__1 ;
        var_property_12251.getAssociatedValuesFor_globalSyncInstance (extractedValue_12787_type_0, extractedValue_12792__1) ;
        outArgument_outType = extractedValue_12787_type_0 ;
      }
      break ;
    }
  }
  extensionMethod_getValuedObjectType (constinArgument_inLValue.readProperty_mOperand (), constinArgument_inContext, outArgument_outType, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 321)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@LValueOperandAST getValuedObjectType'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_getValuedObjectType (const GGS_LValueOperandAST inObject,
                                          const GGS_semanticContext constinArgument_inContext,
                                          GGS_omnibusType & ioArgument_ioType,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_LValueOperandAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_LValueOperandAST::Enumeration::invalid:
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_noOperand:
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_property:
    {
      GGS_lstring extractedValue_13187_propertyName_0 ;
      GGS_LValueOperandAST extractedValue_13218_next_1 ;
      temp_0.getAssociatedValuesFor_property (extractedValue_13187_propertyName_0, extractedValue_13218_next_1) ;
      GGS_propertyGetterMap var_propertyGetterMap_13258 = extensionGetter_propertyGetterMap (constinArgument_inContext, ioArgument_ioType, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 334)) ;
      GGS_propertyGetterKind var_accessKind_13371 ;
      GGS_propertyVisibility joker_13363 ; // Joker input parameter
      var_propertyGetterMap_13258.method_searchKey (extractedValue_13187_propertyName_0, joker_13363, var_accessKind_13371, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 335)) ;
      switch (var_accessKind_13371.enumValue ()) {
      case GGS_propertyGetterKind::Enumeration::invalid:
        break ;
      case GGS_propertyGetterKind::Enumeration::enum_constantProperty:
        {
          GGS_objectIR extractedValue_13432_value_0 ;
          var_accessKind_13371.getAssociatedValuesFor_constantProperty (extractedValue_13432_value_0) ;
          ioArgument_ioType = extensionGetter_type (extractedValue_13432_value_0, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 338)) ;
        }
        break ;
      case GGS_propertyGetterKind::Enumeration::enum_storedProperty:
        {
          GGS_omnibusType extractedValue_13494_type_0 ;
          GGS_uint extractedValue_13499__1 ;
          var_accessKind_13371.getAssociatedValuesFor_storedProperty (extractedValue_13494_type_0, extractedValue_13499__1) ;
          ioArgument_ioType = extractedValue_13494_type_0 ;
        }
        break ;
      case GGS_propertyGetterKind::Enumeration::enum_computedProperty:
        {
          GGS_unifiedTypeMapEntry extractedValue_13551_propertyTypeProxy_0 ;
          GGS_routineLLVMNameDict extractedValue_13569__1 ;
          var_accessKind_13371.getAssociatedValuesFor_computedProperty (extractedValue_13551_propertyTypeProxy_0, extractedValue_13569__1) ;
          ioArgument_ioType = extensionGetter_type (extractedValue_13551_propertyTypeProxy_0, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 342)) ;
        }
        break ;
      }
      extensionMethod_getValuedObjectType (extractedValue_13218_next_1, constinArgument_inContext, ioArgument_ioType, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 344)) ;
    }
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_arrayAccess:
    {
      GGS_expressionAST extractedValue_13703__0 ;
      GGS_location extractedValue_13703__1 ;
      GGS_bool extractedValue_13703__2 ;
      GGS_LValueOperandAST extractedValue_13723_next_3 ;
      temp_0.getAssociatedValuesFor_arrayAccess (extractedValue_13703__0, extractedValue_13703__1, extractedValue_13703__2, extractedValue_13723_next_3) ;
      switch (ioArgument_ioType.readProperty_subscript ().enumValue ()) {
      case GGS_subscript::Enumeration::invalid:
        break ;
      case GGS_subscript::Enumeration::enum_noSubscript:
        break ;
      case GGS_subscript::Enumeration::enum_literalString:
        break ;
      case GGS_subscript::Enumeration::enum_staticSubscript:
        {
          GGS_omnibusType extractedValue_13846_elementType_0 ;
          GGS_bigint extractedValue_13858__1 ;
          ioArgument_ioType.readProperty_subscript ().getAssociatedValuesFor_staticSubscript (extractedValue_13846_elementType_0, extractedValue_13858__1) ;
          ioArgument_ioType = extractedValue_13846_elementType_0 ;
        }
        break ;
      }
      extensionMethod_getValuedObjectType (extractedValue_13723_next_3, constinArgument_inContext, ioArgument_ioType, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 352)) ;
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap checkLocalVariableFinalState'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkLocalVariableFinalState (const GGS_universalValuedObjectMap inObject,
                                                   GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_universalValuedObjectMap temp_0 = inObject ;
  cEnumerator_flatValuedObjectMap enumerator_14318 (temp_0.readProperty_mInternalPropertyAndRoutineMap (), EnumerationOrder::up) ;
  while (enumerator_14318.hasCurrentObject ()) {
    switch (enumerator_14318.current (HERE).readProperty_mValuedObject ().enumValue ()) {
    case GGS_valuedObject::Enumeration::invalid:
      break ;
    case GGS_valuedObject::Enumeration::enum_task:
      break ;
    case GGS_valuedObject::Enumeration::enum_driver:
      break ;
    case GGS_valuedObject::Enumeration::enum_globalSyncInstance:
      break ;
    case GGS_valuedObject::Enumeration::enum_globalConstant:
      break ;
    case GGS_valuedObject::Enumeration::enum_localConstant:
      {
        GGS_omnibusType extractedValue_14529_type_0 ;
        GGS_lstring extractedValue_14543_omnibusName_1 ;
        GGS_bool extractedValue_14561_isFormalInputArg_2 ;
        enumerator_14318.current (HERE).readProperty_mValuedObject ().getAssociatedValuesFor_localConstant (extractedValue_14529_type_0, extractedValue_14543_omnibusName_1, extractedValue_14561_isFormalInputArg_2) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = extractedValue_14561_isFormalInputArg_2.operator_not (SOURCE_FILE ("universal-map.galgas", 372)).boolEnum () ;
          if (kBoolTrue == test_1) {
            {
            extensionSetter_generateRelease (ioArgument_ioInstructionGenerationList, extractedValue_14529_type_0, extractedValue_14543_omnibusName_1, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 373)) ;
            }
          }
        }
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_localVariable:
      {
        GGS_omnibusType extractedValue_14869_type_0 ;
        GGS_lstring extractedValue_14883_omnibusName_1 ;
        enumerator_14318.current (HERE).readProperty_mValuedObject ().getAssociatedValuesFor_localVariable (extractedValue_14869_type_0, extractedValue_14883_omnibusName_1) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          GGS_bool test_3 = GGS_bool (ComparisonKind::equal, enumerator_14318.current (HERE).readProperty_mObjectState ().objectCompare (GGS_valuedObjectState::class_func_noValue (SOURCE_FILE ("universal-map.galgas", 376)))) ;
          if (kBoolTrue == test_3.boolEnum ()) {
            test_3 = enumerator_14318.current (HERE).readProperty_mObjectShouldBeValuedAtEndOfScope () ;
          }
          test_2 = test_3.boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_14318.current (HERE).readProperty_lkey ().readProperty_location (), GGS_string ("'").add_operation (enumerator_14318.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 377)).add_operation (GGS_string ("' should be valued at the end of routine"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 377)), fixItArray4  COMMA_SOURCE_FILE ("universal-map.galgas", 377)) ;
          }
        }
        {
        extensionSetter_generateRelease (ioArgument_ioInstructionGenerationList, extractedValue_14869_type_0, extractedValue_14883_omnibusName_1, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 379)) ;
        }
      }
      break ;
    }
    enumerator_14318.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap openOverrideForSelectBlock'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openOverrideForSelectBlock (GGS_universalValuedObjectMap & ioObject,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_referenceStateMap temp_0 = GGS_referenceStateMap::init (inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 387)) ;
  GGS_referenceStateMap var_initialStateMap_15386 = temp_0 ;
  const GGS_universalValuedObjectMap temp_1 = ioObject ;
  cEnumerator_flatValuedObjectMap enumerator_15428 (temp_1.readProperty_mInternalPropertyAndRoutineMap (), EnumerationOrder::up) ;
  while (enumerator_15428.hasCurrentObject ()) {
    switch (enumerator_15428.current (HERE).readProperty_mValuedObject ().enumValue ()) {
    case GGS_valuedObject::Enumeration::invalid:
      break ;
    case GGS_valuedObject::Enumeration::enum_task:
      break ;
    case GGS_valuedObject::Enumeration::enum_driver:
      break ;
    case GGS_valuedObject::Enumeration::enum_globalSyncInstance:
      break ;
    case GGS_valuedObject::Enumeration::enum_globalConstant:
      break ;
    case GGS_valuedObject::Enumeration::enum_localConstant:
      {
        GGS_omnibusType extractedValue_15627__0 ;
        GGS_lstring extractedValue_15627__1 ;
        GGS_bool extractedValue_15627__2 ;
        enumerator_15428.current (HERE).readProperty_mValuedObject ().getAssociatedValuesFor_localConstant (extractedValue_15627__0, extractedValue_15627__1, extractedValue_15627__2) ;
        {
        var_initialStateMap_15386.setter_insertKey (enumerator_15428.current (HERE).readProperty_lkey (), enumerator_15428.current (HERE).readProperty_mObjectState (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 395)) ;
        }
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_localVariable:
      {
        GGS_omnibusType extractedValue_15724__0 ;
        GGS_lstring extractedValue_15725__1 ;
        enumerator_15428.current (HERE).readProperty_mValuedObject ().getAssociatedValuesFor_localVariable (extractedValue_15724__0, extractedValue_15725__1) ;
        {
        var_initialStateMap_15386.setter_insertKey (enumerator_15428.current (HERE).readProperty_lkey (), enumerator_15428.current (HERE).readProperty_mObjectState (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 397)) ;
        }
      }
      break ;
    }
    enumerator_15428.gotoNextObject () ;
  }
  GGS_referenceStateMap temp_2 = GGS_referenceStateMap::init (inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 400)) ;
  const GGS_universalValuedObjectMap temp_3 = ioObject ;
  ioObject.mProperty_mScopeStack.addAssign_operation (GGS_scopeKind::class_func_selectScope (SOURCE_FILE ("universal-map.galgas", 400)), GGS_bool (true), var_initialStateMap_15386, temp_2, temp_3.readProperty_mLocalObjectList ()  COMMA_SOURCE_FILE ("universal-map.galgas", 400)) ;
  GGS_lstringlist temp_4 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 401)) ;
  ioObject.mProperty_mLocalObjectList = temp_4 ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap openOverrideForRepeatBlock'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openOverrideForRepeatBlock (GGS_universalValuedObjectMap & ioObject,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_referenceStateMap temp_0 = GGS_referenceStateMap::init (inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 407)) ;
  GGS_referenceStateMap var_initialStateMap_16141 = temp_0 ;
  const GGS_universalValuedObjectMap temp_1 = ioObject ;
  cEnumerator_flatValuedObjectMap enumerator_16183 (temp_1.readProperty_mInternalPropertyAndRoutineMap (), EnumerationOrder::up) ;
  while (enumerator_16183.hasCurrentObject ()) {
    switch (enumerator_16183.current (HERE).readProperty_mValuedObject ().enumValue ()) {
    case GGS_valuedObject::Enumeration::invalid:
      break ;
    case GGS_valuedObject::Enumeration::enum_task:
      break ;
    case GGS_valuedObject::Enumeration::enum_driver:
      break ;
    case GGS_valuedObject::Enumeration::enum_globalSyncInstance:
      break ;
    case GGS_valuedObject::Enumeration::enum_globalConstant:
      break ;
    case GGS_valuedObject::Enumeration::enum_localConstant:
      {
        GGS_omnibusType extractedValue_16382__0 ;
        GGS_lstring extractedValue_16382__1 ;
        GGS_bool extractedValue_16382__2 ;
        enumerator_16183.current (HERE).readProperty_mValuedObject ().getAssociatedValuesFor_localConstant (extractedValue_16382__0, extractedValue_16382__1, extractedValue_16382__2) ;
        {
        var_initialStateMap_16141.setter_insertKey (enumerator_16183.current (HERE).readProperty_lkey (), enumerator_16183.current (HERE).readProperty_mObjectState (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 415)) ;
        }
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_localVariable:
      {
        GGS_omnibusType extractedValue_16479__0 ;
        GGS_lstring extractedValue_16480__1 ;
        enumerator_16183.current (HERE).readProperty_mValuedObject ().getAssociatedValuesFor_localVariable (extractedValue_16479__0, extractedValue_16480__1) ;
        {
        var_initialStateMap_16141.setter_insertKey (enumerator_16183.current (HERE).readProperty_lkey (), enumerator_16183.current (HERE).readProperty_mObjectState (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 417)) ;
        }
      }
      break ;
    }
    enumerator_16183.gotoNextObject () ;
  }
  GGS_referenceStateMap temp_2 = GGS_referenceStateMap::init (inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 420)) ;
  const GGS_universalValuedObjectMap temp_3 = ioObject ;
  ioObject.mProperty_mScopeStack.addAssign_operation (GGS_scopeKind::class_func_repeatScope (SOURCE_FILE ("universal-map.galgas", 420)), GGS_bool (true), var_initialStateMap_16141, temp_2, temp_3.readProperty_mLocalObjectList ()  COMMA_SOURCE_FILE ("universal-map.galgas", 420)) ;
  GGS_lstringlist temp_4 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 421)) ;
  ioObject.mProperty_mLocalObjectList = temp_4 ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap openBranch'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openBranch (GGS_universalValuedObjectMap & ioObject,
                                 Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_referenceStateMap var_initialStateMap_16892 ;
  const GGS_universalValuedObjectMap temp_0 = ioObject ;
  GGS_scopeKind joker_16881 ; // Joker input parameter
  GGS_bool joker_16884 ; // Joker input parameter
  GGS_referenceStateMap joker_16908_2 ; // Joker input parameter
  GGS_lstringlist joker_16908_1 ; // Joker input parameter
  temp_0.readProperty_mScopeStack ().method_last (joker_16881, joker_16884, var_initialStateMap_16892, joker_16908_2, joker_16908_1, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 427)) ;
  cEnumerator_referenceStateMap enumerator_16924 (var_initialStateMap_16892, EnumerationOrder::up) ;
  while (enumerator_16924.hasCurrentObject ()) {
    {
    ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_setMObjectStateForKey (enumerator_16924.current_mState (HERE), enumerator_16924.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 429)) ;
    }
    enumerator_16924.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap closeBranch'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_closeBranch (GGS_universalValuedObjectMap & ioObject,
                                  const GGS_location constinArgument_inErrorLocation,
                                  Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_scopeKind var_scopeKind_17287 ;
  GGS_bool var_firstBranch_17302 ;
  GGS_referenceStateMap var_initialStateMap_17319 ;
  GGS_referenceStateMap var_referenceStateMap_17340 ;
  GGS_lstringlist var_localObjectList_17363 ;
  {
  ioObject.mProperty_mScopeStack.setter_popLast (var_scopeKind_17287, var_firstBranch_17302, var_initialStateMap_17319, var_referenceStateMap_17340, var_localObjectList_17363, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 436)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_firstBranch_17302.boolEnum () ;
    if (kBoolTrue == test_0) {
      GGS_referenceStateMap temp_1 = GGS_referenceStateMap::init (inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 438)) ;
      GGS_referenceStateMap var_newReferenceStateMap_17429 = temp_1 ;
      const GGS_universalValuedObjectMap temp_2 = ioObject ;
      cEnumerator_flatValuedObjectMap enumerator_17478 (temp_2.readProperty_mInternalPropertyAndRoutineMap (), EnumerationOrder::up) ;
      while (enumerator_17478.hasCurrentObject ()) {
        switch (enumerator_17478.current (HERE).readProperty_mValuedObject ().enumValue ()) {
        case GGS_valuedObject::Enumeration::invalid:
          break ;
        case GGS_valuedObject::Enumeration::enum_task:
          break ;
        case GGS_valuedObject::Enumeration::enum_driver:
          break ;
        case GGS_valuedObject::Enumeration::enum_globalConstant:
          break ;
        case GGS_valuedObject::Enumeration::enum_globalSyncInstance:
          break ;
        case GGS_valuedObject::Enumeration::enum_localConstant:
          {
            GGS_omnibusType extractedValue_17689__0 ;
            GGS_lstring extractedValue_17689__1 ;
            GGS_bool extractedValue_17689__2 ;
            enumerator_17478.current (HERE).readProperty_mValuedObject ().getAssociatedValuesFor_localConstant (extractedValue_17689__0, extractedValue_17689__1, extractedValue_17689__2) ;
            {
            var_newReferenceStateMap_17429.setter_insertKey (enumerator_17478.current (HERE).readProperty_lkey (), enumerator_17478.current (HERE).readProperty_mObjectState (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 446)) ;
            }
          }
          break ;
        case GGS_valuedObject::Enumeration::enum_localVariable:
          {
            GGS_omnibusType extractedValue_17795__0 ;
            GGS_lstring extractedValue_17796__1 ;
            enumerator_17478.current (HERE).readProperty_mValuedObject ().getAssociatedValuesFor_localVariable (extractedValue_17795__0, extractedValue_17796__1) ;
            {
            var_newReferenceStateMap_17429.setter_insertKey (enumerator_17478.current (HERE).readProperty_lkey (), enumerator_17478.current (HERE).readProperty_mObjectState (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 448)) ;
            }
          }
          break ;
        }
        enumerator_17478.gotoNextObject () ;
      }
      ioObject.mProperty_mScopeStack.addAssign_operation (var_scopeKind_17287, GGS_bool (false), var_initialStateMap_17319, var_newReferenceStateMap_17429, var_localObjectList_17363  COMMA_SOURCE_FILE ("universal-map.galgas", 451)) ;
    }
  }
  if (kBoolFalse == test_0) {
    switch (var_scopeKind_17287.enumValue ()) {
    case GGS_scopeKind::Enumeration::invalid:
      break ;
    case GGS_scopeKind::Enumeration::enum_selectScope:
      {
        cEnumerator_referenceStateMap enumerator_18059 (var_referenceStateMap_17340, EnumerationOrder::up) ;
        while (enumerator_18059.hasCurrentObject ()) {
          GGS_valuedObjectState var_currentObjectState_18165 ;
          const GGS_universalValuedObjectMap temp_3 = ioObject ;
          GGS_bool joker_18184_2 ; // Joker input parameter
          GGS_valuedObject joker_18184_1 ; // Joker input parameter
          temp_3.readProperty_mInternalPropertyAndRoutineMap ().method_searchKey (enumerator_18059.current_lkey (HERE), var_currentObjectState_18165, joker_18184_2, joker_18184_1, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 456)) ;
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = GGS_bool (ComparisonKind::equal, enumerator_18059.current_mState (HERE).objectCompare (var_currentObjectState_18165)).boolEnum () ;
            if (kBoolTrue == test_4) {
            }
          }
          if (kBoolFalse == test_4) {
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = GGS_bool (ComparisonKind::equal, var_currentObjectState_18165.objectCompare (GGS_valuedObjectState::class_func_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 458)))).operator_and (GGS_bool (ComparisonKind::equal, enumerator_18059.current_mState (HERE).objectCompare (GGS_valuedObjectState::class_func_hasReadValue (SOURCE_FILE ("universal-map.galgas", 458)))) COMMA_SOURCE_FILE ("universal-map.galgas", 458)).boolEnum () ;
              if (kBoolTrue == test_5) {
              }
            }
            if (kBoolFalse == test_5) {
              enumGalgasBool test_6 = kBoolTrue ;
              if (kBoolTrue == test_6) {
                test_6 = GGS_bool (ComparisonKind::equal, var_currentObjectState_18165.objectCompare (GGS_valuedObjectState::class_func_hasReadValue (SOURCE_FILE ("universal-map.galgas", 459)))).operator_and (GGS_bool (ComparisonKind::equal, enumerator_18059.current_mState (HERE).objectCompare (GGS_valuedObjectState::class_func_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 459)))) COMMA_SOURCE_FILE ("universal-map.galgas", 459)).boolEnum () ;
                if (kBoolTrue == test_6) {
                  {
                  var_referenceStateMap_17340.setter_setMStateForKey (GGS_valuedObjectState::class_func_hasReadValue (SOURCE_FILE ("universal-map.galgas", 460)), enumerator_18059.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 460)) ;
                  }
                }
              }
              if (kBoolFalse == test_6) {
                TC_Array <FixItDescription> fixItArray7 ;
                inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid state for object '").add_operation (enumerator_18059.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 463)).add_operation (GGS_string ("': found "), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 463)).add_operation (extensionGetter_string (var_currentObjectState_18165, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 463)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 463)).add_operation (GGS_string (", required "), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 463)).add_operation (extensionGetter_string (enumerator_18059.current_mState (HERE), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 463)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 463)), fixItArray7  COMMA_SOURCE_FILE ("universal-map.galgas", 462)) ;
              }
            }
          }
          enumerator_18059.gotoNextObject () ;
        }
        ioObject.mProperty_mScopeStack.addAssign_operation (var_scopeKind_17287, GGS_bool (false), var_initialStateMap_17319, var_referenceStateMap_17340, var_localObjectList_17363  COMMA_SOURCE_FILE ("universal-map.galgas", 466)) ;
      }
      break ;
    case GGS_scopeKind::Enumeration::enum_repeatScope:
      {
        cEnumerator_referenceStateMap enumerator_18860 (var_referenceStateMap_17340, EnumerationOrder::up) ;
        while (enumerator_18860.hasCurrentObject ()) {
          GGS_valuedObjectState var_currentObjectState_18963 ;
          const GGS_universalValuedObjectMap temp_8 = ioObject ;
          GGS_bool joker_18982_2 ; // Joker input parameter
          GGS_valuedObject joker_18982_1 ; // Joker input parameter
          temp_8.readProperty_mInternalPropertyAndRoutineMap ().method_searchKey (enumerator_18860.current_lkey (HERE), var_currentObjectState_18963, joker_18982_2, joker_18982_1, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 469)) ;
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            test_9 = GGS_bool (ComparisonKind::notEqual, enumerator_18860.current_mState (HERE).objectCompare (var_currentObjectState_18963)).boolEnum () ;
            if (kBoolTrue == test_9) {
              TC_Array <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid state for object '").add_operation (enumerator_18860.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 472)).add_operation (GGS_string ("': found "), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 472)).add_operation (extensionGetter_string (var_currentObjectState_18963, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 472)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 472)).add_operation (GGS_string (", required "), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 472)).add_operation (extensionGetter_string (enumerator_18860.current_mState (HERE), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 472)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 472)), fixItArray10  COMMA_SOURCE_FILE ("universal-map.galgas", 471)) ;
            }
          }
          enumerator_18860.gotoNextObject () ;
        }
        ioObject.mProperty_mScopeStack.addAssign_operation (var_scopeKind_17287, GGS_bool (false), var_initialStateMap_17319, var_referenceStateMap_17340, var_localObjectList_17363  COMMA_SOURCE_FILE ("universal-map.galgas", 475)) ;
      }
      break ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap closeOverride'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_closeOverride (GGS_universalValuedObjectMap & ioObject,
                                    const GGS_location constinArgument_inErrorLocation,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_referenceStateMap var_referenceStateMap_19566 ;
  GGS_lstringlist var_localObjectList_19589 ;
  {
  GGS_scopeKind joker_19552 ; // Joker input parameter
  GGS_bool joker_19555 ; // Joker input parameter
  GGS_referenceStateMap joker_19558 ; // Joker input parameter
  ioObject.mProperty_mScopeStack.setter_popLast (joker_19552, joker_19555, joker_19558, var_referenceStateMap_19566, var_localObjectList_19589, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 483)) ;
  }
  cEnumerator_referenceStateMap enumerator_19649 (var_referenceStateMap_19566, EnumerationOrder::up) ;
  while (enumerator_19649.hasCurrentObject ()) {
    {
    ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_setMObjectStateForKey (enumerator_19649.current_mState (HERE), enumerator_19649.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 486)) ;
    }
    enumerator_19649.gotoNextObject () ;
  }
  const GGS_universalValuedObjectMap temp_0 = ioObject ;
  cEnumerator_lstringlist enumerator_19839 (temp_0.readProperty_mLocalObjectList (), EnumerationOrder::up) ;
  while (enumerator_19839.hasCurrentObject ()) {
    GGS_valuedObjectState var_currentObjectState_19947 ;
    GGS_bool var_objectShouldBeValuedAtEndOfScope_19977 ;
    GGS_valuedObject var_possibleValuedObject_20021 ;
    const GGS_universalValuedObjectMap temp_1 = ioObject ;
    temp_1.readProperty_mInternalPropertyAndRoutineMap ().method_searchKey (enumerator_19839.current_mValue (HERE), var_currentObjectState_19947, var_objectShouldBeValuedAtEndOfScope_19977, var_possibleValuedObject_20021, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 490)) ;
    switch (var_possibleValuedObject_20021.enumValue ()) {
    case GGS_valuedObject::Enumeration::invalid:
      break ;
    case GGS_valuedObject::Enumeration::enum_task:
      break ;
    case GGS_valuedObject::Enumeration::enum_driver:
      break ;
    case GGS_valuedObject::Enumeration::enum_globalSyncInstance:
      break ;
    case GGS_valuedObject::Enumeration::enum_globalConstant:
      break ;
    case GGS_valuedObject::Enumeration::enum_localConstant:
      {
        GGS_omnibusType extractedValue_20214__0 ;
        GGS_lstring extractedValue_20214__1 ;
        GGS_bool extractedValue_20214__2 ;
        var_possibleValuedObject_20021.getAssociatedValuesFor_localConstant (extractedValue_20214__0, extractedValue_20214__1, extractedValue_20214__2) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::equal, var_currentObjectState_19947.objectCompare (GGS_valuedObjectState::class_func_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 502)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticWarning (constinArgument_inErrorLocation, GGS_string ("'").add_operation (enumerator_19839.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 503)).add_operation (GGS_string ("' is never read"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 503)), fixItArray3  COMMA_SOURCE_FILE ("universal-map.galgas", 503)) ;
          }
        }
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_localVariable:
      {
        GGS_omnibusType extractedValue_20370__0 ;
        GGS_lstring extractedValue_20371__1 ;
        var_possibleValuedObject_20021.getAssociatedValuesFor_localVariable (extractedValue_20370__0, extractedValue_20371__1) ;
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          GGS_bool test_5 = GGS_bool (ComparisonKind::equal, var_currentObjectState_19947.objectCompare (GGS_valuedObjectState::class_func_noValue (SOURCE_FILE ("universal-map.galgas", 506)))) ;
          if (kBoolTrue == test_5.boolEnum ()) {
            test_5 = var_objectShouldBeValuedAtEndOfScope_19977 ;
          }
          test_4 = test_5.boolEnum () ;
          if (kBoolTrue == test_4) {
            TC_Array <FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("'").add_operation (enumerator_19839.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 507)).add_operation (GGS_string ("' should be valued at the end of routine"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 507)), fixItArray6  COMMA_SOURCE_FILE ("universal-map.galgas", 507)) ;
          }
        }
      }
      break ;
    }
    enumerator_19839.gotoNextObject () ;
  }
  const GGS_universalValuedObjectMap temp_7 = ioObject ;
  cEnumerator_lstringlist enumerator_20611 (temp_7.readProperty_mLocalObjectList (), EnumerationOrder::up) ;
  while (enumerator_20611.hasCurrentObject ()) {
    {
    GGS_valuedObjectState joker_20704_3 ; // Joker input parameter
    GGS_bool joker_20704_2 ; // Joker input parameter
    GGS_valuedObject joker_20704_1 ; // Joker input parameter
    ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_removeKey (enumerator_20611.current_mValue (HERE), joker_20704_3, joker_20704_2, joker_20704_1, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 513)) ;
    }
    enumerator_20611.gotoNextObject () ;
  }
  ioObject.mProperty_mLocalObjectList = var_localObjectList_19589 ;
}


//--------------------------------------------------------------------------------------------------
// @omnibusType reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_omnibusType::objectCompare (const GGS_omnibusType & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType::GGS_omnibusType (void) :
AC_GALGAS_reference_class () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_omnibusType GGS_omnibusType::
init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (const GGS_subscript & in_subscript,
                                                                                           const GGS_omnibusTypeAttributes & in_attributes,
                                                                                           const GGS_string & in_omnibusTypeDescriptionName,
                                                                                           const GGS_typeKind & in_kind,
                                                                                           const GGS_string & in_llvmBaseTypeName,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  cPtr_omnibusType * object = nullptr ;
  macroMyNew (object, cPtr_omnibusType (inCompiler COMMA_THERE)) ;
  object->omnibusType_init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (in_subscript, in_attributes, in_omnibusTypeDescriptionName, in_kind, in_llvmBaseTypeName, inCompiler) ;
  const GGS_omnibusType result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_omnibusType::
omnibusType_init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (const GGS_subscript & in_subscript,
                                                                                                       const GGS_omnibusTypeAttributes & in_attributes,
                                                                                                       const GGS_string & in_omnibusTypeDescriptionName,
                                                                                                       const GGS_typeKind & in_kind,
                                                                                                       const GGS_string & in_llvmBaseTypeName,
                                                                                                       Compiler * /* inCompiler */) {
  mProperty_subscript = in_subscript ;
  mProperty_attributes = in_attributes ;
  mProperty_omnibusTypeDescriptionName = in_omnibusTypeDescriptionName ;
  mProperty_kind = in_kind ;
  mProperty_llvmBaseTypeName = in_llvmBaseTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType::GGS_omnibusType (const cPtr_omnibusType * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_omnibusType) ;
}
//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_omnibusType::class_func_new (const GGS_subscript & in_subscript,
                                                 const GGS_omnibusTypeAttributes & in_attributes,
                                                 const GGS_string & in_omnibusTypeDescriptionName,
                                                 const GGS_typeKind & in_kind,
                                                 const GGS_string & in_llvmBaseTypeName,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  GGS_omnibusType result ;
  macroMyNew (result.mObjectPtr, cPtr_omnibusType (in_subscript, in_attributes, in_omnibusTypeDescriptionName, in_kind, in_llvmBaseTypeName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscript GGS_omnibusType::readProperty_subscript (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_subscript () ;
  }else{
    cPtr_omnibusType * p = (cPtr_omnibusType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_omnibusType) ;
    return p->mProperty_subscript ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusTypeAttributes GGS_omnibusType::readProperty_attributes (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusTypeAttributes () ;
  }else{
    cPtr_omnibusType * p = (cPtr_omnibusType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_omnibusType) ;
    return p->mProperty_attributes ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_omnibusType::readProperty_omnibusTypeDescriptionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_omnibusType * p = (cPtr_omnibusType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_omnibusType) ;
    return p->mProperty_omnibusTypeDescriptionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_omnibusType::readProperty_kind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_typeKind () ;
  }else{
    cPtr_omnibusType * p = (cPtr_omnibusType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_omnibusType) ;
    return p->mProperty_kind ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_omnibusType::readProperty_llvmBaseTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_omnibusType * p = (cPtr_omnibusType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_omnibusType) ;
    return p->mProperty_llvmBaseTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @omnibusType class
//--------------------------------------------------------------------------------------------------

cPtr_omnibusType::cPtr_omnibusType (Compiler * inCompiler COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_subscript (),
mProperty_attributes (),
mProperty_omnibusTypeDescriptionName (),
mProperty_kind (),
mProperty_llvmBaseTypeName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_omnibusType::cPtr_omnibusType (const GGS_subscript & in_subscript,
                                    const GGS_omnibusTypeAttributes & in_attributes,
                                    const GGS_string & in_omnibusTypeDescriptionName,
                                    const GGS_typeKind & in_kind,
                                    const GGS_string & in_llvmBaseTypeName,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_subscript (),
mProperty_attributes (),
mProperty_omnibusTypeDescriptionName (),
mProperty_kind (),
mProperty_llvmBaseTypeName () {
  mProperty_subscript = in_subscript ;
  mProperty_attributes = in_attributes ;
  mProperty_omnibusTypeDescriptionName = in_omnibusTypeDescriptionName ;
  mProperty_kind = in_kind ;
  mProperty_llvmBaseTypeName = in_llvmBaseTypeName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_omnibusType::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_omnibusType ;
}

void cPtr_omnibusType::description (String & ioString,
                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@omnibusType:") ;
  mProperty_subscript.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_attributes.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_omnibusTypeDescriptionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_kind.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_llvmBaseTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_omnibusType::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_omnibusType (mProperty_subscript, mProperty_attributes, mProperty_omnibusTypeDescriptionName, mProperty_kind, mProperty_llvmBaseTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_omnibusType::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_subscript.printNonNullClassInstanceProperties ("subscript") ;
    mProperty_attributes.printNonNullClassInstanceProperties ("attributes") ;
    mProperty_omnibusTypeDescriptionName.printNonNullClassInstanceProperties ("omnibusTypeDescriptionName") ;
    mProperty_kind.printNonNullClassInstanceProperties ("kind") ;
    mProperty_llvmBaseTypeName.printNonNullClassInstanceProperties ("llvmBaseTypeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @omnibusType generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_omnibusType ("omnibusType",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_omnibusType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_omnibusType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_omnibusType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_omnibusType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_omnibusType::extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_omnibusType result ;
  const GGS_omnibusType * p = (const GGS_omnibusType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_omnibusType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("omnibusType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticEntityMap::GGS_staticEntityMap (void) :
mProperty_mStaticStringMap (),
mProperty_mGlobalStructuredConstantList () {
}

//--------------------------------------------------------------------------------------------------

GGS_staticEntityMap::~ GGS_staticEntityMap (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_staticEntityMap GGS_staticEntityMap::init (Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_staticEntityMap result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticEntityMap::setInitializedProperties (Compiler * inCompiler) {
GGS_staticStringMap temp_0 = GGS_staticStringMap::init (inCompiler COMMA_SOURCE_FILE ("context.galgas", 306)) ;
  mProperty_mStaticStringMap = temp_0 ;
GGS_globalStructuredConstantList temp_1 = GGS_globalStructuredConstantList::init (inCompiler COMMA_SOURCE_FILE ("context.galgas", 307)) ;
  mProperty_mGlobalStructuredConstantList = temp_1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticEntityMap::GGS_staticEntityMap (const GGS_staticStringMap & inOperand0,
                                          const GGS_globalStructuredConstantList & inOperand1) :
mProperty_mStaticStringMap (inOperand0),
mProperty_mGlobalStructuredConstantList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticEntityMap GGS_staticEntityMap::class_func_new (Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_staticEntityMap result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_staticEntityMap::isValid (void) const {
  return mProperty_mStaticStringMap.isValid () && mProperty_mGlobalStructuredConstantList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticEntityMap::drop (void) {
  mProperty_mStaticStringMap.drop () ;
  mProperty_mGlobalStructuredConstantList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticEntityMap::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @staticEntityMap:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mStaticStringMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGlobalStructuredConstantList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @staticEntityMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticEntityMap ("staticEntityMap",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_staticEntityMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticEntityMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_staticEntityMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_staticEntityMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticEntityMap GGS_staticEntityMap::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_staticEntityMap result ;
  const GGS_staticEntityMap * p = (const GGS_staticEntityMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_staticEntityMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticEntityMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@staticEntityMap findOrAddStaticString'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_findOrAddStaticString (GGS_staticEntityMap & ioObject,
                                            const GGS_string constinArgument_inString,
                                            GGS_uint & outArgument_outIndex,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outIndex.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_staticEntityMap temp_1 = ioObject ;
    test_0 = temp_1.readProperty_mStaticStringMap ().getter_hasKey (constinArgument_inString COMMA_SOURCE_FILE ("context.galgas", 328)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_staticEntityMap temp_2 = ioObject ;
      temp_2.readProperty_mStaticStringMap ().method_searchKey (constinArgument_inString.getter_nowhere (SOURCE_FILE ("context.galgas", 329)), outArgument_outIndex, inCompiler COMMA_SOURCE_FILE ("context.galgas", 329)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GGS_staticEntityMap temp_3 = ioObject ;
    outArgument_outIndex = temp_3.readProperty_mStaticStringMap ().getter_count (SOURCE_FILE ("context.galgas", 331)) ;
    {
    ioObject.mProperty_mStaticStringMap.setter_insertKey (constinArgument_inString.getter_nowhere (SOURCE_FILE ("context.galgas", 332)), outArgument_outIndex, inCompiler COMMA_SOURCE_FILE ("context.galgas", 332)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType llvmTypeName'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_omnibusType::getter_llvmTypeName (Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_omnibusType temp_0 = this ;
  switch (temp_0.readProperty_kind ().enumValue ()) {
  case GGS_typeKind::Enumeration::invalid:
    break ;
  case GGS_typeKind::Enumeration::enum_void:
    {
      result_result = GGS_string ("void") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_boolean:
    {
      result_result = GGS_string ("i1") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_literalString:
    {
      result_result = GGS_string ("i8*") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_enumeration:
    {
      GGS_uint extractedValue_2379_bitCount_0 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_enumeration (extractedValue_2379_bitCount_0) ;
      result_result = GGS_string ("i").add_operation (extractedValue_2379_bitCount_0.getter_string (SOURCE_FILE ("types.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 65)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_structure:
    {
      GGS_propertyList extractedValue_2437__0 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_structure (extractedValue_2437__0) ;
      const GGS_omnibusType temp_1 = this ;
      result_result = GGS_string ("%").add_operation (temp_1.readProperty_llvmBaseTypeName ().getter_assemblerRepresentation (SOURCE_FILE ("types.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 67)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_syncTool:
    {
      const GGS_omnibusType temp_2 = this ;
      result_result = GGS_string ("%").add_operation (temp_2.readProperty_llvmBaseTypeName ().getter_assemblerRepresentation (SOURCE_FILE ("types.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 69)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_integer:
    {
      GGS_bigint extractedValue_2610__0 ;
      GGS_bigint extractedValue_2612__1 ;
      GGS_bool extractedValue_2614__2 ;
      GGS_uint extractedValue_2622_bitCount_3 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_integer (extractedValue_2610__0, extractedValue_2612__1, extractedValue_2614__2, extractedValue_2622_bitCount_3) ;
      result_result = GGS_string ("i").add_operation (extractedValue_2622_bitCount_3.getter_string (SOURCE_FILE ("types.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 71)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_compileTimeBool:
  case GGS_typeKind::Enumeration::enum_compileTimeInteger:
    {
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_generic:
    {
      GGS_genericFormalParameterList extractedValue_2774__0 ;
      GGS_ctExpressionAST extractedValue_2774__1 ;
      GGS_llvmStringDefinition extractedValue_2774__2 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_generic (extractedValue_2774__0, extractedValue_2774__1, extractedValue_2774__2) ;
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_llvmType:
    {
      GGS_bigint extractedValue_2846__0 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_llvmType (extractedValue_2846__0) ;
      const GGS_omnibusType temp_3 = this ;
      result_result = temp_3.readProperty_llvmBaseTypeName () ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_opaque:
    {
      GGS_bigint extractedValue_2909_bitCount_0 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_opaque (extractedValue_2909_bitCount_0) ;
      result_result = GGS_string ("i").add_operation (extractedValue_2909_bitCount_0.getter_string (SOURCE_FILE ("types.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 79)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_staticArrayType:
    {
      GGS_omnibusType extractedValue_2973__0 ;
      GGS_bigint extractedValue_2975__1 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_staticArrayType (extractedValue_2973__0, extractedValue_2975__1) ;
      const GGS_omnibusType temp_4 = this ;
      result_result = GGS_string ("%").add_operation (temp_4.readProperty_llvmBaseTypeName ().getter_assemblerRepresentation (SOURCE_FILE ("types.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 81)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_dynamicArrayType:
    {
      GGS_omnibusType extractedValue_3072__0 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_dynamicArrayType (extractedValue_3072__0) ;
      result_result = GGS_string ("%ptrtype") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_function:
    {
      GGS_mode extractedValue_3134__0 ;
      GGS_routineTypedSignature extractedValue_3136_signature_1 ;
      GGS_unifiedTypeMapEntry extractedValue_3146_returnTypeProxy_2 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_function (extractedValue_3134__0, extractedValue_3136_signature_1, extractedValue_3146_returnTypeProxy_2) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = extractedValue_3146_returnTypeProxy_2.getter_isNull (SOURCE_FILE ("types.galgas", 85)).boolEnum () ;
        if (kBoolTrue == test_5) {
          result_result = GGS_string ("void") ;
        }
      }
      if (kBoolFalse == test_5) {
        result_result = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (extractedValue_3146_returnTypeProxy_2, inCompiler COMMA_SOURCE_FILE ("types.galgas", 88)).ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 88)) ;
      }
      result_result.plusAssign_operation(GGS_string ("("), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 90)) ;
      cEnumerator_routineTypedSignature enumerator_3361 (extractedValue_3136_signature_1, EnumerationOrder::up) ;
      while (enumerator_3361.hasCurrentObject ()) {
        result_result.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_3361.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("types.galgas", 93)).ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 93)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 93)) ;
        switch (enumerator_3361.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
        case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
          break ;
        case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
        case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
          {
            result_result.plusAssign_operation(GGS_string ("*"), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 95)) ;
          }
          break ;
        case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
          break ;
        }
        if (enumerator_3361.hasNextObject ()) {
          result_result.plusAssign_operation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 98)) ;
        }
        enumerator_3361.gotoNextObject () ;
      }
      result_result.plusAssign_operation(GGS_string (")*"), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 100)) ;
    }
    break ;
  }
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_llvmTypeName (const cPtr_omnibusType * inObject,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_llvmTypeName (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@omnibusType checkIsCompileTimeType'
//
//--------------------------------------------------------------------------------------------------

void cPtr_omnibusType::method_checkIsCompileTimeType (const GGS_location constinArgument_inErrorLocation,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_omnibusType temp_1 = this ;
    const GGS_omnibusType temp_2 = this ;
    test_0 = temp_1.readProperty_kind ().getter_isCompileTimeBool (SOURCE_FILE ("types.galgas", 107)).operator_or (temp_2.readProperty_kind ().getter_isCompileTimeInteger (SOURCE_FILE ("types.galgas", 107)) COMMA_SOURCE_FILE ("types.galgas", 107)).operator_not (SOURCE_FILE ("types.galgas", 107)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("this type should be a compile time type"), fixItArray3  COMMA_SOURCE_FILE ("types.galgas", 108)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkIsCompileTimeType (cPtr_omnibusType * inObject,
                                                 const GGS_location constin_inErrorLocation,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_omnibusType) ;
    inObject->method_checkIsCompileTimeType  (constin_inErrorLocation, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@omnibusType checkIsNotCompileTimeType'
//
//--------------------------------------------------------------------------------------------------

void cPtr_omnibusType::method_checkIsNotCompileTimeType (const GGS_location constinArgument_inErrorLocation,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_omnibusType temp_1 = this ;
    const GGS_omnibusType temp_2 = this ;
    test_0 = temp_1.readProperty_kind ().getter_isCompileTimeBool (SOURCE_FILE ("types.galgas", 115)).operator_or (temp_2.readProperty_kind ().getter_isCompileTimeInteger (SOURCE_FILE ("types.galgas", 115)) COMMA_SOURCE_FILE ("types.galgas", 115)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("this type should not be a compile time type"), fixItArray3  COMMA_SOURCE_FILE ("types.galgas", 116)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkIsNotCompileTimeType (cPtr_omnibusType * inObject,
                                                    const GGS_location constin_inErrorLocation,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_omnibusType) ;
    inObject->method_checkIsNotCompileTimeType  (constin_inErrorLocation, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType isCompileTimeType'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_omnibusType::getter_isCompileTimeType (Compiler */* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  const GGS_omnibusType temp_0 = this ;
  const GGS_omnibusType temp_1 = this ;
  result_result = temp_0.readProperty_kind ().getter_isCompileTimeBool (SOURCE_FILE ("types.galgas", 123)).operator_or (temp_1.readProperty_kind ().getter_isCompileTimeInteger (SOURCE_FILE ("types.galgas", 123)) COMMA_SOURCE_FILE ("types.galgas", 123)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_isCompileTimeType (const cPtr_omnibusType * inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_isCompileTimeType (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType instanciable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_omnibusType::getter_instanciable (Compiler */* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  const GGS_omnibusType temp_0 = this ;
  result_result = temp_0.readProperty_attributes ().getter_contains (GGS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("types.galgas", 189)) COMMA_SOURCE_FILE ("types.galgas", 189)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_instanciable (const cPtr_omnibusType * inObject,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_instanciable (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType copyable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_omnibusType::getter_copyable (Compiler */* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  const GGS_omnibusType temp_0 = this ;
  result_result = temp_0.readProperty_attributes ().getter_contains (GGS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("types.galgas", 195)) COMMA_SOURCE_FILE ("types.galgas", 195)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_copyable (const cPtr_omnibusType * inObject,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_copyable (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@omnibusType generateRetain'
//
//--------------------------------------------------------------------------------------------------

void cPtr_omnibusType::method_generateRetain (const GGS_string constinArgument_inOmnibusName,
                                              GGS_string & ioArgument_ioLLVMcode,
                                              GGS_generationAdds & ioArgument_ioGenerationAdds,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_omnibusType temp_0 = this ;
  GGS_string var_llvmTypeName_7101 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 205)) ;
  GGS_string var_LLVMVariable_7142 = function_llvmNameForLocalVariable (constinArgument_inOmnibusName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 206)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GGS_omnibusType temp_2 = this ;
    test_1 = temp_2.readProperty_kind ().getter_isDynamicArrayType (SOURCE_FILE ("types.galgas", 207)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GGS_string var_tempLLVMVariable_7249 = GGS_string ("%temp.").add_operation (constinArgument_inOmnibusName.getter_assemblerRepresentation (SOURCE_FILE ("types.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 208)).add_operation (GGS_string (".loaded."), inCompiler COMMA_SOURCE_FILE ("types.galgas", 208)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("types.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 208)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 209)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ").add_operation (var_tempLLVMVariable_7249, inCompiler COMMA_SOURCE_FILE ("types.galgas", 210)).add_operation (GGS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 210)).add_operation (var_llvmTypeName_7101, inCompiler COMMA_SOURCE_FILE ("types.galgas", 210)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 210)).add_operation (var_llvmTypeName_7101, inCompiler COMMA_SOURCE_FILE ("types.galgas", 210)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 210)).add_operation (var_LLVMVariable_7142, inCompiler COMMA_SOURCE_FILE ("types.galgas", 210)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 210)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  call void @arc.retain (").add_operation (var_llvmTypeName_7101, inCompiler COMMA_SOURCE_FILE ("types.galgas", 211)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 211)).add_operation (var_tempLLVMVariable_7249, inCompiler COMMA_SOURCE_FILE ("types.galgas", 211)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 211)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 211)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GGS_omnibusType temp_3 = this ;
    GGS_uintlist temp_4 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("types.galgas", 213)) ;
    GGS_arcAssignmentList var_arcAssignmentList_7633 = callExtensionGetter_arcList ((const cPtr_omnibusType *) temp_3.ptr (), temp_4, inCompiler COMMA_SOURCE_FILE ("types.galgas", 213)) ;
    cEnumerator_arcAssignmentList enumerator_7708 (var_arcAssignmentList_7633, EnumerationOrder::up) ;
    while (enumerator_7708.hasCurrentObject ()) {
      GGS_string var_llvmVarName_7754 = GGS_string ("%arc.retain.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("types.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 215)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 216)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ").add_operation (var_llvmVarName_7754, inCompiler COMMA_SOURCE_FILE ("types.galgas", 217)).add_operation (GGS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 217)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_llvmTypeName_7101.add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 218)).add_operation (var_llvmTypeName_7101, inCompiler COMMA_SOURCE_FILE ("types.galgas", 218)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 218)).add_operation (var_LLVMVariable_7142, inCompiler COMMA_SOURCE_FILE ("types.galgas", 218)).add_operation (GGS_string (", i32 0"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 218)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 218)) ;
      cEnumerator_uintlist enumerator_8026 (enumerator_7708.current_mPropertyIndexPath (HERE), EnumerationOrder::up) ;
      while (enumerator_8026.hasCurrentObject ()) {
        ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (", i32 ").add_operation (enumerator_8026.current_mValue (HERE).getter_string (SOURCE_FILE ("types.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 220)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 220)) ;
        enumerator_8026.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (" ; ").add_operation (enumerator_7708.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("types.galgas", 222)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 222)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 222)) ;
      GGS_string var_propertyTypeLLVMName_8152 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_7708.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 223)) ;
      GGS_string var_llvmLoadedVarName_8213 = var_llvmVarName_7754.add_operation (GGS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 224)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ").add_operation (var_llvmLoadedVarName_8213, inCompiler COMMA_SOURCE_FILE ("types.galgas", 225)).add_operation (GGS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 225)).add_operation (var_propertyTypeLLVMName_8152, inCompiler COMMA_SOURCE_FILE ("types.galgas", 225)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 225)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 225)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_propertyTypeLLVMName_8152.add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 226)).add_operation (var_llvmVarName_7754, inCompiler COMMA_SOURCE_FILE ("types.galgas", 226)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 226)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  call void @arc.retain (").add_operation (var_propertyTypeLLVMName_8152, inCompiler COMMA_SOURCE_FILE ("types.galgas", 227)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 227)).add_operation (var_llvmLoadedVarName_8213, inCompiler COMMA_SOURCE_FILE ("types.galgas", 227)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 227)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 227)) ;
      enumerator_7708.gotoNextObject () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateRetain (cPtr_omnibusType * inObject,
                                         const GGS_string constin_inOmnibusName,
                                         GGS_string & io_ioLLVMcode,
                                         GGS_generationAdds & io_ioGenerationAdds,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_omnibusType) ;
    inObject->method_generateRetain  (constin_inOmnibusName, io_ioLLVMcode, io_ioGenerationAdds, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@omnibusType generateInsulate'
//
//--------------------------------------------------------------------------------------------------

void cPtr_omnibusType::method_generateInsulate (const GGS_string constinArgument_inOmnibusName,
                                                GGS_string & ioArgument_ioLLVMcode,
                                                GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_omnibusType temp_0 = this ;
  GGS_string var_llvmTypeName_8794 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 239)) ;
  GGS_string var_LLVMVariable_8835 = function_llvmNameForLocalVariable (constinArgument_inOmnibusName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 240)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GGS_omnibusType temp_2 = this ;
    test_1 = temp_2.readProperty_kind ().getter_isDynamicArrayType (SOURCE_FILE ("types.galgas", 241)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GGS_string var_loadedVar_8942 = GGS_string ("%temp.").add_operation (constinArgument_inOmnibusName.getter_assemblerRepresentation (SOURCE_FILE ("types.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 242)).add_operation (GGS_string (".loaded."), inCompiler COMMA_SOURCE_FILE ("types.galgas", 242)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("types.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 242)) ;
      GGS_string var_insulatedVar_9061 = GGS_string ("%temp.").add_operation (constinArgument_inOmnibusName.getter_assemblerRepresentation (SOURCE_FILE ("types.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 243)).add_operation (GGS_string (".insulated."), inCompiler COMMA_SOURCE_FILE ("types.galgas", 243)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("types.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 243)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 244)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ").add_operation (var_loadedVar_8942, inCompiler COMMA_SOURCE_FILE ("types.galgas", 245)).add_operation (GGS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 245)).add_operation (var_llvmTypeName_8794, inCompiler COMMA_SOURCE_FILE ("types.galgas", 245)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 245)).add_operation (var_llvmTypeName_8794, inCompiler COMMA_SOURCE_FILE ("types.galgas", 245)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 245)).add_operation (var_LLVMVariable_8835, inCompiler COMMA_SOURCE_FILE ("types.galgas", 245)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 245)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 245)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ").add_operation (var_insulatedVar_9061, inCompiler COMMA_SOURCE_FILE ("types.galgas", 246)).add_operation (GGS_string (" = call "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 246)).add_operation (var_llvmTypeName_8794, inCompiler COMMA_SOURCE_FILE ("types.galgas", 246)).add_operation (GGS_string (" @arc.insulate ("), inCompiler COMMA_SOURCE_FILE ("types.galgas", 246)).add_operation (var_llvmTypeName_8794, inCompiler COMMA_SOURCE_FILE ("types.galgas", 246)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 246)).add_operation (var_loadedVar_8942, inCompiler COMMA_SOURCE_FILE ("types.galgas", 246)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 246)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 246)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  store ").add_operation (var_llvmTypeName_8794, inCompiler COMMA_SOURCE_FILE ("types.galgas", 247)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 247)).add_operation (var_insulatedVar_9061, inCompiler COMMA_SOURCE_FILE ("types.galgas", 247)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 247)).add_operation (var_llvmTypeName_8794, inCompiler COMMA_SOURCE_FILE ("types.galgas", 247)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 247)).add_operation (var_LLVMVariable_8835, inCompiler COMMA_SOURCE_FILE ("types.galgas", 247)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 247)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 247)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GGS_omnibusType temp_3 = this ;
    GGS_uintlist temp_4 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("types.galgas", 249)) ;
    GGS_arcAssignmentList var_arcAssignmentList_9590 = callExtensionGetter_arcList ((const cPtr_omnibusType *) temp_3.ptr (), temp_4, inCompiler COMMA_SOURCE_FILE ("types.galgas", 249)) ;
    cEnumerator_arcAssignmentList enumerator_9665 (var_arcAssignmentList_9590, EnumerationOrder::up) ;
    while (enumerator_9665.hasCurrentObject ()) {
      GGS_string var_llvmVarName_9711 = GGS_string ("%arc.release.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("types.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 251)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 252)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ").add_operation (var_llvmVarName_9711, inCompiler COMMA_SOURCE_FILE ("types.galgas", 253)).add_operation (GGS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 253)).add_operation (var_llvmTypeName_8794, inCompiler COMMA_SOURCE_FILE ("types.galgas", 253)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 253)).add_operation (var_llvmTypeName_8794, inCompiler COMMA_SOURCE_FILE ("types.galgas", 253)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 253)).add_operation (var_LLVMVariable_8835, inCompiler COMMA_SOURCE_FILE ("types.galgas", 253)).add_operation (GGS_string (", i32 0"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 253)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 253)) ;
      cEnumerator_uintlist enumerator_9966 (enumerator_9665.current_mPropertyIndexPath (HERE), EnumerationOrder::up) ;
      while (enumerator_9966.hasCurrentObject ()) {
        ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (", i32 ").add_operation (enumerator_9966.current_mValue (HERE).getter_string (SOURCE_FILE ("types.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 255)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 255)) ;
        enumerator_9966.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (" ; ").add_operation (enumerator_9665.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("types.galgas", 257)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 257)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 257)) ;
      GGS_string var_propertyTypeLLVMName_10092 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_9665.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 258)) ;
      GGS_string var_loadedVar_10153 = var_llvmVarName_9711.add_operation (GGS_string (".loaded."), inCompiler COMMA_SOURCE_FILE ("types.galgas", 259)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("types.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 259)) ;
      GGS_string var_insulatedVar_10233 = var_llvmVarName_9711.add_operation (GGS_string (".insulated."), inCompiler COMMA_SOURCE_FILE ("types.galgas", 260)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("types.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 260)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 261)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ").add_operation (var_loadedVar_10153, inCompiler COMMA_SOURCE_FILE ("types.galgas", 262)).add_operation (GGS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 262)).add_operation (var_propertyTypeLLVMName_10092, inCompiler COMMA_SOURCE_FILE ("types.galgas", 262)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 262)).add_operation (var_propertyTypeLLVMName_10092, inCompiler COMMA_SOURCE_FILE ("types.galgas", 262)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 262)).add_operation (var_llvmVarName_9711, inCompiler COMMA_SOURCE_FILE ("types.galgas", 262)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 262)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 262)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ").add_operation (var_insulatedVar_10233, inCompiler COMMA_SOURCE_FILE ("types.galgas", 263)).add_operation (GGS_string (" = call "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 263)).add_operation (var_propertyTypeLLVMName_10092, inCompiler COMMA_SOURCE_FILE ("types.galgas", 263)).add_operation (GGS_string (" @arc.insulate ("), inCompiler COMMA_SOURCE_FILE ("types.galgas", 263)).add_operation (var_propertyTypeLLVMName_10092, inCompiler COMMA_SOURCE_FILE ("types.galgas", 263)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 263)).add_operation (var_loadedVar_10153, inCompiler COMMA_SOURCE_FILE ("types.galgas", 263)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 263)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 263)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  store ").add_operation (var_propertyTypeLLVMName_10092, inCompiler COMMA_SOURCE_FILE ("types.galgas", 264)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 264)).add_operation (var_insulatedVar_10233, inCompiler COMMA_SOURCE_FILE ("types.galgas", 264)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 264)).add_operation (var_propertyTypeLLVMName_10092, inCompiler COMMA_SOURCE_FILE ("types.galgas", 264)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 264)).add_operation (var_llvmVarName_9711, inCompiler COMMA_SOURCE_FILE ("types.galgas", 264)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 264)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 264)) ;
      enumerator_9665.gotoNextObject () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateInsulate (cPtr_omnibusType * inObject,
                                           const GGS_string constin_inOmnibusName,
                                           GGS_string & io_ioLLVMcode,
                                           GGS_generationAdds & io_ioGenerationAdds,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_omnibusType) ;
    inObject->method_generateInsulate  (constin_inOmnibusName, io_ioLLVMcode, io_ioGenerationAdds, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@omnibusType generateRelease'
//
//--------------------------------------------------------------------------------------------------

void cPtr_omnibusType::method_generateRelease (const GGS_string constinArgument_inOmnibusName,
                                               GGS_string & ioArgument_ioLLVMcode,
                                               GGS_generationAdds & ioArgument_ioGenerationAdds,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_omnibusType temp_0 = this ;
  GGS_string var_llvmTypeName_11034 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 276)) ;
  GGS_string var_LLVMVariable_11075 = function_llvmNameForLocalVariable (constinArgument_inOmnibusName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 277)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GGS_omnibusType temp_2 = this ;
    test_1 = temp_2.readProperty_kind ().getter_isDynamicArrayType (SOURCE_FILE ("types.galgas", 278)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GGS_string var_tempLLVMVariable_11182 = GGS_string ("%temp.").add_operation (constinArgument_inOmnibusName.getter_assemblerRepresentation (SOURCE_FILE ("types.galgas", 279)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 279)).add_operation (GGS_string (".loaded."), inCompiler COMMA_SOURCE_FILE ("types.galgas", 279)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("types.galgas", 279)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 279)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 280)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ").add_operation (var_tempLLVMVariable_11182, inCompiler COMMA_SOURCE_FILE ("types.galgas", 281)).add_operation (GGS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 281)).add_operation (var_llvmTypeName_11034, inCompiler COMMA_SOURCE_FILE ("types.galgas", 281)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 281)).add_operation (var_llvmTypeName_11034, inCompiler COMMA_SOURCE_FILE ("types.galgas", 281)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 281)).add_operation (var_LLVMVariable_11075, inCompiler COMMA_SOURCE_FILE ("types.galgas", 281)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 281)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 281)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  call void @arc.release (").add_operation (var_llvmTypeName_11034, inCompiler COMMA_SOURCE_FILE ("types.galgas", 282)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 282)).add_operation (var_tempLLVMVariable_11182, inCompiler COMMA_SOURCE_FILE ("types.galgas", 282)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 282)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 282)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GGS_omnibusType temp_3 = this ;
    GGS_uintlist temp_4 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("types.galgas", 284)) ;
    GGS_arcAssignmentList var_arcAssignmentList_11572 = callExtensionGetter_arcList ((const cPtr_omnibusType *) temp_3.ptr (), temp_4, inCompiler COMMA_SOURCE_FILE ("types.galgas", 284)) ;
    cEnumerator_arcAssignmentList enumerator_11647 (var_arcAssignmentList_11572, EnumerationOrder::up) ;
    while (enumerator_11647.hasCurrentObject ()) {
      GGS_string var_llvmVarName_11693 = GGS_string ("%arc.release.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("types.galgas", 286)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 286)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 287)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ").add_operation (var_llvmVarName_11693, inCompiler COMMA_SOURCE_FILE ("types.galgas", 288)).add_operation (GGS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 288)).add_operation (var_llvmTypeName_11034, inCompiler COMMA_SOURCE_FILE ("types.galgas", 288)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 288)).add_operation (var_llvmTypeName_11034, inCompiler COMMA_SOURCE_FILE ("types.galgas", 288)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 288)).add_operation (var_LLVMVariable_11075, inCompiler COMMA_SOURCE_FILE ("types.galgas", 288)).add_operation (GGS_string (", i32 0"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 288)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 288)) ;
      cEnumerator_uintlist enumerator_11948 (enumerator_11647.current_mPropertyIndexPath (HERE), EnumerationOrder::up) ;
      while (enumerator_11948.hasCurrentObject ()) {
        ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (", i32 ").add_operation (enumerator_11948.current_mValue (HERE).getter_string (SOURCE_FILE ("types.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 290)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 290)) ;
        enumerator_11948.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (" ; ").add_operation (enumerator_11647.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("types.galgas", 292)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 292)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 292)) ;
      GGS_string var_propertyTypeLLVMName_12074 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_11647.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 293)) ;
      GGS_string var_llvmLoadedVarName_12135 = var_llvmVarName_11693.add_operation (GGS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 294)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ").add_operation (var_llvmLoadedVarName_12135, inCompiler COMMA_SOURCE_FILE ("types.galgas", 295)).add_operation (GGS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 295)).add_operation (var_propertyTypeLLVMName_12074, inCompiler COMMA_SOURCE_FILE ("types.galgas", 295)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 295)).add_operation (var_propertyTypeLLVMName_12074, inCompiler COMMA_SOURCE_FILE ("types.galgas", 295)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 295)).add_operation (var_llvmVarName_11693, inCompiler COMMA_SOURCE_FILE ("types.galgas", 295)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 295)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 295)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  call void @arc.release (").add_operation (var_propertyTypeLLVMName_12074, inCompiler COMMA_SOURCE_FILE ("types.galgas", 296)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 296)).add_operation (var_llvmLoadedVarName_12135, inCompiler COMMA_SOURCE_FILE ("types.galgas", 296)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 296)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 296)) ;
      enumerator_11647.gotoNextObject () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateRelease (cPtr_omnibusType * inObject,
                                          const GGS_string constin_inOmnibusName,
                                          GGS_string & io_ioLLVMcode,
                                          GGS_generationAdds & io_ioGenerationAdds,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_omnibusType) ;
    inObject->method_generateRelease  (constin_inOmnibusName, io_ioLLVMcode, io_ioGenerationAdds, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType descriptionForHTMLFile'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_omnibusType::getter_descriptionForHTMLFile (Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_omnibusType temp_0 = this ;
  switch (temp_0.readProperty_kind ().enumValue ()) {
  case GGS_typeKind::Enumeration::invalid:
    break ;
  case GGS_typeKind::Enumeration::enum_void:
    {
      result_result = GGS_string ("Void") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_boolean:
    {
      result_result = GGS_string ("Boolean") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_literalString:
    {
      result_result = GGS_string ("Literal String") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_enumeration:
    {
      GGS_uint extractedValue_12787__0 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_enumeration (extractedValue_12787__0) ;
      result_result = GGS_string ("Enumeration") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_structure:
    {
      GGS_propertyList extractedValue_12837__0 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_structure (extractedValue_12837__0) ;
      result_result = GGS_string ("Structure") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_syncTool:
    {
      result_result = GGS_string ("Synchronization tool") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_integer:
    {
      GGS_bigint extractedValue_12937__0 ;
      GGS_bigint extractedValue_12939__1 ;
      GGS_bool extractedValue_12947_unsigned_2 ;
      GGS_uint extractedValue_12962_bitCount_3 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_integer (extractedValue_12937__0, extractedValue_12939__1, extractedValue_12947_unsigned_2, extractedValue_12962_bitCount_3) ;
      GGS_string temp_1 ;
      const enumGalgasBool test_2 = GGS_bool (ComparisonKind::greaterThan, extractedValue_12962_bitCount_3.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        temp_1 = GGS_string ("s") ;
      }else if (kBoolFalse == test_2) {
        temp_1 = GGS_string::makeEmptyString () ;
      }
      GGS_string temp_3 ;
      const enumGalgasBool test_4 = extractedValue_12947_unsigned_2.boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = GGS_string ("unsigned") ;
      }else if (kBoolFalse == test_4) {
        temp_3 = GGS_string ("signed") ;
      }
      result_result = GGS_string ("Integer (").add_operation (extractedValue_12962_bitCount_3.getter_string (SOURCE_FILE ("types.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 318)).add_operation (GGS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 318)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("types.galgas", 318)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 318)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("types.galgas", 319)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 319)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_compileTimeBool:
    {
      result_result = GGS_string ("Compile Time Bool") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_compileTimeInteger:
    {
      result_result = GGS_string ("Compile Time Integer") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_generic:
    {
      GGS_genericFormalParameterList extractedValue_13269__0 ;
      GGS_ctExpressionAST extractedValue_13269__1 ;
      GGS_llvmStringDefinition extractedValue_13269__2 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_generic (extractedValue_13269__0, extractedValue_13269__1, extractedValue_13269__2) ;
      result_result = GGS_string ("Generic Type") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_llvmType:
    {
      GGS_bigint extractedValue_13319__0 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_llvmType (extractedValue_13319__0) ;
      result_result = GGS_string ("LLVM Type") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_opaque:
    {
      GGS_bigint extractedValue_13372_bitCount_0 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_opaque (extractedValue_13372_bitCount_0) ;
      result_result = GGS_string ("Opaque (").add_operation (extractedValue_13372_bitCount_0.getter_string (SOURCE_FILE ("types.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 329)).add_operation (GGS_string (" bits)"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 329)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_staticArrayType:
    {
      GGS_omnibusType extractedValue_13454__0 ;
      GGS_bigint extractedValue_13456__1 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_staticArrayType (extractedValue_13454__0, extractedValue_13456__1) ;
      result_result = GGS_string ("Static array") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_dynamicArrayType:
    {
      GGS_omnibusType extractedValue_13514__0 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_dynamicArrayType (extractedValue_13514__0) ;
      result_result = GGS_string ("Dynamic array") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_function:
    {
      GGS_mode extractedValue_13566__0 ;
      GGS_routineTypedSignature extractedValue_13566__1 ;
      GGS_unifiedTypeMapEntry extractedValue_13566__2 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_function (extractedValue_13566__0, extractedValue_13566__1, extractedValue_13566__2) ;
      result_result = GGS_string ("Function") ;
    }
    break ;
  }
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_descriptionForHTMLFile (const cPtr_omnibusType * inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_descriptionForHTMLFile (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType arcList'
//
//--------------------------------------------------------------------------------------------------

GGS_arcAssignmentList cPtr_omnibusType::getter_arcList (const GGS_uintlist constinArgument_inPropertyIndexPath,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_arcAssignmentList result_result ; // Returned variable
  GGS_arcAssignmentList temp_0 = GGS_arcAssignmentList::init (inCompiler COMMA_SOURCE_FILE ("types.galgas", 350)) ;
  result_result = temp_0 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GGS_omnibusType temp_2 = this ;
    test_1 = temp_2.readProperty_kind ().getter_isDynamicArrayType (SOURCE_FILE ("types.galgas", 351)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GGS_omnibusType temp_3 = this ;
      result_result.addAssign_operation (GGS_string::makeEmptyString (), temp_3, constinArgument_inPropertyIndexPath  COMMA_SOURCE_FILE ("types.galgas", 352)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      const GGS_omnibusType temp_5 = this ;
      test_4 = temp_5.readProperty_kind ().getter_isStructure (SOURCE_FILE ("types.galgas", 353)).boolEnum () ;
      if (kBoolTrue == test_4) {
        GGS_propertyList var_propertyList_14283 ;
        const GGS_omnibusType temp_6 = this ;
        temp_6.readProperty_kind ().method_extractStructure (var_propertyList_14283, inCompiler COMMA_SOURCE_FILE ("types.galgas", 354)) ;
        cEnumerator_propertyList enumerator_14308 (var_propertyList_14283, EnumerationOrder::up) ;
        GGS_uint index_14301 (uint32_t (0)) ;
        while (enumerator_14308.hasCurrentObject ()) {
          GGS_uintlist temp_7 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("types.galgas", 356)) ;
          temp_7.enterElement (GGS_uintlist_2E_element::init_21_ (index_14301, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("types.galgas", 356)) ;
          GGS_uintlist var_indexPath_14357 = constinArgument_inPropertyIndexPath.add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("types.galgas", 356)) ;
          result_result.plusAssign_operation(callExtensionGetter_arcList ((const cPtr_omnibusType *) enumerator_14308.current_mType (HERE).ptr (), var_indexPath_14357, inCompiler COMMA_SOURCE_FILE ("types.galgas", 357)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 357)) ;
          enumerator_14308.gotoNextObject () ;
          index_14301.increment_operation (inCompiler  COMMA_SOURCE_FILE ("types.galgas", 355)) ;
        }
      }
    }
  }
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_arcAssignmentList callExtensionGetter_arcList (const cPtr_omnibusType * inObject,
                                                   const GGS_uintlist in_inPropertyIndexPath,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  GGS_arcAssignmentList result ;
  if (nullptr != inObject) {
    result = inObject->getter_arcList (in_inPropertyIndexPath, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType deinitNeeded'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_omnibusType::getter_deinitNeeded (Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  const GGS_omnibusType temp_0 = this ;
  result_result = temp_0.readProperty_kind ().getter_isDynamicArrayType (SOURCE_FILE ("types.galgas", 365)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GGS_omnibusType temp_2 = this ;
    test_1 = temp_2.readProperty_kind ().getter_isStructure (SOURCE_FILE ("types.galgas", 366)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GGS_propertyList var_propertyList_14779 ;
      const GGS_omnibusType temp_3 = this ;
      temp_3.readProperty_kind ().method_extractStructure (var_propertyList_14779, inCompiler COMMA_SOURCE_FILE ("types.galgas", 367)) ;
      cEnumerator_propertyList enumerator_14804 (var_propertyList_14779, EnumerationOrder::up) ;
      bool bool_4 = result_result.operator_not (SOURCE_FILE ("types.galgas", 368)).isValidAndTrue () ;
      if (enumerator_14804.hasCurrentObject () && bool_4) {
        while (enumerator_14804.hasCurrentObject () && bool_4) {
          result_result = callExtensionGetter_deinitNeeded ((const cPtr_omnibusType *) enumerator_14804.current_mType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 369)) ;
          enumerator_14804.gotoNextObject () ;
          if (enumerator_14804.hasCurrentObject ()) {
            bool_4 = result_result.operator_not (SOURCE_FILE ("types.galgas", 368)).isValidAndTrue () ;
          }
        }
      }
    }
  }
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_deinitNeeded (const cPtr_omnibusType * inObject,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_deinitNeeded (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @unifiedTypeMapElementClass reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unifiedTypeMapElementClass::objectCompare (const GGS_unifiedTypeMapElementClass & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass::GGS_unifiedTypeMapElementClass (void) :
AC_GALGAS_reference_class () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_unifiedTypeMapElementClass GGS_unifiedTypeMapElementClass::
init_21__21_ (const GGS_lstring & in_mTypeName,
              const GGS_typeDefinition & in_mDefinition,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_unifiedTypeMapElementClass * object = nullptr ;
  macroMyNew (object, cPtr_unifiedTypeMapElementClass (inCompiler COMMA_THERE)) ;
  object->unifiedTypeMapElementClass_init_21__21_ (in_mTypeName, in_mDefinition, inCompiler) ;
  const GGS_unifiedTypeMapElementClass result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_unifiedTypeMapElementClass::
unifiedTypeMapElementClass_init_21__21_ (const GGS_lstring & in_mTypeName,
                                         const GGS_typeDefinition & in_mDefinition,
                                         Compiler * /* inCompiler */) {
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mDefinition = in_mDefinition ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass::GGS_unifiedTypeMapElementClass (const cPtr_unifiedTypeMapElementClass * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_unifiedTypeMapElementClass) ;
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass GGS_unifiedTypeMapElementClass::class_func_new (const GGS_lstring & in_mTypeName,
                                                                               const GGS_typeDefinition & in_mDefinition,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeMapElementClass result ;
  macroMyNew (result.mObjectPtr, cPtr_unifiedTypeMapElementClass (in_mTypeName, in_mDefinition,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_unifiedTypeMapElementClass::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_unifiedTypeMapElementClass * p = (cPtr_unifiedTypeMapElementClass *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unifiedTypeMapElementClass) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapElementClass::setProperty_mTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_unifiedTypeMapElementClass * p = (cPtr_unifiedTypeMapElementClass *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unifiedTypeMapElementClass) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_typeDefinition GGS_unifiedTypeMapElementClass::readProperty_mDefinition (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_typeDefinition () ;
  }else{
    cPtr_unifiedTypeMapElementClass * p = (cPtr_unifiedTypeMapElementClass *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unifiedTypeMapElementClass) ;
    return p->mProperty_mDefinition ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapElementClass::setProperty_mDefinition (const GGS_typeDefinition & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_unifiedTypeMapElementClass * p = (cPtr_unifiedTypeMapElementClass *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unifiedTypeMapElementClass) ;
    p->mProperty_mDefinition = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @unifiedTypeMapElementClass class
//--------------------------------------------------------------------------------------------------

cPtr_unifiedTypeMapElementClass::cPtr_unifiedTypeMapElementClass (Compiler * inCompiler COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mDefinition () {
}

//--------------------------------------------------------------------------------------------------

cPtr_unifiedTypeMapElementClass::cPtr_unifiedTypeMapElementClass (const GGS_lstring & in_mTypeName,
                                                                  const GGS_typeDefinition & in_mDefinition,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mDefinition () {
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mDefinition = in_mDefinition ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_unifiedTypeMapElementClass::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapElementClass ;
}

void cPtr_unifiedTypeMapElementClass::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@unifiedTypeMapElementClass:") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDefinition.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_unifiedTypeMapElementClass::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_unifiedTypeMapElementClass (mProperty_mTypeName, mProperty_mDefinition, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_unifiedTypeMapElementClass::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mDefinition.printNonNullClassInstanceProperties ("mDefinition") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @unifiedTypeMapElementClass generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapElementClass ("unifiedTypeMapElementClass",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_unifiedTypeMapElementClass::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapElementClass ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unifiedTypeMapElementClass::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unifiedTypeMapElementClass (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass GGS_unifiedTypeMapElementClass::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeMapElementClass result ;
  const GGS_unifiedTypeMapElementClass * p = (const GGS_unifiedTypeMapElementClass *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unifiedTypeMapElementClass *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapElementClass", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @unifiedTypeMapElementClass_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass_3F_::GGS_unifiedTypeMapElementClass_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass_3F_::GGS_unifiedTypeMapElementClass_3F_ (const GGS_unifiedTypeMapElementClass & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass_3F_::GGS_unifiedTypeMapElementClass_3F_ (const GGS_unifiedTypeMapElementClass_2E_weak & inSource) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
  if (inSource.isValid ()) {
    const acStrongPtr_class * p = inSource.ptr () ;
    if (p == nullptr) {
      mState = OptionalState::isNil ;
    }else{
      mValue = * ((GGS_unifiedTypeMapElementClass *) p) ;
      mState = OptionalState::valuated ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass_3F_ GGS_unifiedTypeMapElementClass_3F_::init_nil (void) {
  GGS_unifiedTypeMapElementClass_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_unifiedTypeMapElementClass_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_unifiedTypeMapElementClass_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapElementClass_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_unifiedTypeMapElementClass () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unifiedTypeMapElementClass_3F_::objectCompare (const GGS_unifiedTypeMapElementClass_3F_ & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mState < inOperand.mState) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mState > inOperand.mState) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else if (mState == OptionalState::valuated) {
      result = mValue.objectCompare (inOperand.mValue) ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapElementClass_3F_::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @unifiedTypeMapElementClass? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapElementClass_3F_ ("unifiedTypeMapElementClass?",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_unifiedTypeMapElementClass_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapElementClass_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unifiedTypeMapElementClass_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unifiedTypeMapElementClass_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass_3F_ GGS_unifiedTypeMapElementClass_3F_::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeMapElementClass_3F_ result ;
  const GGS_unifiedTypeMapElementClass_3F_ * p = (const GGS_unifiedTypeMapElementClass_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unifiedTypeMapElementClass_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapElementClass?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapElementClass definition'
//
//--------------------------------------------------------------------------------------------------

GGS_omnibusType cPtr_unifiedTypeMapElementClass::getter_definition (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_omnibusType result_result ; // Returned variable
  const GGS_unifiedTypeMapElementClass temp_0 = this ;
  switch (temp_0.readProperty_mDefinition ().enumValue ()) {
  case GGS_typeDefinition::Enumeration::invalid:
    break ;
  case GGS_typeDefinition::Enumeration::enum_unsolved:
    {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("unified-type-map.galgas", 147)), GGS_string ("unsolved type"), fixItArray1  COMMA_SOURCE_FILE ("unified-type-map.galgas", 147)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_typeDefinition::Enumeration::enum_solved:
    {
      GGS_omnibusType extractedValue_5727_definition_0 ;
      temp_0.readProperty_mDefinition ().getAssociatedValuesFor_solved (extractedValue_5727_definition_0) ;
      result_result = extractedValue_5727_definition_0 ;
    }
    break ;
  }
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_omnibusType callExtensionGetter_definition (const cPtr_unifiedTypeMapElementClass * inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_omnibusType result ;
  if (nullptr != inObject) {
    result = inObject->getter_definition (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticTemporariesStruct::GGS_semanticTemporariesStruct (void) :
mProperty_mTemporaryIndex (),
mProperty_mPanicSetupRoutinePriorityMap (),
mProperty_mPanicLoopRoutinePriorityMap (),
mProperty_mStaticArrayMapForTemporaries (),
mProperty_mInitializedDriverSet () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticTemporariesStruct::~ GGS_semanticTemporariesStruct (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_semanticTemporariesStruct GGS_semanticTemporariesStruct::init (Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticTemporariesStruct result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticTemporariesStruct::setInitializedProperties (Compiler * inCompiler) {
  mProperty_mTemporaryIndex = GGS_uint (uint32_t (0U)) ;
GGS_panicRoutinePriorityMap temp_0 = GGS_panicRoutinePriorityMap::init (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 45)) ;
  mProperty_mPanicSetupRoutinePriorityMap = temp_0 ;
GGS_panicRoutinePriorityMap temp_1 = GGS_panicRoutinePriorityMap::init (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 46)) ;
  mProperty_mPanicLoopRoutinePriorityMap = temp_1 ;
GGS_staticListInvokedFunctionSetMap temp_2 = GGS_staticListInvokedFunctionSetMap::init (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 47)) ;
  mProperty_mStaticArrayMapForTemporaries = temp_2 ;
GGS_stringset temp_3 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 48)) ;
  mProperty_mInitializedDriverSet = temp_3 ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticTemporariesStruct::GGS_semanticTemporariesStruct (const GGS_uint & inOperand0,
                                                              const GGS_panicRoutinePriorityMap & inOperand1,
                                                              const GGS_panicRoutinePriorityMap & inOperand2,
                                                              const GGS_staticListInvokedFunctionSetMap & inOperand3,
                                                              const GGS_stringset & inOperand4) :
mProperty_mTemporaryIndex (inOperand0),
mProperty_mPanicSetupRoutinePriorityMap (inOperand1),
mProperty_mPanicLoopRoutinePriorityMap (inOperand2),
mProperty_mStaticArrayMapForTemporaries (inOperand3),
mProperty_mInitializedDriverSet (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticTemporariesStruct GGS_semanticTemporariesStruct::class_func_new (Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticTemporariesStruct result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_semanticTemporariesStruct::isValid (void) const {
  return mProperty_mTemporaryIndex.isValid () && mProperty_mPanicSetupRoutinePriorityMap.isValid () && mProperty_mPanicLoopRoutinePriorityMap.isValid () && mProperty_mStaticArrayMapForTemporaries.isValid () && mProperty_mInitializedDriverSet.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticTemporariesStruct::drop (void) {
  mProperty_mTemporaryIndex.drop () ;
  mProperty_mPanicSetupRoutinePriorityMap.drop () ;
  mProperty_mPanicLoopRoutinePriorityMap.drop () ;
  mProperty_mStaticArrayMapForTemporaries.drop () ;
  mProperty_mInitializedDriverSet.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticTemporariesStruct::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @semanticTemporariesStruct:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mTemporaryIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPanicSetupRoutinePriorityMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPanicLoopRoutinePriorityMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStaticArrayMapForTemporaries.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInitializedDriverSet.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @semanticTemporariesStruct generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticTemporariesStruct ("semanticTemporariesStruct",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_semanticTemporariesStruct::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticTemporariesStruct ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticTemporariesStruct::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticTemporariesStruct (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticTemporariesStruct GGS_semanticTemporariesStruct::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_semanticTemporariesStruct result ;
  const GGS_semanticTemporariesStruct * p = (const GGS_semanticTemporariesStruct *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticTemporariesStruct *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticTemporariesStruct", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticTemporariesStruct newTempLLVMVar'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_newTempLLVMVar (GGS_semanticTemporariesStruct & ioObject,
                                     GGS_string & outArgument_outTempLLVMVar,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTempLLVMVar.drop () ; // Release 'out' argument
  const GGS_semanticTemporariesStruct temp_0 = ioObject ;
  outArgument_outTempLLVMVar = GGS_string ("%temp.").add_operation (temp_0.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("semantic-analysis.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 54)) ;
  ioObject.mProperty_mTemporaryIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 55)) ;
}


//--------------------------------------------------------------------------------------------------
// @compileTimeBoolImplicitConverterToBoolean reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeBoolImplicitConverterToBoolean::objectCompare (const GGS_compileTimeBoolImplicitConverterToBoolean & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeBoolImplicitConverterToBoolean::GGS_compileTimeBoolImplicitConverterToBoolean (void) :
GGS_abstractImplicitConverterToBoolean () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_compileTimeBoolImplicitConverterToBoolean GGS_compileTimeBoolImplicitConverterToBoolean::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_compileTimeBoolImplicitConverterToBoolean * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeBoolImplicitConverterToBoolean (inCompiler COMMA_THERE)) ;
  object->compileTimeBoolImplicitConverterToBoolean_init (inCompiler) ;
  const GGS_compileTimeBoolImplicitConverterToBoolean result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeBoolImplicitConverterToBoolean::
compileTimeBoolImplicitConverterToBoolean_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeBoolImplicitConverterToBoolean::GGS_compileTimeBoolImplicitConverterToBoolean (const cPtr_compileTimeBoolImplicitConverterToBoolean * inSourcePtr) :
GGS_abstractImplicitConverterToBoolean (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeBoolImplicitConverterToBoolean) ;
}
//--------------------------------------------------------------------------------------------------

GGS_compileTimeBoolImplicitConverterToBoolean GGS_compileTimeBoolImplicitConverterToBoolean::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_compileTimeBoolImplicitConverterToBoolean result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeBoolImplicitConverterToBoolean (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeBoolImplicitConverterToBoolean class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_compileTimeBoolImplicitConverterToBoolean::cPtr_compileTimeBoolImplicitConverterToBoolean (Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractImplicitConverterToBoolean (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeBoolImplicitConverterToBoolean::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeBoolImplicitConverterToBoolean ;
}

void cPtr_compileTimeBoolImplicitConverterToBoolean::description (String & ioString,
                                                                  const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@compileTimeBoolImplicitConverterToBoolean]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeBoolImplicitConverterToBoolean::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeBoolImplicitConverterToBoolean (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeBoolImplicitConverterToBoolean::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractImplicitConverterToBoolean::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeBoolImplicitConverterToBoolean generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeBoolImplicitConverterToBoolean ("compileTimeBoolImplicitConverterToBoolean",
                                                                                                 & kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeBoolImplicitConverterToBoolean::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeBoolImplicitConverterToBoolean ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeBoolImplicitConverterToBoolean::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeBoolImplicitConverterToBoolean (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeBoolImplicitConverterToBoolean GGS_compileTimeBoolImplicitConverterToBoolean::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_compileTimeBoolImplicitConverterToBoolean result ;
  const GGS_compileTimeBoolImplicitConverterToBoolean * p = (const GGS_compileTimeBoolImplicitConverterToBoolean *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeBoolImplicitConverterToBoolean *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeBoolImplicitConverterToBoolean", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeBoolImplicitConverterToBoolean_2E_weak::objectCompare (const GGS_compileTimeBoolImplicitConverterToBoolean_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeBoolImplicitConverterToBoolean_2E_weak::GGS_compileTimeBoolImplicitConverterToBoolean_2E_weak (void) :
GGS_abstractImplicitConverterToBoolean_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeBoolImplicitConverterToBoolean_2E_weak & GGS_compileTimeBoolImplicitConverterToBoolean_2E_weak::operator = (const GGS_compileTimeBoolImplicitConverterToBoolean & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeBoolImplicitConverterToBoolean_2E_weak::GGS_compileTimeBoolImplicitConverterToBoolean_2E_weak (const GGS_compileTimeBoolImplicitConverterToBoolean & inSource) :
GGS_abstractImplicitConverterToBoolean_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_compileTimeBoolImplicitConverterToBoolean_2E_weak GGS_compileTimeBoolImplicitConverterToBoolean_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_compileTimeBoolImplicitConverterToBoolean_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeBoolImplicitConverterToBoolean GGS_compileTimeBoolImplicitConverterToBoolean_2E_weak::bang_compileTimeBoolImplicitConverterToBoolean_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_compileTimeBoolImplicitConverterToBoolean result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeBoolImplicitConverterToBoolean) ;
      result = GGS_compileTimeBoolImplicitConverterToBoolean ((cPtr_compileTimeBoolImplicitConverterToBoolean *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeBoolImplicitConverterToBoolean.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeBoolImplicitConverterToBoolean_2E_weak ("compileTimeBoolImplicitConverterToBoolean.weak",
                                                                                                         & kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeBoolImplicitConverterToBoolean_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeBoolImplicitConverterToBoolean_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeBoolImplicitConverterToBoolean_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeBoolImplicitConverterToBoolean_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeBoolImplicitConverterToBoolean_2E_weak GGS_compileTimeBoolImplicitConverterToBoolean_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_compileTimeBoolImplicitConverterToBoolean_2E_weak result ;
  const GGS_compileTimeBoolImplicitConverterToBoolean_2E_weak * p = (const GGS_compileTimeBoolImplicitConverterToBoolean_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeBoolImplicitConverterToBoolean_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeBoolImplicitConverterToBoolean.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeBoolNotOperator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeBoolNotOperator::objectCompare (const GGS_compileTimeBoolNotOperator & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeBoolNotOperator::GGS_compileTimeBoolNotOperator (void) :
GGS_prefixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_compileTimeBoolNotOperator GGS_compileTimeBoolNotOperator::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_compileTimeBoolNotOperator * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeBoolNotOperator (inCompiler COMMA_THERE)) ;
  object->compileTimeBoolNotOperator_init (inCompiler) ;
  const GGS_compileTimeBoolNotOperator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeBoolNotOperator::
compileTimeBoolNotOperator_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeBoolNotOperator::GGS_compileTimeBoolNotOperator (const cPtr_compileTimeBoolNotOperator * inSourcePtr) :
GGS_prefixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeBoolNotOperator) ;
}
//--------------------------------------------------------------------------------------------------

GGS_compileTimeBoolNotOperator GGS_compileTimeBoolNotOperator::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_compileTimeBoolNotOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeBoolNotOperator (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeBoolNotOperator class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_compileTimeBoolNotOperator::cPtr_compileTimeBoolNotOperator (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_prefixOperatorUsage (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeBoolNotOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeBoolNotOperator ;
}

void cPtr_compileTimeBoolNotOperator::description (String & ioString,
                                                   const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@compileTimeBoolNotOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeBoolNotOperator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeBoolNotOperator (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeBoolNotOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_prefixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeBoolNotOperator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeBoolNotOperator ("compileTimeBoolNotOperator",
                                                                                  & kTypeDescriptor_GALGAS_prefixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeBoolNotOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeBoolNotOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeBoolNotOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeBoolNotOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeBoolNotOperator GGS_compileTimeBoolNotOperator::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_compileTimeBoolNotOperator result ;
  const GGS_compileTimeBoolNotOperator * p = (const GGS_compileTimeBoolNotOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeBoolNotOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeBoolNotOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeBoolNotOperator_2E_weak::objectCompare (const GGS_compileTimeBoolNotOperator_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeBoolNotOperator_2E_weak::GGS_compileTimeBoolNotOperator_2E_weak (void) :
GGS_prefixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeBoolNotOperator_2E_weak & GGS_compileTimeBoolNotOperator_2E_weak::operator = (const GGS_compileTimeBoolNotOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeBoolNotOperator_2E_weak::GGS_compileTimeBoolNotOperator_2E_weak (const GGS_compileTimeBoolNotOperator & inSource) :
GGS_prefixOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_compileTimeBoolNotOperator_2E_weak GGS_compileTimeBoolNotOperator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_compileTimeBoolNotOperator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeBoolNotOperator GGS_compileTimeBoolNotOperator_2E_weak::bang_compileTimeBoolNotOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_compileTimeBoolNotOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeBoolNotOperator) ;
      result = GGS_compileTimeBoolNotOperator ((cPtr_compileTimeBoolNotOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeBoolNotOperator.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeBoolNotOperator_2E_weak ("compileTimeBoolNotOperator.weak",
                                                                                          & kTypeDescriptor_GALGAS_prefixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeBoolNotOperator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeBoolNotOperator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeBoolNotOperator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeBoolNotOperator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeBoolNotOperator_2E_weak GGS_compileTimeBoolNotOperator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_compileTimeBoolNotOperator_2E_weak result ;
  const GGS_compileTimeBoolNotOperator_2E_weak * p = (const GGS_compileTimeBoolNotOperator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeBoolNotOperator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeBoolNotOperator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeBoolEqualOperator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeBoolEqualOperator::objectCompare (const GGS_compileTimeBoolEqualOperator & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeBoolEqualOperator::GGS_compileTimeBoolEqualOperator (void) :
GGS_omnibusInfixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_compileTimeBoolEqualOperator GGS_compileTimeBoolEqualOperator::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_compileTimeBoolEqualOperator * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeBoolEqualOperator (inCompiler COMMA_THERE)) ;
  object->compileTimeBoolEqualOperator_init (inCompiler) ;
  const GGS_compileTimeBoolEqualOperator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeBoolEqualOperator::
compileTimeBoolEqualOperator_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeBoolEqualOperator::GGS_compileTimeBoolEqualOperator (const cPtr_compileTimeBoolEqualOperator * inSourcePtr) :
GGS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeBoolEqualOperator) ;
}
//--------------------------------------------------------------------------------------------------

GGS_compileTimeBoolEqualOperator GGS_compileTimeBoolEqualOperator::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_compileTimeBoolEqualOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeBoolEqualOperator (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeBoolEqualOperator class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_compileTimeBoolEqualOperator::cPtr_compileTimeBoolEqualOperator (Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeBoolEqualOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeBoolEqualOperator ;
}

void cPtr_compileTimeBoolEqualOperator::description (String & ioString,
                                                     const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@compileTimeBoolEqualOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeBoolEqualOperator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeBoolEqualOperator (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeBoolEqualOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeBoolEqualOperator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeBoolEqualOperator ("compileTimeBoolEqualOperator",
                                                                                    & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeBoolEqualOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeBoolEqualOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeBoolEqualOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeBoolEqualOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeBoolEqualOperator GGS_compileTimeBoolEqualOperator::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_compileTimeBoolEqualOperator result ;
  const GGS_compileTimeBoolEqualOperator * p = (const GGS_compileTimeBoolEqualOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeBoolEqualOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeBoolEqualOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeBoolEqualOperator_2E_weak::objectCompare (const GGS_compileTimeBoolEqualOperator_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeBoolEqualOperator_2E_weak::GGS_compileTimeBoolEqualOperator_2E_weak (void) :
GGS_omnibusInfixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeBoolEqualOperator_2E_weak & GGS_compileTimeBoolEqualOperator_2E_weak::operator = (const GGS_compileTimeBoolEqualOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeBoolEqualOperator_2E_weak::GGS_compileTimeBoolEqualOperator_2E_weak (const GGS_compileTimeBoolEqualOperator & inSource) :
GGS_omnibusInfixOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_compileTimeBoolEqualOperator_2E_weak GGS_compileTimeBoolEqualOperator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_compileTimeBoolEqualOperator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeBoolEqualOperator GGS_compileTimeBoolEqualOperator_2E_weak::bang_compileTimeBoolEqualOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_compileTimeBoolEqualOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeBoolEqualOperator) ;
      result = GGS_compileTimeBoolEqualOperator ((cPtr_compileTimeBoolEqualOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeBoolEqualOperator.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeBoolEqualOperator_2E_weak ("compileTimeBoolEqualOperator.weak",
                                                                                            & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeBoolEqualOperator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeBoolEqualOperator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeBoolEqualOperator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeBoolEqualOperator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeBoolEqualOperator_2E_weak GGS_compileTimeBoolEqualOperator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_compileTimeBoolEqualOperator_2E_weak result ;
  const GGS_compileTimeBoolEqualOperator_2E_weak * p = (const GGS_compileTimeBoolEqualOperator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeBoolEqualOperator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeBoolEqualOperator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @typeAliasDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeAliasDeclarationAST::objectCompare (const GGS_typeAliasDeclarationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeAliasDeclarationAST::GGS_typeAliasDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_typeAliasDeclarationAST GGS_typeAliasDeclarationAST::
init_21__21_ (const GGS_lstring & in_mAliasTypeName,
              const GGS_lstring & in_mOriginalTypeName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_typeAliasDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_typeAliasDeclarationAST (inCompiler COMMA_THERE)) ;
  object->typeAliasDeclarationAST_init_21__21_ (in_mAliasTypeName, in_mOriginalTypeName, inCompiler) ;
  const GGS_typeAliasDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_typeAliasDeclarationAST::
typeAliasDeclarationAST_init_21__21_ (const GGS_lstring & in_mAliasTypeName,
                                      const GGS_lstring & in_mOriginalTypeName,
                                      Compiler * /* inCompiler */) {
  mProperty_mAliasTypeName = in_mAliasTypeName ;
  mProperty_mOriginalTypeName = in_mOriginalTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeAliasDeclarationAST::GGS_typeAliasDeclarationAST (const cPtr_typeAliasDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typeAliasDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_typeAliasDeclarationAST GGS_typeAliasDeclarationAST::class_func_new (const GGS_lstring & in_mAliasTypeName,
                                                                         const GGS_lstring & in_mOriginalTypeName,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  GGS_typeAliasDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_typeAliasDeclarationAST (in_mAliasTypeName, in_mOriginalTypeName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_typeAliasDeclarationAST::readProperty_mAliasTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_typeAliasDeclarationAST * p = (cPtr_typeAliasDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeAliasDeclarationAST) ;
    return p->mProperty_mAliasTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeAliasDeclarationAST::setProperty_mAliasTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_typeAliasDeclarationAST * p = (cPtr_typeAliasDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeAliasDeclarationAST) ;
    p->mProperty_mAliasTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_typeAliasDeclarationAST::readProperty_mOriginalTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_typeAliasDeclarationAST * p = (cPtr_typeAliasDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeAliasDeclarationAST) ;
    return p->mProperty_mOriginalTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeAliasDeclarationAST::setProperty_mOriginalTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_typeAliasDeclarationAST * p = (cPtr_typeAliasDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeAliasDeclarationAST) ;
    p->mProperty_mOriginalTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @typeAliasDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_typeAliasDeclarationAST::cPtr_typeAliasDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mAliasTypeName (),
mProperty_mOriginalTypeName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_typeAliasDeclarationAST::cPtr_typeAliasDeclarationAST (const GGS_lstring & in_mAliasTypeName,
                                                            const GGS_lstring & in_mOriginalTypeName,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mAliasTypeName (),
mProperty_mOriginalTypeName () {
  mProperty_mAliasTypeName = in_mAliasTypeName ;
  mProperty_mOriginalTypeName = in_mOriginalTypeName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_typeAliasDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeAliasDeclarationAST ;
}

void cPtr_typeAliasDeclarationAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@typeAliasDeclarationAST:") ;
  mProperty_mAliasTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOriginalTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_typeAliasDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_typeAliasDeclarationAST (mProperty_mAliasTypeName, mProperty_mOriginalTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_typeAliasDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mAliasTypeName.printNonNullClassInstanceProperties ("mAliasTypeName") ;
    mProperty_mOriginalTypeName.printNonNullClassInstanceProperties ("mOriginalTypeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @typeAliasDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeAliasDeclarationAST ("typeAliasDeclarationAST",
                                                                               & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeAliasDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeAliasDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeAliasDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeAliasDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeAliasDeclarationAST GGS_typeAliasDeclarationAST::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_typeAliasDeclarationAST result ;
  const GGS_typeAliasDeclarationAST * p = (const GGS_typeAliasDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeAliasDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeAliasDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @fixedSizeArrayTypeDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_fixedSizeArrayTypeDeclarationAST::objectCompare (const GGS_fixedSizeArrayTypeDeclarationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixedSizeArrayTypeDeclarationAST::GGS_fixedSizeArrayTypeDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_fixedSizeArrayTypeDeclarationAST GGS_fixedSizeArrayTypeDeclarationAST::
init_21__21__21__21_ (const GGS_lstring & in_mFixedSizeArrayType,
                      const GGS_lstring & in_mElementTypeName,
                      const GGS_expressionAST & in_mSizeExpression,
                      const GGS_location & in_mSizeExpressionLocation,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_fixedSizeArrayTypeDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_fixedSizeArrayTypeDeclarationAST (inCompiler COMMA_THERE)) ;
  object->fixedSizeArrayTypeDeclarationAST_init_21__21__21__21_ (in_mFixedSizeArrayType, in_mElementTypeName, in_mSizeExpression, in_mSizeExpressionLocation, inCompiler) ;
  const GGS_fixedSizeArrayTypeDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_fixedSizeArrayTypeDeclarationAST::
fixedSizeArrayTypeDeclarationAST_init_21__21__21__21_ (const GGS_lstring & in_mFixedSizeArrayType,
                                                       const GGS_lstring & in_mElementTypeName,
                                                       const GGS_expressionAST & in_mSizeExpression,
                                                       const GGS_location & in_mSizeExpressionLocation,
                                                       Compiler * /* inCompiler */) {
  mProperty_mFixedSizeArrayType = in_mFixedSizeArrayType ;
  mProperty_mElementTypeName = in_mElementTypeName ;
  mProperty_mSizeExpression = in_mSizeExpression ;
  mProperty_mSizeExpressionLocation = in_mSizeExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixedSizeArrayTypeDeclarationAST::GGS_fixedSizeArrayTypeDeclarationAST (const cPtr_fixedSizeArrayTypeDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_fixedSizeArrayTypeDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_fixedSizeArrayTypeDeclarationAST GGS_fixedSizeArrayTypeDeclarationAST::class_func_new (const GGS_lstring & in_mFixedSizeArrayType,
                                                                                           const GGS_lstring & in_mElementTypeName,
                                                                                           const GGS_expressionAST & in_mSizeExpression,
                                                                                           const GGS_location & in_mSizeExpressionLocation,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_fixedSizeArrayTypeDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_fixedSizeArrayTypeDeclarationAST (in_mFixedSizeArrayType, in_mElementTypeName, in_mSizeExpression, in_mSizeExpressionLocation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_fixedSizeArrayTypeDeclarationAST::readProperty_mFixedSizeArrayType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_fixedSizeArrayTypeDeclarationAST * p = (cPtr_fixedSizeArrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayTypeDeclarationAST) ;
    return p->mProperty_mFixedSizeArrayType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fixedSizeArrayTypeDeclarationAST::setProperty_mFixedSizeArrayType (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_fixedSizeArrayTypeDeclarationAST * p = (cPtr_fixedSizeArrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayTypeDeclarationAST) ;
    p->mProperty_mFixedSizeArrayType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_fixedSizeArrayTypeDeclarationAST::readProperty_mElementTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_fixedSizeArrayTypeDeclarationAST * p = (cPtr_fixedSizeArrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayTypeDeclarationAST) ;
    return p->mProperty_mElementTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fixedSizeArrayTypeDeclarationAST::setProperty_mElementTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_fixedSizeArrayTypeDeclarationAST * p = (cPtr_fixedSizeArrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayTypeDeclarationAST) ;
    p->mProperty_mElementTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_fixedSizeArrayTypeDeclarationAST::readProperty_mSizeExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_fixedSizeArrayTypeDeclarationAST * p = (cPtr_fixedSizeArrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayTypeDeclarationAST) ;
    return p->mProperty_mSizeExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fixedSizeArrayTypeDeclarationAST::setProperty_mSizeExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_fixedSizeArrayTypeDeclarationAST * p = (cPtr_fixedSizeArrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayTypeDeclarationAST) ;
    p->mProperty_mSizeExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_fixedSizeArrayTypeDeclarationAST::readProperty_mSizeExpressionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_fixedSizeArrayTypeDeclarationAST * p = (cPtr_fixedSizeArrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayTypeDeclarationAST) ;
    return p->mProperty_mSizeExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fixedSizeArrayTypeDeclarationAST::setProperty_mSizeExpressionLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_fixedSizeArrayTypeDeclarationAST * p = (cPtr_fixedSizeArrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayTypeDeclarationAST) ;
    p->mProperty_mSizeExpressionLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @fixedSizeArrayTypeDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_fixedSizeArrayTypeDeclarationAST::cPtr_fixedSizeArrayTypeDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mFixedSizeArrayType (),
mProperty_mElementTypeName (),
mProperty_mSizeExpression (),
mProperty_mSizeExpressionLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_fixedSizeArrayTypeDeclarationAST::cPtr_fixedSizeArrayTypeDeclarationAST (const GGS_lstring & in_mFixedSizeArrayType,
                                                                              const GGS_lstring & in_mElementTypeName,
                                                                              const GGS_expressionAST & in_mSizeExpression,
                                                                              const GGS_location & in_mSizeExpressionLocation,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mFixedSizeArrayType (),
mProperty_mElementTypeName (),
mProperty_mSizeExpression (),
mProperty_mSizeExpressionLocation () {
  mProperty_mFixedSizeArrayType = in_mFixedSizeArrayType ;
  mProperty_mElementTypeName = in_mElementTypeName ;
  mProperty_mSizeExpression = in_mSizeExpression ;
  mProperty_mSizeExpressionLocation = in_mSizeExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_fixedSizeArrayTypeDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixedSizeArrayTypeDeclarationAST ;
}

void cPtr_fixedSizeArrayTypeDeclarationAST::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@fixedSizeArrayTypeDeclarationAST:") ;
  mProperty_mFixedSizeArrayType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElementTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSizeExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSizeExpressionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_fixedSizeArrayTypeDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_fixedSizeArrayTypeDeclarationAST (mProperty_mFixedSizeArrayType, mProperty_mElementTypeName, mProperty_mSizeExpression, mProperty_mSizeExpressionLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_fixedSizeArrayTypeDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mFixedSizeArrayType.printNonNullClassInstanceProperties ("mFixedSizeArrayType") ;
    mProperty_mElementTypeName.printNonNullClassInstanceProperties ("mElementTypeName") ;
    mProperty_mSizeExpression.printNonNullClassInstanceProperties ("mSizeExpression") ;
    mProperty_mSizeExpressionLocation.printNonNullClassInstanceProperties ("mSizeExpressionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @fixedSizeArrayTypeDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixedSizeArrayTypeDeclarationAST ("fixedSizeArrayTypeDeclarationAST",
                                                                                        & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_fixedSizeArrayTypeDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixedSizeArrayTypeDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixedSizeArrayTypeDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixedSizeArrayTypeDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixedSizeArrayTypeDeclarationAST GGS_fixedSizeArrayTypeDeclarationAST::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_fixedSizeArrayTypeDeclarationAST result ;
  const GGS_fixedSizeArrayTypeDeclarationAST * p = (const GGS_fixedSizeArrayTypeDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixedSizeArrayTypeDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixedSizeArrayTypeDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @userLLVMStaticArrayTypeDefinitionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_userLLVMStaticArrayTypeDefinitionIR::objectCompare (const GGS_userLLVMStaticArrayTypeDefinitionIR & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMStaticArrayTypeDefinitionIR::GGS_userLLVMStaticArrayTypeDefinitionIR (void) :
GGS_userLLVMTypeDefinitionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_userLLVMStaticArrayTypeDefinitionIR GGS_userLLVMStaticArrayTypeDefinitionIR::
init_21__21__21_ (const GGS_string & in_mLLVMDefinedTypeName,
                  const GGS_omnibusType & in_mElementType,
                  const GGS_bigint & in_mSize,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_userLLVMStaticArrayTypeDefinitionIR * object = nullptr ;
  macroMyNew (object, cPtr_userLLVMStaticArrayTypeDefinitionIR (inCompiler COMMA_THERE)) ;
  object->userLLVMStaticArrayTypeDefinitionIR_init_21__21__21_ (in_mLLVMDefinedTypeName, in_mElementType, in_mSize, inCompiler) ;
  const GGS_userLLVMStaticArrayTypeDefinitionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_userLLVMStaticArrayTypeDefinitionIR::
userLLVMStaticArrayTypeDefinitionIR_init_21__21__21_ (const GGS_string & in_mLLVMDefinedTypeName,
                                                      const GGS_omnibusType & in_mElementType,
                                                      const GGS_bigint & in_mSize,
                                                      Compiler * /* inCompiler */) {
  mProperty_mLLVMDefinedTypeName = in_mLLVMDefinedTypeName ;
  mProperty_mElementType = in_mElementType ;
  mProperty_mSize = in_mSize ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMStaticArrayTypeDefinitionIR::GGS_userLLVMStaticArrayTypeDefinitionIR (const cPtr_userLLVMStaticArrayTypeDefinitionIR * inSourcePtr) :
GGS_userLLVMTypeDefinitionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_userLLVMStaticArrayTypeDefinitionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_userLLVMStaticArrayTypeDefinitionIR GGS_userLLVMStaticArrayTypeDefinitionIR::class_func_new (const GGS_string & in_mLLVMDefinedTypeName,
                                                                                                 const GGS_omnibusType & in_mElementType,
                                                                                                 const GGS_bigint & in_mSize,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_userLLVMStaticArrayTypeDefinitionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_userLLVMStaticArrayTypeDefinitionIR (in_mLLVMDefinedTypeName, in_mElementType, in_mSize,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_userLLVMStaticArrayTypeDefinitionIR::readProperty_mElementType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_userLLVMStaticArrayTypeDefinitionIR * p = (cPtr_userLLVMStaticArrayTypeDefinitionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_userLLVMStaticArrayTypeDefinitionIR) ;
    return p->mProperty_mElementType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_userLLVMStaticArrayTypeDefinitionIR::setProperty_mElementType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_userLLVMStaticArrayTypeDefinitionIR * p = (cPtr_userLLVMStaticArrayTypeDefinitionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_userLLVMStaticArrayTypeDefinitionIR) ;
    p->mProperty_mElementType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_userLLVMStaticArrayTypeDefinitionIR::readProperty_mSize (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bigint () ;
  }else{
    cPtr_userLLVMStaticArrayTypeDefinitionIR * p = (cPtr_userLLVMStaticArrayTypeDefinitionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_userLLVMStaticArrayTypeDefinitionIR) ;
    return p->mProperty_mSize ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_userLLVMStaticArrayTypeDefinitionIR::setProperty_mSize (const GGS_bigint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_userLLVMStaticArrayTypeDefinitionIR * p = (cPtr_userLLVMStaticArrayTypeDefinitionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_userLLVMStaticArrayTypeDefinitionIR) ;
    p->mProperty_mSize = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @userLLVMStaticArrayTypeDefinitionIR class
//--------------------------------------------------------------------------------------------------

cPtr_userLLVMStaticArrayTypeDefinitionIR::cPtr_userLLVMStaticArrayTypeDefinitionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_userLLVMTypeDefinitionIR (inCompiler COMMA_THERE),
mProperty_mElementType (),
mProperty_mSize () {
}

//--------------------------------------------------------------------------------------------------

cPtr_userLLVMStaticArrayTypeDefinitionIR::cPtr_userLLVMStaticArrayTypeDefinitionIR (const GGS_string & in_mLLVMDefinedTypeName,
                                                                                    const GGS_omnibusType & in_mElementType,
                                                                                    const GGS_bigint & in_mSize,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_userLLVMTypeDefinitionIR (in_mLLVMDefinedTypeName, inCompiler COMMA_THERE),
mProperty_mElementType (),
mProperty_mSize () {
  mProperty_mLLVMDefinedTypeName = in_mLLVMDefinedTypeName ;
  mProperty_mElementType = in_mElementType ;
  mProperty_mSize = in_mSize ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_userLLVMStaticArrayTypeDefinitionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_userLLVMStaticArrayTypeDefinitionIR ;
}

void cPtr_userLLVMStaticArrayTypeDefinitionIR::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@userLLVMStaticArrayTypeDefinitionIR:") ;
  mProperty_mLLVMDefinedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElementType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSize.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_userLLVMStaticArrayTypeDefinitionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_userLLVMStaticArrayTypeDefinitionIR (mProperty_mLLVMDefinedTypeName, mProperty_mElementType, mProperty_mSize, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_userLLVMStaticArrayTypeDefinitionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_userLLVMTypeDefinitionIR::printNonNullClassInstanceProperties () ;
    mProperty_mElementType.printNonNullClassInstanceProperties ("mElementType") ;
    mProperty_mSize.printNonNullClassInstanceProperties ("mSize") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @userLLVMStaticArrayTypeDefinitionIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_userLLVMStaticArrayTypeDefinitionIR ("userLLVMStaticArrayTypeDefinitionIR",
                                                                                           & kTypeDescriptor_GALGAS_userLLVMTypeDefinitionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_userLLVMStaticArrayTypeDefinitionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_userLLVMStaticArrayTypeDefinitionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_userLLVMStaticArrayTypeDefinitionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_userLLVMStaticArrayTypeDefinitionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMStaticArrayTypeDefinitionIR GGS_userLLVMStaticArrayTypeDefinitionIR::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_userLLVMStaticArrayTypeDefinitionIR result ;
  const GGS_userLLVMStaticArrayTypeDefinitionIR * p = (const GGS_userLLVMStaticArrayTypeDefinitionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_userLLVMStaticArrayTypeDefinitionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("userLLVMStaticArrayTypeDefinitionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @fixedSizeArrayAssignmentOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_fixedSizeArrayAssignmentOperatorUsage::objectCompare (const GGS_fixedSizeArrayAssignmentOperatorUsage & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixedSizeArrayAssignmentOperatorUsage::GGS_fixedSizeArrayAssignmentOperatorUsage (void) :
GGS_abstractAssignmentOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_fixedSizeArrayAssignmentOperatorUsage GGS_fixedSizeArrayAssignmentOperatorUsage::
init_21__21__21_ (const GGS_omnibusType & in_mElementType,
                  const GGS_uint & in_mArraySize,
                  const GGS_string & in_mAssignValueToElements_5F_functionName,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_fixedSizeArrayAssignmentOperatorUsage * object = nullptr ;
  macroMyNew (object, cPtr_fixedSizeArrayAssignmentOperatorUsage (inCompiler COMMA_THERE)) ;
  object->fixedSizeArrayAssignmentOperatorUsage_init_21__21__21_ (in_mElementType, in_mArraySize, in_mAssignValueToElements_5F_functionName, inCompiler) ;
  const GGS_fixedSizeArrayAssignmentOperatorUsage result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_fixedSizeArrayAssignmentOperatorUsage::
fixedSizeArrayAssignmentOperatorUsage_init_21__21__21_ (const GGS_omnibusType & in_mElementType,
                                                        const GGS_uint & in_mArraySize,
                                                        const GGS_string & in_mAssignValueToElements_5F_functionName,
                                                        Compiler * /* inCompiler */) {
  mProperty_mElementType = in_mElementType ;
  mProperty_mArraySize = in_mArraySize ;
  mProperty_mAssignValueToElements_5F_functionName = in_mAssignValueToElements_5F_functionName ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixedSizeArrayAssignmentOperatorUsage::GGS_fixedSizeArrayAssignmentOperatorUsage (const cPtr_fixedSizeArrayAssignmentOperatorUsage * inSourcePtr) :
GGS_abstractAssignmentOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_fixedSizeArrayAssignmentOperatorUsage) ;
}
//--------------------------------------------------------------------------------------------------

GGS_fixedSizeArrayAssignmentOperatorUsage GGS_fixedSizeArrayAssignmentOperatorUsage::class_func_new (const GGS_omnibusType & in_mElementType,
                                                                                                     const GGS_uint & in_mArraySize,
                                                                                                     const GGS_string & in_mAssignValueToElements_5F_functionName,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_fixedSizeArrayAssignmentOperatorUsage result ;
  macroMyNew (result.mObjectPtr, cPtr_fixedSizeArrayAssignmentOperatorUsage (in_mElementType, in_mArraySize, in_mAssignValueToElements_5F_functionName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_fixedSizeArrayAssignmentOperatorUsage::readProperty_mElementType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_fixedSizeArrayAssignmentOperatorUsage * p = (cPtr_fixedSizeArrayAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayAssignmentOperatorUsage) ;
    return p->mProperty_mElementType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fixedSizeArrayAssignmentOperatorUsage::setProperty_mElementType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_fixedSizeArrayAssignmentOperatorUsage * p = (cPtr_fixedSizeArrayAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayAssignmentOperatorUsage) ;
    p->mProperty_mElementType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_fixedSizeArrayAssignmentOperatorUsage::readProperty_mArraySize (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_fixedSizeArrayAssignmentOperatorUsage * p = (cPtr_fixedSizeArrayAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayAssignmentOperatorUsage) ;
    return p->mProperty_mArraySize ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fixedSizeArrayAssignmentOperatorUsage::setProperty_mArraySize (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_fixedSizeArrayAssignmentOperatorUsage * p = (cPtr_fixedSizeArrayAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayAssignmentOperatorUsage) ;
    p->mProperty_mArraySize = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_fixedSizeArrayAssignmentOperatorUsage::readProperty_mAssignValueToElements_5F_functionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_fixedSizeArrayAssignmentOperatorUsage * p = (cPtr_fixedSizeArrayAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayAssignmentOperatorUsage) ;
    return p->mProperty_mAssignValueToElements_5F_functionName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fixedSizeArrayAssignmentOperatorUsage::setProperty_mAssignValueToElements_5F_functionName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_fixedSizeArrayAssignmentOperatorUsage * p = (cPtr_fixedSizeArrayAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayAssignmentOperatorUsage) ;
    p->mProperty_mAssignValueToElements_5F_functionName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @fixedSizeArrayAssignmentOperatorUsage class
//--------------------------------------------------------------------------------------------------

cPtr_fixedSizeArrayAssignmentOperatorUsage::cPtr_fixedSizeArrayAssignmentOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractAssignmentOperatorUsage (inCompiler COMMA_THERE),
mProperty_mElementType (),
mProperty_mArraySize (),
mProperty_mAssignValueToElements_5F_functionName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_fixedSizeArrayAssignmentOperatorUsage::cPtr_fixedSizeArrayAssignmentOperatorUsage (const GGS_omnibusType & in_mElementType,
                                                                                        const GGS_uint & in_mArraySize,
                                                                                        const GGS_string & in_mAssignValueToElements_5F_functionName,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractAssignmentOperatorUsage (inCompiler COMMA_THERE),
mProperty_mElementType (),
mProperty_mArraySize (),
mProperty_mAssignValueToElements_5F_functionName () {
  mProperty_mElementType = in_mElementType ;
  mProperty_mArraySize = in_mArraySize ;
  mProperty_mAssignValueToElements_5F_functionName = in_mAssignValueToElements_5F_functionName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_fixedSizeArrayAssignmentOperatorUsage::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixedSizeArrayAssignmentOperatorUsage ;
}

void cPtr_fixedSizeArrayAssignmentOperatorUsage::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@fixedSizeArrayAssignmentOperatorUsage:") ;
  mProperty_mElementType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mArraySize.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAssignValueToElements_5F_functionName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_fixedSizeArrayAssignmentOperatorUsage::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_fixedSizeArrayAssignmentOperatorUsage (mProperty_mElementType, mProperty_mArraySize, mProperty_mAssignValueToElements_5F_functionName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_fixedSizeArrayAssignmentOperatorUsage::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractAssignmentOperatorUsage::printNonNullClassInstanceProperties () ;
    mProperty_mElementType.printNonNullClassInstanceProperties ("mElementType") ;
    mProperty_mArraySize.printNonNullClassInstanceProperties ("mArraySize") ;
    mProperty_mAssignValueToElements_5F_functionName.printNonNullClassInstanceProperties ("mAssignValueToElements_functionName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @fixedSizeArrayAssignmentOperatorUsage generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixedSizeArrayAssignmentOperatorUsage ("fixedSizeArrayAssignmentOperatorUsage",
                                                                                             & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_fixedSizeArrayAssignmentOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixedSizeArrayAssignmentOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixedSizeArrayAssignmentOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixedSizeArrayAssignmentOperatorUsage (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixedSizeArrayAssignmentOperatorUsage GGS_fixedSizeArrayAssignmentOperatorUsage::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_fixedSizeArrayAssignmentOperatorUsage result ;
  const GGS_fixedSizeArrayAssignmentOperatorUsage * p = (const GGS_fixedSizeArrayAssignmentOperatorUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixedSizeArrayAssignmentOperatorUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixedSizeArrayAssignmentOperatorUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak::objectCompare (const GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak::GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak (void) :
GGS_abstractAssignmentOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak & GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak::operator = (const GGS_fixedSizeArrayAssignmentOperatorUsage & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak::GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak (const GGS_fixedSizeArrayAssignmentOperatorUsage & inSource) :
GGS_abstractAssignmentOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixedSizeArrayAssignmentOperatorUsage GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak::bang_fixedSizeArrayAssignmentOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_fixedSizeArrayAssignmentOperatorUsage result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_fixedSizeArrayAssignmentOperatorUsage) ;
      result = GGS_fixedSizeArrayAssignmentOperatorUsage ((cPtr_fixedSizeArrayAssignmentOperatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @fixedSizeArrayAssignmentOperatorUsage.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixedSizeArrayAssignmentOperatorUsage_2E_weak ("fixedSizeArrayAssignmentOperatorUsage.weak",
                                                                                                     & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixedSizeArrayAssignmentOperatorUsage_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak result ;
  const GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak * p = (const GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixedSizeArrayAssignmentOperatorUsage.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractRoutineIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractRoutineIR::objectCompare (const GGS_abstractRoutineIR & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractRoutineIR::GGS_abstractRoutineIR (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractRoutineIR::GGS_abstractRoutineIR (const cPtr_abstractRoutineIR * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractRoutineIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_abstractRoutineIR::readProperty_mRoutineMangledName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_abstractRoutineIR * p = (cPtr_abstractRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractRoutineIR) ;
    return p->mProperty_mRoutineMangledName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_abstractRoutineIR::setProperty_mRoutineMangledName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_abstractRoutineIR * p = (cPtr_abstractRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractRoutineIR) ;
    p->mProperty_mRoutineMangledName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_abstractRoutineIR::readProperty_isRequired (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_abstractRoutineIR * p = (cPtr_abstractRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractRoutineIR) ;
    return p->mProperty_isRequired ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_abstractRoutineIR::setProperty_isRequired (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_abstractRoutineIR * p = (cPtr_abstractRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractRoutineIR) ;
    p->mProperty_isRequired = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_abstractRoutineIR::readProperty_warnsIfUnused (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_abstractRoutineIR * p = (cPtr_abstractRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractRoutineIR) ;
    return p->mProperty_warnsIfUnused ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_abstractRoutineIR::setProperty_warnsIfUnused (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_abstractRoutineIR * p = (cPtr_abstractRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractRoutineIR) ;
    p->mProperty_warnsIfUnused = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractRoutineIR class
//--------------------------------------------------------------------------------------------------

cPtr_abstractRoutineIR::cPtr_abstractRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mRoutineMangledName (),
mProperty_isRequired (),
mProperty_warnsIfUnused () {
}

//--------------------------------------------------------------------------------------------------

cPtr_abstractRoutineIR::cPtr_abstractRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                                const GGS_bool & in_isRequired,
                                                const GGS_bool & in_warnsIfUnused,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mRoutineMangledName (),
mProperty_isRequired (),
mProperty_warnsIfUnused () {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractRoutineIR::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_mRoutineMangledName.printNonNullClassInstanceProperties ("mRoutineMangledName") ;
    mProperty_isRequired.printNonNullClassInstanceProperties ("isRequired") ;
    mProperty_warnsIfUnused.printNonNullClassInstanceProperties ("warnsIfUnused") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @abstractRoutineIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractRoutineIR ("abstractRoutineIR",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_abstractRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractRoutineIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractRoutineIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractRoutineIR GGS_abstractRoutineIR::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_abstractRoutineIR result ;
  const GGS_abstractRoutineIR * p = (const GGS_abstractRoutineIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak::objectCompare (const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak::GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak & GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak::operator = (const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak::GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak (const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR & inSource) :
GGS_abstractRoutineIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak::bang_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR) ;
      result = GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR ((cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @assignRepeatedValueToFixedSizeArrayElementsFunctionIR.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak ("assignRepeatedValueToFixedSizeArrayElementsFunctionIR.weak",
                                                                                                                     & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak result ;
  const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak * p = (const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignRepeatedValueToFixedSizeArrayElementsFunctionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @staticArrayTypeAssignFunctionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_staticArrayTypeAssignFunctionIR::objectCompare (const GGS_staticArrayTypeAssignFunctionIR & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticArrayTypeAssignFunctionIR::GGS_staticArrayTypeAssignFunctionIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_staticArrayTypeAssignFunctionIR GGS_staticArrayTypeAssignFunctionIR::
init_21__21_isRequired_21_warnsIfUnused_21_ (const GGS_lstring & in_mRoutineMangledName,
                                             const GGS_bool & in_isRequired,
                                             const GGS_bool & in_warnsIfUnused,
                                             const GGS_omnibusType & in_mFixedSizeArrayType,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cPtr_staticArrayTypeAssignFunctionIR * object = nullptr ;
  macroMyNew (object, cPtr_staticArrayTypeAssignFunctionIR (inCompiler COMMA_THERE)) ;
  object->staticArrayTypeAssignFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mFixedSizeArrayType, inCompiler) ;
  const GGS_staticArrayTypeAssignFunctionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_staticArrayTypeAssignFunctionIR::
staticArrayTypeAssignFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21_ (const GGS_lstring & in_mRoutineMangledName,
                                                                             const GGS_bool & in_isRequired,
                                                                             const GGS_bool & in_warnsIfUnused,
                                                                             const GGS_omnibusType & in_mFixedSizeArrayType,
                                                                             Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mFixedSizeArrayType = in_mFixedSizeArrayType ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticArrayTypeAssignFunctionIR::GGS_staticArrayTypeAssignFunctionIR (const cPtr_staticArrayTypeAssignFunctionIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_staticArrayTypeAssignFunctionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_staticArrayTypeAssignFunctionIR GGS_staticArrayTypeAssignFunctionIR::class_func_new (const GGS_lstring & in_mRoutineMangledName,
                                                                                         const GGS_bool & in_isRequired,
                                                                                         const GGS_bool & in_warnsIfUnused,
                                                                                         const GGS_omnibusType & in_mFixedSizeArrayType,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  GGS_staticArrayTypeAssignFunctionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_staticArrayTypeAssignFunctionIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mFixedSizeArrayType,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_staticArrayTypeAssignFunctionIR::readProperty_mFixedSizeArrayType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_staticArrayTypeAssignFunctionIR * p = (cPtr_staticArrayTypeAssignFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticArrayTypeAssignFunctionIR) ;
    return p->mProperty_mFixedSizeArrayType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_staticArrayTypeAssignFunctionIR::setProperty_mFixedSizeArrayType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_staticArrayTypeAssignFunctionIR * p = (cPtr_staticArrayTypeAssignFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticArrayTypeAssignFunctionIR) ;
    p->mProperty_mFixedSizeArrayType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @staticArrayTypeAssignFunctionIR class
//--------------------------------------------------------------------------------------------------

cPtr_staticArrayTypeAssignFunctionIR::cPtr_staticArrayTypeAssignFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mFixedSizeArrayType () {
}

//--------------------------------------------------------------------------------------------------

cPtr_staticArrayTypeAssignFunctionIR::cPtr_staticArrayTypeAssignFunctionIR (const GGS_lstring & in_mRoutineMangledName,
                                                                            const GGS_bool & in_isRequired,
                                                                            const GGS_bool & in_warnsIfUnused,
                                                                            const GGS_omnibusType & in_mFixedSizeArrayType,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler COMMA_THERE),
mProperty_mFixedSizeArrayType () {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mFixedSizeArrayType = in_mFixedSizeArrayType ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_staticArrayTypeAssignFunctionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticArrayTypeAssignFunctionIR ;
}

void cPtr_staticArrayTypeAssignFunctionIR::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@staticArrayTypeAssignFunctionIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFixedSizeArrayType.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_staticArrayTypeAssignFunctionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_staticArrayTypeAssignFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mFixedSizeArrayType, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_staticArrayTypeAssignFunctionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mFixedSizeArrayType.printNonNullClassInstanceProperties ("mFixedSizeArrayType") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @staticArrayTypeAssignFunctionIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticArrayTypeAssignFunctionIR ("staticArrayTypeAssignFunctionIR",
                                                                                       & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_staticArrayTypeAssignFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticArrayTypeAssignFunctionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_staticArrayTypeAssignFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_staticArrayTypeAssignFunctionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticArrayTypeAssignFunctionIR GGS_staticArrayTypeAssignFunctionIR::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_staticArrayTypeAssignFunctionIR result ;
  const GGS_staticArrayTypeAssignFunctionIR * p = (const GGS_staticArrayTypeAssignFunctionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_staticArrayTypeAssignFunctionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticArrayTypeAssignFunctionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @typeDynamicArrayDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeDynamicArrayDeclarationAST::objectCompare (const GGS_typeDynamicArrayDeclarationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeDynamicArrayDeclarationAST::GGS_typeDynamicArrayDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_typeDynamicArrayDeclarationAST GGS_typeDynamicArrayDeclarationAST::
init_21__21_ (const GGS_lstring & in_mDynamicArrayTypeName,
              const GGS_lstring & in_mElementTypeName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_typeDynamicArrayDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_typeDynamicArrayDeclarationAST (inCompiler COMMA_THERE)) ;
  object->typeDynamicArrayDeclarationAST_init_21__21_ (in_mDynamicArrayTypeName, in_mElementTypeName, inCompiler) ;
  const GGS_typeDynamicArrayDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_typeDynamicArrayDeclarationAST::
typeDynamicArrayDeclarationAST_init_21__21_ (const GGS_lstring & in_mDynamicArrayTypeName,
                                             const GGS_lstring & in_mElementTypeName,
                                             Compiler * /* inCompiler */) {
  mProperty_mDynamicArrayTypeName = in_mDynamicArrayTypeName ;
  mProperty_mElementTypeName = in_mElementTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeDynamicArrayDeclarationAST::GGS_typeDynamicArrayDeclarationAST (const cPtr_typeDynamicArrayDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typeDynamicArrayDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_typeDynamicArrayDeclarationAST GGS_typeDynamicArrayDeclarationAST::class_func_new (const GGS_lstring & in_mDynamicArrayTypeName,
                                                                                       const GGS_lstring & in_mElementTypeName,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  GGS_typeDynamicArrayDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_typeDynamicArrayDeclarationAST (in_mDynamicArrayTypeName, in_mElementTypeName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_typeDynamicArrayDeclarationAST::readProperty_mDynamicArrayTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_typeDynamicArrayDeclarationAST * p = (cPtr_typeDynamicArrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeDynamicArrayDeclarationAST) ;
    return p->mProperty_mDynamicArrayTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeDynamicArrayDeclarationAST::setProperty_mDynamicArrayTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_typeDynamicArrayDeclarationAST * p = (cPtr_typeDynamicArrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeDynamicArrayDeclarationAST) ;
    p->mProperty_mDynamicArrayTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_typeDynamicArrayDeclarationAST::readProperty_mElementTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_typeDynamicArrayDeclarationAST * p = (cPtr_typeDynamicArrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeDynamicArrayDeclarationAST) ;
    return p->mProperty_mElementTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeDynamicArrayDeclarationAST::setProperty_mElementTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_typeDynamicArrayDeclarationAST * p = (cPtr_typeDynamicArrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeDynamicArrayDeclarationAST) ;
    p->mProperty_mElementTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @typeDynamicArrayDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_typeDynamicArrayDeclarationAST::cPtr_typeDynamicArrayDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mDynamicArrayTypeName (),
mProperty_mElementTypeName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_typeDynamicArrayDeclarationAST::cPtr_typeDynamicArrayDeclarationAST (const GGS_lstring & in_mDynamicArrayTypeName,
                                                                          const GGS_lstring & in_mElementTypeName,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mDynamicArrayTypeName (),
mProperty_mElementTypeName () {
  mProperty_mDynamicArrayTypeName = in_mDynamicArrayTypeName ;
  mProperty_mElementTypeName = in_mElementTypeName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_typeDynamicArrayDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST ;
}

void cPtr_typeDynamicArrayDeclarationAST::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@typeDynamicArrayDeclarationAST:") ;
  mProperty_mDynamicArrayTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElementTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_typeDynamicArrayDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_typeDynamicArrayDeclarationAST (mProperty_mDynamicArrayTypeName, mProperty_mElementTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_typeDynamicArrayDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mDynamicArrayTypeName.printNonNullClassInstanceProperties ("mDynamicArrayTypeName") ;
    mProperty_mElementTypeName.printNonNullClassInstanceProperties ("mElementTypeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @typeDynamicArrayDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST ("typeDynamicArrayDeclarationAST",
                                                                                      & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeDynamicArrayDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeDynamicArrayDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeDynamicArrayDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeDynamicArrayDeclarationAST GGS_typeDynamicArrayDeclarationAST::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_typeDynamicArrayDeclarationAST result ;
  const GGS_typeDynamicArrayDeclarationAST * p = (const GGS_typeDynamicArrayDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeDynamicArrayDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeDynamicArrayDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @dynArrayRemoveAllFunctionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dynArrayRemoveAllFunctionIR::objectCompare (const GGS_dynArrayRemoveAllFunctionIR & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayRemoveAllFunctionIR::GGS_dynArrayRemoveAllFunctionIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_dynArrayRemoveAllFunctionIR GGS_dynArrayRemoveAllFunctionIR::
init_21__21_isRequired_21_warnsIfUnused (const GGS_lstring & in_mRoutineMangledName,
                                         const GGS_bool & in_isRequired,
                                         const GGS_bool & in_warnsIfUnused,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cPtr_dynArrayRemoveAllFunctionIR * object = nullptr ;
  macroMyNew (object, cPtr_dynArrayRemoveAllFunctionIR (inCompiler COMMA_THERE)) ;
  object->dynArrayRemoveAllFunctionIR_init_21__21_isRequired_21_warnsIfUnused (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler) ;
  const GGS_dynArrayRemoveAllFunctionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_dynArrayRemoveAllFunctionIR::
dynArrayRemoveAllFunctionIR_init_21__21_isRequired_21_warnsIfUnused (const GGS_lstring & in_mRoutineMangledName,
                                                                     const GGS_bool & in_isRequired,
                                                                     const GGS_bool & in_warnsIfUnused,
                                                                     Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayRemoveAllFunctionIR::GGS_dynArrayRemoveAllFunctionIR (const cPtr_dynArrayRemoveAllFunctionIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dynArrayRemoveAllFunctionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_dynArrayRemoveAllFunctionIR GGS_dynArrayRemoveAllFunctionIR::class_func_new (const GGS_lstring & in_mRoutineMangledName,
                                                                                 const GGS_bool & in_isRequired,
                                                                                 const GGS_bool & in_warnsIfUnused,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  GGS_dynArrayRemoveAllFunctionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_dynArrayRemoveAllFunctionIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @dynArrayRemoveAllFunctionIR class
//--------------------------------------------------------------------------------------------------

cPtr_dynArrayRemoveAllFunctionIR::cPtr_dynArrayRemoveAllFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_dynArrayRemoveAllFunctionIR::cPtr_dynArrayRemoveAllFunctionIR (const GGS_lstring & in_mRoutineMangledName,
                                                                    const GGS_bool & in_isRequired,
                                                                    const GGS_bool & in_warnsIfUnused,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler COMMA_THERE) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_dynArrayRemoveAllFunctionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayRemoveAllFunctionIR ;
}

void cPtr_dynArrayRemoveAllFunctionIR::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@dynArrayRemoveAllFunctionIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_dynArrayRemoveAllFunctionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_dynArrayRemoveAllFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_dynArrayRemoveAllFunctionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @dynArrayRemoveAllFunctionIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dynArrayRemoveAllFunctionIR ("dynArrayRemoveAllFunctionIR",
                                                                                   & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_dynArrayRemoveAllFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayRemoveAllFunctionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dynArrayRemoveAllFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dynArrayRemoveAllFunctionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayRemoveAllFunctionIR GGS_dynArrayRemoveAllFunctionIR::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_dynArrayRemoveAllFunctionIR result ;
  const GGS_dynArrayRemoveAllFunctionIR * p = (const GGS_dynArrayRemoveAllFunctionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dynArrayRemoveAllFunctionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynArrayRemoveAllFunctionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @dynArrayLengthFunctionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dynArrayLengthFunctionIR::objectCompare (const GGS_dynArrayLengthFunctionIR & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayLengthFunctionIR::GGS_dynArrayLengthFunctionIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_dynArrayLengthFunctionIR GGS_dynArrayLengthFunctionIR::
init_21__21_isRequired_21_warnsIfUnused (const GGS_lstring & in_mRoutineMangledName,
                                         const GGS_bool & in_isRequired,
                                         const GGS_bool & in_warnsIfUnused,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cPtr_dynArrayLengthFunctionIR * object = nullptr ;
  macroMyNew (object, cPtr_dynArrayLengthFunctionIR (inCompiler COMMA_THERE)) ;
  object->dynArrayLengthFunctionIR_init_21__21_isRequired_21_warnsIfUnused (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler) ;
  const GGS_dynArrayLengthFunctionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_dynArrayLengthFunctionIR::
dynArrayLengthFunctionIR_init_21__21_isRequired_21_warnsIfUnused (const GGS_lstring & in_mRoutineMangledName,
                                                                  const GGS_bool & in_isRequired,
                                                                  const GGS_bool & in_warnsIfUnused,
                                                                  Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayLengthFunctionIR::GGS_dynArrayLengthFunctionIR (const cPtr_dynArrayLengthFunctionIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dynArrayLengthFunctionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_dynArrayLengthFunctionIR GGS_dynArrayLengthFunctionIR::class_func_new (const GGS_lstring & in_mRoutineMangledName,
                                                                           const GGS_bool & in_isRequired,
                                                                           const GGS_bool & in_warnsIfUnused,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  GGS_dynArrayLengthFunctionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_dynArrayLengthFunctionIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @dynArrayLengthFunctionIR class
//--------------------------------------------------------------------------------------------------

cPtr_dynArrayLengthFunctionIR::cPtr_dynArrayLengthFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_dynArrayLengthFunctionIR::cPtr_dynArrayLengthFunctionIR (const GGS_lstring & in_mRoutineMangledName,
                                                              const GGS_bool & in_isRequired,
                                                              const GGS_bool & in_warnsIfUnused,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler COMMA_THERE) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_dynArrayLengthFunctionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayLengthFunctionIR ;
}

void cPtr_dynArrayLengthFunctionIR::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@dynArrayLengthFunctionIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_dynArrayLengthFunctionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_dynArrayLengthFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_dynArrayLengthFunctionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @dynArrayLengthFunctionIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dynArrayLengthFunctionIR ("dynArrayLengthFunctionIR",
                                                                                & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_dynArrayLengthFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayLengthFunctionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dynArrayLengthFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dynArrayLengthFunctionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayLengthFunctionIR GGS_dynArrayLengthFunctionIR::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_dynArrayLengthFunctionIR result ;
  const GGS_dynArrayLengthFunctionIR * p = (const GGS_dynArrayLengthFunctionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dynArrayLengthFunctionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynArrayLengthFunctionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @dynArrayAppendFunctionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dynArrayAppendFunctionIR::objectCompare (const GGS_dynArrayAppendFunctionIR & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayAppendFunctionIR::GGS_dynArrayAppendFunctionIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_dynArrayAppendFunctionIR GGS_dynArrayAppendFunctionIR::
init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                     const GGS_bool & in_isRequired,
                                                     const GGS_bool & in_warnsIfUnused,
                                                     const GGS_unifiedTypeMapEntry & in_mArrayTypeProxy,
                                                     const GGS_unifiedTypeMapEntry & in_mElementTypeProxy,
                                                     const GGS_string & in_mInsertFunctionMangledName,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cPtr_dynArrayAppendFunctionIR * object = nullptr ;
  macroMyNew (object, cPtr_dynArrayAppendFunctionIR (inCompiler COMMA_THERE)) ;
  object->dynArrayAppendFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mArrayTypeProxy, in_mElementTypeProxy, in_mInsertFunctionMangledName, inCompiler) ;
  const GGS_dynArrayAppendFunctionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_dynArrayAppendFunctionIR::
dynArrayAppendFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                                              const GGS_bool & in_isRequired,
                                                                              const GGS_bool & in_warnsIfUnused,
                                                                              const GGS_unifiedTypeMapEntry & in_mArrayTypeProxy,
                                                                              const GGS_unifiedTypeMapEntry & in_mElementTypeProxy,
                                                                              const GGS_string & in_mInsertFunctionMangledName,
                                                                              Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mArrayTypeProxy = in_mArrayTypeProxy ;
  mProperty_mElementTypeProxy = in_mElementTypeProxy ;
  mProperty_mInsertFunctionMangledName = in_mInsertFunctionMangledName ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayAppendFunctionIR::GGS_dynArrayAppendFunctionIR (const cPtr_dynArrayAppendFunctionIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dynArrayAppendFunctionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_dynArrayAppendFunctionIR GGS_dynArrayAppendFunctionIR::class_func_new (const GGS_lstring & in_mRoutineMangledName,
                                                                           const GGS_bool & in_isRequired,
                                                                           const GGS_bool & in_warnsIfUnused,
                                                                           const GGS_unifiedTypeMapEntry & in_mArrayTypeProxy,
                                                                           const GGS_unifiedTypeMapEntry & in_mElementTypeProxy,
                                                                           const GGS_string & in_mInsertFunctionMangledName,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  GGS_dynArrayAppendFunctionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_dynArrayAppendFunctionIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mArrayTypeProxy, in_mElementTypeProxy, in_mInsertFunctionMangledName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_dynArrayAppendFunctionIR::readProperty_mArrayTypeProxy (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_dynArrayAppendFunctionIR * p = (cPtr_dynArrayAppendFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynArrayAppendFunctionIR) ;
    return p->mProperty_mArrayTypeProxy ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_dynArrayAppendFunctionIR::setProperty_mArrayTypeProxy (const GGS_unifiedTypeMapEntry & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_dynArrayAppendFunctionIR * p = (cPtr_dynArrayAppendFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynArrayAppendFunctionIR) ;
    p->mProperty_mArrayTypeProxy = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_dynArrayAppendFunctionIR::readProperty_mElementTypeProxy (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_dynArrayAppendFunctionIR * p = (cPtr_dynArrayAppendFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynArrayAppendFunctionIR) ;
    return p->mProperty_mElementTypeProxy ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_dynArrayAppendFunctionIR::setProperty_mElementTypeProxy (const GGS_unifiedTypeMapEntry & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_dynArrayAppendFunctionIR * p = (cPtr_dynArrayAppendFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynArrayAppendFunctionIR) ;
    p->mProperty_mElementTypeProxy = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_dynArrayAppendFunctionIR::readProperty_mInsertFunctionMangledName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_dynArrayAppendFunctionIR * p = (cPtr_dynArrayAppendFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynArrayAppendFunctionIR) ;
    return p->mProperty_mInsertFunctionMangledName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_dynArrayAppendFunctionIR::setProperty_mInsertFunctionMangledName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_dynArrayAppendFunctionIR * p = (cPtr_dynArrayAppendFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynArrayAppendFunctionIR) ;
    p->mProperty_mInsertFunctionMangledName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @dynArrayAppendFunctionIR class
//--------------------------------------------------------------------------------------------------

cPtr_dynArrayAppendFunctionIR::cPtr_dynArrayAppendFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mArrayTypeProxy (),
mProperty_mElementTypeProxy (),
mProperty_mInsertFunctionMangledName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_dynArrayAppendFunctionIR::cPtr_dynArrayAppendFunctionIR (const GGS_lstring & in_mRoutineMangledName,
                                                              const GGS_bool & in_isRequired,
                                                              const GGS_bool & in_warnsIfUnused,
                                                              const GGS_unifiedTypeMapEntry & in_mArrayTypeProxy,
                                                              const GGS_unifiedTypeMapEntry & in_mElementTypeProxy,
                                                              const GGS_string & in_mInsertFunctionMangledName,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler COMMA_THERE),
mProperty_mArrayTypeProxy (),
mProperty_mElementTypeProxy (),
mProperty_mInsertFunctionMangledName () {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mArrayTypeProxy = in_mArrayTypeProxy ;
  mProperty_mElementTypeProxy = in_mElementTypeProxy ;
  mProperty_mInsertFunctionMangledName = in_mInsertFunctionMangledName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_dynArrayAppendFunctionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayAppendFunctionIR ;
}

void cPtr_dynArrayAppendFunctionIR::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@dynArrayAppendFunctionIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mArrayTypeProxy.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElementTypeProxy.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInsertFunctionMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_dynArrayAppendFunctionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_dynArrayAppendFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mArrayTypeProxy, mProperty_mElementTypeProxy, mProperty_mInsertFunctionMangledName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_dynArrayAppendFunctionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mArrayTypeProxy.printNonNullClassInstanceProperties ("mArrayTypeProxy") ;
    mProperty_mElementTypeProxy.printNonNullClassInstanceProperties ("mElementTypeProxy") ;
    mProperty_mInsertFunctionMangledName.printNonNullClassInstanceProperties ("mInsertFunctionMangledName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @dynArrayAppendFunctionIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dynArrayAppendFunctionIR ("dynArrayAppendFunctionIR",
                                                                                & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_dynArrayAppendFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayAppendFunctionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dynArrayAppendFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dynArrayAppendFunctionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayAppendFunctionIR GGS_dynArrayAppendFunctionIR::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_dynArrayAppendFunctionIR result ;
  const GGS_dynArrayAppendFunctionIR * p = (const GGS_dynArrayAppendFunctionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dynArrayAppendFunctionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynArrayAppendFunctionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @dynArrayInsertFunctionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dynArrayInsertFunctionIR::objectCompare (const GGS_dynArrayInsertFunctionIR & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayInsertFunctionIR::GGS_dynArrayInsertFunctionIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_dynArrayInsertFunctionIR GGS_dynArrayInsertFunctionIR::
init_21__21_isRequired_21_warnsIfUnused_21_ (const GGS_lstring & in_mRoutineMangledName,
                                             const GGS_bool & in_isRequired,
                                             const GGS_bool & in_warnsIfUnused,
                                             const GGS_unifiedTypeMapEntry & in_mElementTypeProxy,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cPtr_dynArrayInsertFunctionIR * object = nullptr ;
  macroMyNew (object, cPtr_dynArrayInsertFunctionIR (inCompiler COMMA_THERE)) ;
  object->dynArrayInsertFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mElementTypeProxy, inCompiler) ;
  const GGS_dynArrayInsertFunctionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_dynArrayInsertFunctionIR::
dynArrayInsertFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21_ (const GGS_lstring & in_mRoutineMangledName,
                                                                      const GGS_bool & in_isRequired,
                                                                      const GGS_bool & in_warnsIfUnused,
                                                                      const GGS_unifiedTypeMapEntry & in_mElementTypeProxy,
                                                                      Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mElementTypeProxy = in_mElementTypeProxy ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayInsertFunctionIR::GGS_dynArrayInsertFunctionIR (const cPtr_dynArrayInsertFunctionIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dynArrayInsertFunctionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_dynArrayInsertFunctionIR GGS_dynArrayInsertFunctionIR::class_func_new (const GGS_lstring & in_mRoutineMangledName,
                                                                           const GGS_bool & in_isRequired,
                                                                           const GGS_bool & in_warnsIfUnused,
                                                                           const GGS_unifiedTypeMapEntry & in_mElementTypeProxy,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  GGS_dynArrayInsertFunctionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_dynArrayInsertFunctionIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mElementTypeProxy,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_dynArrayInsertFunctionIR::readProperty_mElementTypeProxy (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_dynArrayInsertFunctionIR * p = (cPtr_dynArrayInsertFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynArrayInsertFunctionIR) ;
    return p->mProperty_mElementTypeProxy ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_dynArrayInsertFunctionIR::setProperty_mElementTypeProxy (const GGS_unifiedTypeMapEntry & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_dynArrayInsertFunctionIR * p = (cPtr_dynArrayInsertFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynArrayInsertFunctionIR) ;
    p->mProperty_mElementTypeProxy = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @dynArrayInsertFunctionIR class
//--------------------------------------------------------------------------------------------------

cPtr_dynArrayInsertFunctionIR::cPtr_dynArrayInsertFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mElementTypeProxy () {
}

//--------------------------------------------------------------------------------------------------

cPtr_dynArrayInsertFunctionIR::cPtr_dynArrayInsertFunctionIR (const GGS_lstring & in_mRoutineMangledName,
                                                              const GGS_bool & in_isRequired,
                                                              const GGS_bool & in_warnsIfUnused,
                                                              const GGS_unifiedTypeMapEntry & in_mElementTypeProxy,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler COMMA_THERE),
mProperty_mElementTypeProxy () {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mElementTypeProxy = in_mElementTypeProxy ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_dynArrayInsertFunctionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayInsertFunctionIR ;
}

void cPtr_dynArrayInsertFunctionIR::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@dynArrayInsertFunctionIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElementTypeProxy.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_dynArrayInsertFunctionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_dynArrayInsertFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mElementTypeProxy, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_dynArrayInsertFunctionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mElementTypeProxy.printNonNullClassInstanceProperties ("mElementTypeProxy") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @dynArrayInsertFunctionIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dynArrayInsertFunctionIR ("dynArrayInsertFunctionIR",
                                                                                & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_dynArrayInsertFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayInsertFunctionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dynArrayInsertFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dynArrayInsertFunctionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayInsertFunctionIR GGS_dynArrayInsertFunctionIR::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_dynArrayInsertFunctionIR result ;
  const GGS_dynArrayInsertFunctionIR * p = (const GGS_dynArrayInsertFunctionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dynArrayInsertFunctionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynArrayInsertFunctionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @dynamicArrayTypeAssignUsage reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dynamicArrayTypeAssignUsage::objectCompare (const GGS_dynamicArrayTypeAssignUsage & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynamicArrayTypeAssignUsage::GGS_dynamicArrayTypeAssignUsage (void) :
GGS_abstractAssignmentOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_dynamicArrayTypeAssignUsage GGS_dynamicArrayTypeAssignUsage::
init_21__21_ (const GGS_omnibusType & in_mDynamicArrayType,
              const GGS_string & in_mAssignFunctionName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_dynamicArrayTypeAssignUsage * object = nullptr ;
  macroMyNew (object, cPtr_dynamicArrayTypeAssignUsage (inCompiler COMMA_THERE)) ;
  object->dynamicArrayTypeAssignUsage_init_21__21_ (in_mDynamicArrayType, in_mAssignFunctionName, inCompiler) ;
  const GGS_dynamicArrayTypeAssignUsage result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_dynamicArrayTypeAssignUsage::
dynamicArrayTypeAssignUsage_init_21__21_ (const GGS_omnibusType & in_mDynamicArrayType,
                                          const GGS_string & in_mAssignFunctionName,
                                          Compiler * /* inCompiler */) {
  mProperty_mDynamicArrayType = in_mDynamicArrayType ;
  mProperty_mAssignFunctionName = in_mAssignFunctionName ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynamicArrayTypeAssignUsage::GGS_dynamicArrayTypeAssignUsage (const cPtr_dynamicArrayTypeAssignUsage * inSourcePtr) :
GGS_abstractAssignmentOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dynamicArrayTypeAssignUsage) ;
}
//--------------------------------------------------------------------------------------------------

GGS_dynamicArrayTypeAssignUsage GGS_dynamicArrayTypeAssignUsage::class_func_new (const GGS_omnibusType & in_mDynamicArrayType,
                                                                                 const GGS_string & in_mAssignFunctionName,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  GGS_dynamicArrayTypeAssignUsage result ;
  macroMyNew (result.mObjectPtr, cPtr_dynamicArrayTypeAssignUsage (in_mDynamicArrayType, in_mAssignFunctionName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_dynamicArrayTypeAssignUsage::readProperty_mDynamicArrayType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_dynamicArrayTypeAssignUsage * p = (cPtr_dynamicArrayTypeAssignUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynamicArrayTypeAssignUsage) ;
    return p->mProperty_mDynamicArrayType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_dynamicArrayTypeAssignUsage::setProperty_mDynamicArrayType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_dynamicArrayTypeAssignUsage * p = (cPtr_dynamicArrayTypeAssignUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynamicArrayTypeAssignUsage) ;
    p->mProperty_mDynamicArrayType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_dynamicArrayTypeAssignUsage::readProperty_mAssignFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_dynamicArrayTypeAssignUsage * p = (cPtr_dynamicArrayTypeAssignUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynamicArrayTypeAssignUsage) ;
    return p->mProperty_mAssignFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_dynamicArrayTypeAssignUsage::setProperty_mAssignFunctionName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_dynamicArrayTypeAssignUsage * p = (cPtr_dynamicArrayTypeAssignUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynamicArrayTypeAssignUsage) ;
    p->mProperty_mAssignFunctionName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @dynamicArrayTypeAssignUsage class
//--------------------------------------------------------------------------------------------------

cPtr_dynamicArrayTypeAssignUsage::cPtr_dynamicArrayTypeAssignUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractAssignmentOperatorUsage (inCompiler COMMA_THERE),
mProperty_mDynamicArrayType (),
mProperty_mAssignFunctionName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_dynamicArrayTypeAssignUsage::cPtr_dynamicArrayTypeAssignUsage (const GGS_omnibusType & in_mDynamicArrayType,
                                                                    const GGS_string & in_mAssignFunctionName,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractAssignmentOperatorUsage (inCompiler COMMA_THERE),
mProperty_mDynamicArrayType (),
mProperty_mAssignFunctionName () {
  mProperty_mDynamicArrayType = in_mDynamicArrayType ;
  mProperty_mAssignFunctionName = in_mAssignFunctionName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_dynamicArrayTypeAssignUsage::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynamicArrayTypeAssignUsage ;
}

void cPtr_dynamicArrayTypeAssignUsage::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@dynamicArrayTypeAssignUsage:") ;
  mProperty_mDynamicArrayType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAssignFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_dynamicArrayTypeAssignUsage::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_dynamicArrayTypeAssignUsage (mProperty_mDynamicArrayType, mProperty_mAssignFunctionName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_dynamicArrayTypeAssignUsage::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractAssignmentOperatorUsage::printNonNullClassInstanceProperties () ;
    mProperty_mDynamicArrayType.printNonNullClassInstanceProperties ("mDynamicArrayType") ;
    mProperty_mAssignFunctionName.printNonNullClassInstanceProperties ("mAssignFunctionName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @dynamicArrayTypeAssignUsage generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dynamicArrayTypeAssignUsage ("dynamicArrayTypeAssignUsage",
                                                                                   & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_dynamicArrayTypeAssignUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynamicArrayTypeAssignUsage ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dynamicArrayTypeAssignUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dynamicArrayTypeAssignUsage (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynamicArrayTypeAssignUsage GGS_dynamicArrayTypeAssignUsage::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_dynamicArrayTypeAssignUsage result ;
  const GGS_dynamicArrayTypeAssignUsage * p = (const GGS_dynamicArrayTypeAssignUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dynamicArrayTypeAssignUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynamicArrayTypeAssignUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @dynamicArrayTypeAssignGenericFunctionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dynamicArrayTypeAssignGenericFunctionIR::objectCompare (const GGS_dynamicArrayTypeAssignGenericFunctionIR & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynamicArrayTypeAssignGenericFunctionIR::GGS_dynamicArrayTypeAssignGenericFunctionIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_dynamicArrayTypeAssignGenericFunctionIR GGS_dynamicArrayTypeAssignGenericFunctionIR::
init_21__21_isRequired_21_warnsIfUnused (const GGS_lstring & in_mRoutineMangledName,
                                         const GGS_bool & in_isRequired,
                                         const GGS_bool & in_warnsIfUnused,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cPtr_dynamicArrayTypeAssignGenericFunctionIR * object = nullptr ;
  macroMyNew (object, cPtr_dynamicArrayTypeAssignGenericFunctionIR (inCompiler COMMA_THERE)) ;
  object->dynamicArrayTypeAssignGenericFunctionIR_init_21__21_isRequired_21_warnsIfUnused (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler) ;
  const GGS_dynamicArrayTypeAssignGenericFunctionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_dynamicArrayTypeAssignGenericFunctionIR::
dynamicArrayTypeAssignGenericFunctionIR_init_21__21_isRequired_21_warnsIfUnused (const GGS_lstring & in_mRoutineMangledName,
                                                                                 const GGS_bool & in_isRequired,
                                                                                 const GGS_bool & in_warnsIfUnused,
                                                                                 Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynamicArrayTypeAssignGenericFunctionIR::GGS_dynamicArrayTypeAssignGenericFunctionIR (const cPtr_dynamicArrayTypeAssignGenericFunctionIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dynamicArrayTypeAssignGenericFunctionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_dynamicArrayTypeAssignGenericFunctionIR GGS_dynamicArrayTypeAssignGenericFunctionIR::class_func_new (const GGS_lstring & in_mRoutineMangledName,
                                                                                                         const GGS_bool & in_isRequired,
                                                                                                         const GGS_bool & in_warnsIfUnused,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) {
  GGS_dynamicArrayTypeAssignGenericFunctionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_dynamicArrayTypeAssignGenericFunctionIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @dynamicArrayTypeAssignGenericFunctionIR class
//--------------------------------------------------------------------------------------------------

cPtr_dynamicArrayTypeAssignGenericFunctionIR::cPtr_dynamicArrayTypeAssignGenericFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_dynamicArrayTypeAssignGenericFunctionIR::cPtr_dynamicArrayTypeAssignGenericFunctionIR (const GGS_lstring & in_mRoutineMangledName,
                                                                                            const GGS_bool & in_isRequired,
                                                                                            const GGS_bool & in_warnsIfUnused,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler COMMA_THERE) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_dynamicArrayTypeAssignGenericFunctionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynamicArrayTypeAssignGenericFunctionIR ;
}

void cPtr_dynamicArrayTypeAssignGenericFunctionIR::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@dynamicArrayTypeAssignGenericFunctionIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_dynamicArrayTypeAssignGenericFunctionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_dynamicArrayTypeAssignGenericFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_dynamicArrayTypeAssignGenericFunctionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @dynamicArrayTypeAssignGenericFunctionIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dynamicArrayTypeAssignGenericFunctionIR ("dynamicArrayTypeAssignGenericFunctionIR",
                                                                                               & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_dynamicArrayTypeAssignGenericFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynamicArrayTypeAssignGenericFunctionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dynamicArrayTypeAssignGenericFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dynamicArrayTypeAssignGenericFunctionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynamicArrayTypeAssignGenericFunctionIR GGS_dynamicArrayTypeAssignGenericFunctionIR::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_dynamicArrayTypeAssignGenericFunctionIR result ;
  const GGS_dynamicArrayTypeAssignGenericFunctionIR * p = (const GGS_dynamicArrayTypeAssignGenericFunctionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dynamicArrayTypeAssignGenericFunctionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynamicArrayTypeAssignGenericFunctionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @enumerationDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumerationDeclarationAST::objectCompare (const GGS_enumerationDeclarationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDeclarationAST::GGS_enumerationDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_enumerationDeclarationAST GGS_enumerationDeclarationAST::
init_21__21_ (const GGS_lstring & in_mEnumerationName,
              const GGS_enumerationConstantList & in_mCaseNameList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_enumerationDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_enumerationDeclarationAST (inCompiler COMMA_THERE)) ;
  object->enumerationDeclarationAST_init_21__21_ (in_mEnumerationName, in_mCaseNameList, inCompiler) ;
  const GGS_enumerationDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_enumerationDeclarationAST::
enumerationDeclarationAST_init_21__21_ (const GGS_lstring & in_mEnumerationName,
                                        const GGS_enumerationConstantList & in_mCaseNameList,
                                        Compiler * /* inCompiler */) {
  mProperty_mEnumerationName = in_mEnumerationName ;
  mProperty_mCaseNameList = in_mCaseNameList ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDeclarationAST::GGS_enumerationDeclarationAST (const cPtr_enumerationDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumerationDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_enumerationDeclarationAST GGS_enumerationDeclarationAST::class_func_new (const GGS_lstring & in_mEnumerationName,
                                                                             const GGS_enumerationConstantList & in_mCaseNameList,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  GGS_enumerationDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_enumerationDeclarationAST (in_mEnumerationName, in_mCaseNameList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_enumerationDeclarationAST::readProperty_mEnumerationName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_enumerationDeclarationAST * p = (cPtr_enumerationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumerationDeclarationAST) ;
    return p->mProperty_mEnumerationName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationDeclarationAST::setProperty_mEnumerationName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_enumerationDeclarationAST * p = (cPtr_enumerationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumerationDeclarationAST) ;
    p->mProperty_mEnumerationName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationConstantList GGS_enumerationDeclarationAST::readProperty_mCaseNameList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_enumerationConstantList () ;
  }else{
    cPtr_enumerationDeclarationAST * p = (cPtr_enumerationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumerationDeclarationAST) ;
    return p->mProperty_mCaseNameList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationDeclarationAST::setProperty_mCaseNameList (const GGS_enumerationConstantList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_enumerationDeclarationAST * p = (cPtr_enumerationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumerationDeclarationAST) ;
    p->mProperty_mCaseNameList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @enumerationDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_enumerationDeclarationAST::cPtr_enumerationDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mEnumerationName (),
mProperty_mCaseNameList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_enumerationDeclarationAST::cPtr_enumerationDeclarationAST (const GGS_lstring & in_mEnumerationName,
                                                                const GGS_enumerationConstantList & in_mCaseNameList,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mEnumerationName (),
mProperty_mCaseNameList () {
  mProperty_mEnumerationName = in_mEnumerationName ;
  mProperty_mCaseNameList = in_mCaseNameList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_enumerationDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDeclarationAST ;
}

void cPtr_enumerationDeclarationAST::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@enumerationDeclarationAST:") ;
  mProperty_mEnumerationName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCaseNameList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_enumerationDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_enumerationDeclarationAST (mProperty_mEnumerationName, mProperty_mCaseNameList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_enumerationDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mEnumerationName.printNonNullClassInstanceProperties ("mEnumerationName") ;
    mProperty_mCaseNameList.printNonNullClassInstanceProperties ("mCaseNameList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @enumerationDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumerationDeclarationAST ("enumerationDeclarationAST",
                                                                                 & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_enumerationDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumerationDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumerationDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDeclarationAST GGS_enumerationDeclarationAST::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_enumerationDeclarationAST result ;
  const GGS_enumerationDeclarationAST * p = (const GGS_enumerationDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumerationDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @enumToUintRoutineIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumToUintRoutineIR::objectCompare (const GGS_enumToUintRoutineIR & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumToUintRoutineIR::GGS_enumToUintRoutineIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_enumToUintRoutineIR GGS_enumToUintRoutineIR::
init_21__21_isRequired_21_warnsIfUnused_21_ (const GGS_lstring & in_mRoutineMangledName,
                                             const GGS_bool & in_isRequired,
                                             const GGS_bool & in_warnsIfUnused,
                                             const GGS_string & in_mEnumerationLLVMTypeName,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cPtr_enumToUintRoutineIR * object = nullptr ;
  macroMyNew (object, cPtr_enumToUintRoutineIR (inCompiler COMMA_THERE)) ;
  object->enumToUintRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mEnumerationLLVMTypeName, inCompiler) ;
  const GGS_enumToUintRoutineIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_enumToUintRoutineIR::
enumToUintRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21_ (const GGS_lstring & in_mRoutineMangledName,
                                                                 const GGS_bool & in_isRequired,
                                                                 const GGS_bool & in_warnsIfUnused,
                                                                 const GGS_string & in_mEnumerationLLVMTypeName,
                                                                 Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mEnumerationLLVMTypeName = in_mEnumerationLLVMTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumToUintRoutineIR::GGS_enumToUintRoutineIR (const cPtr_enumToUintRoutineIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumToUintRoutineIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_enumToUintRoutineIR GGS_enumToUintRoutineIR::class_func_new (const GGS_lstring & in_mRoutineMangledName,
                                                                 const GGS_bool & in_isRequired,
                                                                 const GGS_bool & in_warnsIfUnused,
                                                                 const GGS_string & in_mEnumerationLLVMTypeName,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  GGS_enumToUintRoutineIR result ;
  macroMyNew (result.mObjectPtr, cPtr_enumToUintRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mEnumerationLLVMTypeName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_enumToUintRoutineIR::readProperty_mEnumerationLLVMTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_enumToUintRoutineIR * p = (cPtr_enumToUintRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumToUintRoutineIR) ;
    return p->mProperty_mEnumerationLLVMTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enumToUintRoutineIR::setProperty_mEnumerationLLVMTypeName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_enumToUintRoutineIR * p = (cPtr_enumToUintRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumToUintRoutineIR) ;
    p->mProperty_mEnumerationLLVMTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @enumToUintRoutineIR class
//--------------------------------------------------------------------------------------------------

cPtr_enumToUintRoutineIR::cPtr_enumToUintRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mEnumerationLLVMTypeName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_enumToUintRoutineIR::cPtr_enumToUintRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                                    const GGS_bool & in_isRequired,
                                                    const GGS_bool & in_warnsIfUnused,
                                                    const GGS_string & in_mEnumerationLLVMTypeName,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler COMMA_THERE),
mProperty_mEnumerationLLVMTypeName () {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mEnumerationLLVMTypeName = in_mEnumerationLLVMTypeName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_enumToUintRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumToUintRoutineIR ;
}

void cPtr_enumToUintRoutineIR::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@enumToUintRoutineIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEnumerationLLVMTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_enumToUintRoutineIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_enumToUintRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mEnumerationLLVMTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_enumToUintRoutineIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mEnumerationLLVMTypeName.printNonNullClassInstanceProperties ("mEnumerationLLVMTypeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @enumToUintRoutineIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumToUintRoutineIR ("enumToUintRoutineIR",
                                                                           & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_enumToUintRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumToUintRoutineIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumToUintRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumToUintRoutineIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumToUintRoutineIR GGS_enumToUintRoutineIR::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_enumToUintRoutineIR result ;
  const GGS_enumToUintRoutineIR * p = (const GGS_enumToUintRoutineIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumToUintRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumToUintRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @structureDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_structureDeclarationAST::objectCompare (const GGS_structureDeclarationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structureDeclarationAST::GGS_structureDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_structureDeclarationAST GGS_structureDeclarationAST::
init_21__21__21__21__21__21__21_ (const GGS_lstring & in_mReceiverTypeName,
                                  const GGS_lstring & in_mOmnibusTypeSpecificName,
                                  const GGS_lstring & in_mLLVMBaseTypeName,
                                  const GGS_lstringlist & in_mAttributeListAST,
                                  const GGS_bool & in_mGenerateAssignmentRoutine,
                                  const GGS_structurePropertyListAST & in_mStructurePropertyListAST,
                                  const GGS_bool & in_mMayImplementDeinit,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_structureDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_structureDeclarationAST (inCompiler COMMA_THERE)) ;
  object->structureDeclarationAST_init_21__21__21__21__21__21__21_ (in_mReceiverTypeName, in_mOmnibusTypeSpecificName, in_mLLVMBaseTypeName, in_mAttributeListAST, in_mGenerateAssignmentRoutine, in_mStructurePropertyListAST, in_mMayImplementDeinit, inCompiler) ;
  const GGS_structureDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_structureDeclarationAST::
structureDeclarationAST_init_21__21__21__21__21__21__21_ (const GGS_lstring & in_mReceiverTypeName,
                                                          const GGS_lstring & in_mOmnibusTypeSpecificName,
                                                          const GGS_lstring & in_mLLVMBaseTypeName,
                                                          const GGS_lstringlist & in_mAttributeListAST,
                                                          const GGS_bool & in_mGenerateAssignmentRoutine,
                                                          const GGS_structurePropertyListAST & in_mStructurePropertyListAST,
                                                          const GGS_bool & in_mMayImplementDeinit,
                                                          Compiler * /* inCompiler */) {
  mProperty_mReceiverTypeName = in_mReceiverTypeName ;
  mProperty_mOmnibusTypeSpecificName = in_mOmnibusTypeSpecificName ;
  mProperty_mLLVMBaseTypeName = in_mLLVMBaseTypeName ;
  mProperty_mAttributeListAST = in_mAttributeListAST ;
  mProperty_mGenerateAssignmentRoutine = in_mGenerateAssignmentRoutine ;
  mProperty_mStructurePropertyListAST = in_mStructurePropertyListAST ;
  mProperty_mMayImplementDeinit = in_mMayImplementDeinit ;
}

//--------------------------------------------------------------------------------------------------

GGS_structureDeclarationAST::GGS_structureDeclarationAST (const cPtr_structureDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structureDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_structureDeclarationAST GGS_structureDeclarationAST::class_func_new (const GGS_lstring & in_mReceiverTypeName,
                                                                         const GGS_lstring & in_mOmnibusTypeSpecificName,
                                                                         const GGS_lstring & in_mLLVMBaseTypeName,
                                                                         const GGS_lstringlist & in_mAttributeListAST,
                                                                         const GGS_bool & in_mGenerateAssignmentRoutine,
                                                                         const GGS_structurePropertyListAST & in_mStructurePropertyListAST,
                                                                         const GGS_bool & in_mMayImplementDeinit,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  GGS_structureDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_structureDeclarationAST (in_mReceiverTypeName, in_mOmnibusTypeSpecificName, in_mLLVMBaseTypeName, in_mAttributeListAST, in_mGenerateAssignmentRoutine, in_mStructurePropertyListAST, in_mMayImplementDeinit,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_structureDeclarationAST::readProperty_mReceiverTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_structureDeclarationAST * p = (cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    return p->mProperty_mReceiverTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_structureDeclarationAST::setProperty_mReceiverTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_structureDeclarationAST * p = (cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    p->mProperty_mReceiverTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_structureDeclarationAST::readProperty_mOmnibusTypeSpecificName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_structureDeclarationAST * p = (cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    return p->mProperty_mOmnibusTypeSpecificName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_structureDeclarationAST::setProperty_mOmnibusTypeSpecificName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_structureDeclarationAST * p = (cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    p->mProperty_mOmnibusTypeSpecificName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_structureDeclarationAST::readProperty_mLLVMBaseTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_structureDeclarationAST * p = (cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    return p->mProperty_mLLVMBaseTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_structureDeclarationAST::setProperty_mLLVMBaseTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_structureDeclarationAST * p = (cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    p->mProperty_mLLVMBaseTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_structureDeclarationAST::readProperty_mAttributeListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_structureDeclarationAST * p = (cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    return p->mProperty_mAttributeListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_structureDeclarationAST::setProperty_mAttributeListAST (const GGS_lstringlist & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_structureDeclarationAST * p = (cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    p->mProperty_mAttributeListAST = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_structureDeclarationAST::readProperty_mGenerateAssignmentRoutine (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_structureDeclarationAST * p = (cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    return p->mProperty_mGenerateAssignmentRoutine ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_structureDeclarationAST::setProperty_mGenerateAssignmentRoutine (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_structureDeclarationAST * p = (cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    p->mProperty_mGenerateAssignmentRoutine = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_structurePropertyListAST GGS_structureDeclarationAST::readProperty_mStructurePropertyListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_structurePropertyListAST () ;
  }else{
    cPtr_structureDeclarationAST * p = (cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    return p->mProperty_mStructurePropertyListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_structureDeclarationAST::setProperty_mStructurePropertyListAST (const GGS_structurePropertyListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_structureDeclarationAST * p = (cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    p->mProperty_mStructurePropertyListAST = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_structureDeclarationAST::readProperty_mMayImplementDeinit (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_structureDeclarationAST * p = (cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    return p->mProperty_mMayImplementDeinit ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_structureDeclarationAST::setProperty_mMayImplementDeinit (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_structureDeclarationAST * p = (cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    p->mProperty_mMayImplementDeinit = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @structureDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_structureDeclarationAST::cPtr_structureDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mReceiverTypeName (),
mProperty_mOmnibusTypeSpecificName (),
mProperty_mLLVMBaseTypeName (),
mProperty_mAttributeListAST (),
mProperty_mGenerateAssignmentRoutine (),
mProperty_mStructurePropertyListAST (),
mProperty_mMayImplementDeinit () {
}

//--------------------------------------------------------------------------------------------------

cPtr_structureDeclarationAST::cPtr_structureDeclarationAST (const GGS_lstring & in_mReceiverTypeName,
                                                            const GGS_lstring & in_mOmnibusTypeSpecificName,
                                                            const GGS_lstring & in_mLLVMBaseTypeName,
                                                            const GGS_lstringlist & in_mAttributeListAST,
                                                            const GGS_bool & in_mGenerateAssignmentRoutine,
                                                            const GGS_structurePropertyListAST & in_mStructurePropertyListAST,
                                                            const GGS_bool & in_mMayImplementDeinit,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mReceiverTypeName (),
mProperty_mOmnibusTypeSpecificName (),
mProperty_mLLVMBaseTypeName (),
mProperty_mAttributeListAST (),
mProperty_mGenerateAssignmentRoutine (),
mProperty_mStructurePropertyListAST (),
mProperty_mMayImplementDeinit () {
  mProperty_mReceiverTypeName = in_mReceiverTypeName ;
  mProperty_mOmnibusTypeSpecificName = in_mOmnibusTypeSpecificName ;
  mProperty_mLLVMBaseTypeName = in_mLLVMBaseTypeName ;
  mProperty_mAttributeListAST = in_mAttributeListAST ;
  mProperty_mGenerateAssignmentRoutine = in_mGenerateAssignmentRoutine ;
  mProperty_mStructurePropertyListAST = in_mStructurePropertyListAST ;
  mProperty_mMayImplementDeinit = in_mMayImplementDeinit ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_structureDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structureDeclarationAST ;
}

void cPtr_structureDeclarationAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@structureDeclarationAST:") ;
  mProperty_mReceiverTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOmnibusTypeSpecificName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLLVMBaseTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAttributeListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGenerateAssignmentRoutine.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStructurePropertyListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMayImplementDeinit.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_structureDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_structureDeclarationAST (mProperty_mReceiverTypeName, mProperty_mOmnibusTypeSpecificName, mProperty_mLLVMBaseTypeName, mProperty_mAttributeListAST, mProperty_mGenerateAssignmentRoutine, mProperty_mStructurePropertyListAST, mProperty_mMayImplementDeinit, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_structureDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverTypeName.printNonNullClassInstanceProperties ("mReceiverTypeName") ;
    mProperty_mOmnibusTypeSpecificName.printNonNullClassInstanceProperties ("mOmnibusTypeSpecificName") ;
    mProperty_mLLVMBaseTypeName.printNonNullClassInstanceProperties ("mLLVMBaseTypeName") ;
    mProperty_mAttributeListAST.printNonNullClassInstanceProperties ("mAttributeListAST") ;
    mProperty_mGenerateAssignmentRoutine.printNonNullClassInstanceProperties ("mGenerateAssignmentRoutine") ;
    mProperty_mStructurePropertyListAST.printNonNullClassInstanceProperties ("mStructurePropertyListAST") ;
    mProperty_mMayImplementDeinit.printNonNullClassInstanceProperties ("mMayImplementDeinit") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @structureDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structureDeclarationAST ("structureDeclarationAST",
                                                                               & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_structureDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structureDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_structureDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_structureDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structureDeclarationAST GGS_structureDeclarationAST::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_structureDeclarationAST result ;
  const GGS_structureDeclarationAST * p = (const GGS_structureDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_structureDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structureDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structurePropertyListAST_2E_element::GGS_structurePropertyListAST_2E_element (void) :
mProperty_mPropertyName (),
mProperty_mPropertyAttributeList (),
mProperty_mVisibility (),
mProperty_mPropertyTypeName (),
mProperty_mPropertyKind () {
}

//--------------------------------------------------------------------------------------------------

GGS_structurePropertyListAST_2E_element::~ GGS_structurePropertyListAST_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_structurePropertyListAST_2E_element GGS_structurePropertyListAST_2E_element::init_21__21__21__21__21_ (const GGS_lstring & in_mPropertyName,
                                                                                                           const GGS_propertyAttributeList & in_mPropertyAttributeList,
                                                                                                           const GGS_propertyVisibility & in_mVisibility,
                                                                                                           const GGS_lstring & in_mPropertyTypeName,
                                                                                                           const GGS_propertyKindAST & in_mPropertyKind,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_structurePropertyListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mPropertyName = in_mPropertyName ;
  result.mProperty_mPropertyAttributeList = in_mPropertyAttributeList ;
  result.mProperty_mVisibility = in_mVisibility ;
  result.mProperty_mPropertyTypeName = in_mPropertyTypeName ;
  result.mProperty_mPropertyKind = in_mPropertyKind ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_structurePropertyListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_structurePropertyListAST_2E_element::GGS_structurePropertyListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                  const GGS_propertyAttributeList & inOperand1,
                                                                                  const GGS_propertyVisibility & inOperand2,
                                                                                  const GGS_lstring & inOperand3,
                                                                                  const GGS_propertyKindAST & inOperand4) :
mProperty_mPropertyName (inOperand0),
mProperty_mPropertyAttributeList (inOperand1),
mProperty_mVisibility (inOperand2),
mProperty_mPropertyTypeName (inOperand3),
mProperty_mPropertyKind (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

GGS_structurePropertyListAST_2E_element GGS_structurePropertyListAST_2E_element::class_func_new (const GGS_lstring & in_mPropertyName,
                                                                                                 const GGS_propertyAttributeList & in_mPropertyAttributeList,
                                                                                                 const GGS_propertyVisibility & in_mVisibility,
                                                                                                 const GGS_lstring & in_mPropertyTypeName,
                                                                                                 const GGS_propertyKindAST & in_mPropertyKind,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_structurePropertyListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mPropertyName = in_mPropertyName ;
  result.mProperty_mPropertyAttributeList = in_mPropertyAttributeList ;
  result.mProperty_mVisibility = in_mVisibility ;
  result.mProperty_mPropertyTypeName = in_mPropertyTypeName ;
  result.mProperty_mPropertyKind = in_mPropertyKind ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_structurePropertyListAST_2E_element::isValid (void) const {
  return mProperty_mPropertyName.isValid () && mProperty_mPropertyAttributeList.isValid () && mProperty_mVisibility.isValid () && mProperty_mPropertyTypeName.isValid () && mProperty_mPropertyKind.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_structurePropertyListAST_2E_element::drop (void) {
  mProperty_mPropertyName.drop () ;
  mProperty_mPropertyAttributeList.drop () ;
  mProperty_mVisibility.drop () ;
  mProperty_mPropertyTypeName.drop () ;
  mProperty_mPropertyKind.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_structurePropertyListAST_2E_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @structurePropertyListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mPropertyName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPropertyAttributeList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mVisibility.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPropertyTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPropertyKind.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @structurePropertyListAST.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structurePropertyListAST_2E_element ("structurePropertyListAST.element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_structurePropertyListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structurePropertyListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_structurePropertyListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_structurePropertyListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structurePropertyListAST_2E_element GGS_structurePropertyListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_structurePropertyListAST_2E_element result ;
  const GGS_structurePropertyListAST_2E_element * p = (const GGS_structurePropertyListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_structurePropertyListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structurePropertyListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @structureAssignmentOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_structureAssignmentOperatorUsage::objectCompare (const GGS_structureAssignmentOperatorUsage & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structureAssignmentOperatorUsage::GGS_structureAssignmentOperatorUsage (void) :
GGS_abstractAssignmentOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_structureAssignmentOperatorUsage GGS_structureAssignmentOperatorUsage::
init_21_ (const GGS_omnibusType & in_mStructureType,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_structureAssignmentOperatorUsage * object = nullptr ;
  macroMyNew (object, cPtr_structureAssignmentOperatorUsage (inCompiler COMMA_THERE)) ;
  object->structureAssignmentOperatorUsage_init_21_ (in_mStructureType, inCompiler) ;
  const GGS_structureAssignmentOperatorUsage result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_structureAssignmentOperatorUsage::
structureAssignmentOperatorUsage_init_21_ (const GGS_omnibusType & in_mStructureType,
                                           Compiler * /* inCompiler */) {
  mProperty_mStructureType = in_mStructureType ;
}

//--------------------------------------------------------------------------------------------------

GGS_structureAssignmentOperatorUsage::GGS_structureAssignmentOperatorUsage (const cPtr_structureAssignmentOperatorUsage * inSourcePtr) :
GGS_abstractAssignmentOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structureAssignmentOperatorUsage) ;
}
//--------------------------------------------------------------------------------------------------

GGS_structureAssignmentOperatorUsage GGS_structureAssignmentOperatorUsage::class_func_new (const GGS_omnibusType & in_mStructureType,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_structureAssignmentOperatorUsage result ;
  macroMyNew (result.mObjectPtr, cPtr_structureAssignmentOperatorUsage (in_mStructureType,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_structureAssignmentOperatorUsage::readProperty_mStructureType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_structureAssignmentOperatorUsage * p = (cPtr_structureAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureAssignmentOperatorUsage) ;
    return p->mProperty_mStructureType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_structureAssignmentOperatorUsage::setProperty_mStructureType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_structureAssignmentOperatorUsage * p = (cPtr_structureAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureAssignmentOperatorUsage) ;
    p->mProperty_mStructureType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @structureAssignmentOperatorUsage class
//--------------------------------------------------------------------------------------------------

cPtr_structureAssignmentOperatorUsage::cPtr_structureAssignmentOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractAssignmentOperatorUsage (inCompiler COMMA_THERE),
mProperty_mStructureType () {
}

//--------------------------------------------------------------------------------------------------

cPtr_structureAssignmentOperatorUsage::cPtr_structureAssignmentOperatorUsage (const GGS_omnibusType & in_mStructureType,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractAssignmentOperatorUsage (inCompiler COMMA_THERE),
mProperty_mStructureType () {
  mProperty_mStructureType = in_mStructureType ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_structureAssignmentOperatorUsage::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structureAssignmentOperatorUsage ;
}

void cPtr_structureAssignmentOperatorUsage::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@structureAssignmentOperatorUsage:") ;
  mProperty_mStructureType.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_structureAssignmentOperatorUsage::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_structureAssignmentOperatorUsage (mProperty_mStructureType, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_structureAssignmentOperatorUsage::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractAssignmentOperatorUsage::printNonNullClassInstanceProperties () ;
    mProperty_mStructureType.printNonNullClassInstanceProperties ("mStructureType") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @structureAssignmentOperatorUsage generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structureAssignmentOperatorUsage ("structureAssignmentOperatorUsage",
                                                                                        & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_structureAssignmentOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structureAssignmentOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_structureAssignmentOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_structureAssignmentOperatorUsage (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structureAssignmentOperatorUsage GGS_structureAssignmentOperatorUsage::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_structureAssignmentOperatorUsage result ;
  const GGS_structureAssignmentOperatorUsage * p = (const GGS_structureAssignmentOperatorUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_structureAssignmentOperatorUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structureAssignmentOperatorUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @structureTypeAssignFunctionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_structureTypeAssignFunctionIR::objectCompare (const GGS_structureTypeAssignFunctionIR & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structureTypeAssignFunctionIR::GGS_structureTypeAssignFunctionIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_structureTypeAssignFunctionIR GGS_structureTypeAssignFunctionIR::
init_21__21_isRequired_21_warnsIfUnused_21_ (const GGS_lstring & in_mRoutineMangledName,
                                             const GGS_bool & in_isRequired,
                                             const GGS_bool & in_warnsIfUnused,
                                             const GGS_omnibusType & in_mStructureType,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cPtr_structureTypeAssignFunctionIR * object = nullptr ;
  macroMyNew (object, cPtr_structureTypeAssignFunctionIR (inCompiler COMMA_THERE)) ;
  object->structureTypeAssignFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mStructureType, inCompiler) ;
  const GGS_structureTypeAssignFunctionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_structureTypeAssignFunctionIR::
structureTypeAssignFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21_ (const GGS_lstring & in_mRoutineMangledName,
                                                                           const GGS_bool & in_isRequired,
                                                                           const GGS_bool & in_warnsIfUnused,
                                                                           const GGS_omnibusType & in_mStructureType,
                                                                           Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mStructureType = in_mStructureType ;
}

//--------------------------------------------------------------------------------------------------

GGS_structureTypeAssignFunctionIR::GGS_structureTypeAssignFunctionIR (const cPtr_structureTypeAssignFunctionIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structureTypeAssignFunctionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_structureTypeAssignFunctionIR GGS_structureTypeAssignFunctionIR::class_func_new (const GGS_lstring & in_mRoutineMangledName,
                                                                                     const GGS_bool & in_isRequired,
                                                                                     const GGS_bool & in_warnsIfUnused,
                                                                                     const GGS_omnibusType & in_mStructureType,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  GGS_structureTypeAssignFunctionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_structureTypeAssignFunctionIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mStructureType,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_structureTypeAssignFunctionIR::readProperty_mStructureType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_structureTypeAssignFunctionIR * p = (cPtr_structureTypeAssignFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureTypeAssignFunctionIR) ;
    return p->mProperty_mStructureType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_structureTypeAssignFunctionIR::setProperty_mStructureType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_structureTypeAssignFunctionIR * p = (cPtr_structureTypeAssignFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureTypeAssignFunctionIR) ;
    p->mProperty_mStructureType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @structureTypeAssignFunctionIR class
//--------------------------------------------------------------------------------------------------

cPtr_structureTypeAssignFunctionIR::cPtr_structureTypeAssignFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mStructureType () {
}

//--------------------------------------------------------------------------------------------------

cPtr_structureTypeAssignFunctionIR::cPtr_structureTypeAssignFunctionIR (const GGS_lstring & in_mRoutineMangledName,
                                                                        const GGS_bool & in_isRequired,
                                                                        const GGS_bool & in_warnsIfUnused,
                                                                        const GGS_omnibusType & in_mStructureType,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler COMMA_THERE),
mProperty_mStructureType () {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mStructureType = in_mStructureType ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_structureTypeAssignFunctionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structureTypeAssignFunctionIR ;
}

void cPtr_structureTypeAssignFunctionIR::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@structureTypeAssignFunctionIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStructureType.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_structureTypeAssignFunctionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_structureTypeAssignFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mStructureType, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_structureTypeAssignFunctionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mStructureType.printNonNullClassInstanceProperties ("mStructureType") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @structureTypeAssignFunctionIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structureTypeAssignFunctionIR ("structureTypeAssignFunctionIR",
                                                                                     & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_structureTypeAssignFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structureTypeAssignFunctionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_structureTypeAssignFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_structureTypeAssignFunctionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structureTypeAssignFunctionIR GGS_structureTypeAssignFunctionIR::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_structureTypeAssignFunctionIR result ;
  const GGS_structureTypeAssignFunctionIR * p = (const GGS_structureTypeAssignFunctionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_structureTypeAssignFunctionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structureTypeAssignFunctionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @syncDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_syncDeclarationAST::objectCompare (const GGS_syncDeclarationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncDeclarationAST::GGS_syncDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_syncDeclarationAST GGS_syncDeclarationAST::
init_21__21_ (const GGS_lstring & in_mSyncToolName,
              const GGS_structurePropertyListAST & in_mStructurePropertyListAST,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_syncDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_syncDeclarationAST (inCompiler COMMA_THERE)) ;
  object->syncDeclarationAST_init_21__21_ (in_mSyncToolName, in_mStructurePropertyListAST, inCompiler) ;
  const GGS_syncDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_syncDeclarationAST::
syncDeclarationAST_init_21__21_ (const GGS_lstring & in_mSyncToolName,
                                 const GGS_structurePropertyListAST & in_mStructurePropertyListAST,
                                 Compiler * /* inCompiler */) {
  mProperty_mSyncToolName = in_mSyncToolName ;
  mProperty_mStructurePropertyListAST = in_mStructurePropertyListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncDeclarationAST::GGS_syncDeclarationAST (const cPtr_syncDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syncDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_syncDeclarationAST GGS_syncDeclarationAST::class_func_new (const GGS_lstring & in_mSyncToolName,
                                                               const GGS_structurePropertyListAST & in_mStructurePropertyListAST,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GGS_syncDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_syncDeclarationAST (in_mSyncToolName, in_mStructurePropertyListAST,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_syncDeclarationAST::readProperty_mSyncToolName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_syncDeclarationAST * p = (cPtr_syncDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncDeclarationAST) ;
    return p->mProperty_mSyncToolName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syncDeclarationAST::setProperty_mSyncToolName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_syncDeclarationAST * p = (cPtr_syncDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncDeclarationAST) ;
    p->mProperty_mSyncToolName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_structurePropertyListAST GGS_syncDeclarationAST::readProperty_mStructurePropertyListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_structurePropertyListAST () ;
  }else{
    cPtr_syncDeclarationAST * p = (cPtr_syncDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncDeclarationAST) ;
    return p->mProperty_mStructurePropertyListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syncDeclarationAST::setProperty_mStructurePropertyListAST (const GGS_structurePropertyListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_syncDeclarationAST * p = (cPtr_syncDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncDeclarationAST) ;
    p->mProperty_mStructurePropertyListAST = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @syncDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_syncDeclarationAST::cPtr_syncDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mSyncToolName (),
mProperty_mStructurePropertyListAST () {
}

//--------------------------------------------------------------------------------------------------

cPtr_syncDeclarationAST::cPtr_syncDeclarationAST (const GGS_lstring & in_mSyncToolName,
                                                  const GGS_structurePropertyListAST & in_mStructurePropertyListAST,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mSyncToolName (),
mProperty_mStructurePropertyListAST () {
  mProperty_mSyncToolName = in_mSyncToolName ;
  mProperty_mStructurePropertyListAST = in_mStructurePropertyListAST ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_syncDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncDeclarationAST ;
}

void cPtr_syncDeclarationAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@syncDeclarationAST:") ;
  mProperty_mSyncToolName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStructurePropertyListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_syncDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_syncDeclarationAST (mProperty_mSyncToolName, mProperty_mStructurePropertyListAST, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_syncDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mSyncToolName.printNonNullClassInstanceProperties ("mSyncToolName") ;
    mProperty_mStructurePropertyListAST.printNonNullClassInstanceProperties ("mStructurePropertyListAST") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @syncDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syncDeclarationAST ("syncDeclarationAST",
                                                                          & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_syncDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syncDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syncDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncDeclarationAST GGS_syncDeclarationAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_syncDeclarationAST result ;
  const GGS_syncDeclarationAST * p = (const GGS_syncDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syncDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syncDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @integerBuiltinFunctionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_integerBuiltinFunctionIR::objectCompare (const GGS_integerBuiltinFunctionIR & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerBuiltinFunctionIR::GGS_integerBuiltinFunctionIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_integerBuiltinFunctionIR GGS_integerBuiltinFunctionIR::
init_21__21_isRequired_21_warnsIfUnused_21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                 const GGS_bool & in_isRequired,
                                                 const GGS_bool & in_warnsIfUnused,
                                                 const GGS_string & in_mLLVMTypeName,
                                                 const GGS_string & in_mIntrinsicName,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cPtr_integerBuiltinFunctionIR * object = nullptr ;
  macroMyNew (object, cPtr_integerBuiltinFunctionIR (inCompiler COMMA_THERE)) ;
  object->integerBuiltinFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21__21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mLLVMTypeName, in_mIntrinsicName, inCompiler) ;
  const GGS_integerBuiltinFunctionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_integerBuiltinFunctionIR::
integerBuiltinFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                                          const GGS_bool & in_isRequired,
                                                                          const GGS_bool & in_warnsIfUnused,
                                                                          const GGS_string & in_mLLVMTypeName,
                                                                          const GGS_string & in_mIntrinsicName,
                                                                          Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mLLVMTypeName = in_mLLVMTypeName ;
  mProperty_mIntrinsicName = in_mIntrinsicName ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerBuiltinFunctionIR::GGS_integerBuiltinFunctionIR (const cPtr_integerBuiltinFunctionIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_integerBuiltinFunctionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_integerBuiltinFunctionIR GGS_integerBuiltinFunctionIR::class_func_new (const GGS_lstring & in_mRoutineMangledName,
                                                                           const GGS_bool & in_isRequired,
                                                                           const GGS_bool & in_warnsIfUnused,
                                                                           const GGS_string & in_mLLVMTypeName,
                                                                           const GGS_string & in_mIntrinsicName,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  GGS_integerBuiltinFunctionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_integerBuiltinFunctionIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mLLVMTypeName, in_mIntrinsicName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_integerBuiltinFunctionIR::readProperty_mLLVMTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_integerBuiltinFunctionIR * p = (cPtr_integerBuiltinFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerBuiltinFunctionIR) ;
    return p->mProperty_mLLVMTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_integerBuiltinFunctionIR::setProperty_mLLVMTypeName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_integerBuiltinFunctionIR * p = (cPtr_integerBuiltinFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerBuiltinFunctionIR) ;
    p->mProperty_mLLVMTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_integerBuiltinFunctionIR::readProperty_mIntrinsicName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_integerBuiltinFunctionIR * p = (cPtr_integerBuiltinFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerBuiltinFunctionIR) ;
    return p->mProperty_mIntrinsicName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_integerBuiltinFunctionIR::setProperty_mIntrinsicName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_integerBuiltinFunctionIR * p = (cPtr_integerBuiltinFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerBuiltinFunctionIR) ;
    p->mProperty_mIntrinsicName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @integerBuiltinFunctionIR class
//--------------------------------------------------------------------------------------------------

cPtr_integerBuiltinFunctionIR::cPtr_integerBuiltinFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mLLVMTypeName (),
mProperty_mIntrinsicName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_integerBuiltinFunctionIR::cPtr_integerBuiltinFunctionIR (const GGS_lstring & in_mRoutineMangledName,
                                                              const GGS_bool & in_isRequired,
                                                              const GGS_bool & in_warnsIfUnused,
                                                              const GGS_string & in_mLLVMTypeName,
                                                              const GGS_string & in_mIntrinsicName,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler COMMA_THERE),
mProperty_mLLVMTypeName (),
mProperty_mIntrinsicName () {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mLLVMTypeName = in_mLLVMTypeName ;
  mProperty_mIntrinsicName = in_mIntrinsicName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_integerBuiltinFunctionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerBuiltinFunctionIR ;
}

void cPtr_integerBuiltinFunctionIR::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@integerBuiltinFunctionIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLLVMTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIntrinsicName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_integerBuiltinFunctionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_integerBuiltinFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mLLVMTypeName, mProperty_mIntrinsicName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_integerBuiltinFunctionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mLLVMTypeName.printNonNullClassInstanceProperties ("mLLVMTypeName") ;
    mProperty_mIntrinsicName.printNonNullClassInstanceProperties ("mIntrinsicName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @integerBuiltinFunctionIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_integerBuiltinFunctionIR ("integerBuiltinFunctionIR",
                                                                                & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_integerBuiltinFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerBuiltinFunctionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_integerBuiltinFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_integerBuiltinFunctionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerBuiltinFunctionIR GGS_integerBuiltinFunctionIR::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_integerBuiltinFunctionIR result ;
  const GGS_integerBuiltinFunctionIR * p = (const GGS_integerBuiltinFunctionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_integerBuiltinFunctionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("integerBuiltinFunctionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @typeOpaqueDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeOpaqueDeclarationAST::objectCompare (const GGS_typeOpaqueDeclarationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeOpaqueDeclarationAST::GGS_typeOpaqueDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_typeOpaqueDeclarationAST GGS_typeOpaqueDeclarationAST::
init_21__21__21__21_ (const GGS_lstring & in_mOpaqueTypeName,
                      const GGS_expressionAST & in_mSizeExpression,
                      const GGS_location & in_mSizeExpressionLocation,
                      const GGS_lstringlist & in_mAttributeList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_typeOpaqueDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_typeOpaqueDeclarationAST (inCompiler COMMA_THERE)) ;
  object->typeOpaqueDeclarationAST_init_21__21__21__21_ (in_mOpaqueTypeName, in_mSizeExpression, in_mSizeExpressionLocation, in_mAttributeList, inCompiler) ;
  const GGS_typeOpaqueDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_typeOpaqueDeclarationAST::
typeOpaqueDeclarationAST_init_21__21__21__21_ (const GGS_lstring & in_mOpaqueTypeName,
                                               const GGS_expressionAST & in_mSizeExpression,
                                               const GGS_location & in_mSizeExpressionLocation,
                                               const GGS_lstringlist & in_mAttributeList,
                                               Compiler * /* inCompiler */) {
  mProperty_mOpaqueTypeName = in_mOpaqueTypeName ;
  mProperty_mSizeExpression = in_mSizeExpression ;
  mProperty_mSizeExpressionLocation = in_mSizeExpressionLocation ;
  mProperty_mAttributeList = in_mAttributeList ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeOpaqueDeclarationAST::GGS_typeOpaqueDeclarationAST (const cPtr_typeOpaqueDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typeOpaqueDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_typeOpaqueDeclarationAST GGS_typeOpaqueDeclarationAST::class_func_new (const GGS_lstring & in_mOpaqueTypeName,
                                                                           const GGS_expressionAST & in_mSizeExpression,
                                                                           const GGS_location & in_mSizeExpressionLocation,
                                                                           const GGS_lstringlist & in_mAttributeList,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  GGS_typeOpaqueDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_typeOpaqueDeclarationAST (in_mOpaqueTypeName, in_mSizeExpression, in_mSizeExpressionLocation, in_mAttributeList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_typeOpaqueDeclarationAST::readProperty_mOpaqueTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_typeOpaqueDeclarationAST * p = (cPtr_typeOpaqueDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeOpaqueDeclarationAST) ;
    return p->mProperty_mOpaqueTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeOpaqueDeclarationAST::setProperty_mOpaqueTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_typeOpaqueDeclarationAST * p = (cPtr_typeOpaqueDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeOpaqueDeclarationAST) ;
    p->mProperty_mOpaqueTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_typeOpaqueDeclarationAST::readProperty_mSizeExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_typeOpaqueDeclarationAST * p = (cPtr_typeOpaqueDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeOpaqueDeclarationAST) ;
    return p->mProperty_mSizeExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeOpaqueDeclarationAST::setProperty_mSizeExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_typeOpaqueDeclarationAST * p = (cPtr_typeOpaqueDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeOpaqueDeclarationAST) ;
    p->mProperty_mSizeExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_typeOpaqueDeclarationAST::readProperty_mSizeExpressionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_typeOpaqueDeclarationAST * p = (cPtr_typeOpaqueDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeOpaqueDeclarationAST) ;
    return p->mProperty_mSizeExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeOpaqueDeclarationAST::setProperty_mSizeExpressionLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_typeOpaqueDeclarationAST * p = (cPtr_typeOpaqueDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeOpaqueDeclarationAST) ;
    p->mProperty_mSizeExpressionLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_typeOpaqueDeclarationAST::readProperty_mAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_typeOpaqueDeclarationAST * p = (cPtr_typeOpaqueDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeOpaqueDeclarationAST) ;
    return p->mProperty_mAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeOpaqueDeclarationAST::setProperty_mAttributeList (const GGS_lstringlist & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_typeOpaqueDeclarationAST * p = (cPtr_typeOpaqueDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeOpaqueDeclarationAST) ;
    p->mProperty_mAttributeList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @typeOpaqueDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_typeOpaqueDeclarationAST::cPtr_typeOpaqueDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mOpaqueTypeName (),
mProperty_mSizeExpression (),
mProperty_mSizeExpressionLocation (),
mProperty_mAttributeList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_typeOpaqueDeclarationAST::cPtr_typeOpaqueDeclarationAST (const GGS_lstring & in_mOpaqueTypeName,
                                                              const GGS_expressionAST & in_mSizeExpression,
                                                              const GGS_location & in_mSizeExpressionLocation,
                                                              const GGS_lstringlist & in_mAttributeList,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mOpaqueTypeName (),
mProperty_mSizeExpression (),
mProperty_mSizeExpressionLocation (),
mProperty_mAttributeList () {
  mProperty_mOpaqueTypeName = in_mOpaqueTypeName ;
  mProperty_mSizeExpression = in_mSizeExpression ;
  mProperty_mSizeExpressionLocation = in_mSizeExpressionLocation ;
  mProperty_mAttributeList = in_mAttributeList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_typeOpaqueDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeOpaqueDeclarationAST ;
}

void cPtr_typeOpaqueDeclarationAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@typeOpaqueDeclarationAST:") ;
  mProperty_mOpaqueTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSizeExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSizeExpressionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_typeOpaqueDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_typeOpaqueDeclarationAST (mProperty_mOpaqueTypeName, mProperty_mSizeExpression, mProperty_mSizeExpressionLocation, mProperty_mAttributeList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_typeOpaqueDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mOpaqueTypeName.printNonNullClassInstanceProperties ("mOpaqueTypeName") ;
    mProperty_mSizeExpression.printNonNullClassInstanceProperties ("mSizeExpression") ;
    mProperty_mSizeExpressionLocation.printNonNullClassInstanceProperties ("mSizeExpressionLocation") ;
    mProperty_mAttributeList.printNonNullClassInstanceProperties ("mAttributeList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @typeOpaqueDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeOpaqueDeclarationAST ("typeOpaqueDeclarationAST",
                                                                                & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeOpaqueDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeOpaqueDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeOpaqueDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeOpaqueDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeOpaqueDeclarationAST GGS_typeOpaqueDeclarationAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_typeOpaqueDeclarationAST result ;
  const GGS_typeOpaqueDeclarationAST * p = (const GGS_typeOpaqueDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeOpaqueDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeOpaqueDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@typeOpaqueDeclarationAST noteTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_typeOpaqueDeclarationAST::method_noteTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_typeOpaqueDeclarationAST temp_0 = this ;
  ioArgument_ioGraph.setter_noteNode (temp_0.readProperty_mOpaqueTypeName () COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 50)) ;
  }
  const GGS_typeOpaqueDeclarationAST temp_1 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_1.readProperty_mSizeExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 51)) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_noteTypesInPrecedenceGraph (cPtr_typeOpaqueDeclarationAST * inObject,
                                                     GGS_semanticTypePrecedenceGraph & io_ioGraph,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_typeOpaqueDeclarationAST) ;
    inObject->method_noteTypesInPrecedenceGraph  (io_ioGraph, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_controlRegisterDeclarationList_2E_element::GGS_controlRegisterDeclarationList_2E_element (void) :
mProperty_mRegisterArrayList (),
mProperty_mRegisterTypeName (),
mProperty_mRegisterBitSliceList (),
mProperty_mRegisterBitSliceListLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterDeclarationList_2E_element::~ GGS_controlRegisterDeclarationList_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_controlRegisterDeclarationList_2E_element GGS_controlRegisterDeclarationList_2E_element::init_21__21__21__21_ (const GGS_controlRegisterNameListAST & in_mRegisterArrayList,
                                                                                                                   const GGS_lstring & in_mRegisterTypeName,
                                                                                                                   const GGS_controlRegisterBitSliceList & in_mRegisterBitSliceList,
                                                                                                                   const GGS_location & in_mRegisterBitSliceListLocation,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterDeclarationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRegisterArrayList = in_mRegisterArrayList ;
  result.mProperty_mRegisterTypeName = in_mRegisterTypeName ;
  result.mProperty_mRegisterBitSliceList = in_mRegisterBitSliceList ;
  result.mProperty_mRegisterBitSliceListLocation = in_mRegisterBitSliceListLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterDeclarationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterDeclarationList_2E_element::GGS_controlRegisterDeclarationList_2E_element (const GGS_controlRegisterNameListAST & inOperand0,
                                                                                              const GGS_lstring & inOperand1,
                                                                                              const GGS_controlRegisterBitSliceList & inOperand2,
                                                                                              const GGS_location & inOperand3) :
mProperty_mRegisterArrayList (inOperand0),
mProperty_mRegisterTypeName (inOperand1),
mProperty_mRegisterBitSliceList (inOperand2),
mProperty_mRegisterBitSliceListLocation (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterDeclarationList_2E_element GGS_controlRegisterDeclarationList_2E_element::class_func_new (const GGS_controlRegisterNameListAST & in_mRegisterArrayList,
                                                                                                             const GGS_lstring & in_mRegisterTypeName,
                                                                                                             const GGS_controlRegisterBitSliceList & in_mRegisterBitSliceList,
                                                                                                             const GGS_location & in_mRegisterBitSliceListLocation,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterDeclarationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRegisterArrayList = in_mRegisterArrayList ;
  result.mProperty_mRegisterTypeName = in_mRegisterTypeName ;
  result.mProperty_mRegisterBitSliceList = in_mRegisterBitSliceList ;
  result.mProperty_mRegisterBitSliceListLocation = in_mRegisterBitSliceListLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterDeclarationList_2E_element::isValid (void) const {
  return mProperty_mRegisterArrayList.isValid () && mProperty_mRegisterTypeName.isValid () && mProperty_mRegisterBitSliceList.isValid () && mProperty_mRegisterBitSliceListLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterDeclarationList_2E_element::drop (void) {
  mProperty_mRegisterArrayList.drop () ;
  mProperty_mRegisterTypeName.drop () ;
  mProperty_mRegisterBitSliceList.drop () ;
  mProperty_mRegisterBitSliceListLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterDeclarationList_2E_element::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @controlRegisterDeclarationList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mRegisterArrayList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRegisterTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRegisterBitSliceList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRegisterBitSliceListLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @controlRegisterDeclarationList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterDeclarationList_2E_element ("controlRegisterDeclarationList.element",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_controlRegisterDeclarationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterDeclarationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterDeclarationList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterDeclarationList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterDeclarationList_2E_element GGS_controlRegisterDeclarationList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_controlRegisterDeclarationList_2E_element result ;
  const GGS_controlRegisterDeclarationList_2E_element * p = (const GGS_controlRegisterDeclarationList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterDeclarationList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterDeclarationList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @decoratedControlRegisterArrayGroupDeclaration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_decoratedControlRegisterArrayGroupDeclaration::objectCompare (const GGS_decoratedControlRegisterArrayGroupDeclaration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedControlRegisterArrayGroupDeclaration::GGS_decoratedControlRegisterArrayGroupDeclaration (void) :
GGS_abstractDecoratedDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_decoratedControlRegisterArrayGroupDeclaration GGS_decoratedControlRegisterArrayGroupDeclaration::
init_21__21_ (const GGS_lstring & in_mGroupName,
              const GGS_lbigintlist & in_mBaseAddresses,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_decoratedControlRegisterArrayGroupDeclaration * object = nullptr ;
  macroMyNew (object, cPtr_decoratedControlRegisterArrayGroupDeclaration (inCompiler COMMA_THERE)) ;
  object->decoratedControlRegisterArrayGroupDeclaration_init_21__21_ (in_mGroupName, in_mBaseAddresses, inCompiler) ;
  const GGS_decoratedControlRegisterArrayGroupDeclaration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_decoratedControlRegisterArrayGroupDeclaration::
decoratedControlRegisterArrayGroupDeclaration_init_21__21_ (const GGS_lstring & in_mGroupName,
                                                            const GGS_lbigintlist & in_mBaseAddresses,
                                                            Compiler * /* inCompiler */) {
  mProperty_mGroupName = in_mGroupName ;
  mProperty_mBaseAddresses = in_mBaseAddresses ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedControlRegisterArrayGroupDeclaration::GGS_decoratedControlRegisterArrayGroupDeclaration (const cPtr_decoratedControlRegisterArrayGroupDeclaration * inSourcePtr) :
GGS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedControlRegisterArrayGroupDeclaration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_decoratedControlRegisterArrayGroupDeclaration GGS_decoratedControlRegisterArrayGroupDeclaration::class_func_new (const GGS_lstring & in_mGroupName,
                                                                                                                     const GGS_lbigintlist & in_mBaseAddresses,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_decoratedControlRegisterArrayGroupDeclaration result ;
  macroMyNew (result.mObjectPtr, cPtr_decoratedControlRegisterArrayGroupDeclaration (in_mGroupName, in_mBaseAddresses,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_decoratedControlRegisterArrayGroupDeclaration::readProperty_mGroupName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_decoratedControlRegisterArrayGroupDeclaration * p = (cPtr_decoratedControlRegisterArrayGroupDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedControlRegisterArrayGroupDeclaration) ;
    return p->mProperty_mGroupName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedControlRegisterArrayGroupDeclaration::setProperty_mGroupName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedControlRegisterArrayGroupDeclaration * p = (cPtr_decoratedControlRegisterArrayGroupDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedControlRegisterArrayGroupDeclaration) ;
    p->mProperty_mGroupName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lbigintlist GGS_decoratedControlRegisterArrayGroupDeclaration::readProperty_mBaseAddresses (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lbigintlist () ;
  }else{
    cPtr_decoratedControlRegisterArrayGroupDeclaration * p = (cPtr_decoratedControlRegisterArrayGroupDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedControlRegisterArrayGroupDeclaration) ;
    return p->mProperty_mBaseAddresses ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedControlRegisterArrayGroupDeclaration::setProperty_mBaseAddresses (const GGS_lbigintlist & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedControlRegisterArrayGroupDeclaration * p = (cPtr_decoratedControlRegisterArrayGroupDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedControlRegisterArrayGroupDeclaration) ;
    p->mProperty_mBaseAddresses = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @decoratedControlRegisterArrayGroupDeclaration class
//--------------------------------------------------------------------------------------------------

cPtr_decoratedControlRegisterArrayGroupDeclaration::cPtr_decoratedControlRegisterArrayGroupDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (inCompiler COMMA_THERE),
mProperty_mGroupName (),
mProperty_mBaseAddresses () {
}

//--------------------------------------------------------------------------------------------------

cPtr_decoratedControlRegisterArrayGroupDeclaration::cPtr_decoratedControlRegisterArrayGroupDeclaration (const GGS_lstring & in_mGroupName,
                                                                                                        const GGS_lbigintlist & in_mBaseAddresses,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (inCompiler COMMA_THERE),
mProperty_mGroupName (),
mProperty_mBaseAddresses () {
  mProperty_mGroupName = in_mGroupName ;
  mProperty_mBaseAddresses = in_mBaseAddresses ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_decoratedControlRegisterArrayGroupDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedControlRegisterArrayGroupDeclaration ;
}

void cPtr_decoratedControlRegisterArrayGroupDeclaration::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@decoratedControlRegisterArrayGroupDeclaration:") ;
  mProperty_mGroupName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBaseAddresses.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_decoratedControlRegisterArrayGroupDeclaration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_decoratedControlRegisterArrayGroupDeclaration (mProperty_mGroupName, mProperty_mBaseAddresses, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_decoratedControlRegisterArrayGroupDeclaration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDecoratedDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_mGroupName.printNonNullClassInstanceProperties ("mGroupName") ;
    mProperty_mBaseAddresses.printNonNullClassInstanceProperties ("mBaseAddresses") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @decoratedControlRegisterArrayGroupDeclaration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedControlRegisterArrayGroupDeclaration ("decoratedControlRegisterArrayGroupDeclaration",
                                                                                                     & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_decoratedControlRegisterArrayGroupDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedControlRegisterArrayGroupDeclaration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_decoratedControlRegisterArrayGroupDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_decoratedControlRegisterArrayGroupDeclaration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedControlRegisterArrayGroupDeclaration GGS_decoratedControlRegisterArrayGroupDeclaration::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_decoratedControlRegisterArrayGroupDeclaration result ;
  const GGS_decoratedControlRegisterArrayGroupDeclaration * p = (const GGS_decoratedControlRegisterArrayGroupDeclaration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_decoratedControlRegisterArrayGroupDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedControlRegisterArrayGroupDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@controlRegisterGroupArrayList generateLLVMcode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateLLVMcode (const GGS_controlRegisterGroupArrayList inObject,
                                       GGS_string & ioArgument_ioLLVMcode,
                                       const GGS_uint constinArgument_inPointerSize,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_controlRegisterGroupArrayList temp_1 = inObject ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.getter_count (SOURCE_FILE ("declaration-control-register.galgas", 674)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GGS_string ("Control Register Group Arraies"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 675)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 675)) ;
      GGS_string var_int_27891 = GGS_string ("i").add_operation (constinArgument_inPointerSize.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 676)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 676)) ;
      const GGS_controlRegisterGroupArrayList temp_2 = inObject ;
      cEnumerator_controlRegisterGroupArrayList enumerator_27936 (temp_2, EnumerationOrder::up) ;
      while (enumerator_27936.hasCurrentObject ()) {
        ioArgument_ioLLVMcode.plusAssign_operation(function_registerGroupAddressArrayLLVMname (enumerator_27936.current_mGroupName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 678)).add_operation (GGS_string (" = private unnamed_addr constant ["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 678)).add_operation (enumerator_27936.current_mBaseAddresses (HERE).getter_count (SOURCE_FILE ("declaration-control-register.galgas", 679)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 679)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 679)).add_operation (GGS_string (" x "), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 679)).add_operation (var_int_27891, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 679)).add_operation (GGS_string ("] ["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 679)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 678)) ;
        cEnumerator_lbigintlist enumerator_28142 (enumerator_27936.current_mBaseAddresses (HERE), EnumerationOrder::up) ;
        while (enumerator_28142.hasCurrentObject ()) {
          ioArgument_ioLLVMcode.plusAssign_operation(var_int_27891.add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 682)).add_operation (enumerator_28142.current_mValue (HERE).readProperty_bigint ().getter_string (SOURCE_FILE ("declaration-control-register.galgas", 682)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 682)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 682)) ;
          if (enumerator_28142.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 684)) ;
          }
          enumerator_28142.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("] ; "), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 686)) ;
        cEnumerator_lbigintlist enumerator_28318 (enumerator_27936.current_mBaseAddresses (HERE), EnumerationOrder::up) ;
        while (enumerator_28318.hasCurrentObject ()) {
          ioArgument_ioLLVMcode.plusAssign_operation(enumerator_28318.current_mValue (HERE).readProperty_bigint ().getter_hexString (SOURCE_FILE ("declaration-control-register.galgas", 689)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 689)) ;
          if (enumerator_28318.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 691)) ;
          }
          enumerator_28318.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 693)) ;
        enumerator_27936.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 695)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
// @globalConstantDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_globalConstantDeclarationAST::objectCompare (const GGS_globalConstantDeclarationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantDeclarationAST::GGS_globalConstantDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_globalConstantDeclarationAST GGS_globalConstantDeclarationAST::
init_21__21__21__21_ (const GGS_lstring & in_mConstantName,
                      const GGS_lstringlist & in_mAttributeList,
                      const GGS_lstring & in_mConstantTypeName,
                      const GGS_expressionAST & in_mSourceExpression,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_globalConstantDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_globalConstantDeclarationAST (inCompiler COMMA_THERE)) ;
  object->globalConstantDeclarationAST_init_21__21__21__21_ (in_mConstantName, in_mAttributeList, in_mConstantTypeName, in_mSourceExpression, inCompiler) ;
  const GGS_globalConstantDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_globalConstantDeclarationAST::
globalConstantDeclarationAST_init_21__21__21__21_ (const GGS_lstring & in_mConstantName,
                                                   const GGS_lstringlist & in_mAttributeList,
                                                   const GGS_lstring & in_mConstantTypeName,
                                                   const GGS_expressionAST & in_mSourceExpression,
                                                   Compiler * /* inCompiler */) {
  mProperty_mConstantName = in_mConstantName ;
  mProperty_mAttributeList = in_mAttributeList ;
  mProperty_mConstantTypeName = in_mConstantTypeName ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantDeclarationAST::GGS_globalConstantDeclarationAST (const cPtr_globalConstantDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_globalConstantDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_globalConstantDeclarationAST GGS_globalConstantDeclarationAST::class_func_new (const GGS_lstring & in_mConstantName,
                                                                                   const GGS_lstringlist & in_mAttributeList,
                                                                                   const GGS_lstring & in_mConstantTypeName,
                                                                                   const GGS_expressionAST & in_mSourceExpression,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_globalConstantDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_globalConstantDeclarationAST (in_mConstantName, in_mAttributeList, in_mConstantTypeName, in_mSourceExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_globalConstantDeclarationAST::readProperty_mConstantName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_globalConstantDeclarationAST * p = (cPtr_globalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_globalConstantDeclarationAST) ;
    return p->mProperty_mConstantName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_globalConstantDeclarationAST::setProperty_mConstantName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_globalConstantDeclarationAST * p = (cPtr_globalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_globalConstantDeclarationAST) ;
    p->mProperty_mConstantName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_globalConstantDeclarationAST::readProperty_mAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_globalConstantDeclarationAST * p = (cPtr_globalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_globalConstantDeclarationAST) ;
    return p->mProperty_mAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_globalConstantDeclarationAST::setProperty_mAttributeList (const GGS_lstringlist & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_globalConstantDeclarationAST * p = (cPtr_globalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_globalConstantDeclarationAST) ;
    p->mProperty_mAttributeList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_globalConstantDeclarationAST::readProperty_mConstantTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_globalConstantDeclarationAST * p = (cPtr_globalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_globalConstantDeclarationAST) ;
    return p->mProperty_mConstantTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_globalConstantDeclarationAST::setProperty_mConstantTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_globalConstantDeclarationAST * p = (cPtr_globalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_globalConstantDeclarationAST) ;
    p->mProperty_mConstantTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_globalConstantDeclarationAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_globalConstantDeclarationAST * p = (cPtr_globalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_globalConstantDeclarationAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_globalConstantDeclarationAST::setProperty_mSourceExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_globalConstantDeclarationAST * p = (cPtr_globalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_globalConstantDeclarationAST) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @globalConstantDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_globalConstantDeclarationAST::cPtr_globalConstantDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mConstantName (),
mProperty_mAttributeList (),
mProperty_mConstantTypeName (),
mProperty_mSourceExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_globalConstantDeclarationAST::cPtr_globalConstantDeclarationAST (const GGS_lstring & in_mConstantName,
                                                                      const GGS_lstringlist & in_mAttributeList,
                                                                      const GGS_lstring & in_mConstantTypeName,
                                                                      const GGS_expressionAST & in_mSourceExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mConstantName (),
mProperty_mAttributeList (),
mProperty_mConstantTypeName (),
mProperty_mSourceExpression () {
  mProperty_mConstantName = in_mConstantName ;
  mProperty_mAttributeList = in_mAttributeList ;
  mProperty_mConstantTypeName = in_mConstantTypeName ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_globalConstantDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalConstantDeclarationAST ;
}

void cPtr_globalConstantDeclarationAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@globalConstantDeclarationAST:") ;
  mProperty_mConstantName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mConstantTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_globalConstantDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_globalConstantDeclarationAST (mProperty_mConstantName, mProperty_mAttributeList, mProperty_mConstantTypeName, mProperty_mSourceExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_globalConstantDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mConstantName.printNonNullClassInstanceProperties ("mConstantName") ;
    mProperty_mAttributeList.printNonNullClassInstanceProperties ("mAttributeList") ;
    mProperty_mConstantTypeName.printNonNullClassInstanceProperties ("mConstantTypeName") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @globalConstantDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalConstantDeclarationAST ("globalConstantDeclarationAST",
                                                                                    & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_globalConstantDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalConstantDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_globalConstantDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_globalConstantDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantDeclarationAST GGS_globalConstantDeclarationAST::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_globalConstantDeclarationAST result ;
  const GGS_globalConstantDeclarationAST * p = (const GGS_globalConstantDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_globalConstantDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalConstantDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @syncToolInstanceDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_syncToolInstanceDeclarationAST::objectCompare (const GGS_syncToolInstanceDeclarationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncToolInstanceDeclarationAST::GGS_syncToolInstanceDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_syncToolInstanceDeclarationAST GGS_syncToolInstanceDeclarationAST::
init_21__21__21_ (const GGS_lstring & in_mSyncTypeName,
                  const GGS_lstring & in_mSyncInstanceName,
                  const GGS_expressionAST & in_mSourceExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_syncToolInstanceDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_syncToolInstanceDeclarationAST (inCompiler COMMA_THERE)) ;
  object->syncToolInstanceDeclarationAST_init_21__21__21_ (in_mSyncTypeName, in_mSyncInstanceName, in_mSourceExpression, inCompiler) ;
  const GGS_syncToolInstanceDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_syncToolInstanceDeclarationAST::
syncToolInstanceDeclarationAST_init_21__21__21_ (const GGS_lstring & in_mSyncTypeName,
                                                 const GGS_lstring & in_mSyncInstanceName,
                                                 const GGS_expressionAST & in_mSourceExpression,
                                                 Compiler * /* inCompiler */) {
  mProperty_mSyncTypeName = in_mSyncTypeName ;
  mProperty_mSyncInstanceName = in_mSyncInstanceName ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncToolInstanceDeclarationAST::GGS_syncToolInstanceDeclarationAST (const cPtr_syncToolInstanceDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syncToolInstanceDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_syncToolInstanceDeclarationAST GGS_syncToolInstanceDeclarationAST::class_func_new (const GGS_lstring & in_mSyncTypeName,
                                                                                       const GGS_lstring & in_mSyncInstanceName,
                                                                                       const GGS_expressionAST & in_mSourceExpression,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  GGS_syncToolInstanceDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_syncToolInstanceDeclarationAST (in_mSyncTypeName, in_mSyncInstanceName, in_mSourceExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_syncToolInstanceDeclarationAST::readProperty_mSyncTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_syncToolInstanceDeclarationAST * p = (cPtr_syncToolInstanceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncToolInstanceDeclarationAST) ;
    return p->mProperty_mSyncTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syncToolInstanceDeclarationAST::setProperty_mSyncTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_syncToolInstanceDeclarationAST * p = (cPtr_syncToolInstanceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncToolInstanceDeclarationAST) ;
    p->mProperty_mSyncTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_syncToolInstanceDeclarationAST::readProperty_mSyncInstanceName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_syncToolInstanceDeclarationAST * p = (cPtr_syncToolInstanceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncToolInstanceDeclarationAST) ;
    return p->mProperty_mSyncInstanceName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syncToolInstanceDeclarationAST::setProperty_mSyncInstanceName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_syncToolInstanceDeclarationAST * p = (cPtr_syncToolInstanceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncToolInstanceDeclarationAST) ;
    p->mProperty_mSyncInstanceName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_syncToolInstanceDeclarationAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_syncToolInstanceDeclarationAST * p = (cPtr_syncToolInstanceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncToolInstanceDeclarationAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syncToolInstanceDeclarationAST::setProperty_mSourceExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_syncToolInstanceDeclarationAST * p = (cPtr_syncToolInstanceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncToolInstanceDeclarationAST) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @syncToolInstanceDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_syncToolInstanceDeclarationAST::cPtr_syncToolInstanceDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mSyncTypeName (),
mProperty_mSyncInstanceName (),
mProperty_mSourceExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_syncToolInstanceDeclarationAST::cPtr_syncToolInstanceDeclarationAST (const GGS_lstring & in_mSyncTypeName,
                                                                          const GGS_lstring & in_mSyncInstanceName,
                                                                          const GGS_expressionAST & in_mSourceExpression,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mSyncTypeName (),
mProperty_mSyncInstanceName (),
mProperty_mSourceExpression () {
  mProperty_mSyncTypeName = in_mSyncTypeName ;
  mProperty_mSyncInstanceName = in_mSyncInstanceName ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_syncToolInstanceDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST ;
}

void cPtr_syncToolInstanceDeclarationAST::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@syncToolInstanceDeclarationAST:") ;
  mProperty_mSyncTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSyncInstanceName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_syncToolInstanceDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_syncToolInstanceDeclarationAST (mProperty_mSyncTypeName, mProperty_mSyncInstanceName, mProperty_mSourceExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_syncToolInstanceDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mSyncTypeName.printNonNullClassInstanceProperties ("mSyncTypeName") ;
    mProperty_mSyncInstanceName.printNonNullClassInstanceProperties ("mSyncInstanceName") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @syncToolInstanceDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST ("syncToolInstanceDeclarationAST",
                                                                                      & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_syncToolInstanceDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syncToolInstanceDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syncToolInstanceDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncToolInstanceDeclarationAST GGS_syncToolInstanceDeclarationAST::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_syncToolInstanceDeclarationAST result ;
  const GGS_syncToolInstanceDeclarationAST * p = (const GGS_syncToolInstanceDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syncToolInstanceDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syncToolInstanceDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @decoratedSyncInstance reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_decoratedSyncInstance::objectCompare (const GGS_decoratedSyncInstance & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedSyncInstance::GGS_decoratedSyncInstance (void) :
GGS_abstractDecoratedDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_decoratedSyncInstance GGS_decoratedSyncInstance::
init_21__21_ (const GGS_lstring & in_mSyncInstanceName,
              const GGS_objectIR & in_mExpressionGeneratedCode,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_decoratedSyncInstance * object = nullptr ;
  macroMyNew (object, cPtr_decoratedSyncInstance (inCompiler COMMA_THERE)) ;
  object->decoratedSyncInstance_init_21__21_ (in_mSyncInstanceName, in_mExpressionGeneratedCode, inCompiler) ;
  const GGS_decoratedSyncInstance result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_decoratedSyncInstance::
decoratedSyncInstance_init_21__21_ (const GGS_lstring & in_mSyncInstanceName,
                                    const GGS_objectIR & in_mExpressionGeneratedCode,
                                    Compiler * /* inCompiler */) {
  mProperty_mSyncInstanceName = in_mSyncInstanceName ;
  mProperty_mExpressionGeneratedCode = in_mExpressionGeneratedCode ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedSyncInstance::GGS_decoratedSyncInstance (const cPtr_decoratedSyncInstance * inSourcePtr) :
GGS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedSyncInstance) ;
}
//--------------------------------------------------------------------------------------------------

GGS_decoratedSyncInstance GGS_decoratedSyncInstance::class_func_new (const GGS_lstring & in_mSyncInstanceName,
                                                                     const GGS_objectIR & in_mExpressionGeneratedCode,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  GGS_decoratedSyncInstance result ;
  macroMyNew (result.mObjectPtr, cPtr_decoratedSyncInstance (in_mSyncInstanceName, in_mExpressionGeneratedCode,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_decoratedSyncInstance::readProperty_mSyncInstanceName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_decoratedSyncInstance * p = (cPtr_decoratedSyncInstance *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedSyncInstance) ;
    return p->mProperty_mSyncInstanceName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedSyncInstance::setProperty_mSyncInstanceName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedSyncInstance * p = (cPtr_decoratedSyncInstance *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedSyncInstance) ;
    p->mProperty_mSyncInstanceName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_decoratedSyncInstance::readProperty_mExpressionGeneratedCode (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_decoratedSyncInstance * p = (cPtr_decoratedSyncInstance *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedSyncInstance) ;
    return p->mProperty_mExpressionGeneratedCode ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedSyncInstance::setProperty_mExpressionGeneratedCode (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedSyncInstance * p = (cPtr_decoratedSyncInstance *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedSyncInstance) ;
    p->mProperty_mExpressionGeneratedCode = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @decoratedSyncInstance class
//--------------------------------------------------------------------------------------------------

cPtr_decoratedSyncInstance::cPtr_decoratedSyncInstance (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (inCompiler COMMA_THERE),
mProperty_mSyncInstanceName (),
mProperty_mExpressionGeneratedCode () {
}

//--------------------------------------------------------------------------------------------------

cPtr_decoratedSyncInstance::cPtr_decoratedSyncInstance (const GGS_lstring & in_mSyncInstanceName,
                                                        const GGS_objectIR & in_mExpressionGeneratedCode,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (inCompiler COMMA_THERE),
mProperty_mSyncInstanceName (),
mProperty_mExpressionGeneratedCode () {
  mProperty_mSyncInstanceName = in_mSyncInstanceName ;
  mProperty_mExpressionGeneratedCode = in_mExpressionGeneratedCode ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_decoratedSyncInstance::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedSyncInstance ;
}

void cPtr_decoratedSyncInstance::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@decoratedSyncInstance:") ;
  mProperty_mSyncInstanceName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressionGeneratedCode.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_decoratedSyncInstance::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_decoratedSyncInstance (mProperty_mSyncInstanceName, mProperty_mExpressionGeneratedCode, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_decoratedSyncInstance::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDecoratedDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_mSyncInstanceName.printNonNullClassInstanceProperties ("mSyncInstanceName") ;
    mProperty_mExpressionGeneratedCode.printNonNullClassInstanceProperties ("mExpressionGeneratedCode") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @decoratedSyncInstance generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedSyncInstance ("decoratedSyncInstance",
                                                                             & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_decoratedSyncInstance::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedSyncInstance ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_decoratedSyncInstance::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_decoratedSyncInstance (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedSyncInstance GGS_decoratedSyncInstance::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_decoratedSyncInstance result ;
  const GGS_decoratedSyncInstance * p = (const GGS_decoratedSyncInstance *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_decoratedSyncInstance *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedSyncInstance", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMapIR_2E_element::GGS_globalSyncInstanceMapIR_2E_element (void) :
mProperty_lkey (),
mProperty_mInitialValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMapIR_2E_element::~ GGS_globalSyncInstanceMapIR_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_globalSyncInstanceMapIR_2E_element GGS_globalSyncInstanceMapIR_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                             const GGS_objectIR & in_mInitialValue,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_globalSyncInstanceMapIR_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mInitialValue = in_mInitialValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalSyncInstanceMapIR_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMapIR_2E_element::GGS_globalSyncInstanceMapIR_2E_element (const GGS_lstring & inOperand0,
                                                                                const GGS_objectIR & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mInitialValue (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMapIR_2E_element GGS_globalSyncInstanceMapIR_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                               const GGS_objectIR & in_mInitialValue,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_globalSyncInstanceMapIR_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mInitialValue = in_mInitialValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_globalSyncInstanceMapIR_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInitialValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalSyncInstanceMapIR_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mInitialValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalSyncInstanceMapIR_2E_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @globalSyncInstanceMapIR.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInitialValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @globalSyncInstanceMapIR.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalSyncInstanceMapIR_2E_element ("globalSyncInstanceMapIR.element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_globalSyncInstanceMapIR_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalSyncInstanceMapIR_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_globalSyncInstanceMapIR_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_globalSyncInstanceMapIR_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMapIR_2E_element GGS_globalSyncInstanceMapIR_2E_element::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_globalSyncInstanceMapIR_2E_element result ;
  const GGS_globalSyncInstanceMapIR_2E_element * p = (const GGS_globalSyncInstanceMapIR_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_globalSyncInstanceMapIR_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalSyncInstanceMapIR.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverDeclarationAST::GGS_driverDeclarationAST (void) :
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

//--------------------------------------------------------------------------------------------------

GGS_driverDeclarationAST::~ GGS_driverDeclarationAST (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_driverDeclarationAST GGS_driverDeclarationAST::init_21__21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mDriverName,
                                                                                             const GGS_lstringlist & in_mDriverDependanceList,
                                                                                             const GGS_structurePropertyListAST & in_mPropertyListAST,
                                                                                             const GGS_location & in_mBootLocation,
                                                                                             const GGS_instructionListAST & in_mBootInstructionList,
                                                                                             const GGS_location & in_mBootEndLocation,
                                                                                             const GGS_location & in_mStartupLocation,
                                                                                             const GGS_instructionListAST & in_mStartupInstructionList,
                                                                                             const GGS_location & in_mStartupEndLocation,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_driverDeclarationAST result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDriverName = in_mDriverName ;
  result.mProperty_mDriverDependanceList = in_mDriverDependanceList ;
  result.mProperty_mPropertyListAST = in_mPropertyListAST ;
  result.mProperty_mBootLocation = in_mBootLocation ;
  result.mProperty_mBootInstructionList = in_mBootInstructionList ;
  result.mProperty_mBootEndLocation = in_mBootEndLocation ;
  result.mProperty_mStartupLocation = in_mStartupLocation ;
  result.mProperty_mStartupInstructionList = in_mStartupInstructionList ;
  result.mProperty_mStartupEndLocation = in_mStartupEndLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverDeclarationAST::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_driverDeclarationAST::GGS_driverDeclarationAST (const GGS_lstring & inOperand0,
                                                    const GGS_lstringlist & inOperand1,
                                                    const GGS_structurePropertyListAST & inOperand2,
                                                    const GGS_location & inOperand3,
                                                    const GGS_instructionListAST & inOperand4,
                                                    const GGS_location & inOperand5,
                                                    const GGS_location & inOperand6,
                                                    const GGS_instructionListAST & inOperand7,
                                                    const GGS_location & inOperand8) :
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

//--------------------------------------------------------------------------------------------------

GGS_driverDeclarationAST GGS_driverDeclarationAST::class_func_new (const GGS_lstring & in_mDriverName,
                                                                   const GGS_lstringlist & in_mDriverDependanceList,
                                                                   const GGS_structurePropertyListAST & in_mPropertyListAST,
                                                                   const GGS_location & in_mBootLocation,
                                                                   const GGS_instructionListAST & in_mBootInstructionList,
                                                                   const GGS_location & in_mBootEndLocation,
                                                                   const GGS_location & in_mStartupLocation,
                                                                   const GGS_instructionListAST & in_mStartupInstructionList,
                                                                   const GGS_location & in_mStartupEndLocation,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_driverDeclarationAST result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDriverName = in_mDriverName ;
  result.mProperty_mDriverDependanceList = in_mDriverDependanceList ;
  result.mProperty_mPropertyListAST = in_mPropertyListAST ;
  result.mProperty_mBootLocation = in_mBootLocation ;
  result.mProperty_mBootInstructionList = in_mBootInstructionList ;
  result.mProperty_mBootEndLocation = in_mBootEndLocation ;
  result.mProperty_mStartupLocation = in_mStartupLocation ;
  result.mProperty_mStartupInstructionList = in_mStartupInstructionList ;
  result.mProperty_mStartupEndLocation = in_mStartupEndLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_driverDeclarationAST::isValid (void) const {
  return mProperty_mDriverName.isValid () && mProperty_mDriverDependanceList.isValid () && mProperty_mPropertyListAST.isValid () && mProperty_mBootLocation.isValid () && mProperty_mBootInstructionList.isValid () && mProperty_mBootEndLocation.isValid () && mProperty_mStartupLocation.isValid () && mProperty_mStartupInstructionList.isValid () && mProperty_mStartupEndLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverDeclarationAST::drop (void) {
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

//--------------------------------------------------------------------------------------------------

void GGS_driverDeclarationAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @driverDeclarationAST:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mDriverName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDriverDependanceList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPropertyListAST.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBootLocation.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBootInstructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBootEndLocation.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStartupLocation.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStartupInstructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStartupEndLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @driverDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_driverDeclarationAST ("driverDeclarationAST",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_driverDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_driverDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_driverDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverDeclarationAST GGS_driverDeclarationAST::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_driverDeclarationAST result ;
  const GGS_driverDeclarationAST * p = (const GGS_driverDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_driverDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @implementedDriverAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_implementedDriverAST::objectCompare (const GGS_implementedDriverAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_implementedDriverAST::GGS_implementedDriverAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_implementedDriverAST GGS_implementedDriverAST::
init_21__21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mDriverName,
                                          const GGS_lstringlist & in_mDriverDependanceList,
                                          const GGS_bool & in_mIsInstancied,
                                          const GGS_location & in_mBootLocation,
                                          const GGS_instructionListAST & in_mBootInstructionList,
                                          const GGS_location & in_mBootEndLocation,
                                          const GGS_location & in_mStartupLocation,
                                          const GGS_instructionListAST & in_mStartupInstructionList,
                                          const GGS_location & in_mStartupEndLocation,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cPtr_implementedDriverAST * object = nullptr ;
  macroMyNew (object, cPtr_implementedDriverAST (inCompiler COMMA_THERE)) ;
  object->implementedDriverAST_init_21__21__21__21__21__21__21__21__21_ (in_mDriverName, in_mDriverDependanceList, in_mIsInstancied, in_mBootLocation, in_mBootInstructionList, in_mBootEndLocation, in_mStartupLocation, in_mStartupInstructionList, in_mStartupEndLocation, inCompiler) ;
  const GGS_implementedDriverAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_implementedDriverAST::
implementedDriverAST_init_21__21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mDriverName,
                                                               const GGS_lstringlist & in_mDriverDependanceList,
                                                               const GGS_bool & in_mIsInstancied,
                                                               const GGS_location & in_mBootLocation,
                                                               const GGS_instructionListAST & in_mBootInstructionList,
                                                               const GGS_location & in_mBootEndLocation,
                                                               const GGS_location & in_mStartupLocation,
                                                               const GGS_instructionListAST & in_mStartupInstructionList,
                                                               const GGS_location & in_mStartupEndLocation,
                                                               Compiler * /* inCompiler */) {
  mProperty_mDriverName = in_mDriverName ;
  mProperty_mDriverDependanceList = in_mDriverDependanceList ;
  mProperty_mIsInstancied = in_mIsInstancied ;
  mProperty_mBootLocation = in_mBootLocation ;
  mProperty_mBootInstructionList = in_mBootInstructionList ;
  mProperty_mBootEndLocation = in_mBootEndLocation ;
  mProperty_mStartupLocation = in_mStartupLocation ;
  mProperty_mStartupInstructionList = in_mStartupInstructionList ;
  mProperty_mStartupEndLocation = in_mStartupEndLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_implementedDriverAST::GGS_implementedDriverAST (const cPtr_implementedDriverAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_implementedDriverAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_implementedDriverAST GGS_implementedDriverAST::class_func_new (const GGS_lstring & in_mDriverName,
                                                                   const GGS_lstringlist & in_mDriverDependanceList,
                                                                   const GGS_bool & in_mIsInstancied,
                                                                   const GGS_location & in_mBootLocation,
                                                                   const GGS_instructionListAST & in_mBootInstructionList,
                                                                   const GGS_location & in_mBootEndLocation,
                                                                   const GGS_location & in_mStartupLocation,
                                                                   const GGS_instructionListAST & in_mStartupInstructionList,
                                                                   const GGS_location & in_mStartupEndLocation,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  GGS_implementedDriverAST result ;
  macroMyNew (result.mObjectPtr, cPtr_implementedDriverAST (in_mDriverName, in_mDriverDependanceList, in_mIsInstancied, in_mBootLocation, in_mBootInstructionList, in_mBootEndLocation, in_mStartupLocation, in_mStartupInstructionList, in_mStartupEndLocation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_implementedDriverAST::readProperty_mDriverName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    return p->mProperty_mDriverName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_implementedDriverAST::setProperty_mDriverName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    p->mProperty_mDriverName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_implementedDriverAST::readProperty_mDriverDependanceList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    return p->mProperty_mDriverDependanceList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_implementedDriverAST::setProperty_mDriverDependanceList (const GGS_lstringlist & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    p->mProperty_mDriverDependanceList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_implementedDriverAST::readProperty_mIsInstancied (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    return p->mProperty_mIsInstancied ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_implementedDriverAST::setProperty_mIsInstancied (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    p->mProperty_mIsInstancied = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_implementedDriverAST::readProperty_mBootLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    return p->mProperty_mBootLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_implementedDriverAST::setProperty_mBootLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    p->mProperty_mBootLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST GGS_implementedDriverAST::readProperty_mBootInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_instructionListAST () ;
  }else{
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    return p->mProperty_mBootInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_implementedDriverAST::setProperty_mBootInstructionList (const GGS_instructionListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    p->mProperty_mBootInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_implementedDriverAST::readProperty_mBootEndLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    return p->mProperty_mBootEndLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_implementedDriverAST::setProperty_mBootEndLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    p->mProperty_mBootEndLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_implementedDriverAST::readProperty_mStartupLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    return p->mProperty_mStartupLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_implementedDriverAST::setProperty_mStartupLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    p->mProperty_mStartupLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST GGS_implementedDriverAST::readProperty_mStartupInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_instructionListAST () ;
  }else{
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    return p->mProperty_mStartupInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_implementedDriverAST::setProperty_mStartupInstructionList (const GGS_instructionListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    p->mProperty_mStartupInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_implementedDriverAST::readProperty_mStartupEndLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    return p->mProperty_mStartupEndLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_implementedDriverAST::setProperty_mStartupEndLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    p->mProperty_mStartupEndLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @implementedDriverAST class
//--------------------------------------------------------------------------------------------------

cPtr_implementedDriverAST::cPtr_implementedDriverAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mDriverName (),
mProperty_mDriverDependanceList (),
mProperty_mIsInstancied (),
mProperty_mBootLocation (),
mProperty_mBootInstructionList (),
mProperty_mBootEndLocation (),
mProperty_mStartupLocation (),
mProperty_mStartupInstructionList (),
mProperty_mStartupEndLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_implementedDriverAST::cPtr_implementedDriverAST (const GGS_lstring & in_mDriverName,
                                                      const GGS_lstringlist & in_mDriverDependanceList,
                                                      const GGS_bool & in_mIsInstancied,
                                                      const GGS_location & in_mBootLocation,
                                                      const GGS_instructionListAST & in_mBootInstructionList,
                                                      const GGS_location & in_mBootEndLocation,
                                                      const GGS_location & in_mStartupLocation,
                                                      const GGS_instructionListAST & in_mStartupInstructionList,
                                                      const GGS_location & in_mStartupEndLocation,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mDriverName (),
mProperty_mDriverDependanceList (),
mProperty_mIsInstancied (),
mProperty_mBootLocation (),
mProperty_mBootInstructionList (),
mProperty_mBootEndLocation (),
mProperty_mStartupLocation (),
mProperty_mStartupInstructionList (),
mProperty_mStartupEndLocation () {
  mProperty_mDriverName = in_mDriverName ;
  mProperty_mDriverDependanceList = in_mDriverDependanceList ;
  mProperty_mIsInstancied = in_mIsInstancied ;
  mProperty_mBootLocation = in_mBootLocation ;
  mProperty_mBootInstructionList = in_mBootInstructionList ;
  mProperty_mBootEndLocation = in_mBootEndLocation ;
  mProperty_mStartupLocation = in_mStartupLocation ;
  mProperty_mStartupInstructionList = in_mStartupInstructionList ;
  mProperty_mStartupEndLocation = in_mStartupEndLocation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_implementedDriverAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implementedDriverAST ;
}

void cPtr_implementedDriverAST::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@implementedDriverAST:") ;
  mProperty_mDriverName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDriverDependanceList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsInstancied.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBootLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBootInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBootEndLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStartupLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStartupInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStartupEndLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_implementedDriverAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_implementedDriverAST (mProperty_mDriverName, mProperty_mDriverDependanceList, mProperty_mIsInstancied, mProperty_mBootLocation, mProperty_mBootInstructionList, mProperty_mBootEndLocation, mProperty_mStartupLocation, mProperty_mStartupInstructionList, mProperty_mStartupEndLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_implementedDriverAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mDriverName.printNonNullClassInstanceProperties ("mDriverName") ;
    mProperty_mDriverDependanceList.printNonNullClassInstanceProperties ("mDriverDependanceList") ;
    mProperty_mIsInstancied.printNonNullClassInstanceProperties ("mIsInstancied") ;
    mProperty_mBootLocation.printNonNullClassInstanceProperties ("mBootLocation") ;
    mProperty_mBootInstructionList.printNonNullClassInstanceProperties ("mBootInstructionList") ;
    mProperty_mBootEndLocation.printNonNullClassInstanceProperties ("mBootEndLocation") ;
    mProperty_mStartupLocation.printNonNullClassInstanceProperties ("mStartupLocation") ;
    mProperty_mStartupInstructionList.printNonNullClassInstanceProperties ("mStartupInstructionList") ;
    mProperty_mStartupEndLocation.printNonNullClassInstanceProperties ("mStartupEndLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @implementedDriverAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_implementedDriverAST ("implementedDriverAST",
                                                                            & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_implementedDriverAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implementedDriverAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_implementedDriverAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_implementedDriverAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_implementedDriverAST GGS_implementedDriverAST::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_implementedDriverAST result ;
  const GGS_implementedDriverAST * p = (const GGS_implementedDriverAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_implementedDriverAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("implementedDriverAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @decoratedRequiredDriver reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_decoratedRequiredDriver::objectCompare (const GGS_decoratedRequiredDriver & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRequiredDriver::GGS_decoratedRequiredDriver (void) :
GGS_abstractDecoratedDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_decoratedRequiredDriver GGS_decoratedRequiredDriver::
init_21_ (const GGS_lstring & in_mDriverName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_decoratedRequiredDriver * object = nullptr ;
  macroMyNew (object, cPtr_decoratedRequiredDriver (inCompiler COMMA_THERE)) ;
  object->decoratedRequiredDriver_init_21_ (in_mDriverName, inCompiler) ;
  const GGS_decoratedRequiredDriver result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_decoratedRequiredDriver::
decoratedRequiredDriver_init_21_ (const GGS_lstring & in_mDriverName,
                                  Compiler * /* inCompiler */) {
  mProperty_mDriverName = in_mDriverName ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRequiredDriver::GGS_decoratedRequiredDriver (const cPtr_decoratedRequiredDriver * inSourcePtr) :
GGS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedRequiredDriver) ;
}
//--------------------------------------------------------------------------------------------------

GGS_decoratedRequiredDriver GGS_decoratedRequiredDriver::class_func_new (const GGS_lstring & in_mDriverName,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  GGS_decoratedRequiredDriver result ;
  macroMyNew (result.mObjectPtr, cPtr_decoratedRequiredDriver (in_mDriverName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_decoratedRequiredDriver::readProperty_mDriverName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_decoratedRequiredDriver * p = (cPtr_decoratedRequiredDriver *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedRequiredDriver) ;
    return p->mProperty_mDriverName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedRequiredDriver::setProperty_mDriverName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedRequiredDriver * p = (cPtr_decoratedRequiredDriver *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedRequiredDriver) ;
    p->mProperty_mDriverName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @decoratedRequiredDriver class
//--------------------------------------------------------------------------------------------------

cPtr_decoratedRequiredDriver::cPtr_decoratedRequiredDriver (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (inCompiler COMMA_THERE),
mProperty_mDriverName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_decoratedRequiredDriver::cPtr_decoratedRequiredDriver (const GGS_lstring & in_mDriverName,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (inCompiler COMMA_THERE),
mProperty_mDriverName () {
  mProperty_mDriverName = in_mDriverName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_decoratedRequiredDriver::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedRequiredDriver ;
}

void cPtr_decoratedRequiredDriver::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@decoratedRequiredDriver:") ;
  mProperty_mDriverName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_decoratedRequiredDriver::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_decoratedRequiredDriver (mProperty_mDriverName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_decoratedRequiredDriver::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDecoratedDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_mDriverName.printNonNullClassInstanceProperties ("mDriverName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @decoratedRequiredDriver generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedRequiredDriver ("decoratedRequiredDriver",
                                                                               & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_decoratedRequiredDriver::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedRequiredDriver ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_decoratedRequiredDriver::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_decoratedRequiredDriver (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRequiredDriver GGS_decoratedRequiredDriver::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_decoratedRequiredDriver result ;
  const GGS_decoratedRequiredDriver * p = (const GGS_decoratedRequiredDriver *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_decoratedRequiredDriver *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedRequiredDriver", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverListIR_2E_element::GGS_driverListIR_2E_element (void) :
mProperty_mDriverName (),
mProperty_mType (),
mProperty_mInitialValueList () {
}

//--------------------------------------------------------------------------------------------------

GGS_driverListIR_2E_element::~ GGS_driverListIR_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_driverListIR_2E_element GGS_driverListIR_2E_element::init_21__21__21_ (const GGS_lstring & in_mDriverName,
                                                                           const GGS_omnibusType & in_mType,
                                                                           const GGS_operandIRList & in_mInitialValueList,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_driverListIR_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDriverName = in_mDriverName ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mInitialValueList = in_mInitialValueList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverListIR_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_driverListIR_2E_element::GGS_driverListIR_2E_element (const GGS_lstring & inOperand0,
                                                          const GGS_omnibusType & inOperand1,
                                                          const GGS_operandIRList & inOperand2) :
mProperty_mDriverName (inOperand0),
mProperty_mType (inOperand1),
mProperty_mInitialValueList (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_driverListIR_2E_element GGS_driverListIR_2E_element::class_func_new (const GGS_lstring & in_mDriverName,
                                                                         const GGS_omnibusType & in_mType,
                                                                         const GGS_operandIRList & in_mInitialValueList,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_driverListIR_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDriverName = in_mDriverName ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mInitialValueList = in_mInitialValueList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_driverListIR_2E_element::isValid (void) const {
  return mProperty_mDriverName.isValid () && mProperty_mType.isValid () && mProperty_mInitialValueList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverListIR_2E_element::drop (void) {
  mProperty_mDriverName.drop () ;
  mProperty_mType.drop () ;
  mProperty_mInitialValueList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverListIR_2E_element::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @driverListIR.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mDriverName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInitialValueList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @driverListIR.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_driverListIR_2E_element ("driverListIR.element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_driverListIR_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverListIR_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_driverListIR_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_driverListIR_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverListIR_2E_element GGS_driverListIR_2E_element::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_driverListIR_2E_element result ;
  const GGS_driverListIR_2E_element * p = (const GGS_driverListIR_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_driverListIR_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverListIR.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @staticListAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_staticListAST::objectCompare (const GGS_staticListAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListAST::GGS_staticListAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_staticListAST GGS_staticListAST::
init_21__21__21_ (const GGS_lstring & in_mStaticListName,
                  const GGS_staticListPropertyListAST & in_mPropertyList,
                  const GGS_staticListValueListAST & in_mValueList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_staticListAST * object = nullptr ;
  macroMyNew (object, cPtr_staticListAST (inCompiler COMMA_THERE)) ;
  object->staticListAST_init_21__21__21_ (in_mStaticListName, in_mPropertyList, in_mValueList, inCompiler) ;
  const GGS_staticListAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_staticListAST::
staticListAST_init_21__21__21_ (const GGS_lstring & in_mStaticListName,
                                const GGS_staticListPropertyListAST & in_mPropertyList,
                                const GGS_staticListValueListAST & in_mValueList,
                                Compiler * /* inCompiler */) {
  mProperty_mStaticListName = in_mStaticListName ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_mValueList = in_mValueList ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListAST::GGS_staticListAST (const cPtr_staticListAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_staticListAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_staticListAST GGS_staticListAST::class_func_new (const GGS_lstring & in_mStaticListName,
                                                     const GGS_staticListPropertyListAST & in_mPropertyList,
                                                     const GGS_staticListValueListAST & in_mValueList,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  GGS_staticListAST result ;
  macroMyNew (result.mObjectPtr, cPtr_staticListAST (in_mStaticListName, in_mPropertyList, in_mValueList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_staticListAST::readProperty_mStaticListName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_staticListAST * p = (cPtr_staticListAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListAST) ;
    return p->mProperty_mStaticListName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListAST::setProperty_mStaticListName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_staticListAST * p = (cPtr_staticListAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListAST) ;
    p->mProperty_mStaticListName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyListAST GGS_staticListAST::readProperty_mPropertyList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_staticListPropertyListAST () ;
  }else{
    cPtr_staticListAST * p = (cPtr_staticListAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListAST) ;
    return p->mProperty_mPropertyList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListAST::setProperty_mPropertyList (const GGS_staticListPropertyListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_staticListAST * p = (cPtr_staticListAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListAST) ;
    p->mProperty_mPropertyList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_staticListValueListAST GGS_staticListAST::readProperty_mValueList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_staticListValueListAST () ;
  }else{
    cPtr_staticListAST * p = (cPtr_staticListAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListAST) ;
    return p->mProperty_mValueList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListAST::setProperty_mValueList (const GGS_staticListValueListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_staticListAST * p = (cPtr_staticListAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListAST) ;
    p->mProperty_mValueList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @staticListAST class
//--------------------------------------------------------------------------------------------------

cPtr_staticListAST::cPtr_staticListAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mStaticListName (),
mProperty_mPropertyList (),
mProperty_mValueList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_staticListAST::cPtr_staticListAST (const GGS_lstring & in_mStaticListName,
                                        const GGS_staticListPropertyListAST & in_mPropertyList,
                                        const GGS_staticListValueListAST & in_mValueList,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mStaticListName (),
mProperty_mPropertyList (),
mProperty_mValueList () {
  mProperty_mStaticListName = in_mStaticListName ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_mValueList = in_mValueList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_staticListAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListAST ;
}

void cPtr_staticListAST::description (String & ioString,
                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@staticListAST:") ;
  mProperty_mStaticListName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPropertyList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mValueList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_staticListAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_staticListAST (mProperty_mStaticListName, mProperty_mPropertyList, mProperty_mValueList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_staticListAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mStaticListName.printNonNullClassInstanceProperties ("mStaticListName") ;
    mProperty_mPropertyList.printNonNullClassInstanceProperties ("mPropertyList") ;
    mProperty_mValueList.printNonNullClassInstanceProperties ("mValueList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @staticListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListAST ("staticListAST",
                                                                     & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_staticListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_staticListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_staticListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListAST GGS_staticListAST::extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GGS_staticListAST result ;
  const GGS_staticListAST * p = (const GGS_staticListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_staticListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @decoratedStaticList reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_decoratedStaticList::objectCompare (const GGS_decoratedStaticList & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedStaticList::GGS_decoratedStaticList (void) :
GGS_abstractDecoratedDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_decoratedStaticList GGS_decoratedStaticList::
init_21__21_ (const GGS_lstring & in_mStaticListName,
              const GGS_staticListValueListAST & in_mValueList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_decoratedStaticList * object = nullptr ;
  macroMyNew (object, cPtr_decoratedStaticList (inCompiler COMMA_THERE)) ;
  object->decoratedStaticList_init_21__21_ (in_mStaticListName, in_mValueList, inCompiler) ;
  const GGS_decoratedStaticList result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_decoratedStaticList::
decoratedStaticList_init_21__21_ (const GGS_lstring & in_mStaticListName,
                                  const GGS_staticListValueListAST & in_mValueList,
                                  Compiler * /* inCompiler */) {
  mProperty_mStaticListName = in_mStaticListName ;
  mProperty_mValueList = in_mValueList ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedStaticList::GGS_decoratedStaticList (const cPtr_decoratedStaticList * inSourcePtr) :
GGS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedStaticList) ;
}
//--------------------------------------------------------------------------------------------------

GGS_decoratedStaticList GGS_decoratedStaticList::class_func_new (const GGS_lstring & in_mStaticListName,
                                                                 const GGS_staticListValueListAST & in_mValueList,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  GGS_decoratedStaticList result ;
  macroMyNew (result.mObjectPtr, cPtr_decoratedStaticList (in_mStaticListName, in_mValueList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_decoratedStaticList::readProperty_mStaticListName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_decoratedStaticList * p = (cPtr_decoratedStaticList *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedStaticList) ;
    return p->mProperty_mStaticListName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedStaticList::setProperty_mStaticListName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedStaticList * p = (cPtr_decoratedStaticList *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedStaticList) ;
    p->mProperty_mStaticListName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_staticListValueListAST GGS_decoratedStaticList::readProperty_mValueList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_staticListValueListAST () ;
  }else{
    cPtr_decoratedStaticList * p = (cPtr_decoratedStaticList *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedStaticList) ;
    return p->mProperty_mValueList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedStaticList::setProperty_mValueList (const GGS_staticListValueListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedStaticList * p = (cPtr_decoratedStaticList *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedStaticList) ;
    p->mProperty_mValueList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @decoratedStaticList class
//--------------------------------------------------------------------------------------------------

cPtr_decoratedStaticList::cPtr_decoratedStaticList (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (inCompiler COMMA_THERE),
mProperty_mStaticListName (),
mProperty_mValueList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_decoratedStaticList::cPtr_decoratedStaticList (const GGS_lstring & in_mStaticListName,
                                                    const GGS_staticListValueListAST & in_mValueList,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (inCompiler COMMA_THERE),
mProperty_mStaticListName (),
mProperty_mValueList () {
  mProperty_mStaticListName = in_mStaticListName ;
  mProperty_mValueList = in_mValueList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_decoratedStaticList::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedStaticList ;
}

void cPtr_decoratedStaticList::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@decoratedStaticList:") ;
  mProperty_mStaticListName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mValueList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_decoratedStaticList::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_decoratedStaticList (mProperty_mStaticListName, mProperty_mValueList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_decoratedStaticList::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDecoratedDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_mStaticListName.printNonNullClassInstanceProperties ("mStaticListName") ;
    mProperty_mValueList.printNonNullClassInstanceProperties ("mValueList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @decoratedStaticList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedStaticList ("decoratedStaticList",
                                                                           & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_decoratedStaticList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedStaticList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_decoratedStaticList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_decoratedStaticList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedStaticList GGS_decoratedStaticList::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_decoratedStaticList result ;
  const GGS_decoratedStaticList * p = (const GGS_decoratedStaticList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_decoratedStaticList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedStaticList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @staticListIndirectRoutineIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_staticListIndirectRoutineIR::objectCompare (const GGS_staticListIndirectRoutineIR & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListIndirectRoutineIR::GGS_staticListIndirectRoutineIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_staticListIndirectRoutineIR GGS_staticListIndirectRoutineIR::
init_21__21_isRequired_21_warnsIfUnused_21__21__21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                         const GGS_bool & in_isRequired,
                                                         const GGS_bool & in_warnsIfUnused,
                                                         const GGS_unifiedTypeMapEntry & in_mStaticListElementType,
                                                         const GGS_routineTypedSignature & in_mFormalArgumentListForGeneration,
                                                         const GGS_unifiedTypeMapEntry & in_mReturnTypeProxy,
                                                         const GGS_uint & in_mPropertyIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cPtr_staticListIndirectRoutineIR * object = nullptr ;
  macroMyNew (object, cPtr_staticListIndirectRoutineIR (inCompiler COMMA_THERE)) ;
  object->staticListIndirectRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mStaticListElementType, in_mFormalArgumentListForGeneration, in_mReturnTypeProxy, in_mPropertyIndex, inCompiler) ;
  const GGS_staticListIndirectRoutineIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_staticListIndirectRoutineIR::
staticListIndirectRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                                                     const GGS_bool & in_isRequired,
                                                                                     const GGS_bool & in_warnsIfUnused,
                                                                                     const GGS_unifiedTypeMapEntry & in_mStaticListElementType,
                                                                                     const GGS_routineTypedSignature & in_mFormalArgumentListForGeneration,
                                                                                     const GGS_unifiedTypeMapEntry & in_mReturnTypeProxy,
                                                                                     const GGS_uint & in_mPropertyIndex,
                                                                                     Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mStaticListElementType = in_mStaticListElementType ;
  mProperty_mFormalArgumentListForGeneration = in_mFormalArgumentListForGeneration ;
  mProperty_mReturnTypeProxy = in_mReturnTypeProxy ;
  mProperty_mPropertyIndex = in_mPropertyIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListIndirectRoutineIR::GGS_staticListIndirectRoutineIR (const cPtr_staticListIndirectRoutineIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_staticListIndirectRoutineIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_staticListIndirectRoutineIR GGS_staticListIndirectRoutineIR::class_func_new (const GGS_lstring & in_mRoutineMangledName,
                                                                                 const GGS_bool & in_isRequired,
                                                                                 const GGS_bool & in_warnsIfUnused,
                                                                                 const GGS_unifiedTypeMapEntry & in_mStaticListElementType,
                                                                                 const GGS_routineTypedSignature & in_mFormalArgumentListForGeneration,
                                                                                 const GGS_unifiedTypeMapEntry & in_mReturnTypeProxy,
                                                                                 const GGS_uint & in_mPropertyIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  GGS_staticListIndirectRoutineIR result ;
  macroMyNew (result.mObjectPtr, cPtr_staticListIndirectRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mStaticListElementType, in_mFormalArgumentListForGeneration, in_mReturnTypeProxy, in_mPropertyIndex,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_staticListIndirectRoutineIR::readProperty_mStaticListElementType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_staticListIndirectRoutineIR * p = (cPtr_staticListIndirectRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListIndirectRoutineIR) ;
    return p->mProperty_mStaticListElementType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListIndirectRoutineIR::setProperty_mStaticListElementType (const GGS_unifiedTypeMapEntry & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_staticListIndirectRoutineIR * p = (cPtr_staticListIndirectRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListIndirectRoutineIR) ;
    p->mProperty_mStaticListElementType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature GGS_staticListIndirectRoutineIR::readProperty_mFormalArgumentListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_routineTypedSignature () ;
  }else{
    cPtr_staticListIndirectRoutineIR * p = (cPtr_staticListIndirectRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListIndirectRoutineIR) ;
    return p->mProperty_mFormalArgumentListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListIndirectRoutineIR::setProperty_mFormalArgumentListForGeneration (const GGS_routineTypedSignature & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_staticListIndirectRoutineIR * p = (cPtr_staticListIndirectRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListIndirectRoutineIR) ;
    p->mProperty_mFormalArgumentListForGeneration = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_staticListIndirectRoutineIR::readProperty_mReturnTypeProxy (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_staticListIndirectRoutineIR * p = (cPtr_staticListIndirectRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListIndirectRoutineIR) ;
    return p->mProperty_mReturnTypeProxy ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListIndirectRoutineIR::setProperty_mReturnTypeProxy (const GGS_unifiedTypeMapEntry & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_staticListIndirectRoutineIR * p = (cPtr_staticListIndirectRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListIndirectRoutineIR) ;
    p->mProperty_mReturnTypeProxy = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_staticListIndirectRoutineIR::readProperty_mPropertyIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_staticListIndirectRoutineIR * p = (cPtr_staticListIndirectRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListIndirectRoutineIR) ;
    return p->mProperty_mPropertyIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListIndirectRoutineIR::setProperty_mPropertyIndex (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_staticListIndirectRoutineIR * p = (cPtr_staticListIndirectRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListIndirectRoutineIR) ;
    p->mProperty_mPropertyIndex = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @staticListIndirectRoutineIR class
//--------------------------------------------------------------------------------------------------

cPtr_staticListIndirectRoutineIR::cPtr_staticListIndirectRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mStaticListElementType (),
mProperty_mFormalArgumentListForGeneration (),
mProperty_mReturnTypeProxy (),
mProperty_mPropertyIndex () {
}

//--------------------------------------------------------------------------------------------------

cPtr_staticListIndirectRoutineIR::cPtr_staticListIndirectRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                                                    const GGS_bool & in_isRequired,
                                                                    const GGS_bool & in_warnsIfUnused,
                                                                    const GGS_unifiedTypeMapEntry & in_mStaticListElementType,
                                                                    const GGS_routineTypedSignature & in_mFormalArgumentListForGeneration,
                                                                    const GGS_unifiedTypeMapEntry & in_mReturnTypeProxy,
                                                                    const GGS_uint & in_mPropertyIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler COMMA_THERE),
mProperty_mStaticListElementType (),
mProperty_mFormalArgumentListForGeneration (),
mProperty_mReturnTypeProxy (),
mProperty_mPropertyIndex () {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mStaticListElementType = in_mStaticListElementType ;
  mProperty_mFormalArgumentListForGeneration = in_mFormalArgumentListForGeneration ;
  mProperty_mReturnTypeProxy = in_mReturnTypeProxy ;
  mProperty_mPropertyIndex = in_mPropertyIndex ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_staticListIndirectRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListIndirectRoutineIR ;
}

void cPtr_staticListIndirectRoutineIR::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@staticListIndirectRoutineIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStaticListElementType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentListForGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReturnTypeProxy.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPropertyIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_staticListIndirectRoutineIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_staticListIndirectRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mStaticListElementType, mProperty_mFormalArgumentListForGeneration, mProperty_mReturnTypeProxy, mProperty_mPropertyIndex, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_staticListIndirectRoutineIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mStaticListElementType.printNonNullClassInstanceProperties ("mStaticListElementType") ;
    mProperty_mFormalArgumentListForGeneration.printNonNullClassInstanceProperties ("mFormalArgumentListForGeneration") ;
    mProperty_mReturnTypeProxy.printNonNullClassInstanceProperties ("mReturnTypeProxy") ;
    mProperty_mPropertyIndex.printNonNullClassInstanceProperties ("mPropertyIndex") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @staticListIndirectRoutineIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListIndirectRoutineIR ("staticListIndirectRoutineIR",
                                                                                   & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_staticListIndirectRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListIndirectRoutineIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_staticListIndirectRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_staticListIndirectRoutineIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListIndirectRoutineIR GGS_staticListIndirectRoutineIR::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_staticListIndirectRoutineIR result ;
  const GGS_staticListIndirectRoutineIR * p = (const GGS_staticListIndirectRoutineIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_staticListIndirectRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListIndirectRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList_2E_element::GGS_decoratedTaskList_2E_element (void) :
mProperty_mTaskName (),
mProperty_mStackSize (),
mProperty_mTaskSetupListAST (),
mProperty_mTaskActivateListAST (),
mProperty_mTaskDeactivateListAST (),
mProperty_mEndOfTaskDeclaration (),
mProperty_mAutoStart () {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList_2E_element::~ GGS_decoratedTaskList_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_decoratedTaskList_2E_element GGS_decoratedTaskList_2E_element::init_21__21__21__21__21__21__21_ (const GGS_lstring & in_mTaskName,
                                                                                                     const GGS_lbigint & in_mStackSize,
                                                                                                     const GGS_taskSetupListAST & in_mTaskSetupListAST,
                                                                                                     const GGS_taskSetupListAST & in_mTaskActivateListAST,
                                                                                                     const GGS_taskSetupListAST & in_mTaskDeactivateListAST,
                                                                                                     const GGS_location & in_mEndOfTaskDeclaration,
                                                                                                     const GGS_bool & in_mAutoStart,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_decoratedTaskList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTaskName = in_mTaskName ;
  result.mProperty_mStackSize = in_mStackSize ;
  result.mProperty_mTaskSetupListAST = in_mTaskSetupListAST ;
  result.mProperty_mTaskActivateListAST = in_mTaskActivateListAST ;
  result.mProperty_mTaskDeactivateListAST = in_mTaskDeactivateListAST ;
  result.mProperty_mEndOfTaskDeclaration = in_mEndOfTaskDeclaration ;
  result.mProperty_mAutoStart = in_mAutoStart ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList_2E_element::GGS_decoratedTaskList_2E_element (const GGS_lstring & inOperand0,
                                                                    const GGS_lbigint & inOperand1,
                                                                    const GGS_taskSetupListAST & inOperand2,
                                                                    const GGS_taskSetupListAST & inOperand3,
                                                                    const GGS_taskSetupListAST & inOperand4,
                                                                    const GGS_location & inOperand5,
                                                                    const GGS_bool & inOperand6) :
mProperty_mTaskName (inOperand0),
mProperty_mStackSize (inOperand1),
mProperty_mTaskSetupListAST (inOperand2),
mProperty_mTaskActivateListAST (inOperand3),
mProperty_mTaskDeactivateListAST (inOperand4),
mProperty_mEndOfTaskDeclaration (inOperand5),
mProperty_mAutoStart (inOperand6) {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList_2E_element GGS_decoratedTaskList_2E_element::class_func_new (const GGS_lstring & in_mTaskName,
                                                                                   const GGS_lbigint & in_mStackSize,
                                                                                   const GGS_taskSetupListAST & in_mTaskSetupListAST,
                                                                                   const GGS_taskSetupListAST & in_mTaskActivateListAST,
                                                                                   const GGS_taskSetupListAST & in_mTaskDeactivateListAST,
                                                                                   const GGS_location & in_mEndOfTaskDeclaration,
                                                                                   const GGS_bool & in_mAutoStart,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_decoratedTaskList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTaskName = in_mTaskName ;
  result.mProperty_mStackSize = in_mStackSize ;
  result.mProperty_mTaskSetupListAST = in_mTaskSetupListAST ;
  result.mProperty_mTaskActivateListAST = in_mTaskActivateListAST ;
  result.mProperty_mTaskDeactivateListAST = in_mTaskDeactivateListAST ;
  result.mProperty_mEndOfTaskDeclaration = in_mEndOfTaskDeclaration ;
  result.mProperty_mAutoStart = in_mAutoStart ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_decoratedTaskList_2E_element::isValid (void) const {
  return mProperty_mTaskName.isValid () && mProperty_mStackSize.isValid () && mProperty_mTaskSetupListAST.isValid () && mProperty_mTaskActivateListAST.isValid () && mProperty_mTaskDeactivateListAST.isValid () && mProperty_mEndOfTaskDeclaration.isValid () && mProperty_mAutoStart.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList_2E_element::drop (void) {
  mProperty_mTaskName.drop () ;
  mProperty_mStackSize.drop () ;
  mProperty_mTaskSetupListAST.drop () ;
  mProperty_mTaskActivateListAST.drop () ;
  mProperty_mTaskDeactivateListAST.drop () ;
  mProperty_mEndOfTaskDeclaration.drop () ;
  mProperty_mAutoStart.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList_2E_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @decoratedTaskList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mTaskName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStackSize.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTaskSetupListAST.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTaskActivateListAST.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTaskDeactivateListAST.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfTaskDeclaration.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAutoStart.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @decoratedTaskList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedTaskList_2E_element ("decoratedTaskList.element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_decoratedTaskList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedTaskList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_decoratedTaskList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_decoratedTaskList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList_2E_element GGS_decoratedTaskList_2E_element::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_decoratedTaskList_2E_element result ;
  const GGS_decoratedTaskList_2E_element * p = (const GGS_decoratedTaskList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_decoratedTaskList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedTaskList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @taskActivateFunctionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_taskActivateFunctionIR::objectCompare (const GGS_taskActivateFunctionIR & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskActivateFunctionIR::GGS_taskActivateFunctionIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_taskActivateFunctionIR GGS_taskActivateFunctionIR::
init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                     const GGS_bool & in_isRequired,
                                                     const GGS_bool & in_warnsIfUnused,
                                                     const GGS_string & in_mAssemblerTaskName,
                                                     const GGS_string & in_mActivateServiceInvocationName,
                                                     const GGS_uint & in_mTaskIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cPtr_taskActivateFunctionIR * object = nullptr ;
  macroMyNew (object, cPtr_taskActivateFunctionIR (inCompiler COMMA_THERE)) ;
  object->taskActivateFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mAssemblerTaskName, in_mActivateServiceInvocationName, in_mTaskIndex, inCompiler) ;
  const GGS_taskActivateFunctionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_taskActivateFunctionIR::
taskActivateFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                                            const GGS_bool & in_isRequired,
                                                                            const GGS_bool & in_warnsIfUnused,
                                                                            const GGS_string & in_mAssemblerTaskName,
                                                                            const GGS_string & in_mActivateServiceInvocationName,
                                                                            const GGS_uint & in_mTaskIndex,
                                                                            Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mAssemblerTaskName = in_mAssemblerTaskName ;
  mProperty_mActivateServiceInvocationName = in_mActivateServiceInvocationName ;
  mProperty_mTaskIndex = in_mTaskIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskActivateFunctionIR::GGS_taskActivateFunctionIR (const cPtr_taskActivateFunctionIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_taskActivateFunctionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_taskActivateFunctionIR GGS_taskActivateFunctionIR::class_func_new (const GGS_lstring & in_mRoutineMangledName,
                                                                       const GGS_bool & in_isRequired,
                                                                       const GGS_bool & in_warnsIfUnused,
                                                                       const GGS_string & in_mAssemblerTaskName,
                                                                       const GGS_string & in_mActivateServiceInvocationName,
                                                                       const GGS_uint & in_mTaskIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  GGS_taskActivateFunctionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_taskActivateFunctionIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mAssemblerTaskName, in_mActivateServiceInvocationName, in_mTaskIndex,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_taskActivateFunctionIR::readProperty_mAssemblerTaskName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_taskActivateFunctionIR * p = (cPtr_taskActivateFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskActivateFunctionIR) ;
    return p->mProperty_mAssemblerTaskName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskActivateFunctionIR::setProperty_mAssemblerTaskName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_taskActivateFunctionIR * p = (cPtr_taskActivateFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskActivateFunctionIR) ;
    p->mProperty_mAssemblerTaskName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_taskActivateFunctionIR::readProperty_mActivateServiceInvocationName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_taskActivateFunctionIR * p = (cPtr_taskActivateFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskActivateFunctionIR) ;
    return p->mProperty_mActivateServiceInvocationName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskActivateFunctionIR::setProperty_mActivateServiceInvocationName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_taskActivateFunctionIR * p = (cPtr_taskActivateFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskActivateFunctionIR) ;
    p->mProperty_mActivateServiceInvocationName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_taskActivateFunctionIR::readProperty_mTaskIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_taskActivateFunctionIR * p = (cPtr_taskActivateFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskActivateFunctionIR) ;
    return p->mProperty_mTaskIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskActivateFunctionIR::setProperty_mTaskIndex (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_taskActivateFunctionIR * p = (cPtr_taskActivateFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskActivateFunctionIR) ;
    p->mProperty_mTaskIndex = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @taskActivateFunctionIR class
//--------------------------------------------------------------------------------------------------

cPtr_taskActivateFunctionIR::cPtr_taskActivateFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mAssemblerTaskName (),
mProperty_mActivateServiceInvocationName (),
mProperty_mTaskIndex () {
}

//--------------------------------------------------------------------------------------------------

cPtr_taskActivateFunctionIR::cPtr_taskActivateFunctionIR (const GGS_lstring & in_mRoutineMangledName,
                                                          const GGS_bool & in_isRequired,
                                                          const GGS_bool & in_warnsIfUnused,
                                                          const GGS_string & in_mAssemblerTaskName,
                                                          const GGS_string & in_mActivateServiceInvocationName,
                                                          const GGS_uint & in_mTaskIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler COMMA_THERE),
mProperty_mAssemblerTaskName (),
mProperty_mActivateServiceInvocationName (),
mProperty_mTaskIndex () {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mAssemblerTaskName = in_mAssemblerTaskName ;
  mProperty_mActivateServiceInvocationName = in_mActivateServiceInvocationName ;
  mProperty_mTaskIndex = in_mTaskIndex ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_taskActivateFunctionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskActivateFunctionIR ;
}

void cPtr_taskActivateFunctionIR::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@taskActivateFunctionIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAssemblerTaskName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActivateServiceInvocationName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTaskIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_taskActivateFunctionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_taskActivateFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mAssemblerTaskName, mProperty_mActivateServiceInvocationName, mProperty_mTaskIndex, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_taskActivateFunctionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mAssemblerTaskName.printNonNullClassInstanceProperties ("mAssemblerTaskName") ;
    mProperty_mActivateServiceInvocationName.printNonNullClassInstanceProperties ("mActivateServiceInvocationName") ;
    mProperty_mTaskIndex.printNonNullClassInstanceProperties ("mTaskIndex") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @taskActivateFunctionIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskActivateFunctionIR ("taskActivateFunctionIR",
                                                                              & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_taskActivateFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskActivateFunctionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_taskActivateFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_taskActivateFunctionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskActivateFunctionIR GGS_taskActivateFunctionIR::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_taskActivateFunctionIR result ;
  const GGS_taskActivateFunctionIR * p = (const GGS_taskActivateFunctionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_taskActivateFunctionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskActivateFunctionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @taskSetupDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_taskSetupDeclarationAST::objectCompare (const GGS_taskSetupDeclarationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupDeclarationAST::GGS_taskSetupDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_taskSetupDeclarationAST GGS_taskSetupDeclarationAST::
init_21__21__21__21__21__21_ (const GGS_lstring & in_mTaskName,
                              const GGS_string & in_mQualifier,
                              const GGS_lstring & in_mSetupName,
                              const GGS_lstringlist & in_mDependanceList,
                              const GGS_instructionListAST & in_mTaskSetupInstructionList,
                              const GGS_location & in_mEndOfTaskSetupDeclaration,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_taskSetupDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_taskSetupDeclarationAST (inCompiler COMMA_THERE)) ;
  object->taskSetupDeclarationAST_init_21__21__21__21__21__21_ (in_mTaskName, in_mQualifier, in_mSetupName, in_mDependanceList, in_mTaskSetupInstructionList, in_mEndOfTaskSetupDeclaration, inCompiler) ;
  const GGS_taskSetupDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_taskSetupDeclarationAST::
taskSetupDeclarationAST_init_21__21__21__21__21__21_ (const GGS_lstring & in_mTaskName,
                                                      const GGS_string & in_mQualifier,
                                                      const GGS_lstring & in_mSetupName,
                                                      const GGS_lstringlist & in_mDependanceList,
                                                      const GGS_instructionListAST & in_mTaskSetupInstructionList,
                                                      const GGS_location & in_mEndOfTaskSetupDeclaration,
                                                      Compiler * /* inCompiler */) {
  mProperty_mTaskName = in_mTaskName ;
  mProperty_mQualifier = in_mQualifier ;
  mProperty_mSetupName = in_mSetupName ;
  mProperty_mDependanceList = in_mDependanceList ;
  mProperty_mTaskSetupInstructionList = in_mTaskSetupInstructionList ;
  mProperty_mEndOfTaskSetupDeclaration = in_mEndOfTaskSetupDeclaration ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupDeclarationAST::GGS_taskSetupDeclarationAST (const cPtr_taskSetupDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_taskSetupDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_taskSetupDeclarationAST GGS_taskSetupDeclarationAST::class_func_new (const GGS_lstring & in_mTaskName,
                                                                         const GGS_string & in_mQualifier,
                                                                         const GGS_lstring & in_mSetupName,
                                                                         const GGS_lstringlist & in_mDependanceList,
                                                                         const GGS_instructionListAST & in_mTaskSetupInstructionList,
                                                                         const GGS_location & in_mEndOfTaskSetupDeclaration,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  GGS_taskSetupDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_taskSetupDeclarationAST (in_mTaskName, in_mQualifier, in_mSetupName, in_mDependanceList, in_mTaskSetupInstructionList, in_mEndOfTaskSetupDeclaration,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_taskSetupDeclarationAST::readProperty_mTaskName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_taskSetupDeclarationAST * p = (cPtr_taskSetupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskSetupDeclarationAST) ;
    return p->mProperty_mTaskName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSetupDeclarationAST::setProperty_mTaskName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_taskSetupDeclarationAST * p = (cPtr_taskSetupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskSetupDeclarationAST) ;
    p->mProperty_mTaskName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_taskSetupDeclarationAST::readProperty_mQualifier (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_taskSetupDeclarationAST * p = (cPtr_taskSetupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskSetupDeclarationAST) ;
    return p->mProperty_mQualifier ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSetupDeclarationAST::setProperty_mQualifier (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_taskSetupDeclarationAST * p = (cPtr_taskSetupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskSetupDeclarationAST) ;
    p->mProperty_mQualifier = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_taskSetupDeclarationAST::readProperty_mSetupName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_taskSetupDeclarationAST * p = (cPtr_taskSetupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskSetupDeclarationAST) ;
    return p->mProperty_mSetupName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSetupDeclarationAST::setProperty_mSetupName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_taskSetupDeclarationAST * p = (cPtr_taskSetupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskSetupDeclarationAST) ;
    p->mProperty_mSetupName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_taskSetupDeclarationAST::readProperty_mDependanceList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_taskSetupDeclarationAST * p = (cPtr_taskSetupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskSetupDeclarationAST) ;
    return p->mProperty_mDependanceList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSetupDeclarationAST::setProperty_mDependanceList (const GGS_lstringlist & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_taskSetupDeclarationAST * p = (cPtr_taskSetupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskSetupDeclarationAST) ;
    p->mProperty_mDependanceList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST GGS_taskSetupDeclarationAST::readProperty_mTaskSetupInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_instructionListAST () ;
  }else{
    cPtr_taskSetupDeclarationAST * p = (cPtr_taskSetupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskSetupDeclarationAST) ;
    return p->mProperty_mTaskSetupInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSetupDeclarationAST::setProperty_mTaskSetupInstructionList (const GGS_instructionListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_taskSetupDeclarationAST * p = (cPtr_taskSetupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskSetupDeclarationAST) ;
    p->mProperty_mTaskSetupInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_taskSetupDeclarationAST::readProperty_mEndOfTaskSetupDeclaration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_taskSetupDeclarationAST * p = (cPtr_taskSetupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskSetupDeclarationAST) ;
    return p->mProperty_mEndOfTaskSetupDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSetupDeclarationAST::setProperty_mEndOfTaskSetupDeclaration (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_taskSetupDeclarationAST * p = (cPtr_taskSetupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskSetupDeclarationAST) ;
    p->mProperty_mEndOfTaskSetupDeclaration = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @taskSetupDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_taskSetupDeclarationAST::cPtr_taskSetupDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mTaskName (),
mProperty_mQualifier (),
mProperty_mSetupName (),
mProperty_mDependanceList (),
mProperty_mTaskSetupInstructionList (),
mProperty_mEndOfTaskSetupDeclaration () {
}

//--------------------------------------------------------------------------------------------------

cPtr_taskSetupDeclarationAST::cPtr_taskSetupDeclarationAST (const GGS_lstring & in_mTaskName,
                                                            const GGS_string & in_mQualifier,
                                                            const GGS_lstring & in_mSetupName,
                                                            const GGS_lstringlist & in_mDependanceList,
                                                            const GGS_instructionListAST & in_mTaskSetupInstructionList,
                                                            const GGS_location & in_mEndOfTaskSetupDeclaration,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mTaskName (),
mProperty_mQualifier (),
mProperty_mSetupName (),
mProperty_mDependanceList (),
mProperty_mTaskSetupInstructionList (),
mProperty_mEndOfTaskSetupDeclaration () {
  mProperty_mTaskName = in_mTaskName ;
  mProperty_mQualifier = in_mQualifier ;
  mProperty_mSetupName = in_mSetupName ;
  mProperty_mDependanceList = in_mDependanceList ;
  mProperty_mTaskSetupInstructionList = in_mTaskSetupInstructionList ;
  mProperty_mEndOfTaskSetupDeclaration = in_mEndOfTaskSetupDeclaration ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_taskSetupDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskSetupDeclarationAST ;
}

void cPtr_taskSetupDeclarationAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@taskSetupDeclarationAST:") ;
  mProperty_mTaskName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mQualifier.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSetupName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDependanceList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTaskSetupInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfTaskSetupDeclaration.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_taskSetupDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_taskSetupDeclarationAST (mProperty_mTaskName, mProperty_mQualifier, mProperty_mSetupName, mProperty_mDependanceList, mProperty_mTaskSetupInstructionList, mProperty_mEndOfTaskSetupDeclaration, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_taskSetupDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mTaskName.printNonNullClassInstanceProperties ("mTaskName") ;
    mProperty_mQualifier.printNonNullClassInstanceProperties ("mQualifier") ;
    mProperty_mSetupName.printNonNullClassInstanceProperties ("mSetupName") ;
    mProperty_mDependanceList.printNonNullClassInstanceProperties ("mDependanceList") ;
    mProperty_mTaskSetupInstructionList.printNonNullClassInstanceProperties ("mTaskSetupInstructionList") ;
    mProperty_mEndOfTaskSetupDeclaration.printNonNullClassInstanceProperties ("mEndOfTaskSetupDeclaration") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @taskSetupDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskSetupDeclarationAST ("taskSetupDeclarationAST",
                                                                               & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_taskSetupDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskSetupDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_taskSetupDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_taskSetupDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupDeclarationAST GGS_taskSetupDeclarationAST::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_taskSetupDeclarationAST result ;
  const GGS_taskSetupDeclarationAST * p = (const GGS_taskSetupDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_taskSetupDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskSetupDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @functionDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_functionDeclarationAST::objectCompare (const GGS_functionDeclarationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionDeclarationAST::GGS_functionDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_functionDeclarationAST GGS_functionDeclarationAST::
init_21__21__21__21__21__21__21__21__21_ (const GGS_mode & in_mMode,
                                          const GGS_bool & in_mPublicFunction,
                                          const GGS_lstring & in_mReceiverTypeName,
                                          const GGS_lstring & in_mFunctionName,
                                          const GGS_lstringlist & in_mFunctionAttributeList,
                                          const GGS_routineFormalArgumentListAST & in_mFunctionFormalArgumentList,
                                          const GGS_lstring & in_mFunctionReturnTypeName,
                                          const GGS_instructionListAST & in_mFunctionInstructionList,
                                          const GGS_location & in_mEndOfFunctionDeclaration,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cPtr_functionDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_functionDeclarationAST (inCompiler COMMA_THERE)) ;
  object->functionDeclarationAST_init_21__21__21__21__21__21__21__21__21_ (in_mMode, in_mPublicFunction, in_mReceiverTypeName, in_mFunctionName, in_mFunctionAttributeList, in_mFunctionFormalArgumentList, in_mFunctionReturnTypeName, in_mFunctionInstructionList, in_mEndOfFunctionDeclaration, inCompiler) ;
  const GGS_functionDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_functionDeclarationAST::
functionDeclarationAST_init_21__21__21__21__21__21__21__21__21_ (const GGS_mode & in_mMode,
                                                                 const GGS_bool & in_mPublicFunction,
                                                                 const GGS_lstring & in_mReceiverTypeName,
                                                                 const GGS_lstring & in_mFunctionName,
                                                                 const GGS_lstringlist & in_mFunctionAttributeList,
                                                                 const GGS_routineFormalArgumentListAST & in_mFunctionFormalArgumentList,
                                                                 const GGS_lstring & in_mFunctionReturnTypeName,
                                                                 const GGS_instructionListAST & in_mFunctionInstructionList,
                                                                 const GGS_location & in_mEndOfFunctionDeclaration,
                                                                 Compiler * /* inCompiler */) {
  mProperty_mMode = in_mMode ;
  mProperty_mPublicFunction = in_mPublicFunction ;
  mProperty_mReceiverTypeName = in_mReceiverTypeName ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mFunctionAttributeList = in_mFunctionAttributeList ;
  mProperty_mFunctionFormalArgumentList = in_mFunctionFormalArgumentList ;
  mProperty_mFunctionReturnTypeName = in_mFunctionReturnTypeName ;
  mProperty_mFunctionInstructionList = in_mFunctionInstructionList ;
  mProperty_mEndOfFunctionDeclaration = in_mEndOfFunctionDeclaration ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionDeclarationAST::GGS_functionDeclarationAST (const cPtr_functionDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_functionDeclarationAST GGS_functionDeclarationAST::class_func_new (const GGS_mode & in_mMode,
                                                                       const GGS_bool & in_mPublicFunction,
                                                                       const GGS_lstring & in_mReceiverTypeName,
                                                                       const GGS_lstring & in_mFunctionName,
                                                                       const GGS_lstringlist & in_mFunctionAttributeList,
                                                                       const GGS_routineFormalArgumentListAST & in_mFunctionFormalArgumentList,
                                                                       const GGS_lstring & in_mFunctionReturnTypeName,
                                                                       const GGS_instructionListAST & in_mFunctionInstructionList,
                                                                       const GGS_location & in_mEndOfFunctionDeclaration,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  GGS_functionDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_functionDeclarationAST (in_mMode, in_mPublicFunction, in_mReceiverTypeName, in_mFunctionName, in_mFunctionAttributeList, in_mFunctionFormalArgumentList, in_mFunctionReturnTypeName, in_mFunctionInstructionList, in_mEndOfFunctionDeclaration,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode GGS_functionDeclarationAST::readProperty_mMode (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_mode () ;
  }else{
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    return p->mProperty_mMode ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_functionDeclarationAST::setProperty_mMode (const GGS_mode & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    p->mProperty_mMode = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_functionDeclarationAST::readProperty_mPublicFunction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    return p->mProperty_mPublicFunction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_functionDeclarationAST::setProperty_mPublicFunction (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    p->mProperty_mPublicFunction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_functionDeclarationAST::readProperty_mReceiverTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    return p->mProperty_mReceiverTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_functionDeclarationAST::setProperty_mReceiverTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    p->mProperty_mReceiverTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_functionDeclarationAST::readProperty_mFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    return p->mProperty_mFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_functionDeclarationAST::setProperty_mFunctionName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    p->mProperty_mFunctionName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_functionDeclarationAST::readProperty_mFunctionAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    return p->mProperty_mFunctionAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_functionDeclarationAST::setProperty_mFunctionAttributeList (const GGS_lstringlist & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    p->mProperty_mFunctionAttributeList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListAST GGS_functionDeclarationAST::readProperty_mFunctionFormalArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_routineFormalArgumentListAST () ;
  }else{
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    return p->mProperty_mFunctionFormalArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_functionDeclarationAST::setProperty_mFunctionFormalArgumentList (const GGS_routineFormalArgumentListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    p->mProperty_mFunctionFormalArgumentList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_functionDeclarationAST::readProperty_mFunctionReturnTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    return p->mProperty_mFunctionReturnTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_functionDeclarationAST::setProperty_mFunctionReturnTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    p->mProperty_mFunctionReturnTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST GGS_functionDeclarationAST::readProperty_mFunctionInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_instructionListAST () ;
  }else{
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    return p->mProperty_mFunctionInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_functionDeclarationAST::setProperty_mFunctionInstructionList (const GGS_instructionListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    p->mProperty_mFunctionInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_functionDeclarationAST::readProperty_mEndOfFunctionDeclaration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    return p->mProperty_mEndOfFunctionDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_functionDeclarationAST::setProperty_mEndOfFunctionDeclaration (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    p->mProperty_mEndOfFunctionDeclaration = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @functionDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_functionDeclarationAST::cPtr_functionDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mMode (),
mProperty_mPublicFunction (),
mProperty_mReceiverTypeName (),
mProperty_mFunctionName (),
mProperty_mFunctionAttributeList (),
mProperty_mFunctionFormalArgumentList (),
mProperty_mFunctionReturnTypeName (),
mProperty_mFunctionInstructionList (),
mProperty_mEndOfFunctionDeclaration () {
}

//--------------------------------------------------------------------------------------------------

cPtr_functionDeclarationAST::cPtr_functionDeclarationAST (const GGS_mode & in_mMode,
                                                          const GGS_bool & in_mPublicFunction,
                                                          const GGS_lstring & in_mReceiverTypeName,
                                                          const GGS_lstring & in_mFunctionName,
                                                          const GGS_lstringlist & in_mFunctionAttributeList,
                                                          const GGS_routineFormalArgumentListAST & in_mFunctionFormalArgumentList,
                                                          const GGS_lstring & in_mFunctionReturnTypeName,
                                                          const GGS_instructionListAST & in_mFunctionInstructionList,
                                                          const GGS_location & in_mEndOfFunctionDeclaration,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mMode (),
mProperty_mPublicFunction (),
mProperty_mReceiverTypeName (),
mProperty_mFunctionName (),
mProperty_mFunctionAttributeList (),
mProperty_mFunctionFormalArgumentList (),
mProperty_mFunctionReturnTypeName (),
mProperty_mFunctionInstructionList (),
mProperty_mEndOfFunctionDeclaration () {
  mProperty_mMode = in_mMode ;
  mProperty_mPublicFunction = in_mPublicFunction ;
  mProperty_mReceiverTypeName = in_mReceiverTypeName ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mFunctionAttributeList = in_mFunctionAttributeList ;
  mProperty_mFunctionFormalArgumentList = in_mFunctionFormalArgumentList ;
  mProperty_mFunctionReturnTypeName = in_mFunctionReturnTypeName ;
  mProperty_mFunctionInstructionList = in_mFunctionInstructionList ;
  mProperty_mEndOfFunctionDeclaration = in_mEndOfFunctionDeclaration ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_functionDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionDeclarationAST ;
}

void cPtr_functionDeclarationAST::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@functionDeclarationAST:") ;
  mProperty_mMode.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPublicFunction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionReturnTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfFunctionDeclaration.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_functionDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_functionDeclarationAST (mProperty_mMode, mProperty_mPublicFunction, mProperty_mReceiverTypeName, mProperty_mFunctionName, mProperty_mFunctionAttributeList, mProperty_mFunctionFormalArgumentList, mProperty_mFunctionReturnTypeName, mProperty_mFunctionInstructionList, mProperty_mEndOfFunctionDeclaration, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_functionDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mMode.printNonNullClassInstanceProperties ("mMode") ;
    mProperty_mPublicFunction.printNonNullClassInstanceProperties ("mPublicFunction") ;
    mProperty_mReceiverTypeName.printNonNullClassInstanceProperties ("mReceiverTypeName") ;
    mProperty_mFunctionName.printNonNullClassInstanceProperties ("mFunctionName") ;
    mProperty_mFunctionAttributeList.printNonNullClassInstanceProperties ("mFunctionAttributeList") ;
    mProperty_mFunctionFormalArgumentList.printNonNullClassInstanceProperties ("mFunctionFormalArgumentList") ;
    mProperty_mFunctionReturnTypeName.printNonNullClassInstanceProperties ("mFunctionReturnTypeName") ;
    mProperty_mFunctionInstructionList.printNonNullClassInstanceProperties ("mFunctionInstructionList") ;
    mProperty_mEndOfFunctionDeclaration.printNonNullClassInstanceProperties ("mEndOfFunctionDeclaration") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @functionDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionDeclarationAST ("functionDeclarationAST",
                                                                              & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_functionDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_functionDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_functionDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionDeclarationAST GGS_functionDeclarationAST::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_functionDeclarationAST result ;
  const GGS_functionDeclarationAST * p = (const GGS_functionDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_functionDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @systemRoutineDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_systemRoutineDeclarationAST::objectCompare (const GGS_systemRoutineDeclarationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_systemRoutineDeclarationAST::GGS_systemRoutineDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_systemRoutineDeclarationAST GGS_systemRoutineDeclarationAST::
init_21__21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mReceiverTypeName,
                                          const GGS_lstring & in_mSystemRoutineName,
                                          const GGS_mode & in_mMode,
                                          const GGS_bool & in_mPublic,
                                          const GGS_lstringlist & in_mAttributeList,
                                          const GGS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                          const GGS_lstring & in_mReturnTypeName,
                                          const GGS_instructionListAST & in_mInstructionList,
                                          const GGS_location & in_mEndOfInstructionListLocation,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cPtr_systemRoutineDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_systemRoutineDeclarationAST (inCompiler COMMA_THERE)) ;
  object->systemRoutineDeclarationAST_init_21__21__21__21__21__21__21__21__21_ (in_mReceiverTypeName, in_mSystemRoutineName, in_mMode, in_mPublic, in_mAttributeList, in_mFormalArgumentList, in_mReturnTypeName, in_mInstructionList, in_mEndOfInstructionListLocation, inCompiler) ;
  const GGS_systemRoutineDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_systemRoutineDeclarationAST::
systemRoutineDeclarationAST_init_21__21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mReceiverTypeName,
                                                                      const GGS_lstring & in_mSystemRoutineName,
                                                                      const GGS_mode & in_mMode,
                                                                      const GGS_bool & in_mPublic,
                                                                      const GGS_lstringlist & in_mAttributeList,
                                                                      const GGS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                                                      const GGS_lstring & in_mReturnTypeName,
                                                                      const GGS_instructionListAST & in_mInstructionList,
                                                                      const GGS_location & in_mEndOfInstructionListLocation,
                                                                      Compiler * /* inCompiler */) {
  mProperty_mReceiverTypeName = in_mReceiverTypeName ;
  mProperty_mSystemRoutineName = in_mSystemRoutineName ;
  mProperty_mMode = in_mMode ;
  mProperty_mPublic = in_mPublic ;
  mProperty_mAttributeList = in_mAttributeList ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  mProperty_mReturnTypeName = in_mReturnTypeName ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mEndOfInstructionListLocation = in_mEndOfInstructionListLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_systemRoutineDeclarationAST::GGS_systemRoutineDeclarationAST (const cPtr_systemRoutineDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_systemRoutineDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_systemRoutineDeclarationAST GGS_systemRoutineDeclarationAST::class_func_new (const GGS_lstring & in_mReceiverTypeName,
                                                                                 const GGS_lstring & in_mSystemRoutineName,
                                                                                 const GGS_mode & in_mMode,
                                                                                 const GGS_bool & in_mPublic,
                                                                                 const GGS_lstringlist & in_mAttributeList,
                                                                                 const GGS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                                                                 const GGS_lstring & in_mReturnTypeName,
                                                                                 const GGS_instructionListAST & in_mInstructionList,
                                                                                 const GGS_location & in_mEndOfInstructionListLocation,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  GGS_systemRoutineDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_systemRoutineDeclarationAST (in_mReceiverTypeName, in_mSystemRoutineName, in_mMode, in_mPublic, in_mAttributeList, in_mFormalArgumentList, in_mReturnTypeName, in_mInstructionList, in_mEndOfInstructionListLocation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_systemRoutineDeclarationAST::readProperty_mReceiverTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    return p->mProperty_mReceiverTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_systemRoutineDeclarationAST::setProperty_mReceiverTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    p->mProperty_mReceiverTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_systemRoutineDeclarationAST::readProperty_mSystemRoutineName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    return p->mProperty_mSystemRoutineName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_systemRoutineDeclarationAST::setProperty_mSystemRoutineName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    p->mProperty_mSystemRoutineName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mode GGS_systemRoutineDeclarationAST::readProperty_mMode (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_mode () ;
  }else{
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    return p->mProperty_mMode ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_systemRoutineDeclarationAST::setProperty_mMode (const GGS_mode & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    p->mProperty_mMode = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_systemRoutineDeclarationAST::readProperty_mPublic (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    return p->mProperty_mPublic ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_systemRoutineDeclarationAST::setProperty_mPublic (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    p->mProperty_mPublic = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_systemRoutineDeclarationAST::readProperty_mAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    return p->mProperty_mAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_systemRoutineDeclarationAST::setProperty_mAttributeList (const GGS_lstringlist & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    p->mProperty_mAttributeList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListAST GGS_systemRoutineDeclarationAST::readProperty_mFormalArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_routineFormalArgumentListAST () ;
  }else{
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    return p->mProperty_mFormalArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_systemRoutineDeclarationAST::setProperty_mFormalArgumentList (const GGS_routineFormalArgumentListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    p->mProperty_mFormalArgumentList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_systemRoutineDeclarationAST::readProperty_mReturnTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    return p->mProperty_mReturnTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_systemRoutineDeclarationAST::setProperty_mReturnTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    p->mProperty_mReturnTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST GGS_systemRoutineDeclarationAST::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_instructionListAST () ;
  }else{
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_systemRoutineDeclarationAST::setProperty_mInstructionList (const GGS_instructionListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_systemRoutineDeclarationAST::readProperty_mEndOfInstructionListLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    return p->mProperty_mEndOfInstructionListLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_systemRoutineDeclarationAST::setProperty_mEndOfInstructionListLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    p->mProperty_mEndOfInstructionListLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @systemRoutineDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_systemRoutineDeclarationAST::cPtr_systemRoutineDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mReceiverTypeName (),
mProperty_mSystemRoutineName (),
mProperty_mMode (),
mProperty_mPublic (),
mProperty_mAttributeList (),
mProperty_mFormalArgumentList (),
mProperty_mReturnTypeName (),
mProperty_mInstructionList (),
mProperty_mEndOfInstructionListLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_systemRoutineDeclarationAST::cPtr_systemRoutineDeclarationAST (const GGS_lstring & in_mReceiverTypeName,
                                                                    const GGS_lstring & in_mSystemRoutineName,
                                                                    const GGS_mode & in_mMode,
                                                                    const GGS_bool & in_mPublic,
                                                                    const GGS_lstringlist & in_mAttributeList,
                                                                    const GGS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                                                    const GGS_lstring & in_mReturnTypeName,
                                                                    const GGS_instructionListAST & in_mInstructionList,
                                                                    const GGS_location & in_mEndOfInstructionListLocation,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mReceiverTypeName (),
mProperty_mSystemRoutineName (),
mProperty_mMode (),
mProperty_mPublic (),
mProperty_mAttributeList (),
mProperty_mFormalArgumentList (),
mProperty_mReturnTypeName (),
mProperty_mInstructionList (),
mProperty_mEndOfInstructionListLocation () {
  mProperty_mReceiverTypeName = in_mReceiverTypeName ;
  mProperty_mSystemRoutineName = in_mSystemRoutineName ;
  mProperty_mMode = in_mMode ;
  mProperty_mPublic = in_mPublic ;
  mProperty_mAttributeList = in_mAttributeList ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  mProperty_mReturnTypeName = in_mReturnTypeName ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mEndOfInstructionListLocation = in_mEndOfInstructionListLocation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_systemRoutineDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_systemRoutineDeclarationAST ;
}

void cPtr_systemRoutineDeclarationAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@systemRoutineDeclarationAST:") ;
  mProperty_mReceiverTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSystemRoutineName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMode.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPublic.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReturnTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfInstructionListLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_systemRoutineDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_systemRoutineDeclarationAST (mProperty_mReceiverTypeName, mProperty_mSystemRoutineName, mProperty_mMode, mProperty_mPublic, mProperty_mAttributeList, mProperty_mFormalArgumentList, mProperty_mReturnTypeName, mProperty_mInstructionList, mProperty_mEndOfInstructionListLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_systemRoutineDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverTypeName.printNonNullClassInstanceProperties ("mReceiverTypeName") ;
    mProperty_mSystemRoutineName.printNonNullClassInstanceProperties ("mSystemRoutineName") ;
    mProperty_mMode.printNonNullClassInstanceProperties ("mMode") ;
    mProperty_mPublic.printNonNullClassInstanceProperties ("mPublic") ;
    mProperty_mAttributeList.printNonNullClassInstanceProperties ("mAttributeList") ;
    mProperty_mFormalArgumentList.printNonNullClassInstanceProperties ("mFormalArgumentList") ;
    mProperty_mReturnTypeName.printNonNullClassInstanceProperties ("mReturnTypeName") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mEndOfInstructionListLocation.printNonNullClassInstanceProperties ("mEndOfInstructionListLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @systemRoutineDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_systemRoutineDeclarationAST ("systemRoutineDeclarationAST",
                                                                                   & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_systemRoutineDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_systemRoutineDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_systemRoutineDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_systemRoutineDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_systemRoutineDeclarationAST GGS_systemRoutineDeclarationAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_systemRoutineDeclarationAST result ;
  const GGS_systemRoutineDeclarationAST * p = (const GGS_systemRoutineDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_systemRoutineDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("systemRoutineDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @systemUserRoutineIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_systemUserRoutineIR::objectCompare (const GGS_systemUserRoutineIR & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_systemUserRoutineIR::GGS_systemUserRoutineIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_systemUserRoutineIR GGS_systemUserRoutineIR::
init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                             const GGS_bool & in_isRequired,
                                                             const GGS_bool & in_warnsIfUnused,
                                                             const GGS_string & in_mMangledImplementationName,
                                                             const GGS_routineTypedSignature & in_mFormalArgumentList,
                                                             const GGS_unifiedTypeMapEntry & in_mReceiverTypeProxy,
                                                             const GGS_bool & in_mIsSection,
                                                             const GGS_unifiedTypeMapEntry & in_mReturnTypeProxy,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cPtr_systemUserRoutineIR * object = nullptr ;
  macroMyNew (object, cPtr_systemUserRoutineIR (inCompiler COMMA_THERE)) ;
  object->systemUserRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mMangledImplementationName, in_mFormalArgumentList, in_mReceiverTypeProxy, in_mIsSection, in_mReturnTypeProxy, inCompiler) ;
  const GGS_systemUserRoutineIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_systemUserRoutineIR::
systemUserRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                                                 const GGS_bool & in_isRequired,
                                                                                 const GGS_bool & in_warnsIfUnused,
                                                                                 const GGS_string & in_mMangledImplementationName,
                                                                                 const GGS_routineTypedSignature & in_mFormalArgumentList,
                                                                                 const GGS_unifiedTypeMapEntry & in_mReceiverTypeProxy,
                                                                                 const GGS_bool & in_mIsSection,
                                                                                 const GGS_unifiedTypeMapEntry & in_mReturnTypeProxy,
                                                                                 Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mMangledImplementationName = in_mMangledImplementationName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  mProperty_mReceiverTypeProxy = in_mReceiverTypeProxy ;
  mProperty_mIsSection = in_mIsSection ;
  mProperty_mReturnTypeProxy = in_mReturnTypeProxy ;
}

//--------------------------------------------------------------------------------------------------

GGS_systemUserRoutineIR::GGS_systemUserRoutineIR (const cPtr_systemUserRoutineIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_systemUserRoutineIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_systemUserRoutineIR GGS_systemUserRoutineIR::class_func_new (const GGS_lstring & in_mRoutineMangledName,
                                                                 const GGS_bool & in_isRequired,
                                                                 const GGS_bool & in_warnsIfUnused,
                                                                 const GGS_string & in_mMangledImplementationName,
                                                                 const GGS_routineTypedSignature & in_mFormalArgumentList,
                                                                 const GGS_unifiedTypeMapEntry & in_mReceiverTypeProxy,
                                                                 const GGS_bool & in_mIsSection,
                                                                 const GGS_unifiedTypeMapEntry & in_mReturnTypeProxy,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  GGS_systemUserRoutineIR result ;
  macroMyNew (result.mObjectPtr, cPtr_systemUserRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mMangledImplementationName, in_mFormalArgumentList, in_mReceiverTypeProxy, in_mIsSection, in_mReturnTypeProxy,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_systemUserRoutineIR::readProperty_mMangledImplementationName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_systemUserRoutineIR * p = (cPtr_systemUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemUserRoutineIR) ;
    return p->mProperty_mMangledImplementationName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_systemUserRoutineIR::setProperty_mMangledImplementationName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_systemUserRoutineIR * p = (cPtr_systemUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemUserRoutineIR) ;
    p->mProperty_mMangledImplementationName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature GGS_systemUserRoutineIR::readProperty_mFormalArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_routineTypedSignature () ;
  }else{
    cPtr_systemUserRoutineIR * p = (cPtr_systemUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemUserRoutineIR) ;
    return p->mProperty_mFormalArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_systemUserRoutineIR::setProperty_mFormalArgumentList (const GGS_routineTypedSignature & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_systemUserRoutineIR * p = (cPtr_systemUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemUserRoutineIR) ;
    p->mProperty_mFormalArgumentList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_systemUserRoutineIR::readProperty_mReceiverTypeProxy (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_systemUserRoutineIR * p = (cPtr_systemUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemUserRoutineIR) ;
    return p->mProperty_mReceiverTypeProxy ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_systemUserRoutineIR::setProperty_mReceiverTypeProxy (const GGS_unifiedTypeMapEntry & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_systemUserRoutineIR * p = (cPtr_systemUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemUserRoutineIR) ;
    p->mProperty_mReceiverTypeProxy = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_systemUserRoutineIR::readProperty_mIsSection (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_systemUserRoutineIR * p = (cPtr_systemUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemUserRoutineIR) ;
    return p->mProperty_mIsSection ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_systemUserRoutineIR::setProperty_mIsSection (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_systemUserRoutineIR * p = (cPtr_systemUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemUserRoutineIR) ;
    p->mProperty_mIsSection = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_systemUserRoutineIR::readProperty_mReturnTypeProxy (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_systemUserRoutineIR * p = (cPtr_systemUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemUserRoutineIR) ;
    return p->mProperty_mReturnTypeProxy ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_systemUserRoutineIR::setProperty_mReturnTypeProxy (const GGS_unifiedTypeMapEntry & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_systemUserRoutineIR * p = (cPtr_systemUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemUserRoutineIR) ;
    p->mProperty_mReturnTypeProxy = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @systemUserRoutineIR class
//--------------------------------------------------------------------------------------------------

cPtr_systemUserRoutineIR::cPtr_systemUserRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mMangledImplementationName (),
mProperty_mFormalArgumentList (),
mProperty_mReceiverTypeProxy (),
mProperty_mIsSection (),
mProperty_mReturnTypeProxy () {
}

//--------------------------------------------------------------------------------------------------

cPtr_systemUserRoutineIR::cPtr_systemUserRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                                    const GGS_bool & in_isRequired,
                                                    const GGS_bool & in_warnsIfUnused,
                                                    const GGS_string & in_mMangledImplementationName,
                                                    const GGS_routineTypedSignature & in_mFormalArgumentList,
                                                    const GGS_unifiedTypeMapEntry & in_mReceiverTypeProxy,
                                                    const GGS_bool & in_mIsSection,
                                                    const GGS_unifiedTypeMapEntry & in_mReturnTypeProxy,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler COMMA_THERE),
mProperty_mMangledImplementationName (),
mProperty_mFormalArgumentList (),
mProperty_mReceiverTypeProxy (),
mProperty_mIsSection (),
mProperty_mReturnTypeProxy () {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mMangledImplementationName = in_mMangledImplementationName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  mProperty_mReceiverTypeProxy = in_mReceiverTypeProxy ;
  mProperty_mIsSection = in_mIsSection ;
  mProperty_mReturnTypeProxy = in_mReturnTypeProxy ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_systemUserRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_systemUserRoutineIR ;
}

void cPtr_systemUserRoutineIR::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@systemUserRoutineIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMangledImplementationName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverTypeProxy.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsSection.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReturnTypeProxy.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_systemUserRoutineIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_systemUserRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mMangledImplementationName, mProperty_mFormalArgumentList, mProperty_mReceiverTypeProxy, mProperty_mIsSection, mProperty_mReturnTypeProxy, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_systemUserRoutineIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mMangledImplementationName.printNonNullClassInstanceProperties ("mMangledImplementationName") ;
    mProperty_mFormalArgumentList.printNonNullClassInstanceProperties ("mFormalArgumentList") ;
    mProperty_mReceiverTypeProxy.printNonNullClassInstanceProperties ("mReceiverTypeProxy") ;
    mProperty_mIsSection.printNonNullClassInstanceProperties ("mIsSection") ;
    mProperty_mReturnTypeProxy.printNonNullClassInstanceProperties ("mReturnTypeProxy") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @systemUserRoutineIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_systemUserRoutineIR ("systemUserRoutineIR",
                                                                           & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_systemUserRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_systemUserRoutineIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_systemUserRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_systemUserRoutineIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_systemUserRoutineIR GGS_systemUserRoutineIR::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_systemUserRoutineIR result ;
  const GGS_systemUserRoutineIR * p = (const GGS_systemUserRoutineIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_systemUserRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("systemUserRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionDeclarationListAST_2E_element::GGS_externFunctionDeclarationListAST_2E_element (void) :
mProperty_mExternProcedureName (),
mProperty_mMode (),
mProperty_mAttributeList (),
mProperty_mProcFormalArgumentList (),
mProperty_mReturnTypeName (),
mProperty_mRoutineNameForGeneration (),
mProperty_mEndOfProcLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionDeclarationListAST_2E_element::~ GGS_externFunctionDeclarationListAST_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_externFunctionDeclarationListAST_2E_element GGS_externFunctionDeclarationListAST_2E_element::init_21__21__21__21__21__21__21_ (const GGS_lstring & in_mExternProcedureName,
                                                                                                                                   const GGS_mode & in_mMode,
                                                                                                                                   const GGS_lstringlist & in_mAttributeList,
                                                                                                                                   const GGS_routineFormalArgumentListAST & in_mProcFormalArgumentList,
                                                                                                                                   const GGS_lstring & in_mReturnTypeName,
                                                                                                                                   const GGS_lstring & in_mRoutineNameForGeneration,
                                                                                                                                   const GGS_location & in_mEndOfProcLocation,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_externFunctionDeclarationListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExternProcedureName = in_mExternProcedureName ;
  result.mProperty_mMode = in_mMode ;
  result.mProperty_mAttributeList = in_mAttributeList ;
  result.mProperty_mProcFormalArgumentList = in_mProcFormalArgumentList ;
  result.mProperty_mReturnTypeName = in_mReturnTypeName ;
  result.mProperty_mRoutineNameForGeneration = in_mRoutineNameForGeneration ;
  result.mProperty_mEndOfProcLocation = in_mEndOfProcLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externFunctionDeclarationListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionDeclarationListAST_2E_element::GGS_externFunctionDeclarationListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                                  const GGS_mode & inOperand1,
                                                                                                  const GGS_lstringlist & inOperand2,
                                                                                                  const GGS_routineFormalArgumentListAST & inOperand3,
                                                                                                  const GGS_lstring & inOperand4,
                                                                                                  const GGS_lstring & inOperand5,
                                                                                                  const GGS_location & inOperand6) :
mProperty_mExternProcedureName (inOperand0),
mProperty_mMode (inOperand1),
mProperty_mAttributeList (inOperand2),
mProperty_mProcFormalArgumentList (inOperand3),
mProperty_mReturnTypeName (inOperand4),
mProperty_mRoutineNameForGeneration (inOperand5),
mProperty_mEndOfProcLocation (inOperand6) {
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionDeclarationListAST_2E_element GGS_externFunctionDeclarationListAST_2E_element::class_func_new (const GGS_lstring & in_mExternProcedureName,
                                                                                                                 const GGS_mode & in_mMode,
                                                                                                                 const GGS_lstringlist & in_mAttributeList,
                                                                                                                 const GGS_routineFormalArgumentListAST & in_mProcFormalArgumentList,
                                                                                                                 const GGS_lstring & in_mReturnTypeName,
                                                                                                                 const GGS_lstring & in_mRoutineNameForGeneration,
                                                                                                                 const GGS_location & in_mEndOfProcLocation,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_externFunctionDeclarationListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExternProcedureName = in_mExternProcedureName ;
  result.mProperty_mMode = in_mMode ;
  result.mProperty_mAttributeList = in_mAttributeList ;
  result.mProperty_mProcFormalArgumentList = in_mProcFormalArgumentList ;
  result.mProperty_mReturnTypeName = in_mReturnTypeName ;
  result.mProperty_mRoutineNameForGeneration = in_mRoutineNameForGeneration ;
  result.mProperty_mEndOfProcLocation = in_mEndOfProcLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_externFunctionDeclarationListAST_2E_element::isValid (void) const {
  return mProperty_mExternProcedureName.isValid () && mProperty_mMode.isValid () && mProperty_mAttributeList.isValid () && mProperty_mProcFormalArgumentList.isValid () && mProperty_mReturnTypeName.isValid () && mProperty_mRoutineNameForGeneration.isValid () && mProperty_mEndOfProcLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externFunctionDeclarationListAST_2E_element::drop (void) {
  mProperty_mExternProcedureName.drop () ;
  mProperty_mMode.drop () ;
  mProperty_mAttributeList.drop () ;
  mProperty_mProcFormalArgumentList.drop () ;
  mProperty_mReturnTypeName.drop () ;
  mProperty_mRoutineNameForGeneration.drop () ;
  mProperty_mEndOfProcLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externFunctionDeclarationListAST_2E_element::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @externFunctionDeclarationListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mExternProcedureName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMode.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAttributeList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mProcFormalArgumentList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mReturnTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRoutineNameForGeneration.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfProcLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @externFunctionDeclarationListAST.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externFunctionDeclarationListAST_2E_element ("externFunctionDeclarationListAST.element",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_externFunctionDeclarationListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externFunctionDeclarationListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externFunctionDeclarationListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externFunctionDeclarationListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionDeclarationListAST_2E_element GGS_externFunctionDeclarationListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_externFunctionDeclarationListAST_2E_element result ;
  const GGS_externFunctionDeclarationListAST_2E_element * p = (const GGS_externFunctionDeclarationListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externFunctionDeclarationListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externFunctionDeclarationListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

