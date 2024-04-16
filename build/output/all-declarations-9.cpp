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
, BOTTOM_UP_END ()
// State S1 (index = 3)
, Lexique_omnibus_5F_lexique::kToken__3A_, BOTTOM_UP_SHIFT (5)
, BOTTOM_UP_END ()
// State S2 (index = 6)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (4)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (6)
, BOTTOM_UP_END ()
// State S3 (index = 11)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END ()
// State S4 (index = 14)
, Lexique_omnibus_5F_lexique::kToken_, BOTTOM_UP_ACCEPT ()
, BOTTOM_UP_END ()
// State S5 (index = 17)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (0)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_REDUCE (0)
, Lexique_omnibus_5F_lexique::kToken__24_type, BOTTOM_UP_REDUCE (0)
, Lexique_omnibus_5F_lexique::kToken_integer, BOTTOM_UP_REDUCE (0)
, Lexique_omnibus_5F_lexique::kToken_yes, BOTTOM_UP_REDUCE (0)
, Lexique_omnibus_5F_lexique::kToken_no, BOTTOM_UP_REDUCE (0)
, Lexique_omnibus_5F_lexique::kToken_, BOTTOM_UP_REDUCE (0)
, BOTTOM_UP_END ()
// State S6 (index = 32)
, Lexique_omnibus_5F_lexique::kToken__2D__3E_, BOTTOM_UP_SHIFT (9)
, BOTTOM_UP_END ()
// State S7 (index = 35)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (1)
, BOTTOM_UP_END ()
// State S8 (index = 38)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (10)
, BOTTOM_UP_END ()
// State S9 (index = 41)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (11)
, BOTTOM_UP_END ()
// State S10 (index = 44)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END ()
// State S11 (index = 47)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (4)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (6)
, BOTTOM_UP_END ()
// State S12 (index = 52)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (14)
, BOTTOM_UP_END ()
// State S13 (index = 55)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (5)
, BOTTOM_UP_END ()
// State S14 (index = 58)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END ()
// State S15 (index = 61)
, Lexique_omnibus_5F_lexique::kToken__24_type, BOTTOM_UP_SHIFT (16)
, BOTTOM_UP_END ()
// State S16 (index = 64)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END ()
// State S17 (index = 67)
, Lexique_omnibus_5F_lexique::kToken__24_type, BOTTOM_UP_SHIFT (18)
, BOTTOM_UP_END ()
// State S18 (index = 70)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END ()
// State S19 (index = 73)
, Lexique_omnibus_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (20)
, BOTTOM_UP_END ()
// State S20 (index = 76)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END ()
// State S21 (index = 79)
, Lexique_omnibus_5F_lexique::kToken_yes, BOTTOM_UP_SHIFT (22)
, Lexique_omnibus_5F_lexique::kToken_no, BOTTOM_UP_SHIFT (23)
, BOTTOM_UP_END ()
// State S22 (index = 84)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (6)
, BOTTOM_UP_END ()
// State S23 (index = 87)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (7)
, BOTTOM_UP_END ()
// State S24 (index = 90)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END ()
// State S25 (index = 93)
, Lexique_omnibus_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (26)
, BOTTOM_UP_END ()
// State S26 (index = 96)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END ()
// State S27 (index = 99)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (28)
, BOTTOM_UP_END ()
// State S28 (index = 102)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END ()
// State S29 (index = 105)
, Lexique_omnibus_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (30)
, Lexique_omnibus_5F_lexique::kToken_no, BOTTOM_UP_SHIFT (31)
, BOTTOM_UP_END ()
// State S30 (index = 110)
, Lexique_omnibus_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (33)
, BOTTOM_UP_END ()
// State S31 (index = 113)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (8)
, BOTTOM_UP_END ()
// State S32 (index = 116)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END ()
// State S33 (index = 119)
, Lexique_omnibus_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (35)
, BOTTOM_UP_END ()
// State S34 (index = 122)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (36)
, BOTTOM_UP_END ()
// State S35 (index = 125)
, Lexique_omnibus_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (37)
, BOTTOM_UP_END ()
// State S36 (index = 128)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END ()
// State S37 (index = 131)
, Lexique_omnibus_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (39)
, BOTTOM_UP_END ()
// State S38 (index = 134)
, Lexique_omnibus_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (40)
, BOTTOM_UP_END ()
// State S39 (index = 137)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (9)
, BOTTOM_UP_END ()
// State S40 (index = 140)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END ()
// State S41 (index = 143)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (42)
, BOTTOM_UP_END ()
// State S42 (index = 146)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END ()
// State S43 (index = 149)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (44)
, BOTTOM_UP_END ()
// State S44 (index = 152)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END ()
// State S45 (index = 155)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (46)
, BOTTOM_UP_END ()
// State S46 (index = 158)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END ()
// State S47 (index = 161)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (48)
, BOTTOM_UP_END ()
// State S48 (index = 164)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END ()
// State S49 (index = 167)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (50)
, BOTTOM_UP_END ()
// State S50 (index = 170)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END ()
// State S51 (index = 173)
, Lexique_omnibus_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (52)
, BOTTOM_UP_END ()
// State S52 (index = 176)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END ()
// State S53 (index = 179)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (54)
, BOTTOM_UP_END ()
// State S54 (index = 182)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END ()
// State S55 (index = 185)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (56)
, BOTTOM_UP_END ()
// State S56 (index = 188)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END ()
// State S57 (index = 191)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (58)
, BOTTOM_UP_END ()
// State S58 (index = 194)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END ()
// State S59 (index = 197)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (60)
, BOTTOM_UP_END ()
// State S60 (index = 200)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END ()
// State S61 (index = 203)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (62)
, BOTTOM_UP_END ()
// State S62 (index = 206)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END ()
// State S63 (index = 209)
, Lexique_omnibus_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (64)
, BOTTOM_UP_END ()
// State S64 (index = 212)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END ()
// State S65 (index = 215)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (66)
, BOTTOM_UP_END ()
// State S66 (index = 218)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END ()
// State S67 (index = 221)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (10)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (68)
, BOTTOM_UP_END ()
// State S68 (index = 226)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (10)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (68)
, BOTTOM_UP_END ()
// State S69 (index = 231)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END ()
// State S70 (index = 234)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (11)
, BOTTOM_UP_END ()
// State S71 (index = 237)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (12)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (72)
, BOTTOM_UP_END ()
// State S72 (index = 242)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (12)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (72)
, BOTTOM_UP_END ()
// State S73 (index = 247)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END ()
// State S74 (index = 250)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (13)
, BOTTOM_UP_END ()
// State S75 (index = 253)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (14)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (76)
, BOTTOM_UP_END ()
// State S76 (index = 258)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (14)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (76)
, BOTTOM_UP_END ()
// State S77 (index = 263)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END ()
// State S78 (index = 266)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (15)
, BOTTOM_UP_END ()
// State S79 (index = 269)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (16)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (80)
, BOTTOM_UP_END ()
// State S80 (index = 274)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (16)
, Lexique_omnibus_5F_lexique::kToken__22_string_22_, BOTTOM_UP_SHIFT (80)
, BOTTOM_UP_END ()
// State S81 (index = 279)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, BOTTOM_UP_END ()
// State S82 (index = 282)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (17)
, BOTTOM_UP_END ()
// State S83 (index = 285)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (85)
, Lexique_omnibus_5F_lexique::kToken_, BOTTOM_UP_REDUCE (18)
, BOTTOM_UP_END ()
// State S84 (index = 290)
, Lexique_omnibus_5F_lexique::kToken_, BOTTOM_UP_REDUCE (2)
, BOTTOM_UP_END ()
// State S85 (index = 293)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (20)
, Lexique_omnibus_5F_lexique::kToken__2D__3E_, BOTTOM_UP_SHIFT (87)
, Lexique_omnibus_5F_lexique::kToken_, BOTTOM_UP_REDUCE (20)
, BOTTOM_UP_END ()
// State S86 (index = 300)
, Lexique_omnibus_5F_lexique::kToken_, BOTTOM_UP_REDUCE (3)
, BOTTOM_UP_END ()
// State S87 (index = 303)
, Lexique_omnibus_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (89)
, BOTTOM_UP_END ()
// State S88 (index = 306)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (85)
, Lexique_omnibus_5F_lexique::kToken_, BOTTOM_UP_REDUCE (18)
, BOTTOM_UP_END ()
// State S89 (index = 311)
, Lexique_omnibus_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (21)
, Lexique_omnibus_5F_lexique::kToken_, BOTTOM_UP_REDUCE (21)
, BOTTOM_UP_END ()
// State S90 (index = 316)
, Lexique_omnibus_5F_lexique::kToken_, BOTTOM_UP_REDUCE (19)
, BOTTOM_UP_END ()} ;

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

void cGrammar_omnibus_5F_target_5F_grammar::nt_configuration_5F_key_ (const GALGAS_string  parameter_1,
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

void cGrammar_omnibus_5F_target_5F_grammar::nt_python_5F_utility_5F_tool_5F_list_ (GALGAS__32_lstringlist &  parameter_1,
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

void cGrammar_omnibus_5F_target_5F_grammar::nt_configuration_5F_start_5F_symbol_ (GALGAS_ast &  parameter_1,
                                GALGAS_lstringlist &  parameter_2,
                                GALGAS_location &  parameter_3,
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
                                GALGAS_lstring inFilePath,
                                GALGAS_ast &  parameter_1,
                                GALGAS_lstringlist &  parameter_2,
                                GALGAS_location &  parameter_3
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GALGAS_string filePathAsString = inFilePath.readProperty_string () ;
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
        const GALGAS_location errorLocation (inFilePath.readProperty_location ()) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <FixItDescription> () COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      String message ;
      message.appendString ("the '") ;
      message.appendString (filePath) ;
      message.appendString ("' file does not exist") ;
      const GALGAS_location errorLocation (inFilePath.readProperty_location ()) ;
      inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <FixItDescription> () COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void cGrammar_omnibus_5F_target_5F_grammar::_performSourceStringParsing_ (Compiler * inCompiler,
                                GALGAS_string inSourceString,
                                GALGAS_string inNameString,
                                GALGAS_ast &  parameter_1,
                                GALGAS_lstringlist &  parameter_2,
                                GALGAS_location &  parameter_3
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

void cGrammar_omnibus_5F_target_5F_grammar::nt_interruptConfigList_ (GALGAS_interruptionConfigurationList &  parameter_1,
                                GALGAS_enumerationConstantList &  parameter_2,
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

ComparisonResult GALGAS_configurationDeclarationAST_2D_weak::objectCompare (const GALGAS_configurationDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_configurationDeclarationAST_2D_weak::GALGAS_configurationDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_configurationDeclarationAST_2D_weak & GALGAS_configurationDeclarationAST_2D_weak::operator = (const GALGAS_configurationDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configurationDeclarationAST_2D_weak::GALGAS_configurationDeclarationAST_2D_weak (const GALGAS_configurationDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_configurationDeclarationAST_2D_weak GALGAS_configurationDeclarationAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_configurationDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configurationDeclarationAST GALGAS_configurationDeclarationAST_2D_weak::bang_configurationDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_configurationDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_configurationDeclarationAST) ;
      result = GALGAS_configurationDeclarationAST ((cPtr_configurationDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @configurationDeclarationAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configurationDeclarationAST_2D_weak ("configurationDeclarationAST-weak",
                                                                                           & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_configurationDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configurationDeclarationAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_configurationDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_configurationDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configurationDeclarationAST_2D_weak GALGAS_configurationDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_configurationDeclarationAST_2D_weak result ;
  const GALGAS_configurationDeclarationAST_2D_weak * p = (const GALGAS_configurationDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_configurationDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configurationDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_ast::~ GALGAS_ast (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_ast GALGAS_ast::init (Compiler * inCompiler
                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ast result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ast::setInitializedProperties (Compiler * inCompiler) {
GALGAS_declarationListAST temp_0 = GALGAS_declarationListAST::init (inCompiler COMMA_SOURCE_FILE ("ast.galgas", 6)) ;
  mProperty_mDeclarationListAST = temp_0 ;
  mProperty_mExtendStaticArrayDeclarationAST = GALGAS_extendStaticArrayDeclarationDictAST::init (inCompiler COMMA_HERE) ;
GALGAS_requiredFunctionDeclarationListAST temp_1 = GALGAS_requiredFunctionDeclarationListAST::init (inCompiler COMMA_SOURCE_FILE ("ast.galgas", 8)) ;
  mProperty_mRequiredFunctionListAST = temp_1 ;
GALGAS_externFunctionDeclarationListAST temp_2 = GALGAS_externFunctionDeclarationListAST::init (inCompiler COMMA_SOURCE_FILE ("ast.galgas", 9)) ;
  mProperty_mExternFunctionListAST = temp_2 ;
GALGAS_lstringlist temp_3 = GALGAS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("ast.galgas", 10)) ;
  mProperty_mTargetListAST = temp_3 ;
GALGAS_taskListAST temp_4 = GALGAS_taskListAST::init (inCompiler COMMA_SOURCE_FILE ("ast.galgas", 11)) ;
  mProperty_mTaskListAST = temp_4 ;
GALGAS_checkTargetListAST temp_5 = GALGAS_checkTargetListAST::init (inCompiler COMMA_SOURCE_FILE ("ast.galgas", 12)) ;
  mProperty_mCheckTargetListAST = temp_5 ;
GALGAS_driverDeclarationListAST temp_6 = GALGAS_driverDeclarationListAST::init (inCompiler COMMA_SOURCE_FILE ("ast.galgas", 13)) ;
  mProperty_mDriverDeclarationListAST = temp_6 ;
GALGAS_driverInstanciationListAST temp_7 = GALGAS_driverInstanciationListAST::init (inCompiler COMMA_SOURCE_FILE ("ast.galgas", 14)) ;
  mProperty_mRequiredDriverListAST = temp_7 ;
  mProperty_mTypeDeclarationIndex = GALGAS_uint (uint32_t (0U)) ;
GALGAS_controlRegisterUserAccesMapAST temp_8 = GALGAS_controlRegisterUserAccesMapAST::init (inCompiler COMMA_SOURCE_FILE ("ast.galgas", 16)) ;
  mProperty_mControlRegisterUserAccesMapAST = temp_8 ;
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_ast GALGAS_ast::class_func_new (Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ast result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_ast::isValid (void) const {
  return mProperty_mDeclarationListAST.isValid () && mProperty_mExtendStaticArrayDeclarationAST.isValid () && mProperty_mRequiredFunctionListAST.isValid () && mProperty_mExternFunctionListAST.isValid () && mProperty_mTargetListAST.isValid () && mProperty_mTaskListAST.isValid () && mProperty_mCheckTargetListAST.isValid () && mProperty_mDriverDeclarationListAST.isValid () && mProperty_mRequiredDriverListAST.isValid () && mProperty_mTypeDeclarationIndex.isValid () && mProperty_mControlRegisterUserAccesMapAST.isValid () ;
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

void GALGAS_ast::description (String & ioString,
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

const C_galgas_type_descriptor * GALGAS_ast::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ast ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ast::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ast (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ast GALGAS_ast::extractObject (const GALGAS_object & inObject,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  GALGAS_ast result ;
  const GALGAS_ast * p = (const GALGAS_ast *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ast *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ast", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_universalValuedObjectMap::GALGAS_universalValuedObjectMap (void) :
mProperty_mInternalPropertyAndRoutineMap (),
mProperty_mScopeStack (),
mProperty_mLocalObjectList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_universalValuedObjectMap::~ GALGAS_universalValuedObjectMap (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_universalValuedObjectMap GALGAS_universalValuedObjectMap::init (Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_universalValuedObjectMap result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_universalValuedObjectMap::setInitializedProperties (Compiler * inCompiler) {
GALGAS_flatValuedObjectMap temp_0 = GALGAS_flatValuedObjectMap::init (inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 6)) ;
  mProperty_mInternalPropertyAndRoutineMap = temp_0 ;
GALGAS_scopeStack temp_1 = GALGAS_scopeStack::init (inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 7)) ;
  mProperty_mScopeStack = temp_1 ;
GALGAS_lstringlist temp_2 = GALGAS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 8)) ;
  mProperty_mLocalObjectList = temp_2 ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_universalValuedObjectMap::GALGAS_universalValuedObjectMap (const GALGAS_flatValuedObjectMap & inOperand0,
                                                                  const GALGAS_scopeStack & inOperand1,
                                                                  const GALGAS_lstringlist & inOperand2) :
mProperty_mInternalPropertyAndRoutineMap (inOperand0),
mProperty_mScopeStack (inOperand1),
mProperty_mLocalObjectList (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_universalValuedObjectMap GALGAS_universalValuedObjectMap::class_func_new (Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_universalValuedObjectMap result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_universalValuedObjectMap::isValid (void) const {
  return mProperty_mInternalPropertyAndRoutineMap.isValid () && mProperty_mScopeStack.isValid () && mProperty_mLocalObjectList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_universalValuedObjectMap::drop (void) {
  mProperty_mInternalPropertyAndRoutineMap.drop () ;
  mProperty_mScopeStack.drop () ;
  mProperty_mLocalObjectList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_universalValuedObjectMap::description (String & ioString,
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

const C_galgas_type_descriptor * GALGAS_universalValuedObjectMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_universalValuedObjectMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_universalValuedObjectMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_universalValuedObjectMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_universalValuedObjectMap GALGAS_universalValuedObjectMap::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_universalValuedObjectMap result ;
  const GALGAS_universalValuedObjectMap * p = (const GALGAS_universalValuedObjectMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_universalValuedObjectMap *> (p)) {
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

void extensionSetter_insertTask (GALGAS_universalValuedObjectMap & ioObject,
                                 const GALGAS_lstring constinArgument_inTaskName,
                                 const GALGAS_omnibusType constinArgument_inTaskType,
                                 Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_insertKey (constinArgument_inTaskName, GALGAS_valuedObjectState::class_func_noValue (SOURCE_FILE ("universal-map.galgas", 21)), GALGAS_bool (false), GALGAS_valuedObject::class_func_task (constinArgument_inTaskType  COMMA_SOURCE_FILE ("universal-map.galgas", 23)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 19)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap insertDriver'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertDriver (GALGAS_universalValuedObjectMap & ioObject,
                                   const GALGAS_lstring constinArgument_inDriverName,
                                   const GALGAS_bool constinArgument_inIsInstancied,
                                   const GALGAS_omnibusType constinArgument_inDriverType,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_insertKey (constinArgument_inDriverName, GALGAS_valuedObjectState::class_func_noValue (SOURCE_FILE ("universal-map.galgas", 36)), GALGAS_bool (false), GALGAS_valuedObject::class_func_driver (constinArgument_inDriverType, constinArgument_inIsInstancied  COMMA_SOURCE_FILE ("universal-map.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 34)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap insertGlobalConstant'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertGlobalConstant (GALGAS_universalValuedObjectMap & ioObject,
                                           const GALGAS_lstring constinArgument_inConstantName,
                                           const GALGAS_objectIR constinArgument_inConstantObjectIR,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_insertKey (constinArgument_inConstantName, GALGAS_valuedObjectState::class_func_noValue (SOURCE_FILE ("universal-map.galgas", 50)), GALGAS_bool (false), GALGAS_valuedObject::class_func_globalConstant (constinArgument_inConstantObjectIR  COMMA_SOURCE_FILE ("universal-map.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 48)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap insertGlobalSyncInstance'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertGlobalSyncInstance (GALGAS_universalValuedObjectMap & ioObject,
                                               const GALGAS_lstring constinArgument_inSyncInstanceName,
                                               const GALGAS_omnibusType constinArgument_inType,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_insertKey (constinArgument_inSyncInstanceName, GALGAS_valuedObjectState::class_func_noValue (SOURCE_FILE ("universal-map.galgas", 64)), GALGAS_bool (false), GALGAS_valuedObject::class_func_globalSyncInstance (constinArgument_inType, constinArgument_inSyncInstanceName  COMMA_SOURCE_FILE ("universal-map.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 62)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap insertLocalConstant'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertLocalConstant (GALGAS_universalValuedObjectMap & ioObject,
                                          const GALGAS_lstring constinArgument_inLocalConstantName,
                                          const GALGAS_bool constinArgument_inIsFormalInputArgument,
                                          const GALGAS_omnibusType constinArgument_inType,
                                          const GALGAS_lstring constinArgument_inOmnibusConstantName,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_insertKey (constinArgument_inLocalConstantName, GALGAS_valuedObjectState::class_func_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 80)), GALGAS_bool (false), GALGAS_valuedObject::class_func_localConstant (constinArgument_inType, constinArgument_inOmnibusConstantName, constinArgument_inIsFormalInputArgument  COMMA_SOURCE_FILE ("universal-map.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 78)) ;
  }
  ioObject.mProperty_mLocalObjectList.addAssign_operation (constinArgument_inLocalConstantName  COMMA_SOURCE_FILE ("universal-map.galgas", 84)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap insertUsedLocalConstant'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertUsedLocalConstant (GALGAS_universalValuedObjectMap & ioObject,
                                              const GALGAS_lstring constinArgument_inLocalConstantName,
                                              const GALGAS_bool constinArgument_inIsFormalInputArgument,
                                              const GALGAS_omnibusType constinArgument_inType,
                                              const GALGAS_lstring constinArgument_inOmnibusConstantName,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_insertKey (constinArgument_inLocalConstantName, GALGAS_valuedObjectState::class_func_hasReadValue (SOURCE_FILE ("universal-map.galgas", 97)), GALGAS_bool (false), GALGAS_valuedObject::class_func_localConstant (constinArgument_inType, constinArgument_inOmnibusConstantName, constinArgument_inIsFormalInputArgument  COMMA_SOURCE_FILE ("universal-map.galgas", 99)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 95)) ;
  }
  ioObject.mProperty_mLocalObjectList.addAssign_operation (constinArgument_inLocalConstantName  COMMA_SOURCE_FILE ("universal-map.galgas", 101)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap insertLocalVariable'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertLocalVariable (GALGAS_universalValuedObjectMap & ioObject,
                                          const GALGAS_lstring constinArgument_inLocalVariableName,
                                          const GALGAS_omnibusType constinArgument_inType,
                                          const GALGAS_lstring constinArgument_inOmnibusName,
                                          const GALGAS_valuedObjectState constinArgument_inVariableInitialState,
                                          const GALGAS_bool constinArgument_inObjectShouldBeValuedAtEndOfScope,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_insertKey (constinArgument_inLocalVariableName, constinArgument_inVariableInitialState, constinArgument_inObjectShouldBeValuedAtEndOfScope, GALGAS_valuedObject::class_func_localVariable (constinArgument_inType, constinArgument_inOmnibusName  COMMA_SOURCE_FILE ("universal-map.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 113)) ;
  }
  ioObject.mProperty_mLocalObjectList.addAssign_operation (constinArgument_inLocalVariableName  COMMA_SOURCE_FILE ("universal-map.galgas", 119)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap searchEntity'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_searchEntity (const GALGAS_universalValuedObjectMap inObject,
                                   const GALGAS_lstring constinArgument_inValuedObjectName,
                                   GALGAS_valuedObject & outArgument_outEntity,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEntity.drop () ; // Release 'out' argument
  const GALGAS_universalValuedObjectMap temp_0 = inObject ;
  GALGAS_valuedObjectState joker_4469_2 ; // Joker input parameter
  GALGAS_bool joker_4469_1 ; // Joker input parameter
  temp_0.readProperty_mInternalPropertyAndRoutineMap ().method_searchKey (constinArgument_inValuedObjectName, joker_4469_2, joker_4469_1, outArgument_outEntity, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 130)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap searchValuedObject'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_searchValuedObject (const GALGAS_universalValuedObjectMap inObject,
                                         const GALGAS_lstring constinArgument_inValuedObjectName,
                                         const GALGAS_mode constinArgument_inMode,
                                         const GALGAS_stringset constinArgument_inInitializedDriverSet,
                                         GALGAS_objectIR & outArgument_outObjectIR,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outObjectIR.drop () ; // Release 'out' argument
  GALGAS_valuedObject var_entity_4863 ;
  const GALGAS_universalValuedObjectMap temp_0 = inObject ;
  GALGAS_valuedObjectState joker_4854_2 ; // Joker input parameter
  GALGAS_bool joker_4854_1 ; // Joker input parameter
  temp_0.readProperty_mInternalPropertyAndRoutineMap ().method_searchKey (constinArgument_inValuedObjectName, joker_4854_2, joker_4854_1, var_entity_4863, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 141)) ;
  switch (var_entity_4863.enumValue ()) {
  case GALGAS_valuedObject::kNotBuilt:
    break ;
  case GALGAS_valuedObject::kEnum_task:
    {
      const cEnumAssociatedValues_valuedObject_task * extractPtr_5160 = (const cEnumAssociatedValues_valuedObject_task *) (var_entity_4863.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_4913_type = extractPtr_5160->mAssociatedValue0 ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (ComparisonKind::equal, constinArgument_inMode.objectCompare (GALGAS_mode::class_func_bootMode (SOURCE_FILE ("universal-map.galgas", 144)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GALGAS_string ("cannot call a task entry in a boot routine"), fixItArray2  COMMA_SOURCE_FILE ("universal-map.galgas", 145)) ;
          outArgument_outObjectIR.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_1) {
        outArgument_outObjectIR = GALGAS_objectIR::class_func_reference (extractedValue_4913_type, function_llvmNameForGlobalVariable (constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 147))  COMMA_SOURCE_FILE ("universal-map.galgas", 147)) ;
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_driver:
    {
      const cEnumAssociatedValues_valuedObject_driver * extractPtr_5730 = (const cEnumAssociatedValues_valuedObject_driver *) (var_entity_4863.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_5192_type = extractPtr_5730->mAssociatedValue0 ;
      const GALGAS_bool extractedValue_5197_instancied = extractPtr_5730->mAssociatedValue1 ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (ComparisonKind::equal, constinArgument_inMode.objectCompare (GALGAS_mode::class_func_bootMode (SOURCE_FILE ("universal-map.galgas", 150)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GALGAS_string ("cannot call a driver in a boot routine"), fixItArray4  COMMA_SOURCE_FILE ("universal-map.galgas", 151)) ;
          outArgument_outObjectIR.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_3) {
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = extractedValue_5197_instancied.operator_not (SOURCE_FILE ("universal-map.galgas", 152)).boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GALGAS_string ("the driver should be instancied"), fixItArray6  COMMA_SOURCE_FILE ("universal-map.galgas", 153)) ;
            outArgument_outObjectIR.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_5) {
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = constinArgument_inInitializedDriverSet.getter_hasKey (constinArgument_inValuedObjectName.readProperty_string () COMMA_SOURCE_FILE ("universal-map.galgas", 154)).operator_not (SOURCE_FILE ("universal-map.galgas", 154)).boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GALGAS_string ("the driver should be named in driver dependence list"), fixItArray8  COMMA_SOURCE_FILE ("universal-map.galgas", 155)) ;
              outArgument_outObjectIR.drop () ; // Release error dropped variable
            }
          }
          if (kBoolFalse == test_7) {
            outArgument_outObjectIR = GALGAS_objectIR::class_func_reference (extractedValue_5192_type, function_llvmNameForGlobalVariable (constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 157))  COMMA_SOURCE_FILE ("universal-map.galgas", 157)) ;
          }
        }
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalConstant:
    {
      const cEnumAssociatedValues_valuedObject_globalConstant * extractPtr_5797 = (const cEnumAssociatedValues_valuedObject_globalConstant *) (var_entity_4863.unsafePointer ()) ;
      const GALGAS_objectIR extractedValue_5767_objectIR = extractPtr_5797->mAssociatedValue0 ;
      outArgument_outObjectIR = extractedValue_5767_objectIR ;
    }
    break ;
  case GALGAS_valuedObject::kEnum_localConstant:
    {
      const cEnumAssociatedValues_valuedObject_localConstant * extractPtr_5962 = (const cEnumAssociatedValues_valuedObject_localConstant *) (var_entity_4863.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_5841_type = extractPtr_5962->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_5855_omnibusName = extractPtr_5962->mAssociatedValue1 ;
      outArgument_outObjectIR = GALGAS_objectIR::class_func_reference (extractedValue_5841_type, function_llvmNameForLocalVariable (extractedValue_5855_omnibusName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 162))  COMMA_SOURCE_FILE ("universal-map.galgas", 162)) ;
    }
    break ;
  case GALGAS_valuedObject::kEnum_localVariable:
    {
      const cEnumAssociatedValues_valuedObject_localVariable * extractPtr_6118 = (const cEnumAssociatedValues_valuedObject_localVariable *) (var_entity_4863.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_5999_type = extractPtr_6118->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_6013_omnibusName = extractPtr_6118->mAssociatedValue1 ;
      outArgument_outObjectIR = GALGAS_objectIR::class_func_reference (extractedValue_5999_type, function_llvmNameForLocalVariable (extractedValue_6013_omnibusName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 164))  COMMA_SOURCE_FILE ("universal-map.galgas", 164)) ;
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalSyncInstance:
    {
      const cEnumAssociatedValues_valuedObject_globalSyncInstance * extractPtr_6284 = (const cEnumAssociatedValues_valuedObject_globalSyncInstance *) (var_entity_4863.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_6160_type = extractPtr_6284->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_6174_omnibusName = extractPtr_6284->mAssociatedValue1 ;
      outArgument_outObjectIR = GALGAS_objectIR::class_func_reference (extractedValue_6160_type, function_llvmNameForGlobalSyncInstance (extractedValue_6174_omnibusName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 166))  COMMA_SOURCE_FILE ("universal-map.galgas", 166)) ;
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap readAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_readAccess (GALGAS_universalValuedObjectMap & ioObject,
                                 const GALGAS_lstring constinArgument_inValuedObjectName,
                                 Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_valuedObjectState var_valueState_6572 ;
  GALGAS_valuedObject var_property_6591 ;
  const GALGAS_universalValuedObjectMap temp_0 = ioObject ;
  GALGAS_bool joker_6583 ; // Joker input parameter
  temp_0.readProperty_mInternalPropertyAndRoutineMap ().method_searchKey (constinArgument_inValuedObjectName, var_valueState_6572, joker_6583, var_property_6591, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 175)) ;
  switch (var_property_6591.enumValue ()) {
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
        test_1 = GALGAS_bool (ComparisonKind::equal, var_valueState_6572.objectCompare (GALGAS_valuedObjectState::class_func_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 182)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_setMObjectStateForKey (GALGAS_valuedObjectState::class_func_hasReadValue (SOURCE_FILE ("universal-map.galgas", 183)), constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 183)) ;
          }
        }
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_localVariable:
    {
      switch (var_valueState_6572.enumValue ()) {
      case GALGAS_valuedObjectState::kNotBuilt:
        break ;
      case GALGAS_valuedObjectState::kEnum_noValue:
        {
          TC_Array <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GALGAS_string ("'").add_operation (constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 188)).add_operation (GALGAS_string ("' has no value"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 188)), fixItArray2  COMMA_SOURCE_FILE ("universal-map.galgas", 188)) ;
        }
        break ;
      case GALGAS_valuedObjectState::kEnum_hasUnreadValue:
        {
          {
          ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_setMObjectStateForKey (GALGAS_valuedObjectState::class_func_hasReadValue (SOURCE_FILE ("universal-map.galgas", 190)), constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 190)) ;
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


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap searchValuedObjectForReadAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchValuedObjectForReadAccess (GALGAS_universalValuedObjectMap & ioObject,
                                                      const GALGAS_lstring constinArgument_inValuedObjectName,
                                                      GALGAS_objectIR & outArgument_outObjectIR,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outObjectIR.drop () ; // Release 'out' argument
  GALGAS_valuedObjectState var_valueState_7541 ;
  GALGAS_valuedObject var_property_7560 ;
  const GALGAS_universalValuedObjectMap temp_0 = ioObject ;
  GALGAS_bool joker_7552 ; // Joker input parameter
  temp_0.readProperty_mInternalPropertyAndRoutineMap ().method_searchKey (constinArgument_inValuedObjectName, var_valueState_7541, joker_7552, var_property_7560, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 202)) ;
  switch (var_property_7560.enumValue ()) {
  case GALGAS_valuedObject::kNotBuilt:
    break ;
  case GALGAS_valuedObject::kEnum_task:
    {
      const cEnumAssociatedValues_valuedObject_task * extractPtr_7720 = (const cEnumAssociatedValues_valuedObject_task *) (var_property_7560.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_7614_type = extractPtr_7720->mAssociatedValue0 ;
      outArgument_outObjectIR = GALGAS_objectIR::class_func_reference (extractedValue_7614_type, function_llvmNameForGlobalVariable (constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 205))  COMMA_SOURCE_FILE ("universal-map.galgas", 205)) ;
    }
    break ;
  case GALGAS_valuedObject::kEnum_driver:
    {
      const cEnumAssociatedValues_valuedObject_driver * extractPtr_7988 = (const cEnumAssociatedValues_valuedObject_driver *) (var_property_7560.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_7750_type = extractPtr_7988->mAssociatedValue0 ;
      const GALGAS_bool extractedValue_7755_instancied = extractPtr_7988->mAssociatedValue1 ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = extractedValue_7755_instancied.boolEnum () ;
        if (kBoolTrue == test_1) {
          outArgument_outObjectIR = GALGAS_objectIR::class_func_reference (extractedValue_7750_type, function_llvmNameForGlobalVariable (constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 208))  COMMA_SOURCE_FILE ("universal-map.galgas", 208)) ;
        }
      }
      if (kBoolFalse == test_1) {
        TC_Array <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GALGAS_string ("the driver should be instancied"), fixItArray2  COMMA_SOURCE_FILE ("universal-map.galgas", 210)) ;
        outArgument_outObjectIR.drop () ; // Release error dropped variable
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalConstant:
    {
      const cEnumAssociatedValues_valuedObject_globalConstant * extractPtr_8055 = (const cEnumAssociatedValues_valuedObject_globalConstant *) (var_property_7560.unsafePointer ()) ;
      const GALGAS_objectIR extractedValue_8025_objectIR = extractPtr_8055->mAssociatedValue0 ;
      outArgument_outObjectIR = extractedValue_8025_objectIR ;
    }
    break ;
  case GALGAS_valuedObject::kEnum_localConstant:
    {
      const cEnumAssociatedValues_valuedObject_localConstant * extractPtr_8380 = (const cEnumAssociatedValues_valuedObject_localConstant *) (var_property_7560.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_8099_type = extractPtr_8380->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_8113_omnibusName = extractPtr_8380->mAssociatedValue1 ;
      outArgument_outObjectIR = GALGAS_objectIR::class_func_reference (extractedValue_8099_type, function_llvmNameForLocalVariable (extractedValue_8113_omnibusName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 215))  COMMA_SOURCE_FILE ("universal-map.galgas", 215)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (ComparisonKind::equal, var_valueState_7541.objectCompare (GALGAS_valuedObjectState::class_func_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 216)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          {
          ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_setMObjectStateForKey (GALGAS_valuedObjectState::class_func_hasReadValue (SOURCE_FILE ("universal-map.galgas", 217)), constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 217)) ;
          }
        }
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalSyncInstance:
    {
      const cEnumAssociatedValues_valuedObject_globalSyncInstance * extractPtr_8548 = (const cEnumAssociatedValues_valuedObject_globalSyncInstance *) (var_property_7560.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_8424_type = extractPtr_8548->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_8438_omnibusName = extractPtr_8548->mAssociatedValue1 ;
      outArgument_outObjectIR = GALGAS_objectIR::class_func_reference (extractedValue_8424_type, function_llvmNameForGlobalSyncInstance (extractedValue_8438_omnibusName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 220))  COMMA_SOURCE_FILE ("universal-map.galgas", 220)) ;
    }
    break ;
  case GALGAS_valuedObject::kEnum_localVariable:
    {
      const cEnumAssociatedValues_valuedObject_localVariable * extractPtr_9092 = (const cEnumAssociatedValues_valuedObject_localVariable *) (var_property_7560.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_8585_type = extractPtr_9092->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_8599_omnibusName = extractPtr_9092->mAssociatedValue1 ;
      switch (var_valueState_7541.enumValue ()) {
      case GALGAS_valuedObjectState::kNotBuilt:
        break ;
      case GALGAS_valuedObjectState::kEnum_noValue:
        {
          TC_Array <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GALGAS_string ("'").add_operation (constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 224)).add_operation (GALGAS_string ("' has no value"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 224)), fixItArray4  COMMA_SOURCE_FILE ("universal-map.galgas", 224)) ;
          outArgument_outObjectIR.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_valuedObjectState::kEnum_hasUnreadValue:
        {
          {
          ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_setMObjectStateForKey (GALGAS_valuedObjectState::class_func_hasReadValue (SOURCE_FILE ("universal-map.galgas", 226)), constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 226)) ;
          }
          outArgument_outObjectIR = GALGAS_objectIR::class_func_reference (extractedValue_8585_type, function_llvmNameForLocalVariable (extractedValue_8599_omnibusName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 227))  COMMA_SOURCE_FILE ("universal-map.galgas", 227)) ;
        }
        break ;
      case GALGAS_valuedObjectState::kEnum_hasReadValue:
        {
          outArgument_outObjectIR = GALGAS_objectIR::class_func_reference (extractedValue_8585_type, function_llvmNameForLocalVariable (extractedValue_8599_omnibusName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 229))  COMMA_SOURCE_FILE ("universal-map.galgas", 229)) ;
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

void extensionSetter_searchValuedObjectForWriteAccess (GALGAS_universalValuedObjectMap & ioObject,
                                                       const GALGAS_lstring constinArgument_inValuedObjectName,
                                                       GALGAS_objectIR & outArgument_outObjectIR,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outObjectIR.drop () ; // Release 'out' argument
  GALGAS_valuedObjectState var_valueState_9429 ;
  GALGAS_valuedObject var_property_9448 ;
  const GALGAS_universalValuedObjectMap temp_0 = ioObject ;
  GALGAS_bool joker_9440 ; // Joker input parameter
  temp_0.readProperty_mInternalPropertyAndRoutineMap ().method_searchKey (constinArgument_inValuedObjectName, var_valueState_9429, joker_9440, var_property_9448, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 240)) ;
  switch (var_property_9448.enumValue ()) {
  case GALGAS_valuedObject::kNotBuilt:
    break ;
  case GALGAS_valuedObject::kEnum_task:
    {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GALGAS_string ("a task cannot be written"), fixItArray1  COMMA_SOURCE_FILE ("universal-map.galgas", 243)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_driver:
    {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GALGAS_string ("a driver cannot be written"), fixItArray2  COMMA_SOURCE_FILE ("universal-map.galgas", 245)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalConstant:
    {
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GALGAS_string ("a constant cannot be written"), fixItArray3  COMMA_SOURCE_FILE ("universal-map.galgas", 247)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalSyncInstance:
    {
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GALGAS_string ("a global sync instance cannot be written"), fixItArray4  COMMA_SOURCE_FILE ("universal-map.galgas", 249)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_localConstant:
    {
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GALGAS_string ("a constant cannot be written"), fixItArray5  COMMA_SOURCE_FILE ("universal-map.galgas", 251)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_localVariable:
    {
      const cEnumAssociatedValues_valuedObject_localVariable * extractPtr_10446 = (const cEnumAssociatedValues_valuedObject_localVariable *) (var_property_9448.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_10026_type = extractPtr_10446->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_10040_omnibusName = extractPtr_10446->mAssociatedValue1 ;
      outArgument_outObjectIR = GALGAS_objectIR::class_func_reference (extractedValue_10026_type, function_llvmNameForLocalVariable (extractedValue_10040_omnibusName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 253))  COMMA_SOURCE_FILE ("universal-map.galgas", 253)) ;
      switch (var_valueState_9429.enumValue ()) {
      case GALGAS_valuedObjectState::kNotBuilt:
        break ;
      case GALGAS_valuedObjectState::kEnum_noValue:
      case GALGAS_valuedObjectState::kEnum_hasReadValue:
        {
          {
          ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_setMObjectStateForKey (GALGAS_valuedObjectState::class_func_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 256)), constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 256)) ;
          }
        }
        break ;
      case GALGAS_valuedObjectState::kEnum_hasUnreadValue:
        {
          TC_Array <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticWarning (constinArgument_inValuedObjectName.readProperty_location (), GALGAS_string ("previous '").add_operation (constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 258)).add_operation (GALGAS_string ("' value has not been read"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 258)), fixItArray6  COMMA_SOURCE_FILE ("universal-map.galgas", 258)) ;
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

void extensionSetter_searchValuedObjectForReadWriteAccess (GALGAS_universalValuedObjectMap & ioObject,
                                                           const GALGAS_lstring constinArgument_inValuedObjectName,
                                                           GALGAS_objectIR & outArgument_outObjectIR,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outObjectIR.drop () ; // Release 'out' argument
  GALGAS_valuedObjectState var_valueState_10787 ;
  GALGAS_valuedObject var_property_10806 ;
  const GALGAS_universalValuedObjectMap temp_0 = ioObject ;
  GALGAS_bool joker_10798 ; // Joker input parameter
  temp_0.readProperty_mInternalPropertyAndRoutineMap ().method_searchKey (constinArgument_inValuedObjectName, var_valueState_10787, joker_10798, var_property_10806, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 269)) ;
  switch (var_property_10806.enumValue ()) {
  case GALGAS_valuedObject::kNotBuilt:
    break ;
  case GALGAS_valuedObject::kEnum_task:
    {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GALGAS_string ("a task has no value"), fixItArray1  COMMA_SOURCE_FILE ("universal-map.galgas", 272)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_driver:
    {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GALGAS_string ("a driver has no value"), fixItArray2  COMMA_SOURCE_FILE ("universal-map.galgas", 274)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalConstant:
    {
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GALGAS_string ("a constant cannot be written"), fixItArray3  COMMA_SOURCE_FILE ("universal-map.galgas", 276)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_localConstant:
    {
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GALGAS_string ("a constant cannot be written"), fixItArray4  COMMA_SOURCE_FILE ("universal-map.galgas", 278)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalSyncInstance:
    {
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GALGAS_string ("a global sync instance cannot be written"), fixItArray5  COMMA_SOURCE_FILE ("universal-map.galgas", 280)) ;
      outArgument_outObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_valuedObject::kEnum_localVariable:
    {
      const cEnumAssociatedValues_valuedObject_localVariable * extractPtr_11879 = (const cEnumAssociatedValues_valuedObject_localVariable *) (var_property_10806.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_11374_type = extractPtr_11879->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_11388_omnibusName = extractPtr_11879->mAssociatedValue1 ;
      switch (var_valueState_10787.enumValue ()) {
      case GALGAS_valuedObjectState::kNotBuilt:
        break ;
      case GALGAS_valuedObjectState::kEnum_noValue:
        {
          TC_Array <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (constinArgument_inValuedObjectName.readProperty_location (), GALGAS_string ("object has no value"), fixItArray6  COMMA_SOURCE_FILE ("universal-map.galgas", 284)) ;
          outArgument_outObjectIR.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_valuedObjectState::kEnum_hasUnreadValue:
        {
          outArgument_outObjectIR = GALGAS_objectIR::class_func_reference (extractedValue_11374_type, function_llvmNameForLocalVariable (extractedValue_11388_omnibusName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 286))  COMMA_SOURCE_FILE ("universal-map.galgas", 286)) ;
        }
        break ;
      case GALGAS_valuedObjectState::kEnum_hasReadValue:
        {
          {
          ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_setMObjectStateForKey (GALGAS_valuedObjectState::class_func_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 288)), constinArgument_inValuedObjectName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 288)) ;
          }
          outArgument_outObjectIR = GALGAS_objectIR::class_func_reference (extractedValue_11374_type, function_llvmNameForLocalVariable (extractedValue_11388_omnibusName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 289))  COMMA_SOURCE_FILE ("universal-map.galgas", 289)) ;
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

void extensionMethod_searchValuedObjectType (const GALGAS_universalValuedObjectMap inObject,
                                             const GALGAS_semanticContext constinArgument_inContext,
                                             const GALGAS_omnibusType constinArgument_inSelfType,
                                             const GALGAS_LValueAST constinArgument_inLValue,
                                             GALGAS_omnibusType & outArgument_outType,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::equal, constinArgument_inLValue.readProperty_mIdentifier ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outType = constinArgument_inSelfType ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_valuedObject var_property_12383 ;
    const GALGAS_universalValuedObjectMap temp_1 = inObject ;
    GALGAS_valuedObjectState joker_12374_2 ; // Joker input parameter
    GALGAS_bool joker_12374_1 ; // Joker input parameter
    temp_1.readProperty_mInternalPropertyAndRoutineMap ().method_searchKey (constinArgument_inLValue.readProperty_mIdentifier (), joker_12374_2, joker_12374_1, var_property_12383, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 305)) ;
    switch (var_property_12383.enumValue ()) {
    case GALGAS_valuedObject::kNotBuilt:
      break ;
    case GALGAS_valuedObject::kEnum_task:
      {
        TC_Array <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (constinArgument_inLValue.readProperty_mIdentifier ().readProperty_location (), GALGAS_string ("undefined in this context"), fixItArray2  COMMA_SOURCE_FILE ("universal-map.galgas", 308)) ;
        outArgument_outType.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_driver:
      {
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (constinArgument_inLValue.readProperty_mIdentifier ().readProperty_location (), GALGAS_string ("undefined in this context"), fixItArray3  COMMA_SOURCE_FILE ("universal-map.galgas", 310)) ;
        outArgument_outType.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_globalConstant:
      {
        TC_Array <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inLValue.readProperty_mIdentifier ().readProperty_location (), GALGAS_string ("undefined in this context"), fixItArray4  COMMA_SOURCE_FILE ("universal-map.galgas", 312)) ;
        outArgument_outType.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_localConstant:
      {
        TC_Array <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (constinArgument_inLValue.readProperty_mIdentifier ().readProperty_location (), GALGAS_string ("undefined in this context"), fixItArray5  COMMA_SOURCE_FILE ("universal-map.galgas", 314)) ;
        outArgument_outType.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_localVariable:
      {
        const cEnumAssociatedValues_valuedObject_localVariable * extractPtr_12872 = (const cEnumAssociatedValues_valuedObject_localVariable *) (var_property_12383.unsafePointer ()) ;
        const GALGAS_omnibusType extractedValue_12846_type = extractPtr_12872->mAssociatedValue0 ;
        outArgument_outType = extractedValue_12846_type ;
      }
      break ;
    case GALGAS_valuedObject::kEnum_globalSyncInstance:
      {
        const cEnumAssociatedValues_valuedObject_globalSyncInstance * extractPtr_12945 = (const cEnumAssociatedValues_valuedObject_globalSyncInstance *) (var_property_12383.unsafePointer ()) ;
        const GALGAS_omnibusType extractedValue_12919_type = extractPtr_12945->mAssociatedValue0 ;
        outArgument_outType = extractedValue_12919_type ;
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

void extensionMethod_getValuedObjectType (const GALGAS_LValueOperandAST inObject,
                                          const GALGAS_semanticContext constinArgument_inContext,
                                          GALGAS_omnibusType & ioArgument_ioType,
                                          Compiler * inCompiler
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
      const cEnumAssociatedValues_LValueOperandAST_property * extractPtr_13834 = (const cEnumAssociatedValues_LValueOperandAST_property *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_13341_propertyName = extractPtr_13834->mAssociatedValue0 ;
      const GALGAS_LValueOperandAST extractedValue_13372_next = extractPtr_13834->mAssociatedValue1 ;
      GALGAS_propertyGetterMap var_propertyGetterMap_13412 = extensionGetter_propertyGetterMap (constinArgument_inContext, ioArgument_ioType, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 334)) ;
      GALGAS_propertyGetterKind var_accessKind_13525 ;
      GALGAS_propertyVisibility joker_13517 ; // Joker input parameter
      var_propertyGetterMap_13412.method_searchKey (extractedValue_13341_propertyName, joker_13517, var_accessKind_13525, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 335)) ;
      switch (var_accessKind_13525.enumValue ()) {
      case GALGAS_propertyGetterKind::kNotBuilt:
        break ;
      case GALGAS_propertyGetterKind::kEnum_constantProperty:
        {
          const cEnumAssociatedValues_propertyGetterKind_constantProperty * extractPtr_13621 = (const cEnumAssociatedValues_propertyGetterKind_constantProperty *) (var_accessKind_13525.unsafePointer ()) ;
          const GALGAS_objectIR extractedValue_13586_value = extractPtr_13621->mAssociatedValue0 ;
          ioArgument_ioType = extensionGetter_type (extractedValue_13586_value, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 338)) ;
        }
        break ;
      case GALGAS_propertyGetterKind::kEnum_storedProperty:
        {
          const cEnumAssociatedValues_propertyGetterKind_storedProperty * extractPtr_13673 = (const cEnumAssociatedValues_propertyGetterKind_storedProperty *) (var_accessKind_13525.unsafePointer ()) ;
          const GALGAS_omnibusType extractedValue_13648_type = extractPtr_13673->mAssociatedValue0 ;
          ioArgument_ioType = extractedValue_13648_type ;
        }
        break ;
      case GALGAS_propertyGetterKind::kEnum_computedProperty:
        {
          const cEnumAssociatedValues_propertyGetterKind_computedProperty * extractPtr_13766 = (const cEnumAssociatedValues_propertyGetterKind_computedProperty *) (var_accessKind_13525.unsafePointer ()) ;
          const GALGAS_unifiedTypeMapEntry extractedValue_13705_propertyTypeProxy = extractPtr_13766->mAssociatedValue0 ;
          ioArgument_ioType = extensionGetter_type (extractedValue_13705_propertyTypeProxy, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 342)) ;
        }
        break ;
      }
      extensionMethod_getValuedObjectType (extractedValue_13372_next, constinArgument_inContext, ioArgument_ioType, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 344)) ;
    }
    break ;
  case GALGAS_LValueOperandAST::kEnum_arrayAccess:
    {
      const cEnumAssociatedValues_LValueOperandAST_arrayAccess * extractPtr_14110 = (const cEnumAssociatedValues_LValueOperandAST_arrayAccess *) (temp_0.unsafePointer ()) ;
      const GALGAS_LValueOperandAST extractedValue_13877_next = extractPtr_14110->mAssociatedValue3 ;
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
          const cEnumAssociatedValues_subscript_staticSubscript * extractPtr_14032 = (const cEnumAssociatedValues_subscript_staticSubscript *) (ioArgument_ioType.readProperty_subscript ().unsafePointer ()) ;
          const GALGAS_omnibusType extractedValue_14000_elementType = extractPtr_14032->mAssociatedValue0 ;
          ioArgument_ioType = extractedValue_14000_elementType ;
        }
        break ;
      }
      extensionMethod_getValuedObjectType (extractedValue_13877_next, constinArgument_inContext, ioArgument_ioType, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 352)) ;
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap checkLocalVariableFinalState'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkLocalVariableFinalState (const GALGAS_universalValuedObjectMap inObject,
                                                   GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_universalValuedObjectMap temp_0 = inObject ;
  cEnumerator_flatValuedObjectMap enumerator_14516 (temp_0.readProperty_mInternalPropertyAndRoutineMap (), EnumerationOrder::up) ;
  while (enumerator_14516.hasCurrentObject ()) {
    switch (enumerator_14516.current (HERE).readProperty_mValuedObject ().enumValue ()) {
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
        const cEnumAssociatedValues_valuedObject_localConstant * extractPtr_15026 = (const cEnumAssociatedValues_valuedObject_localConstant *) (enumerator_14516.current (HERE).readProperty_mValuedObject ().unsafePointer ()) ;
        const GALGAS_omnibusType extractedValue_14727_type = extractPtr_15026->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_14741_omnibusName = extractPtr_15026->mAssociatedValue1 ;
        const GALGAS_bool extractedValue_14759_isFormalInputArg = extractPtr_15026->mAssociatedValue2 ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = extractedValue_14759_isFormalInputArg.operator_not (SOURCE_FILE ("universal-map.galgas", 372)).boolEnum () ;
          if (kBoolTrue == test_1) {
            {
            extensionSetter_generateRelease (ioArgument_ioInstructionGenerationList, extractedValue_14727_type, extractedValue_14741_omnibusName, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 373)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_valuedObject::kEnum_localVariable:
      {
        const cEnumAssociatedValues_valuedObject_localVariable * extractPtr_15356 = (const cEnumAssociatedValues_valuedObject_localVariable *) (enumerator_14516.current (HERE).readProperty_mValuedObject ().unsafePointer ()) ;
        const GALGAS_omnibusType extractedValue_15067_type = extractPtr_15356->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_15081_omnibusName = extractPtr_15356->mAssociatedValue1 ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          GALGAS_bool test_3 = GALGAS_bool (ComparisonKind::equal, enumerator_14516.current (HERE).readProperty_mObjectState ().objectCompare (GALGAS_valuedObjectState::class_func_noValue (SOURCE_FILE ("universal-map.galgas", 376)))) ;
          if (kBoolTrue == test_3.boolEnum ()) {
            test_3 = enumerator_14516.current (HERE).readProperty_mObjectShouldBeValuedAtEndOfScope () ;
          }
          test_2 = test_3.boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_14516.current (HERE).readProperty_lkey ().readProperty_location (), GALGAS_string ("'").add_operation (enumerator_14516.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 377)).add_operation (GALGAS_string ("' should be valued at the end of routine"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 377)), fixItArray4  COMMA_SOURCE_FILE ("universal-map.galgas", 377)) ;
          }
        }
        {
        extensionSetter_generateRelease (ioArgument_ioInstructionGenerationList, extractedValue_15067_type, extractedValue_15081_omnibusName, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 379)) ;
        }
      }
      break ;
    }
    enumerator_14516.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap openOverrideForSelectBlock'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openOverrideForSelectBlock (GALGAS_universalValuedObjectMap & ioObject,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_referenceStateMap temp_0 = GALGAS_referenceStateMap::init (inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 387)) ;
  GALGAS_referenceStateMap var_initialStateMap_15584 = temp_0 ;
  const GALGAS_universalValuedObjectMap temp_1 = ioObject ;
  cEnumerator_flatValuedObjectMap enumerator_15626 (temp_1.readProperty_mInternalPropertyAndRoutineMap (), EnumerationOrder::up) ;
  while (enumerator_15626.hasCurrentObject ()) {
    switch (enumerator_15626.current (HERE).readProperty_mValuedObject ().enumValue ()) {
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
        var_initialStateMap_15584.setter_insertKey (enumerator_15626.current (HERE).readProperty_lkey (), enumerator_15626.current (HERE).readProperty_mObjectState (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 395)) ;
        }
      }
      break ;
    case GALGAS_valuedObject::kEnum_localVariable:
      {
        {
        var_initialStateMap_15584.setter_insertKey (enumerator_15626.current (HERE).readProperty_lkey (), enumerator_15626.current (HERE).readProperty_mObjectState (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 397)) ;
        }
      }
      break ;
    }
    enumerator_15626.gotoNextObject () ;
  }
  GALGAS_referenceStateMap temp_2 = GALGAS_referenceStateMap::init (inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 400)) ;
  const GALGAS_universalValuedObjectMap temp_3 = ioObject ;
  ioObject.mProperty_mScopeStack.addAssign_operation (GALGAS_scopeKind::class_func_selectScope (SOURCE_FILE ("universal-map.galgas", 400)), GALGAS_bool (true), var_initialStateMap_15584, temp_2, temp_3.readProperty_mLocalObjectList ()  COMMA_SOURCE_FILE ("universal-map.galgas", 400)) ;
  GALGAS_lstringlist temp_4 = GALGAS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 401)) ;
  ioObject.mProperty_mLocalObjectList = temp_4 ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap openOverrideForRepeatBlock'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openOverrideForRepeatBlock (GALGAS_universalValuedObjectMap & ioObject,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_referenceStateMap temp_0 = GALGAS_referenceStateMap::init (inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 407)) ;
  GALGAS_referenceStateMap var_initialStateMap_16339 = temp_0 ;
  const GALGAS_universalValuedObjectMap temp_1 = ioObject ;
  cEnumerator_flatValuedObjectMap enumerator_16381 (temp_1.readProperty_mInternalPropertyAndRoutineMap (), EnumerationOrder::up) ;
  while (enumerator_16381.hasCurrentObject ()) {
    switch (enumerator_16381.current (HERE).readProperty_mValuedObject ().enumValue ()) {
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
        var_initialStateMap_16339.setter_insertKey (enumerator_16381.current (HERE).readProperty_lkey (), enumerator_16381.current (HERE).readProperty_mObjectState (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 415)) ;
        }
      }
      break ;
    case GALGAS_valuedObject::kEnum_localVariable:
      {
        {
        var_initialStateMap_16339.setter_insertKey (enumerator_16381.current (HERE).readProperty_lkey (), enumerator_16381.current (HERE).readProperty_mObjectState (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 417)) ;
        }
      }
      break ;
    }
    enumerator_16381.gotoNextObject () ;
  }
  GALGAS_referenceStateMap temp_2 = GALGAS_referenceStateMap::init (inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 420)) ;
  const GALGAS_universalValuedObjectMap temp_3 = ioObject ;
  ioObject.mProperty_mScopeStack.addAssign_operation (GALGAS_scopeKind::class_func_repeatScope (SOURCE_FILE ("universal-map.galgas", 420)), GALGAS_bool (true), var_initialStateMap_16339, temp_2, temp_3.readProperty_mLocalObjectList ()  COMMA_SOURCE_FILE ("universal-map.galgas", 420)) ;
  GALGAS_lstringlist temp_4 = GALGAS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 421)) ;
  ioObject.mProperty_mLocalObjectList = temp_4 ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap openBranch'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openBranch (GALGAS_universalValuedObjectMap & ioObject,
                                 Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_referenceStateMap var_initialStateMap_17090 ;
  const GALGAS_universalValuedObjectMap temp_0 = ioObject ;
  GALGAS_scopeKind joker_17079 ; // Joker input parameter
  GALGAS_bool joker_17082 ; // Joker input parameter
  GALGAS_referenceStateMap joker_17106_2 ; // Joker input parameter
  GALGAS_lstringlist joker_17106_1 ; // Joker input parameter
  temp_0.readProperty_mScopeStack ().method_last (joker_17079, joker_17082, var_initialStateMap_17090, joker_17106_2, joker_17106_1, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 427)) ;
  cEnumerator_referenceStateMap enumerator_17122 (var_initialStateMap_17090, EnumerationOrder::up) ;
  while (enumerator_17122.hasCurrentObject ()) {
    {
    ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_setMObjectStateForKey (enumerator_17122.current_mState (HERE), enumerator_17122.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 429)) ;
    }
    enumerator_17122.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap closeBranch'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_closeBranch (GALGAS_universalValuedObjectMap & ioObject,
                                  const GALGAS_location constinArgument_inErrorLocation,
                                  Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_scopeKind var_scopeKind_17485 ;
  GALGAS_bool var_firstBranch_17500 ;
  GALGAS_referenceStateMap var_initialStateMap_17517 ;
  GALGAS_referenceStateMap var_referenceStateMap_17538 ;
  GALGAS_lstringlist var_localObjectList_17561 ;
  {
  ioObject.mProperty_mScopeStack.setter_popLast (var_scopeKind_17485, var_firstBranch_17500, var_initialStateMap_17517, var_referenceStateMap_17538, var_localObjectList_17561, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 436)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_firstBranch_17500.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_referenceStateMap temp_1 = GALGAS_referenceStateMap::init (inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 438)) ;
      GALGAS_referenceStateMap var_newReferenceStateMap_17627 = temp_1 ;
      const GALGAS_universalValuedObjectMap temp_2 = ioObject ;
      cEnumerator_flatValuedObjectMap enumerator_17676 (temp_2.readProperty_mInternalPropertyAndRoutineMap (), EnumerationOrder::up) ;
      while (enumerator_17676.hasCurrentObject ()) {
        switch (enumerator_17676.current (HERE).readProperty_mValuedObject ().enumValue ()) {
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
            var_newReferenceStateMap_17627.setter_insertKey (enumerator_17676.current (HERE).readProperty_lkey (), enumerator_17676.current (HERE).readProperty_mObjectState (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 446)) ;
            }
          }
          break ;
        case GALGAS_valuedObject::kEnum_localVariable:
          {
            {
            var_newReferenceStateMap_17627.setter_insertKey (enumerator_17676.current (HERE).readProperty_lkey (), enumerator_17676.current (HERE).readProperty_mObjectState (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 448)) ;
            }
          }
          break ;
        }
        enumerator_17676.gotoNextObject () ;
      }
      ioObject.mProperty_mScopeStack.addAssign_operation (var_scopeKind_17485, GALGAS_bool (false), var_initialStateMap_17517, var_newReferenceStateMap_17627, var_localObjectList_17561  COMMA_SOURCE_FILE ("universal-map.galgas", 451)) ;
    }
  }
  if (kBoolFalse == test_0) {
    switch (var_scopeKind_17485.enumValue ()) {
    case GALGAS_scopeKind::kNotBuilt:
      break ;
    case GALGAS_scopeKind::kEnum_selectScope:
      {
        cEnumerator_referenceStateMap enumerator_18257 (var_referenceStateMap_17538, EnumerationOrder::up) ;
        while (enumerator_18257.hasCurrentObject ()) {
          GALGAS_valuedObjectState var_currentObjectState_18363 ;
          const GALGAS_universalValuedObjectMap temp_3 = ioObject ;
          GALGAS_bool joker_18382_2 ; // Joker input parameter
          GALGAS_valuedObject joker_18382_1 ; // Joker input parameter
          temp_3.readProperty_mInternalPropertyAndRoutineMap ().method_searchKey (enumerator_18257.current_lkey (HERE), var_currentObjectState_18363, joker_18382_2, joker_18382_1, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 456)) ;
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = GALGAS_bool (ComparisonKind::equal, enumerator_18257.current_mState (HERE).objectCompare (var_currentObjectState_18363)).boolEnum () ;
            if (kBoolTrue == test_4) {
            }
          }
          if (kBoolFalse == test_4) {
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = GALGAS_bool (ComparisonKind::equal, var_currentObjectState_18363.objectCompare (GALGAS_valuedObjectState::class_func_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 458)))).operator_and (GALGAS_bool (ComparisonKind::equal, enumerator_18257.current_mState (HERE).objectCompare (GALGAS_valuedObjectState::class_func_hasReadValue (SOURCE_FILE ("universal-map.galgas", 458)))) COMMA_SOURCE_FILE ("universal-map.galgas", 458)).boolEnum () ;
              if (kBoolTrue == test_5) {
              }
            }
            if (kBoolFalse == test_5) {
              enumGalgasBool test_6 = kBoolTrue ;
              if (kBoolTrue == test_6) {
                test_6 = GALGAS_bool (ComparisonKind::equal, var_currentObjectState_18363.objectCompare (GALGAS_valuedObjectState::class_func_hasReadValue (SOURCE_FILE ("universal-map.galgas", 459)))).operator_and (GALGAS_bool (ComparisonKind::equal, enumerator_18257.current_mState (HERE).objectCompare (GALGAS_valuedObjectState::class_func_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 459)))) COMMA_SOURCE_FILE ("universal-map.galgas", 459)).boolEnum () ;
                if (kBoolTrue == test_6) {
                  {
                  var_referenceStateMap_17538.setter_setMStateForKey (GALGAS_valuedObjectState::class_func_hasReadValue (SOURCE_FILE ("universal-map.galgas", 460)), enumerator_18257.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 460)) ;
                  }
                }
              }
              if (kBoolFalse == test_6) {
                TC_Array <FixItDescription> fixItArray7 ;
                inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid state for object '").add_operation (enumerator_18257.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 463)).add_operation (GALGAS_string ("': found "), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 463)).add_operation (extensionGetter_string (var_currentObjectState_18363, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 463)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 463)).add_operation (GALGAS_string (", required "), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 463)).add_operation (extensionGetter_string (enumerator_18257.current_mState (HERE), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 463)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 463)), fixItArray7  COMMA_SOURCE_FILE ("universal-map.galgas", 462)) ;
              }
            }
          }
          enumerator_18257.gotoNextObject () ;
        }
        ioObject.mProperty_mScopeStack.addAssign_operation (var_scopeKind_17485, GALGAS_bool (false), var_initialStateMap_17517, var_referenceStateMap_17538, var_localObjectList_17561  COMMA_SOURCE_FILE ("universal-map.galgas", 466)) ;
      }
      break ;
    case GALGAS_scopeKind::kEnum_repeatScope:
      {
        cEnumerator_referenceStateMap enumerator_19058 (var_referenceStateMap_17538, EnumerationOrder::up) ;
        while (enumerator_19058.hasCurrentObject ()) {
          GALGAS_valuedObjectState var_currentObjectState_19161 ;
          const GALGAS_universalValuedObjectMap temp_8 = ioObject ;
          GALGAS_bool joker_19180_2 ; // Joker input parameter
          GALGAS_valuedObject joker_19180_1 ; // Joker input parameter
          temp_8.readProperty_mInternalPropertyAndRoutineMap ().method_searchKey (enumerator_19058.current_lkey (HERE), var_currentObjectState_19161, joker_19180_2, joker_19180_1, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 469)) ;
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            test_9 = GALGAS_bool (ComparisonKind::notEqual, enumerator_19058.current_mState (HERE).objectCompare (var_currentObjectState_19161)).boolEnum () ;
            if (kBoolTrue == test_9) {
              TC_Array <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid state for object '").add_operation (enumerator_19058.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 472)).add_operation (GALGAS_string ("': found "), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 472)).add_operation (extensionGetter_string (var_currentObjectState_19161, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 472)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 472)).add_operation (GALGAS_string (", required "), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 472)).add_operation (extensionGetter_string (enumerator_19058.current_mState (HERE), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 472)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 472)), fixItArray10  COMMA_SOURCE_FILE ("universal-map.galgas", 471)) ;
            }
          }
          enumerator_19058.gotoNextObject () ;
        }
        ioObject.mProperty_mScopeStack.addAssign_operation (var_scopeKind_17485, GALGAS_bool (false), var_initialStateMap_17517, var_referenceStateMap_17538, var_localObjectList_17561  COMMA_SOURCE_FILE ("universal-map.galgas", 475)) ;
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

void extensionSetter_closeOverride (GALGAS_universalValuedObjectMap & ioObject,
                                    const GALGAS_location constinArgument_inErrorLocation,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_referenceStateMap var_referenceStateMap_19764 ;
  GALGAS_lstringlist var_localObjectList_19787 ;
  {
  GALGAS_scopeKind joker_19750 ; // Joker input parameter
  GALGAS_bool joker_19753 ; // Joker input parameter
  GALGAS_referenceStateMap joker_19756 ; // Joker input parameter
  ioObject.mProperty_mScopeStack.setter_popLast (joker_19750, joker_19753, joker_19756, var_referenceStateMap_19764, var_localObjectList_19787, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 483)) ;
  }
  cEnumerator_referenceStateMap enumerator_19847 (var_referenceStateMap_19764, EnumerationOrder::up) ;
  while (enumerator_19847.hasCurrentObject ()) {
    {
    ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_setMObjectStateForKey (enumerator_19847.current_mState (HERE), enumerator_19847.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 486)) ;
    }
    enumerator_19847.gotoNextObject () ;
  }
  const GALGAS_universalValuedObjectMap temp_0 = ioObject ;
  cEnumerator_lstringlist enumerator_20037 (temp_0.readProperty_mLocalObjectList (), EnumerationOrder::up) ;
  while (enumerator_20037.hasCurrentObject ()) {
    GALGAS_valuedObjectState var_currentObjectState_20145 ;
    GALGAS_bool var_objectShouldBeValuedAtEndOfScope_20175 ;
    GALGAS_valuedObject var_possibleValuedObject_20219 ;
    const GALGAS_universalValuedObjectMap temp_1 = ioObject ;
    temp_1.readProperty_mInternalPropertyAndRoutineMap ().method_searchKey (enumerator_20037.current_mValue (HERE), var_currentObjectState_20145, var_objectShouldBeValuedAtEndOfScope_20175, var_possibleValuedObject_20219, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 490)) ;
    switch (var_possibleValuedObject_20219.enumValue ()) {
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
          test_2 = GALGAS_bool (ComparisonKind::equal, var_currentObjectState_20145.objectCompare (GALGAS_valuedObjectState::class_func_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 502)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticWarning (constinArgument_inErrorLocation, GALGAS_string ("'").add_operation (enumerator_20037.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 503)).add_operation (GALGAS_string ("' is never read"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 503)), fixItArray3  COMMA_SOURCE_FILE ("universal-map.galgas", 503)) ;
          }
        }
      }
      break ;
    case GALGAS_valuedObject::kEnum_localVariable:
      {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          GALGAS_bool test_5 = GALGAS_bool (ComparisonKind::equal, var_currentObjectState_20145.objectCompare (GALGAS_valuedObjectState::class_func_noValue (SOURCE_FILE ("universal-map.galgas", 506)))) ;
          if (kBoolTrue == test_5.boolEnum ()) {
            test_5 = var_objectShouldBeValuedAtEndOfScope_20175 ;
          }
          test_4 = test_5.boolEnum () ;
          if (kBoolTrue == test_4) {
            TC_Array <FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("'").add_operation (enumerator_20037.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 507)).add_operation (GALGAS_string ("' should be valued at the end of routine"), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 507)), fixItArray6  COMMA_SOURCE_FILE ("universal-map.galgas", 507)) ;
          }
        }
      }
      break ;
    }
    enumerator_20037.gotoNextObject () ;
  }
  const GALGAS_universalValuedObjectMap temp_7 = ioObject ;
  cEnumerator_lstringlist enumerator_20809 (temp_7.readProperty_mLocalObjectList (), EnumerationOrder::up) ;
  while (enumerator_20809.hasCurrentObject ()) {
    {
    GALGAS_valuedObjectState joker_20902_3 ; // Joker input parameter
    GALGAS_bool joker_20902_2 ; // Joker input parameter
    GALGAS_valuedObject joker_20902_1 ; // Joker input parameter
    ioObject.mProperty_mInternalPropertyAndRoutineMap.setter_removeKey (enumerator_20809.current_mValue (HERE), joker_20902_3, joker_20902_2, joker_20902_1, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 513)) ;
    }
    enumerator_20809.gotoNextObject () ;
  }
  ioObject.mProperty_mLocalObjectList = var_localObjectList_19787 ;
}


//--------------------------------------------------------------------------------------------------
// @omnibusType reference class
//--------------------------------------------------------------------------------------------------

cPtr_omnibusType::cPtr_omnibusType (Compiler * /* inCompiler */ COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE),
mProperty_subscript (),
mProperty_attributes (),
mProperty_omnibusTypeDescriptionName (),
mProperty_kind (),
mProperty_llvmBaseTypeName () {
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

ComparisonResult GALGAS_omnibusType::objectCompare (const GALGAS_omnibusType & inOperand) const {
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

GALGAS_omnibusType::GALGAS_omnibusType (void) :
AC_GALGAS_reference_class () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_omnibusType GALGAS_omnibusType::
init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (const GALGAS_subscript & in_subscript,
                                                                                           const GALGAS_omnibusTypeAttributes & in_attributes,
                                                                                           const GALGAS_string & in_omnibusTypeDescriptionName,
                                                                                           const GALGAS_typeKind & in_kind,
                                                                                           const GALGAS_string & in_llvmBaseTypeName,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  cPtr_omnibusType * object = nullptr ;
  macroMyNew (object, cPtr_omnibusType (inCompiler COMMA_THERE)) ;
  object->omnibusType_init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (in_subscript, in_attributes, in_omnibusTypeDescriptionName, in_kind, in_llvmBaseTypeName, inCompiler) ;
  const GALGAS_omnibusType result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_omnibusType::
omnibusType_init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (const GALGAS_subscript & in_subscript,
                                                                                                       const GALGAS_omnibusTypeAttributes & in_attributes,
                                                                                                       const GALGAS_string & in_omnibusTypeDescriptionName,
                                                                                                       const GALGAS_typeKind & in_kind,
                                                                                                       const GALGAS_string & in_llvmBaseTypeName,
                                                                                                       Compiler * /* inCompiler */) {
  mProperty_subscript = in_subscript ;
  mProperty_attributes = in_attributes ;
  mProperty_omnibusTypeDescriptionName = in_omnibusTypeDescriptionName ;
  mProperty_kind = in_kind ;
  mProperty_llvmBaseTypeName = in_llvmBaseTypeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType::GALGAS_omnibusType (const cPtr_omnibusType * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_omnibusType) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_omnibusType::class_func_new (const GALGAS_subscript & in_subscript,
                                                       const GALGAS_omnibusTypeAttributes & in_attributes,
                                                       const GALGAS_string & in_omnibusTypeDescriptionName,
                                                       const GALGAS_typeKind & in_kind,
                                                       const GALGAS_string & in_llvmBaseTypeName
                                                       COMMA_LOCATION_ARGS) {
  GALGAS_omnibusType result ;
  macroMyNew (result.mObjectPtr, cPtr_omnibusType (in_subscript, in_attributes, in_omnibusTypeDescriptionName, in_kind, in_llvmBaseTypeName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_subscript GALGAS_omnibusType::readProperty_subscript (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_subscript () ;
  }else{
    cPtr_omnibusType * p = (cPtr_omnibusType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_omnibusType) ;
    return p->mProperty_subscript ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusTypeAttributes GALGAS_omnibusType::readProperty_attributes (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusTypeAttributes () ;
  }else{
    cPtr_omnibusType * p = (cPtr_omnibusType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_omnibusType) ;
    return p->mProperty_attributes ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_omnibusType::readProperty_omnibusTypeDescriptionName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_omnibusType * p = (cPtr_omnibusType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_omnibusType) ;
    return p->mProperty_omnibusTypeDescriptionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_omnibusType::readProperty_kind (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_typeKind () ;
  }else{
    cPtr_omnibusType * p = (cPtr_omnibusType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_omnibusType) ;
    return p->mProperty_kind ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_omnibusType::readProperty_llvmBaseTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_omnibusType * p = (cPtr_omnibusType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_omnibusType) ;
    return p->mProperty_llvmBaseTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @omnibusType class
//--------------------------------------------------------------------------------------------------

cPtr_omnibusType::cPtr_omnibusType (const GALGAS_subscript & in_subscript,
                                    const GALGAS_omnibusTypeAttributes & in_attributes,
                                    const GALGAS_string & in_omnibusTypeDescriptionName,
                                    const GALGAS_typeKind & in_kind,
                                    const GALGAS_string & in_llvmBaseTypeName
                                    COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE),
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

acPtr_class * cPtr_omnibusType::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_omnibusType (mProperty_subscript, mProperty_attributes, mProperty_omnibusTypeDescriptionName, mProperty_kind, mProperty_llvmBaseTypeName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @omnibusType generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_omnibusType ("omnibusType",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_omnibusType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_omnibusType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_omnibusType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_omnibusType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_omnibusType::extractObject (const GALGAS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_omnibusType result ;
  const GALGAS_omnibusType * p = (const GALGAS_omnibusType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_omnibusType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("omnibusType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticEntityMap::GALGAS_staticEntityMap (void) :
mProperty_mStaticStringMap (),
mProperty_mGlobalStructuredConstantList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticEntityMap::~ GALGAS_staticEntityMap (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_staticEntityMap GALGAS_staticEntityMap::init (Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_staticEntityMap result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticEntityMap::setInitializedProperties (Compiler * inCompiler) {
GALGAS_staticStringMap temp_0 = GALGAS_staticStringMap::init (inCompiler COMMA_SOURCE_FILE ("context.galgas", 306)) ;
  mProperty_mStaticStringMap = temp_0 ;
GALGAS_globalStructuredConstantList temp_1 = GALGAS_globalStructuredConstantList::init (inCompiler COMMA_SOURCE_FILE ("context.galgas", 307)) ;
  mProperty_mGlobalStructuredConstantList = temp_1 ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticEntityMap::GALGAS_staticEntityMap (const GALGAS_staticStringMap & inOperand0,
                                                const GALGAS_globalStructuredConstantList & inOperand1) :
mProperty_mStaticStringMap (inOperand0),
mProperty_mGlobalStructuredConstantList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticEntityMap GALGAS_staticEntityMap::class_func_new (Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_staticEntityMap result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_staticEntityMap::isValid (void) const {
  return mProperty_mStaticStringMap.isValid () && mProperty_mGlobalStructuredConstantList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticEntityMap::drop (void) {
  mProperty_mStaticStringMap.drop () ;
  mProperty_mGlobalStructuredConstantList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticEntityMap::description (String & ioString,
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

const C_galgas_type_descriptor * GALGAS_staticEntityMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticEntityMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_staticEntityMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticEntityMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticEntityMap GALGAS_staticEntityMap::extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_staticEntityMap result ;
  const GALGAS_staticEntityMap * p = (const GALGAS_staticEntityMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_staticEntityMap *> (p)) {
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

void extensionSetter_findOrAddStaticString (GALGAS_staticEntityMap & ioObject,
                                            GALGAS_string inArgument_inString,
                                            GALGAS_uint & outArgument_outIndex,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outIndex.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_staticEntityMap temp_1 = ioObject ;
    test_0 = temp_1.readProperty_mStaticStringMap ().getter_hasKey (inArgument_inString COMMA_SOURCE_FILE ("context.galgas", 328)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_staticEntityMap temp_2 = ioObject ;
      temp_2.readProperty_mStaticStringMap ().method_searchKey (inArgument_inString.getter_nowhere (SOURCE_FILE ("context.galgas", 329)), outArgument_outIndex, inCompiler COMMA_SOURCE_FILE ("context.galgas", 329)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_staticEntityMap temp_3 = ioObject ;
    outArgument_outIndex = temp_3.readProperty_mStaticStringMap ().getter_count (SOURCE_FILE ("context.galgas", 331)) ;
    {
    ioObject.mProperty_mStaticStringMap.setter_insertKey (inArgument_inString.getter_nowhere (SOURCE_FILE ("context.galgas", 332)), outArgument_outIndex, inCompiler COMMA_SOURCE_FILE ("context.galgas", 332)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType llvmTypeName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_omnibusType::getter_llvmTypeName (Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_omnibusType temp_0 = this ;
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
      const cEnumAssociatedValues_typeKind_enumeration * extractPtr_2446 = (const cEnumAssociatedValues_typeKind_enumeration *) (temp_0.readProperty_kind ().unsafePointer ()) ;
      const GALGAS_uint extractedValue_2415_bitCount = extractPtr_2446->mAssociatedValue0 ;
      result_result = GALGAS_string ("i").add_operation (extractedValue_2415_bitCount.getter_string (SOURCE_FILE ("types.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 64)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      const GALGAS_omnibusType temp_1 = this ;
      result_result = GALGAS_string ("%").add_operation (temp_1.readProperty_llvmBaseTypeName ().getter_assemblerRepresentation (SOURCE_FILE ("types.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 66)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_syncTool:
    {
      const GALGAS_omnibusType temp_2 = this ;
      result_result = GALGAS_string ("%").add_operation (temp_2.readProperty_llvmBaseTypeName ().getter_assemblerRepresentation (SOURCE_FILE ("types.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 68)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_2689 = (const cEnumAssociatedValues_typeKind_integer *) (temp_0.readProperty_kind ().unsafePointer ()) ;
      const GALGAS_uint extractedValue_2658_bitCount = extractPtr_2689->mAssociatedValue3 ;
      result_result = GALGAS_string ("i").add_operation (extractedValue_2658_bitCount.getter_string (SOURCE_FILE ("types.galgas", 70)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 70)) ;
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
      const GALGAS_omnibusType temp_3 = this ;
      result_result = temp_3.readProperty_llvmBaseTypeName () ;
    }
    break ;
  case GALGAS_typeKind::kEnum_opaque:
    {
      const cEnumAssociatedValues_typeKind_opaque * extractPtr_2976 = (const cEnumAssociatedValues_typeKind_opaque *) (temp_0.readProperty_kind ().unsafePointer ()) ;
      const GALGAS_bigint extractedValue_2945_bitCount = extractPtr_2976->mAssociatedValue0 ;
      result_result = GALGAS_string ("i").add_operation (extractedValue_2945_bitCount.getter_string (SOURCE_FILE ("types.galgas", 78)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 78)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_staticArrayType:
    {
      const GALGAS_omnibusType temp_4 = this ;
      result_result = GALGAS_string ("%").add_operation (temp_4.readProperty_llvmBaseTypeName ().getter_assemblerRepresentation (SOURCE_FILE ("types.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 80)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dynamicArrayType:
    {
      result_result = GALGAS_string ("%ptrtype") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_function:
    {
      const cEnumAssociatedValues_typeKind_function * extractPtr_3635 = (const cEnumAssociatedValues_typeKind_function *) (temp_0.readProperty_kind ().unsafePointer ()) ;
      const GALGAS_routineTypedSignature extractedValue_3172_signature = extractPtr_3635->mAssociatedValue1 ;
      const GALGAS_unifiedTypeMapEntry extractedValue_3182_returnTypeProxy = extractPtr_3635->mAssociatedValue2 ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (ComparisonKind::equal, extractedValue_3182_returnTypeProxy.objectCompare (GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("types.galgas", 84)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          result_result = GALGAS_string ("void") ;
        }
      }
      if (kBoolFalse == test_5) {
        result_result = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (extractedValue_3182_returnTypeProxy, inCompiler COMMA_SOURCE_FILE ("types.galgas", 87)).ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 87)) ;
      }
      result_result.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 89)) ;
      cEnumerator_routineTypedSignature enumerator_3397 (extractedValue_3172_signature, EnumerationOrder::up) ;
      while (enumerator_3397.hasCurrentObject ()) {
        result_result.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_3397.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("types.galgas", 92)).ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 92)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 92)) ;
        switch (enumerator_3397.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
        case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
        case GALGAS_procFormalArgumentPassingMode::kEnum_output:
          {
            result_result.plusAssign_operation(GALGAS_string ("*"), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 94)) ;
          }
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_input:
          {
          }
          break ;
        }
        if (enumerator_3397.hasNextObject ()) {
          result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 97)) ;
        }
        enumerator_3397.gotoNextObject () ;
      }
      result_result.plusAssign_operation(GALGAS_string (")*"), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 99)) ;
    }
    break ;
  }
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_llvmTypeName (const cPtr_omnibusType * inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
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

void cPtr_omnibusType::method_checkIsCompileTimeType (const GALGAS_location constinArgument_inErrorLocation,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_omnibusType temp_1 = this ;
    const GALGAS_omnibusType temp_2 = this ;
    test_0 = temp_1.readProperty_kind ().getter_isCompileTimeBool (SOURCE_FILE ("types.galgas", 106)).operator_or (temp_2.readProperty_kind ().getter_isCompileTimeInteger (SOURCE_FILE ("types.galgas", 106)) COMMA_SOURCE_FILE ("types.galgas", 106)).operator_not (SOURCE_FILE ("types.galgas", 106)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this type should be a compile time type"), fixItArray3  COMMA_SOURCE_FILE ("types.galgas", 107)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkIsCompileTimeType (cPtr_omnibusType * inObject,
                                                 const GALGAS_location constin_inErrorLocation,
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

void cPtr_omnibusType::method_checkIsNotCompileTimeType (const GALGAS_location constinArgument_inErrorLocation,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_omnibusType temp_1 = this ;
    const GALGAS_omnibusType temp_2 = this ;
    test_0 = temp_1.readProperty_kind ().getter_isCompileTimeBool (SOURCE_FILE ("types.galgas", 114)).operator_or (temp_2.readProperty_kind ().getter_isCompileTimeInteger (SOURCE_FILE ("types.galgas", 114)) COMMA_SOURCE_FILE ("types.galgas", 114)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this type should not be a compile time type"), fixItArray3  COMMA_SOURCE_FILE ("types.galgas", 115)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkIsNotCompileTimeType (cPtr_omnibusType * inObject,
                                                    const GALGAS_location constin_inErrorLocation,
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

GALGAS_bool cPtr_omnibusType::getter_isCompileTimeType (Compiler */* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  const GALGAS_omnibusType temp_0 = this ;
  const GALGAS_omnibusType temp_1 = this ;
  result_result = temp_0.readProperty_kind ().getter_isCompileTimeBool (SOURCE_FILE ("types.galgas", 122)).operator_or (temp_1.readProperty_kind ().getter_isCompileTimeInteger (SOURCE_FILE ("types.galgas", 122)) COMMA_SOURCE_FILE ("types.galgas", 122)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_isCompileTimeType (const cPtr_omnibusType * inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
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

GALGAS_bool cPtr_omnibusType::getter_instanciable (Compiler */* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  const GALGAS_omnibusType temp_0 = this ;
  result_result = temp_0.readProperty_attributes ().getter_instanciable (SOURCE_FILE ("types.galgas", 188)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_instanciable (const cPtr_omnibusType * inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
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

GALGAS_bool cPtr_omnibusType::getter_copyable (Compiler */* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  const GALGAS_omnibusType temp_0 = this ;
  result_result = temp_0.readProperty_attributes ().getter_copyable (SOURCE_FILE ("types.galgas", 194)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_copyable (const cPtr_omnibusType * inObject,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
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

void cPtr_omnibusType::method_generateRetain (const GALGAS_string constinArgument_inOmnibusName,
                                              GALGAS_string & ioArgument_ioLLVMcode,
                                              GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_omnibusType temp_0 = this ;
  GALGAS_string var_llvmTypeName_7117 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 204)) ;
  GALGAS_string var_LLVMVariable_7158 = function_llvmNameForLocalVariable (constinArgument_inOmnibusName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 205)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_omnibusType temp_2 = this ;
    test_1 = temp_2.readProperty_kind ().getter_isDynamicArrayType (SOURCE_FILE ("types.galgas", 206)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string var_tempLLVMVariable_7265 = GALGAS_string ("%temp.").add_operation (constinArgument_inOmnibusName.getter_assemblerRepresentation (SOURCE_FILE ("types.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 207)).add_operation (GALGAS_string (".loaded."), inCompiler COMMA_SOURCE_FILE ("types.galgas", 207)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("types.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 207)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 208)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_tempLLVMVariable_7265, inCompiler COMMA_SOURCE_FILE ("types.galgas", 209)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 209)).add_operation (var_llvmTypeName_7117, inCompiler COMMA_SOURCE_FILE ("types.galgas", 209)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 209)).add_operation (var_llvmTypeName_7117, inCompiler COMMA_SOURCE_FILE ("types.galgas", 209)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 209)).add_operation (var_LLVMVariable_7158, inCompiler COMMA_SOURCE_FILE ("types.galgas", 209)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 209)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.retain (").add_operation (var_llvmTypeName_7117, inCompiler COMMA_SOURCE_FILE ("types.galgas", 210)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 210)).add_operation (var_tempLLVMVariable_7265, inCompiler COMMA_SOURCE_FILE ("types.galgas", 210)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 210)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_omnibusType temp_3 = this ;
    GALGAS_uintlist temp_4 = GALGAS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("types.galgas", 212)) ;
    GALGAS_arcAssignmentList var_arcAssignmentList_7649 = callExtensionGetter_arcList ((const cPtr_omnibusType *) temp_3.ptr (), temp_4, inCompiler COMMA_SOURCE_FILE ("types.galgas", 212)) ;
    cEnumerator_arcAssignmentList enumerator_7724 (var_arcAssignmentList_7649, EnumerationOrder::up) ;
    while (enumerator_7724.hasCurrentObject ()) {
      GALGAS_string var_llvmVarName_7770 = GALGAS_string ("%arc.retain.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("types.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 214)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 215)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmVarName_7770, inCompiler COMMA_SOURCE_FILE ("types.galgas", 216)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 216)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 216)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_llvmTypeName_7117.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 217)).add_operation (var_llvmTypeName_7117, inCompiler COMMA_SOURCE_FILE ("types.galgas", 217)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 217)).add_operation (var_LLVMVariable_7158, inCompiler COMMA_SOURCE_FILE ("types.galgas", 217)).add_operation (GALGAS_string (", i32 0"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 217)) ;
      cEnumerator_uintlist enumerator_8042 (enumerator_7724.current_mPropertyIndexPath (HERE), EnumerationOrder::up) ;
      while (enumerator_8042.hasCurrentObject ()) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_8042.current_mValue (HERE).getter_string (SOURCE_FILE ("types.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 219)) ;
        enumerator_8042.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ; ").add_operation (enumerator_7724.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("types.galgas", 221)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 221)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 221)) ;
      GALGAS_string var_propertyTypeLLVMName_8168 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_7724.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 222)) ;
      GALGAS_string var_llvmLoadedVarName_8229 = var_llvmVarName_7770.add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 223)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmLoadedVarName_8229, inCompiler COMMA_SOURCE_FILE ("types.galgas", 224)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 224)).add_operation (var_propertyTypeLLVMName_8168, inCompiler COMMA_SOURCE_FILE ("types.galgas", 224)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 224)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 224)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_propertyTypeLLVMName_8168.add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 225)).add_operation (var_llvmVarName_7770, inCompiler COMMA_SOURCE_FILE ("types.galgas", 225)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 225)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 225)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.retain (").add_operation (var_propertyTypeLLVMName_8168, inCompiler COMMA_SOURCE_FILE ("types.galgas", 226)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 226)).add_operation (var_llvmLoadedVarName_8229, inCompiler COMMA_SOURCE_FILE ("types.galgas", 226)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 226)) ;
      enumerator_7724.gotoNextObject () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateRetain (cPtr_omnibusType * inObject,
                                         const GALGAS_string constin_inOmnibusName,
                                         GALGAS_string & io_ioLLVMcode,
                                         GALGAS_generationAdds & io_ioGenerationAdds,
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

void cPtr_omnibusType::method_generateInsulate (const GALGAS_string constinArgument_inOmnibusName,
                                                GALGAS_string & ioArgument_ioLLVMcode,
                                                GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_omnibusType temp_0 = this ;
  GALGAS_string var_llvmTypeName_8810 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 238)) ;
  GALGAS_string var_LLVMVariable_8851 = function_llvmNameForLocalVariable (constinArgument_inOmnibusName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 239)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_omnibusType temp_2 = this ;
    test_1 = temp_2.readProperty_kind ().getter_isDynamicArrayType (SOURCE_FILE ("types.galgas", 240)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string var_loadedVar_8958 = GALGAS_string ("%temp.").add_operation (constinArgument_inOmnibusName.getter_assemblerRepresentation (SOURCE_FILE ("types.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 241)).add_operation (GALGAS_string (".loaded."), inCompiler COMMA_SOURCE_FILE ("types.galgas", 241)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("types.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 241)) ;
      GALGAS_string var_insulatedVar_9077 = GALGAS_string ("%temp.").add_operation (constinArgument_inOmnibusName.getter_assemblerRepresentation (SOURCE_FILE ("types.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 242)).add_operation (GALGAS_string (".insulated."), inCompiler COMMA_SOURCE_FILE ("types.galgas", 242)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("types.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 242)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 243)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_loadedVar_8958, inCompiler COMMA_SOURCE_FILE ("types.galgas", 244)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 244)).add_operation (var_llvmTypeName_8810, inCompiler COMMA_SOURCE_FILE ("types.galgas", 244)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 244)).add_operation (var_llvmTypeName_8810, inCompiler COMMA_SOURCE_FILE ("types.galgas", 244)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 244)).add_operation (var_LLVMVariable_8851, inCompiler COMMA_SOURCE_FILE ("types.galgas", 244)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 244)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 244)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_insulatedVar_9077, inCompiler COMMA_SOURCE_FILE ("types.galgas", 245)).add_operation (GALGAS_string (" = call "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 245)).add_operation (var_llvmTypeName_8810, inCompiler COMMA_SOURCE_FILE ("types.galgas", 245)).add_operation (GALGAS_string (" @arc.insulate ("), inCompiler COMMA_SOURCE_FILE ("types.galgas", 245)).add_operation (var_llvmTypeName_8810, inCompiler COMMA_SOURCE_FILE ("types.galgas", 245)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 245)).add_operation (var_loadedVar_8958, inCompiler COMMA_SOURCE_FILE ("types.galgas", 245)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 245)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 245)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmTypeName_8810, inCompiler COMMA_SOURCE_FILE ("types.galgas", 246)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 246)).add_operation (var_insulatedVar_9077, inCompiler COMMA_SOURCE_FILE ("types.galgas", 246)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 246)).add_operation (var_llvmTypeName_8810, inCompiler COMMA_SOURCE_FILE ("types.galgas", 246)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 246)).add_operation (var_LLVMVariable_8851, inCompiler COMMA_SOURCE_FILE ("types.galgas", 246)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 246)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 246)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_omnibusType temp_3 = this ;
    GALGAS_uintlist temp_4 = GALGAS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("types.galgas", 248)) ;
    GALGAS_arcAssignmentList var_arcAssignmentList_9606 = callExtensionGetter_arcList ((const cPtr_omnibusType *) temp_3.ptr (), temp_4, inCompiler COMMA_SOURCE_FILE ("types.galgas", 248)) ;
    cEnumerator_arcAssignmentList enumerator_9681 (var_arcAssignmentList_9606, EnumerationOrder::up) ;
    while (enumerator_9681.hasCurrentObject ()) {
      GALGAS_string var_llvmVarName_9727 = GALGAS_string ("%arc.release.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("types.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 250)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 251)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmVarName_9727, inCompiler COMMA_SOURCE_FILE ("types.galgas", 252)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 252)).add_operation (var_llvmTypeName_8810, inCompiler COMMA_SOURCE_FILE ("types.galgas", 252)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 252)).add_operation (var_llvmTypeName_8810, inCompiler COMMA_SOURCE_FILE ("types.galgas", 252)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 252)).add_operation (var_LLVMVariable_8851, inCompiler COMMA_SOURCE_FILE ("types.galgas", 252)).add_operation (GALGAS_string (", i32 0"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 252)) ;
      cEnumerator_uintlist enumerator_9982 (enumerator_9681.current_mPropertyIndexPath (HERE), EnumerationOrder::up) ;
      while (enumerator_9982.hasCurrentObject ()) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_9982.current_mValue (HERE).getter_string (SOURCE_FILE ("types.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 254)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 254)) ;
        enumerator_9982.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ; ").add_operation (enumerator_9681.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("types.galgas", 256)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 256)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 256)) ;
      GALGAS_string var_propertyTypeLLVMName_10108 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_9681.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 257)) ;
      GALGAS_string var_loadedVar_10169 = var_llvmVarName_9727.add_operation (GALGAS_string (".loaded."), inCompiler COMMA_SOURCE_FILE ("types.galgas", 258)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("types.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 258)) ;
      GALGAS_string var_insulatedVar_10249 = var_llvmVarName_9727.add_operation (GALGAS_string (".insulated."), inCompiler COMMA_SOURCE_FILE ("types.galgas", 259)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("types.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 259)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 260)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_loadedVar_10169, inCompiler COMMA_SOURCE_FILE ("types.galgas", 261)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 261)).add_operation (var_propertyTypeLLVMName_10108, inCompiler COMMA_SOURCE_FILE ("types.galgas", 261)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 261)).add_operation (var_propertyTypeLLVMName_10108, inCompiler COMMA_SOURCE_FILE ("types.galgas", 261)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 261)).add_operation (var_llvmVarName_9727, inCompiler COMMA_SOURCE_FILE ("types.galgas", 261)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 261)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 261)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_insulatedVar_10249, inCompiler COMMA_SOURCE_FILE ("types.galgas", 262)).add_operation (GALGAS_string (" = call "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 262)).add_operation (var_propertyTypeLLVMName_10108, inCompiler COMMA_SOURCE_FILE ("types.galgas", 262)).add_operation (GALGAS_string (" @arc.insulate ("), inCompiler COMMA_SOURCE_FILE ("types.galgas", 262)).add_operation (var_propertyTypeLLVMName_10108, inCompiler COMMA_SOURCE_FILE ("types.galgas", 262)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 262)).add_operation (var_loadedVar_10169, inCompiler COMMA_SOURCE_FILE ("types.galgas", 262)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 262)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 262)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_propertyTypeLLVMName_10108, inCompiler COMMA_SOURCE_FILE ("types.galgas", 263)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 263)).add_operation (var_insulatedVar_10249, inCompiler COMMA_SOURCE_FILE ("types.galgas", 263)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 263)).add_operation (var_propertyTypeLLVMName_10108, inCompiler COMMA_SOURCE_FILE ("types.galgas", 263)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 263)).add_operation (var_llvmVarName_9727, inCompiler COMMA_SOURCE_FILE ("types.galgas", 263)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 263)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 263)) ;
      enumerator_9681.gotoNextObject () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateInsulate (cPtr_omnibusType * inObject,
                                           const GALGAS_string constin_inOmnibusName,
                                           GALGAS_string & io_ioLLVMcode,
                                           GALGAS_generationAdds & io_ioGenerationAdds,
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

void cPtr_omnibusType::method_generateRelease (const GALGAS_string constinArgument_inOmnibusName,
                                               GALGAS_string & ioArgument_ioLLVMcode,
                                               GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_omnibusType temp_0 = this ;
  GALGAS_string var_llvmTypeName_11050 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 275)) ;
  GALGAS_string var_LLVMVariable_11091 = function_llvmNameForLocalVariable (constinArgument_inOmnibusName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 276)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_omnibusType temp_2 = this ;
    test_1 = temp_2.readProperty_kind ().getter_isDynamicArrayType (SOURCE_FILE ("types.galgas", 277)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string var_tempLLVMVariable_11198 = GALGAS_string ("%temp.").add_operation (constinArgument_inOmnibusName.getter_assemblerRepresentation (SOURCE_FILE ("types.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 278)).add_operation (GALGAS_string (".loaded."), inCompiler COMMA_SOURCE_FILE ("types.galgas", 278)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("types.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 278)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 279)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_tempLLVMVariable_11198, inCompiler COMMA_SOURCE_FILE ("types.galgas", 280)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 280)).add_operation (var_llvmTypeName_11050, inCompiler COMMA_SOURCE_FILE ("types.galgas", 280)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 280)).add_operation (var_llvmTypeName_11050, inCompiler COMMA_SOURCE_FILE ("types.galgas", 280)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 280)).add_operation (var_LLVMVariable_11091, inCompiler COMMA_SOURCE_FILE ("types.galgas", 280)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 280)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 280)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.release (").add_operation (var_llvmTypeName_11050, inCompiler COMMA_SOURCE_FILE ("types.galgas", 281)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 281)).add_operation (var_tempLLVMVariable_11198, inCompiler COMMA_SOURCE_FILE ("types.galgas", 281)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 281)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 281)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_omnibusType temp_3 = this ;
    GALGAS_uintlist temp_4 = GALGAS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("types.galgas", 283)) ;
    GALGAS_arcAssignmentList var_arcAssignmentList_11588 = callExtensionGetter_arcList ((const cPtr_omnibusType *) temp_3.ptr (), temp_4, inCompiler COMMA_SOURCE_FILE ("types.galgas", 283)) ;
    cEnumerator_arcAssignmentList enumerator_11663 (var_arcAssignmentList_11588, EnumerationOrder::up) ;
    while (enumerator_11663.hasCurrentObject ()) {
      GALGAS_string var_llvmVarName_11709 = GALGAS_string ("%arc.release.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("types.galgas", 285)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 285)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 286)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmVarName_11709, inCompiler COMMA_SOURCE_FILE ("types.galgas", 287)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 287)).add_operation (var_llvmTypeName_11050, inCompiler COMMA_SOURCE_FILE ("types.galgas", 287)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 287)).add_operation (var_llvmTypeName_11050, inCompiler COMMA_SOURCE_FILE ("types.galgas", 287)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 287)).add_operation (var_LLVMVariable_11091, inCompiler COMMA_SOURCE_FILE ("types.galgas", 287)).add_operation (GALGAS_string (", i32 0"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 287)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 287)) ;
      cEnumerator_uintlist enumerator_11964 (enumerator_11663.current_mPropertyIndexPath (HERE), EnumerationOrder::up) ;
      while (enumerator_11964.hasCurrentObject ()) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_11964.current_mValue (HERE).getter_string (SOURCE_FILE ("types.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 289)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 289)) ;
        enumerator_11964.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ; ").add_operation (enumerator_11663.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("types.galgas", 291)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 291)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 291)) ;
      GALGAS_string var_propertyTypeLLVMName_12090 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_11663.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 292)) ;
      GALGAS_string var_llvmLoadedVarName_12151 = var_llvmVarName_11709.add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 293)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmLoadedVarName_12151, inCompiler COMMA_SOURCE_FILE ("types.galgas", 294)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 294)).add_operation (var_propertyTypeLLVMName_12090, inCompiler COMMA_SOURCE_FILE ("types.galgas", 294)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 294)).add_operation (var_propertyTypeLLVMName_12090, inCompiler COMMA_SOURCE_FILE ("types.galgas", 294)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 294)).add_operation (var_llvmVarName_11709, inCompiler COMMA_SOURCE_FILE ("types.galgas", 294)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 294)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 294)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.release (").add_operation (var_propertyTypeLLVMName_12090, inCompiler COMMA_SOURCE_FILE ("types.galgas", 295)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 295)).add_operation (var_llvmLoadedVarName_12151, inCompiler COMMA_SOURCE_FILE ("types.galgas", 295)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 295)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 295)) ;
      enumerator_11663.gotoNextObject () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateRelease (cPtr_omnibusType * inObject,
                                          const GALGAS_string constin_inOmnibusName,
                                          GALGAS_string & io_ioLLVMcode,
                                          GALGAS_generationAdds & io_ioGenerationAdds,
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

GALGAS_string cPtr_omnibusType::getter_descriptionForHTMLFile (Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_omnibusType temp_0 = this ;
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
      const cEnumAssociatedValues_typeKind_integer * extractPtr_13142 = (const cEnumAssociatedValues_typeKind_integer *) (temp_0.readProperty_kind ().unsafePointer ()) ;
      const GALGAS_bool extractedValue_12963_unsigned = extractPtr_13142->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_12978_bitCount = extractPtr_13142->mAssociatedValue3 ;
      GALGAS_string temp_1 ;
      const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::greaterThan, extractedValue_12978_bitCount.objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        temp_1 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_2) {
        temp_1 = GALGAS_string::makeEmptyString () ;
      }
      GALGAS_string temp_3 ;
      const enumGalgasBool test_4 = extractedValue_12963_unsigned.boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = GALGAS_string ("unsigned") ;
      }else if (kBoolFalse == test_4) {
        temp_3 = GALGAS_string ("signed") ;
      }
      result_result = GALGAS_string ("Integer (").add_operation (extractedValue_12978_bitCount.getter_string (SOURCE_FILE ("types.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 317)).add_operation (GALGAS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 317)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("types.galgas", 317)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 317)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("types.galgas", 318)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 318)) ;
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
      const cEnumAssociatedValues_typeKind_opaque * extractPtr_13437 = (const cEnumAssociatedValues_typeKind_opaque *) (temp_0.readProperty_kind ().unsafePointer ()) ;
      const GALGAS_bigint extractedValue_13388_bitCount = extractPtr_13437->mAssociatedValue0 ;
      result_result = GALGAS_string ("Opaque (").add_operation (extractedValue_13388_bitCount.getter_string (SOURCE_FILE ("types.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 328)).add_operation (GALGAS_string (" bits)"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 328)) ;
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



//--------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_descriptionForHTMLFile (const cPtr_omnibusType * inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
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

GALGAS_arcAssignmentList cPtr_omnibusType::getter_arcList (const GALGAS_uintlist constinArgument_inPropertyIndexPath,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_arcAssignmentList result_result ; // Returned variable
  GALGAS_arcAssignmentList temp_0 = GALGAS_arcAssignmentList::init (inCompiler COMMA_SOURCE_FILE ("types.galgas", 349)) ;
  result_result = temp_0 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_omnibusType temp_2 = this ;
    test_1 = temp_2.readProperty_kind ().getter_isDynamicArrayType (SOURCE_FILE ("types.galgas", 350)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_omnibusType temp_3 = this ;
      result_result.addAssign_operation (GALGAS_string::makeEmptyString (), temp_3, constinArgument_inPropertyIndexPath  COMMA_SOURCE_FILE ("types.galgas", 351)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      const GALGAS_omnibusType temp_5 = this ;
      test_4 = temp_5.readProperty_kind ().getter_isStructure (SOURCE_FILE ("types.galgas", 352)).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_propertyList var_propertyList_14292 ;
        const GALGAS_omnibusType temp_6 = this ;
        temp_6.readProperty_kind ().method_structure (var_propertyList_14292, inCompiler COMMA_SOURCE_FILE ("types.galgas", 353)) ;
        cEnumerator_propertyList enumerator_14317 (var_propertyList_14292, EnumerationOrder::up) ;
        GALGAS_uint index_14310 (uint32_t (0)) ;
        while (enumerator_14317.hasCurrentObject ()) {
          GALGAS_uintlist temp_7 = GALGAS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("types.galgas", 355)) ;
          temp_7.enterElement (GALGAS_uintlist_2D_element::init_21_ (index_14310, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("types.galgas", 355)) ;
          GALGAS_uintlist var_indexPath_14366 = constinArgument_inPropertyIndexPath.add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("types.galgas", 355)) ;
          result_result.plusAssign_operation(callExtensionGetter_arcList ((const cPtr_omnibusType *) enumerator_14317.current_mType (HERE).ptr (), var_indexPath_14366, inCompiler COMMA_SOURCE_FILE ("types.galgas", 356)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 356)) ;
          enumerator_14317.gotoNextObject () ;
          index_14310.increment_operation (inCompiler  COMMA_SOURCE_FILE ("types.galgas", 354)) ;
        }
      }
    }
  }
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GALGAS_arcAssignmentList callExtensionGetter_arcList (const cPtr_omnibusType * inObject,
                                                      const GALGAS_uintlist in_inPropertyIndexPath,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_arcAssignmentList result ;
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

GALGAS_bool cPtr_omnibusType::getter_deinitNeeded (Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  const GALGAS_omnibusType temp_0 = this ;
  result_result = temp_0.readProperty_kind ().getter_isDynamicArrayType (SOURCE_FILE ("types.galgas", 364)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_omnibusType temp_2 = this ;
    test_1 = temp_2.readProperty_kind ().getter_isStructure (SOURCE_FILE ("types.galgas", 365)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_propertyList var_propertyList_14781 ;
      const GALGAS_omnibusType temp_3 = this ;
      temp_3.readProperty_kind ().method_structure (var_propertyList_14781, inCompiler COMMA_SOURCE_FILE ("types.galgas", 366)) ;
      cEnumerator_propertyList enumerator_14806 (var_propertyList_14781, EnumerationOrder::up) ;
      bool bool_4 = result_result.operator_not (SOURCE_FILE ("types.galgas", 367)).isValidAndTrue () ;
      if (enumerator_14806.hasCurrentObject () && bool_4) {
        while (enumerator_14806.hasCurrentObject () && bool_4) {
          result_result = callExtensionGetter_deinitNeeded ((const cPtr_omnibusType *) enumerator_14806.current_mType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 368)) ;
          enumerator_14806.gotoNextObject () ;
          if (enumerator_14806.hasCurrentObject ()) {
            bool_4 = result_result.operator_not (SOURCE_FILE ("types.galgas", 367)).isValidAndTrue () ;
          }
        }
      }
    }
  }
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_deinitNeeded (const cPtr_omnibusType * inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_deinitNeeded (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @unifiedTypeMapElementClass reference class
//--------------------------------------------------------------------------------------------------

cPtr_unifiedTypeMapElementClass::cPtr_unifiedTypeMapElementClass (Compiler * /* inCompiler */ COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE),
mProperty_mTypeName (),
mProperty_mDefinition () {
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

ComparisonResult GALGAS_unifiedTypeMapElementClass::objectCompare (const GALGAS_unifiedTypeMapElementClass & inOperand) const {
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

GALGAS_unifiedTypeMapElementClass::GALGAS_unifiedTypeMapElementClass (void) :
AC_GALGAS_reference_class () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_unifiedTypeMapElementClass GALGAS_unifiedTypeMapElementClass::
init_21__21_ (const GALGAS_lstring & in_mTypeName,
              const GALGAS_typeDefinition & in_mDefinition,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_unifiedTypeMapElementClass * object = nullptr ;
  macroMyNew (object, cPtr_unifiedTypeMapElementClass (inCompiler COMMA_THERE)) ;
  object->unifiedTypeMapElementClass_init_21__21_ (in_mTypeName, in_mDefinition, inCompiler) ;
  const GALGAS_unifiedTypeMapElementClass result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_unifiedTypeMapElementClass::
unifiedTypeMapElementClass_init_21__21_ (const GALGAS_lstring & in_mTypeName,
                                         const GALGAS_typeDefinition & in_mDefinition,
                                         Compiler * /* inCompiler */) {
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mDefinition = in_mDefinition ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapElementClass::GALGAS_unifiedTypeMapElementClass (const cPtr_unifiedTypeMapElementClass * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_unifiedTypeMapElementClass) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapElementClass GALGAS_unifiedTypeMapElementClass::class_func_new (const GALGAS_lstring & in_mTypeName,
                                                                                     const GALGAS_typeDefinition & in_mDefinition
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapElementClass result ;
  macroMyNew (result.mObjectPtr, cPtr_unifiedTypeMapElementClass (in_mTypeName, in_mDefinition COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_unifiedTypeMapElementClass::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_unifiedTypeMapElementClass * p = (cPtr_unifiedTypeMapElementClass *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unifiedTypeMapElementClass) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMapElementClass::setProperty_mTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_unifiedTypeMapElementClass * p = (cPtr_unifiedTypeMapElementClass *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unifiedTypeMapElementClass) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeDefinition GALGAS_unifiedTypeMapElementClass::readProperty_mDefinition (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_typeDefinition () ;
  }else{
    cPtr_unifiedTypeMapElementClass * p = (cPtr_unifiedTypeMapElementClass *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unifiedTypeMapElementClass) ;
    return p->mProperty_mDefinition ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMapElementClass::setProperty_mDefinition (const GALGAS_typeDefinition & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_unifiedTypeMapElementClass * p = (cPtr_unifiedTypeMapElementClass *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unifiedTypeMapElementClass) ;
    p->mProperty_mDefinition = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @unifiedTypeMapElementClass class
//--------------------------------------------------------------------------------------------------

cPtr_unifiedTypeMapElementClass::cPtr_unifiedTypeMapElementClass (const GALGAS_lstring & in_mTypeName,
                                                                  const GALGAS_typeDefinition & in_mDefinition
                                                                  COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE),
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

acPtr_class * cPtr_unifiedTypeMapElementClass::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_unifiedTypeMapElementClass (mProperty_mTypeName, mProperty_mDefinition COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @unifiedTypeMapElementClass generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapElementClass ("unifiedTypeMapElementClass",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_unifiedTypeMapElementClass::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapElementClass ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_unifiedTypeMapElementClass::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMapElementClass (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapElementClass GALGAS_unifiedTypeMapElementClass::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapElementClass result ;
  const GALGAS_unifiedTypeMapElementClass * p = (const GALGAS_unifiedTypeMapElementClass *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_unifiedTypeMapElementClass *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapElementClass", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapElementClass definition'
//
//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType cPtr_unifiedTypeMapElementClass::getter_definition (Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_omnibusType result_result ; // Returned variable
  const GALGAS_unifiedTypeMapElementClass temp_0 = this ;
  switch (temp_0.readProperty_mDefinition ().enumValue ()) {
  case GALGAS_typeDefinition::kNotBuilt:
    break ;
  case GALGAS_typeDefinition::kEnum_unsolved:
    {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GALGAS_location::class_func_nowhere (SOURCE_FILE ("unified-type-map.galgas", 151)), GALGAS_string ("unsolved type"), fixItArray1  COMMA_SOURCE_FILE ("unified-type-map.galgas", 151)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeDefinition::kEnum_solved:
    {
      const cEnumAssociatedValues_typeDefinition_solved * extractPtr_6412 = (const cEnumAssociatedValues_typeDefinition_solved *) (temp_0.readProperty_mDefinition ().unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_6385_definition = extractPtr_6412->mAssociatedValue0 ;
      result_result = extractedValue_6385_definition ;
    }
    break ;
  }
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType callExtensionGetter_definition (const cPtr_unifiedTypeMapElementClass * inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  GALGAS_omnibusType result ;
  if (nullptr != inObject) {
    result = inObject->getter_definition (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticTemporariesStruct::GALGAS_semanticTemporariesStruct (void) :
mProperty_mTemporaryIndex (),
mProperty_mPanicSetupRoutinePriorityMap (),
mProperty_mPanicLoopRoutinePriorityMap (),
mProperty_mStaticArrayMapForTemporaries (),
mProperty_mInitializedDriverSet () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticTemporariesStruct::~ GALGAS_semanticTemporariesStruct (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_semanticTemporariesStruct GALGAS_semanticTemporariesStruct::init (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticTemporariesStruct result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticTemporariesStruct::setInitializedProperties (Compiler * inCompiler) {
  mProperty_mTemporaryIndex = GALGAS_uint (uint32_t (0U)) ;
GALGAS_panicRoutinePriorityMap temp_0 = GALGAS_panicRoutinePriorityMap::init (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 45)) ;
  mProperty_mPanicSetupRoutinePriorityMap = temp_0 ;
GALGAS_panicRoutinePriorityMap temp_1 = GALGAS_panicRoutinePriorityMap::init (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 46)) ;
  mProperty_mPanicLoopRoutinePriorityMap = temp_1 ;
GALGAS_staticListInvokedFunctionSetMap temp_2 = GALGAS_staticListInvokedFunctionSetMap::init (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 47)) ;
  mProperty_mStaticArrayMapForTemporaries = temp_2 ;
GALGAS_stringset temp_3 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 48)) ;
  mProperty_mInitializedDriverSet = temp_3 ;
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_semanticTemporariesStruct GALGAS_semanticTemporariesStruct::class_func_new (Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticTemporariesStruct result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_semanticTemporariesStruct::isValid (void) const {
  return mProperty_mTemporaryIndex.isValid () && mProperty_mPanicSetupRoutinePriorityMap.isValid () && mProperty_mPanicLoopRoutinePriorityMap.isValid () && mProperty_mStaticArrayMapForTemporaries.isValid () && mProperty_mInitializedDriverSet.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticTemporariesStruct::drop (void) {
  mProperty_mTemporaryIndex.drop () ;
  mProperty_mPanicSetupRoutinePriorityMap.drop () ;
  mProperty_mPanicLoopRoutinePriorityMap.drop () ;
  mProperty_mStaticArrayMapForTemporaries.drop () ;
  mProperty_mInitializedDriverSet.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticTemporariesStruct::description (String & ioString,
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

const C_galgas_type_descriptor * GALGAS_semanticTemporariesStruct::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticTemporariesStruct ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticTemporariesStruct::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticTemporariesStruct (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticTemporariesStruct GALGAS_semanticTemporariesStruct::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_semanticTemporariesStruct result ;
  const GALGAS_semanticTemporariesStruct * p = (const GALGAS_semanticTemporariesStruct *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_semanticTemporariesStruct *> (p)) {
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

void extensionSetter_newTempLLVMVar (GALGAS_semanticTemporariesStruct & ioObject,
                                     GALGAS_string & outArgument_outTempLLVMVar,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTempLLVMVar.drop () ; // Release 'out' argument
  const GALGAS_semanticTemporariesStruct temp_0 = ioObject ;
  outArgument_outTempLLVMVar = GALGAS_string ("%temp.").add_operation (temp_0.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("semantic-analysis.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 54)) ;
  ioObject.mProperty_mTemporaryIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 55)) ;
}


//--------------------------------------------------------------------------------------------------
// @compileTimeBoolImplicitConverterToBoolean reference class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimeBoolImplicitConverterToBoolean::cPtr_compileTimeBoolImplicitConverterToBoolean (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractImplicitConverterToBoolean (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeBoolImplicitConverterToBoolean::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractImplicitConverterToBoolean::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_compileTimeBoolImplicitConverterToBoolean::objectCompare (const GALGAS_compileTimeBoolImplicitConverterToBoolean & inOperand) const {
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

GALGAS_compileTimeBoolImplicitConverterToBoolean::GALGAS_compileTimeBoolImplicitConverterToBoolean (void) :
GALGAS_abstractImplicitConverterToBoolean () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_compileTimeBoolImplicitConverterToBoolean GALGAS_compileTimeBoolImplicitConverterToBoolean::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_compileTimeBoolImplicitConverterToBoolean * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeBoolImplicitConverterToBoolean (inCompiler COMMA_THERE)) ;
  object->compileTimeBoolImplicitConverterToBoolean_init (inCompiler) ;
  const GALGAS_compileTimeBoolImplicitConverterToBoolean result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeBoolImplicitConverterToBoolean::
compileTimeBoolImplicitConverterToBoolean_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolImplicitConverterToBoolean::GALGAS_compileTimeBoolImplicitConverterToBoolean (const cPtr_compileTimeBoolImplicitConverterToBoolean * inSourcePtr) :
GALGAS_abstractImplicitConverterToBoolean (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeBoolImplicitConverterToBoolean) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolImplicitConverterToBoolean GALGAS_compileTimeBoolImplicitConverterToBoolean::class_func_new (LOCATION_ARGS) {
  GALGAS_compileTimeBoolImplicitConverterToBoolean result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeBoolImplicitConverterToBoolean (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeBoolImplicitConverterToBoolean class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimeBoolImplicitConverterToBoolean::cPtr_compileTimeBoolImplicitConverterToBoolean (LOCATION_ARGS) :
cPtr_abstractImplicitConverterToBoolean (THERE) {
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

acPtr_class * cPtr_compileTimeBoolImplicitConverterToBoolean::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeBoolImplicitConverterToBoolean (THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @compileTimeBoolImplicitConverterToBoolean generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeBoolImplicitConverterToBoolean ("compileTimeBoolImplicitConverterToBoolean",
                                                                                                 & kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeBoolImplicitConverterToBoolean::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeBoolImplicitConverterToBoolean ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeBoolImplicitConverterToBoolean::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeBoolImplicitConverterToBoolean (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolImplicitConverterToBoolean GALGAS_compileTimeBoolImplicitConverterToBoolean::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeBoolImplicitConverterToBoolean result ;
  const GALGAS_compileTimeBoolImplicitConverterToBoolean * p = (const GALGAS_compileTimeBoolImplicitConverterToBoolean *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeBoolImplicitConverterToBoolean *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeBoolImplicitConverterToBoolean", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak::objectCompare (const GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak & inOperand) const {
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

GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak::GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak (void) :
GALGAS_abstractImplicitConverterToBoolean_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak & GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak::operator = (const GALGAS_compileTimeBoolImplicitConverterToBoolean & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak::GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak (const GALGAS_compileTimeBoolImplicitConverterToBoolean & inSource) :
GALGAS_abstractImplicitConverterToBoolean_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolImplicitConverterToBoolean GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak::bang_compileTimeBoolImplicitConverterToBoolean_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeBoolImplicitConverterToBoolean result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeBoolImplicitConverterToBoolean) ;
      result = GALGAS_compileTimeBoolImplicitConverterToBoolean ((cPtr_compileTimeBoolImplicitConverterToBoolean *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeBoolImplicitConverterToBoolean-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak ("compileTimeBoolImplicitConverterToBoolean-weak",
                                                                                                         & kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak result ;
  const GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak * p = (const GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeBoolImplicitConverterToBoolean-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeBoolNotOperator reference class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimeBoolNotOperator::cPtr_compileTimeBoolNotOperator (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_prefixOperatorUsage (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeBoolNotOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_prefixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_compileTimeBoolNotOperator::objectCompare (const GALGAS_compileTimeBoolNotOperator & inOperand) const {
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

GALGAS_compileTimeBoolNotOperator::GALGAS_compileTimeBoolNotOperator (void) :
GALGAS_prefixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_compileTimeBoolNotOperator GALGAS_compileTimeBoolNotOperator::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_compileTimeBoolNotOperator * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeBoolNotOperator (inCompiler COMMA_THERE)) ;
  object->compileTimeBoolNotOperator_init (inCompiler) ;
  const GALGAS_compileTimeBoolNotOperator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeBoolNotOperator::
compileTimeBoolNotOperator_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolNotOperator::GALGAS_compileTimeBoolNotOperator (const cPtr_compileTimeBoolNotOperator * inSourcePtr) :
GALGAS_prefixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeBoolNotOperator) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolNotOperator GALGAS_compileTimeBoolNotOperator::class_func_new (LOCATION_ARGS) {
  GALGAS_compileTimeBoolNotOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeBoolNotOperator (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeBoolNotOperator class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimeBoolNotOperator::cPtr_compileTimeBoolNotOperator (LOCATION_ARGS) :
cPtr_prefixOperatorUsage (THERE) {
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

acPtr_class * cPtr_compileTimeBoolNotOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeBoolNotOperator (THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @compileTimeBoolNotOperator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeBoolNotOperator ("compileTimeBoolNotOperator",
                                                                                  & kTypeDescriptor_GALGAS_prefixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeBoolNotOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeBoolNotOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeBoolNotOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeBoolNotOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolNotOperator GALGAS_compileTimeBoolNotOperator::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeBoolNotOperator result ;
  const GALGAS_compileTimeBoolNotOperator * p = (const GALGAS_compileTimeBoolNotOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeBoolNotOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeBoolNotOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_compileTimeBoolNotOperator_2D_weak::objectCompare (const GALGAS_compileTimeBoolNotOperator_2D_weak & inOperand) const {
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

GALGAS_compileTimeBoolNotOperator_2D_weak::GALGAS_compileTimeBoolNotOperator_2D_weak (void) :
GALGAS_prefixOperatorUsage_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolNotOperator_2D_weak & GALGAS_compileTimeBoolNotOperator_2D_weak::operator = (const GALGAS_compileTimeBoolNotOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolNotOperator_2D_weak::GALGAS_compileTimeBoolNotOperator_2D_weak (const GALGAS_compileTimeBoolNotOperator & inSource) :
GALGAS_prefixOperatorUsage_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolNotOperator_2D_weak GALGAS_compileTimeBoolNotOperator_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_compileTimeBoolNotOperator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolNotOperator GALGAS_compileTimeBoolNotOperator_2D_weak::bang_compileTimeBoolNotOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeBoolNotOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeBoolNotOperator) ;
      result = GALGAS_compileTimeBoolNotOperator ((cPtr_compileTimeBoolNotOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeBoolNotOperator-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeBoolNotOperator_2D_weak ("compileTimeBoolNotOperator-weak",
                                                                                          & kTypeDescriptor_GALGAS_prefixOperatorUsage_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeBoolNotOperator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeBoolNotOperator_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeBoolNotOperator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeBoolNotOperator_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolNotOperator_2D_weak GALGAS_compileTimeBoolNotOperator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeBoolNotOperator_2D_weak result ;
  const GALGAS_compileTimeBoolNotOperator_2D_weak * p = (const GALGAS_compileTimeBoolNotOperator_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeBoolNotOperator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeBoolNotOperator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeBoolEqualOperator reference class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimeBoolEqualOperator::cPtr_compileTimeBoolEqualOperator (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeBoolEqualOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_compileTimeBoolEqualOperator::objectCompare (const GALGAS_compileTimeBoolEqualOperator & inOperand) const {
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

GALGAS_compileTimeBoolEqualOperator::GALGAS_compileTimeBoolEqualOperator (void) :
GALGAS_omnibusInfixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_compileTimeBoolEqualOperator GALGAS_compileTimeBoolEqualOperator::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_compileTimeBoolEqualOperator * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeBoolEqualOperator (inCompiler COMMA_THERE)) ;
  object->compileTimeBoolEqualOperator_init (inCompiler) ;
  const GALGAS_compileTimeBoolEqualOperator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeBoolEqualOperator::
compileTimeBoolEqualOperator_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolEqualOperator::GALGAS_compileTimeBoolEqualOperator (const cPtr_compileTimeBoolEqualOperator * inSourcePtr) :
GALGAS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeBoolEqualOperator) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolEqualOperator GALGAS_compileTimeBoolEqualOperator::class_func_new (LOCATION_ARGS) {
  GALGAS_compileTimeBoolEqualOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeBoolEqualOperator (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeBoolEqualOperator class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimeBoolEqualOperator::cPtr_compileTimeBoolEqualOperator (LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (THERE) {
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

acPtr_class * cPtr_compileTimeBoolEqualOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeBoolEqualOperator (THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @compileTimeBoolEqualOperator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeBoolEqualOperator ("compileTimeBoolEqualOperator",
                                                                                    & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeBoolEqualOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeBoolEqualOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeBoolEqualOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeBoolEqualOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolEqualOperator GALGAS_compileTimeBoolEqualOperator::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeBoolEqualOperator result ;
  const GALGAS_compileTimeBoolEqualOperator * p = (const GALGAS_compileTimeBoolEqualOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeBoolEqualOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeBoolEqualOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_compileTimeBoolEqualOperator_2D_weak::objectCompare (const GALGAS_compileTimeBoolEqualOperator_2D_weak & inOperand) const {
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

GALGAS_compileTimeBoolEqualOperator_2D_weak::GALGAS_compileTimeBoolEqualOperator_2D_weak (void) :
GALGAS_omnibusInfixOperatorUsage_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolEqualOperator_2D_weak & GALGAS_compileTimeBoolEqualOperator_2D_weak::operator = (const GALGAS_compileTimeBoolEqualOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolEqualOperator_2D_weak::GALGAS_compileTimeBoolEqualOperator_2D_weak (const GALGAS_compileTimeBoolEqualOperator & inSource) :
GALGAS_omnibusInfixOperatorUsage_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolEqualOperator_2D_weak GALGAS_compileTimeBoolEqualOperator_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_compileTimeBoolEqualOperator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolEqualOperator GALGAS_compileTimeBoolEqualOperator_2D_weak::bang_compileTimeBoolEqualOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeBoolEqualOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeBoolEqualOperator) ;
      result = GALGAS_compileTimeBoolEqualOperator ((cPtr_compileTimeBoolEqualOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeBoolEqualOperator-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeBoolEqualOperator_2D_weak ("compileTimeBoolEqualOperator-weak",
                                                                                            & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeBoolEqualOperator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeBoolEqualOperator_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeBoolEqualOperator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeBoolEqualOperator_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolEqualOperator_2D_weak GALGAS_compileTimeBoolEqualOperator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeBoolEqualOperator_2D_weak result ;
  const GALGAS_compileTimeBoolEqualOperator_2D_weak * p = (const GALGAS_compileTimeBoolEqualOperator_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeBoolEqualOperator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeBoolEqualOperator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @typeAliasDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_typeAliasDeclarationAST::cPtr_typeAliasDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mAliasTypeName (),
mProperty_mOriginalTypeName () {
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

ComparisonResult GALGAS_typeAliasDeclarationAST::objectCompare (const GALGAS_typeAliasDeclarationAST & inOperand) const {
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

GALGAS_typeAliasDeclarationAST::GALGAS_typeAliasDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_typeAliasDeclarationAST GALGAS_typeAliasDeclarationAST::
init_21__21_ (const GALGAS_lstring & in_mAliasTypeName,
              const GALGAS_lstring & in_mOriginalTypeName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_typeAliasDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_typeAliasDeclarationAST (inCompiler COMMA_THERE)) ;
  object->typeAliasDeclarationAST_init_21__21_ (in_mAliasTypeName, in_mOriginalTypeName, inCompiler) ;
  const GALGAS_typeAliasDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_typeAliasDeclarationAST::
typeAliasDeclarationAST_init_21__21_ (const GALGAS_lstring & in_mAliasTypeName,
                                      const GALGAS_lstring & in_mOriginalTypeName,
                                      Compiler * /* inCompiler */) {
  mProperty_mAliasTypeName = in_mAliasTypeName ;
  mProperty_mOriginalTypeName = in_mOriginalTypeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeAliasDeclarationAST::GALGAS_typeAliasDeclarationAST (const cPtr_typeAliasDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typeAliasDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_typeAliasDeclarationAST GALGAS_typeAliasDeclarationAST::class_func_new (const GALGAS_lstring & in_mAliasTypeName,
                                                                               const GALGAS_lstring & in_mOriginalTypeName
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_typeAliasDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_typeAliasDeclarationAST (in_mAliasTypeName, in_mOriginalTypeName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_typeAliasDeclarationAST::readProperty_mAliasTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_typeAliasDeclarationAST * p = (cPtr_typeAliasDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeAliasDeclarationAST) ;
    return p->mProperty_mAliasTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeAliasDeclarationAST::setProperty_mAliasTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_typeAliasDeclarationAST * p = (cPtr_typeAliasDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeAliasDeclarationAST) ;
    p->mProperty_mAliasTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_typeAliasDeclarationAST::readProperty_mOriginalTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_typeAliasDeclarationAST * p = (cPtr_typeAliasDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeAliasDeclarationAST) ;
    return p->mProperty_mOriginalTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeAliasDeclarationAST::setProperty_mOriginalTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_typeAliasDeclarationAST * p = (cPtr_typeAliasDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeAliasDeclarationAST) ;
    p->mProperty_mOriginalTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @typeAliasDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_typeAliasDeclarationAST::cPtr_typeAliasDeclarationAST (const GALGAS_lstring & in_mAliasTypeName,
                                                            const GALGAS_lstring & in_mOriginalTypeName
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
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

acPtr_class * cPtr_typeAliasDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_typeAliasDeclarationAST (mProperty_mAliasTypeName, mProperty_mOriginalTypeName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @typeAliasDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeAliasDeclarationAST ("typeAliasDeclarationAST",
                                                                               & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeAliasDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeAliasDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeAliasDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeAliasDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeAliasDeclarationAST GALGAS_typeAliasDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_typeAliasDeclarationAST result ;
  const GALGAS_typeAliasDeclarationAST * p = (const GALGAS_typeAliasDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typeAliasDeclarationAST *> (p)) {
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

cPtr_fixedSizeArrayTypeDeclarationAST::cPtr_fixedSizeArrayTypeDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mFixedSizeArrayType (),
mProperty_mElementTypeName (),
mProperty_mSizeExpression (),
mProperty_mSizeExpressionLocation () {
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

ComparisonResult GALGAS_fixedSizeArrayTypeDeclarationAST::objectCompare (const GALGAS_fixedSizeArrayTypeDeclarationAST & inOperand) const {
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

GALGAS_fixedSizeArrayTypeDeclarationAST::GALGAS_fixedSizeArrayTypeDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_fixedSizeArrayTypeDeclarationAST GALGAS_fixedSizeArrayTypeDeclarationAST::
init_21__21__21__21_ (const GALGAS_lstring & in_mFixedSizeArrayType,
                      const GALGAS_lstring & in_mElementTypeName,
                      const GALGAS_expressionAST & in_mSizeExpression,
                      const GALGAS_location & in_mSizeExpressionLocation,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_fixedSizeArrayTypeDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_fixedSizeArrayTypeDeclarationAST (inCompiler COMMA_THERE)) ;
  object->fixedSizeArrayTypeDeclarationAST_init_21__21__21__21_ (in_mFixedSizeArrayType, in_mElementTypeName, in_mSizeExpression, in_mSizeExpressionLocation, inCompiler) ;
  const GALGAS_fixedSizeArrayTypeDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_fixedSizeArrayTypeDeclarationAST::
fixedSizeArrayTypeDeclarationAST_init_21__21__21__21_ (const GALGAS_lstring & in_mFixedSizeArrayType,
                                                       const GALGAS_lstring & in_mElementTypeName,
                                                       const GALGAS_expressionAST & in_mSizeExpression,
                                                       const GALGAS_location & in_mSizeExpressionLocation,
                                                       Compiler * /* inCompiler */) {
  mProperty_mFixedSizeArrayType = in_mFixedSizeArrayType ;
  mProperty_mElementTypeName = in_mElementTypeName ;
  mProperty_mSizeExpression = in_mSizeExpression ;
  mProperty_mSizeExpressionLocation = in_mSizeExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixedSizeArrayTypeDeclarationAST::GALGAS_fixedSizeArrayTypeDeclarationAST (const cPtr_fixedSizeArrayTypeDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_fixedSizeArrayTypeDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_fixedSizeArrayTypeDeclarationAST GALGAS_fixedSizeArrayTypeDeclarationAST::class_func_new (const GALGAS_lstring & in_mFixedSizeArrayType,
                                                                                                 const GALGAS_lstring & in_mElementTypeName,
                                                                                                 const GALGAS_expressionAST & in_mSizeExpression,
                                                                                                 const GALGAS_location & in_mSizeExpressionLocation
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_fixedSizeArrayTypeDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_fixedSizeArrayTypeDeclarationAST (in_mFixedSizeArrayType, in_mElementTypeName, in_mSizeExpression, in_mSizeExpressionLocation COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_fixedSizeArrayTypeDeclarationAST::readProperty_mFixedSizeArrayType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_fixedSizeArrayTypeDeclarationAST * p = (cPtr_fixedSizeArrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayTypeDeclarationAST) ;
    return p->mProperty_mFixedSizeArrayType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixedSizeArrayTypeDeclarationAST::setProperty_mFixedSizeArrayType (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_fixedSizeArrayTypeDeclarationAST * p = (cPtr_fixedSizeArrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayTypeDeclarationAST) ;
    p->mProperty_mFixedSizeArrayType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_fixedSizeArrayTypeDeclarationAST::readProperty_mElementTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_fixedSizeArrayTypeDeclarationAST * p = (cPtr_fixedSizeArrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayTypeDeclarationAST) ;
    return p->mProperty_mElementTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixedSizeArrayTypeDeclarationAST::setProperty_mElementTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_fixedSizeArrayTypeDeclarationAST * p = (cPtr_fixedSizeArrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayTypeDeclarationAST) ;
    p->mProperty_mElementTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_fixedSizeArrayTypeDeclarationAST::readProperty_mSizeExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_fixedSizeArrayTypeDeclarationAST * p = (cPtr_fixedSizeArrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayTypeDeclarationAST) ;
    return p->mProperty_mSizeExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixedSizeArrayTypeDeclarationAST::setProperty_mSizeExpression (const GALGAS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_fixedSizeArrayTypeDeclarationAST * p = (cPtr_fixedSizeArrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayTypeDeclarationAST) ;
    p->mProperty_mSizeExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_fixedSizeArrayTypeDeclarationAST::readProperty_mSizeExpressionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_fixedSizeArrayTypeDeclarationAST * p = (cPtr_fixedSizeArrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayTypeDeclarationAST) ;
    return p->mProperty_mSizeExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixedSizeArrayTypeDeclarationAST::setProperty_mSizeExpressionLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_fixedSizeArrayTypeDeclarationAST * p = (cPtr_fixedSizeArrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayTypeDeclarationAST) ;
    p->mProperty_mSizeExpressionLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @fixedSizeArrayTypeDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_fixedSizeArrayTypeDeclarationAST::cPtr_fixedSizeArrayTypeDeclarationAST (const GALGAS_lstring & in_mFixedSizeArrayType,
                                                                              const GALGAS_lstring & in_mElementTypeName,
                                                                              const GALGAS_expressionAST & in_mSizeExpression,
                                                                              const GALGAS_location & in_mSizeExpressionLocation
                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
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

acPtr_class * cPtr_fixedSizeArrayTypeDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_fixedSizeArrayTypeDeclarationAST (mProperty_mFixedSizeArrayType, mProperty_mElementTypeName, mProperty_mSizeExpression, mProperty_mSizeExpressionLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @fixedSizeArrayTypeDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixedSizeArrayTypeDeclarationAST ("fixedSizeArrayTypeDeclarationAST",
                                                                                        & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_fixedSizeArrayTypeDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixedSizeArrayTypeDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_fixedSizeArrayTypeDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fixedSizeArrayTypeDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixedSizeArrayTypeDeclarationAST GALGAS_fixedSizeArrayTypeDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_fixedSizeArrayTypeDeclarationAST result ;
  const GALGAS_fixedSizeArrayTypeDeclarationAST * p = (const GALGAS_fixedSizeArrayTypeDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_fixedSizeArrayTypeDeclarationAST *> (p)) {
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

cPtr_userLLVMStaticArrayTypeDefinitionIR::cPtr_userLLVMStaticArrayTypeDefinitionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_userLLVMTypeDefinitionIR (inCompiler COMMA_THERE),
mProperty_mElementType (),
mProperty_mSize () {
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

ComparisonResult GALGAS_userLLVMStaticArrayTypeDefinitionIR::objectCompare (const GALGAS_userLLVMStaticArrayTypeDefinitionIR & inOperand) const {
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

GALGAS_userLLVMStaticArrayTypeDefinitionIR::GALGAS_userLLVMStaticArrayTypeDefinitionIR (void) :
GALGAS_userLLVMTypeDefinitionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_userLLVMStaticArrayTypeDefinitionIR GALGAS_userLLVMStaticArrayTypeDefinitionIR::
init_21__21__21_ (const GALGAS_string & in_mLLVMDefinedTypeName,
                  const GALGAS_omnibusType & in_mElementType,
                  const GALGAS_bigint & in_mSize,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_userLLVMStaticArrayTypeDefinitionIR * object = nullptr ;
  macroMyNew (object, cPtr_userLLVMStaticArrayTypeDefinitionIR (inCompiler COMMA_THERE)) ;
  object->userLLVMStaticArrayTypeDefinitionIR_init_21__21__21_ (in_mLLVMDefinedTypeName, in_mElementType, in_mSize, inCompiler) ;
  const GALGAS_userLLVMStaticArrayTypeDefinitionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_userLLVMStaticArrayTypeDefinitionIR::
userLLVMStaticArrayTypeDefinitionIR_init_21__21__21_ (const GALGAS_string & in_mLLVMDefinedTypeName,
                                                      const GALGAS_omnibusType & in_mElementType,
                                                      const GALGAS_bigint & in_mSize,
                                                      Compiler * /* inCompiler */) {
  mProperty_mLLVMDefinedTypeName = in_mLLVMDefinedTypeName ;
  mProperty_mElementType = in_mElementType ;
  mProperty_mSize = in_mSize ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_userLLVMStaticArrayTypeDefinitionIR::GALGAS_userLLVMStaticArrayTypeDefinitionIR (const cPtr_userLLVMStaticArrayTypeDefinitionIR * inSourcePtr) :
GALGAS_userLLVMTypeDefinitionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_userLLVMStaticArrayTypeDefinitionIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_userLLVMStaticArrayTypeDefinitionIR GALGAS_userLLVMStaticArrayTypeDefinitionIR::class_func_new (const GALGAS_string & in_mLLVMDefinedTypeName,
                                                                                                       const GALGAS_omnibusType & in_mElementType,
                                                                                                       const GALGAS_bigint & in_mSize
                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_userLLVMStaticArrayTypeDefinitionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_userLLVMStaticArrayTypeDefinitionIR (in_mLLVMDefinedTypeName, in_mElementType, in_mSize COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_userLLVMStaticArrayTypeDefinitionIR::readProperty_mElementType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_userLLVMStaticArrayTypeDefinitionIR * p = (cPtr_userLLVMStaticArrayTypeDefinitionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_userLLVMStaticArrayTypeDefinitionIR) ;
    return p->mProperty_mElementType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_userLLVMStaticArrayTypeDefinitionIR::setProperty_mElementType (const GALGAS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_userLLVMStaticArrayTypeDefinitionIR * p = (cPtr_userLLVMStaticArrayTypeDefinitionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_userLLVMStaticArrayTypeDefinitionIR) ;
    p->mProperty_mElementType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bigint GALGAS_userLLVMStaticArrayTypeDefinitionIR::readProperty_mSize (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bigint () ;
  }else{
    cPtr_userLLVMStaticArrayTypeDefinitionIR * p = (cPtr_userLLVMStaticArrayTypeDefinitionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_userLLVMStaticArrayTypeDefinitionIR) ;
    return p->mProperty_mSize ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_userLLVMStaticArrayTypeDefinitionIR::setProperty_mSize (const GALGAS_bigint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_userLLVMStaticArrayTypeDefinitionIR * p = (cPtr_userLLVMStaticArrayTypeDefinitionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_userLLVMStaticArrayTypeDefinitionIR) ;
    p->mProperty_mSize = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @userLLVMStaticArrayTypeDefinitionIR class
//--------------------------------------------------------------------------------------------------

cPtr_userLLVMStaticArrayTypeDefinitionIR::cPtr_userLLVMStaticArrayTypeDefinitionIR (const GALGAS_string & in_mLLVMDefinedTypeName,
                                                                                    const GALGAS_omnibusType & in_mElementType,
                                                                                    const GALGAS_bigint & in_mSize
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_userLLVMTypeDefinitionIR (in_mLLVMDefinedTypeName COMMA_THERE),
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

acPtr_class * cPtr_userLLVMStaticArrayTypeDefinitionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_userLLVMStaticArrayTypeDefinitionIR (mProperty_mLLVMDefinedTypeName, mProperty_mElementType, mProperty_mSize COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @userLLVMStaticArrayTypeDefinitionIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_userLLVMStaticArrayTypeDefinitionIR ("userLLVMStaticArrayTypeDefinitionIR",
                                                                                           & kTypeDescriptor_GALGAS_userLLVMTypeDefinitionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_userLLVMStaticArrayTypeDefinitionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_userLLVMStaticArrayTypeDefinitionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_userLLVMStaticArrayTypeDefinitionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_userLLVMStaticArrayTypeDefinitionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_userLLVMStaticArrayTypeDefinitionIR GALGAS_userLLVMStaticArrayTypeDefinitionIR::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_userLLVMStaticArrayTypeDefinitionIR result ;
  const GALGAS_userLLVMStaticArrayTypeDefinitionIR * p = (const GALGAS_userLLVMStaticArrayTypeDefinitionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_userLLVMStaticArrayTypeDefinitionIR *> (p)) {
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

cPtr_fixedSizeArrayAssignmentOperatorUsage::cPtr_fixedSizeArrayAssignmentOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractAssignmentOperatorUsage (inCompiler COMMA_THERE),
mProperty_mElementType (),
mProperty_mArraySize (),
mProperty_mAssignValueToElements_5F_functionName () {
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

ComparisonResult GALGAS_fixedSizeArrayAssignmentOperatorUsage::objectCompare (const GALGAS_fixedSizeArrayAssignmentOperatorUsage & inOperand) const {
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

GALGAS_fixedSizeArrayAssignmentOperatorUsage::GALGAS_fixedSizeArrayAssignmentOperatorUsage (void) :
GALGAS_abstractAssignmentOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_fixedSizeArrayAssignmentOperatorUsage GALGAS_fixedSizeArrayAssignmentOperatorUsage::
init_21__21__21_ (const GALGAS_omnibusType & in_mElementType,
                  const GALGAS_uint & in_mArraySize,
                  const GALGAS_string & in_mAssignValueToElements_5F_functionName,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_fixedSizeArrayAssignmentOperatorUsage * object = nullptr ;
  macroMyNew (object, cPtr_fixedSizeArrayAssignmentOperatorUsage (inCompiler COMMA_THERE)) ;
  object->fixedSizeArrayAssignmentOperatorUsage_init_21__21__21_ (in_mElementType, in_mArraySize, in_mAssignValueToElements_5F_functionName, inCompiler) ;
  const GALGAS_fixedSizeArrayAssignmentOperatorUsage result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_fixedSizeArrayAssignmentOperatorUsage::
fixedSizeArrayAssignmentOperatorUsage_init_21__21__21_ (const GALGAS_omnibusType & in_mElementType,
                                                        const GALGAS_uint & in_mArraySize,
                                                        const GALGAS_string & in_mAssignValueToElements_5F_functionName,
                                                        Compiler * /* inCompiler */) {
  mProperty_mElementType = in_mElementType ;
  mProperty_mArraySize = in_mArraySize ;
  mProperty_mAssignValueToElements_5F_functionName = in_mAssignValueToElements_5F_functionName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixedSizeArrayAssignmentOperatorUsage::GALGAS_fixedSizeArrayAssignmentOperatorUsage (const cPtr_fixedSizeArrayAssignmentOperatorUsage * inSourcePtr) :
GALGAS_abstractAssignmentOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_fixedSizeArrayAssignmentOperatorUsage) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_fixedSizeArrayAssignmentOperatorUsage GALGAS_fixedSizeArrayAssignmentOperatorUsage::class_func_new (const GALGAS_omnibusType & in_mElementType,
                                                                                                           const GALGAS_uint & in_mArraySize,
                                                                                                           const GALGAS_string & in_mAssignValueToElements_5F_functionName
                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_fixedSizeArrayAssignmentOperatorUsage result ;
  macroMyNew (result.mObjectPtr, cPtr_fixedSizeArrayAssignmentOperatorUsage (in_mElementType, in_mArraySize, in_mAssignValueToElements_5F_functionName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_fixedSizeArrayAssignmentOperatorUsage::readProperty_mElementType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_fixedSizeArrayAssignmentOperatorUsage * p = (cPtr_fixedSizeArrayAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayAssignmentOperatorUsage) ;
    return p->mProperty_mElementType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixedSizeArrayAssignmentOperatorUsage::setProperty_mElementType (const GALGAS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_fixedSizeArrayAssignmentOperatorUsage * p = (cPtr_fixedSizeArrayAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayAssignmentOperatorUsage) ;
    p->mProperty_mElementType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_fixedSizeArrayAssignmentOperatorUsage::readProperty_mArraySize (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_fixedSizeArrayAssignmentOperatorUsage * p = (cPtr_fixedSizeArrayAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayAssignmentOperatorUsage) ;
    return p->mProperty_mArraySize ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixedSizeArrayAssignmentOperatorUsage::setProperty_mArraySize (const GALGAS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_fixedSizeArrayAssignmentOperatorUsage * p = (cPtr_fixedSizeArrayAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayAssignmentOperatorUsage) ;
    p->mProperty_mArraySize = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_fixedSizeArrayAssignmentOperatorUsage::readProperty_mAssignValueToElements_5F_functionName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_fixedSizeArrayAssignmentOperatorUsage * p = (cPtr_fixedSizeArrayAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayAssignmentOperatorUsage) ;
    return p->mProperty_mAssignValueToElements_5F_functionName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixedSizeArrayAssignmentOperatorUsage::setProperty_mAssignValueToElements_5F_functionName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_fixedSizeArrayAssignmentOperatorUsage * p = (cPtr_fixedSizeArrayAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fixedSizeArrayAssignmentOperatorUsage) ;
    p->mProperty_mAssignValueToElements_5F_functionName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @fixedSizeArrayAssignmentOperatorUsage class
//--------------------------------------------------------------------------------------------------

cPtr_fixedSizeArrayAssignmentOperatorUsage::cPtr_fixedSizeArrayAssignmentOperatorUsage (const GALGAS_omnibusType & in_mElementType,
                                                                                        const GALGAS_uint & in_mArraySize,
                                                                                        const GALGAS_string & in_mAssignValueToElements_5F_functionName
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractAssignmentOperatorUsage (THERE),
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

acPtr_class * cPtr_fixedSizeArrayAssignmentOperatorUsage::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_fixedSizeArrayAssignmentOperatorUsage (mProperty_mElementType, mProperty_mArraySize, mProperty_mAssignValueToElements_5F_functionName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @fixedSizeArrayAssignmentOperatorUsage generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixedSizeArrayAssignmentOperatorUsage ("fixedSizeArrayAssignmentOperatorUsage",
                                                                                             & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_fixedSizeArrayAssignmentOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixedSizeArrayAssignmentOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_fixedSizeArrayAssignmentOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fixedSizeArrayAssignmentOperatorUsage (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixedSizeArrayAssignmentOperatorUsage GALGAS_fixedSizeArrayAssignmentOperatorUsage::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_fixedSizeArrayAssignmentOperatorUsage result ;
  const GALGAS_fixedSizeArrayAssignmentOperatorUsage * p = (const GALGAS_fixedSizeArrayAssignmentOperatorUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_fixedSizeArrayAssignmentOperatorUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixedSizeArrayAssignmentOperatorUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak::objectCompare (const GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak & inOperand) const {
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

GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak::GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak (void) :
GALGAS_abstractAssignmentOperatorUsage_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak & GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak::operator = (const GALGAS_fixedSizeArrayAssignmentOperatorUsage & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak::GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak (const GALGAS_fixedSizeArrayAssignmentOperatorUsage & inSource) :
GALGAS_abstractAssignmentOperatorUsage_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixedSizeArrayAssignmentOperatorUsage GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak::bang_fixedSizeArrayAssignmentOperatorUsage_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_fixedSizeArrayAssignmentOperatorUsage result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_fixedSizeArrayAssignmentOperatorUsage) ;
      result = GALGAS_fixedSizeArrayAssignmentOperatorUsage ((cPtr_fixedSizeArrayAssignmentOperatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @fixedSizeArrayAssignmentOperatorUsage-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak ("fixedSizeArrayAssignmentOperatorUsage-weak",
                                                                                                     & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak result ;
  const GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak * p = (const GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixedSizeArrayAssignmentOperatorUsage-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractRoutineIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_abstractRoutineIR::cPtr_abstractRoutineIR (Compiler * /* inCompiler */ COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE),
mProperty_mRoutineMangledName (),
mProperty_isRequired (),
mProperty_warnsIfUnused () {
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

ComparisonResult GALGAS_abstractRoutineIR::objectCompare (const GALGAS_abstractRoutineIR & inOperand) const {
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

GALGAS_abstractRoutineIR::GALGAS_abstractRoutineIR (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractRoutineIR::GALGAS_abstractRoutineIR (const cPtr_abstractRoutineIR * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractRoutineIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_abstractRoutineIR::readProperty_mRoutineMangledName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_abstractRoutineIR * p = (cPtr_abstractRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractRoutineIR) ;
    return p->mProperty_mRoutineMangledName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_abstractRoutineIR::setProperty_mRoutineMangledName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_abstractRoutineIR * p = (cPtr_abstractRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractRoutineIR) ;
    p->mProperty_mRoutineMangledName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_abstractRoutineIR::readProperty_isRequired (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_abstractRoutineIR * p = (cPtr_abstractRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractRoutineIR) ;
    return p->mProperty_isRequired ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_abstractRoutineIR::setProperty_isRequired (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_abstractRoutineIR * p = (cPtr_abstractRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractRoutineIR) ;
    p->mProperty_isRequired = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_abstractRoutineIR::readProperty_warnsIfUnused (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_abstractRoutineIR * p = (cPtr_abstractRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractRoutineIR) ;
    return p->mProperty_warnsIfUnused ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_abstractRoutineIR::setProperty_warnsIfUnused (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_abstractRoutineIR * p = (cPtr_abstractRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractRoutineIR) ;
    p->mProperty_warnsIfUnused = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractRoutineIR class
//--------------------------------------------------------------------------------------------------

cPtr_abstractRoutineIR::cPtr_abstractRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                const GALGAS_bool & in_isRequired,
                                                const GALGAS_bool & in_warnsIfUnused
                                                COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE),
mProperty_mRoutineMangledName (),
mProperty_isRequired (),
mProperty_warnsIfUnused () {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
}


//--------------------------------------------------------------------------------------------------
//
//     @abstractRoutineIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractRoutineIR ("abstractRoutineIR",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractRoutineIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractRoutineIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractRoutineIR GALGAS_abstractRoutineIR::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_abstractRoutineIR result ;
  const GALGAS_abstractRoutineIR * p = (const GALGAS_abstractRoutineIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_abstractRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2D_weak::objectCompare (const GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2D_weak & inOperand) const {
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

GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2D_weak::GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2D_weak (void) :
GALGAS_abstractRoutineIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2D_weak & GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2D_weak::operator = (const GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2D_weak::GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2D_weak (const GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR & inSource) :
GALGAS_abstractRoutineIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2D_weak GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2D_weak::bang_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR) ;
      result = GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR ((cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @assignRepeatedValueToFixedSizeArrayElementsFunctionIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2D_weak ("assignRepeatedValueToFixedSizeArrayElementsFunctionIR-weak",
                                                                                                                     & kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2D_weak GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                          Compiler * inCompiler
                                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2D_weak result ;
  const GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2D_weak * p = (const GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignRepeatedValueToFixedSizeArrayElementsFunctionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @staticArrayTypeAssignFunctionIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_staticArrayTypeAssignFunctionIR::cPtr_staticArrayTypeAssignFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mFixedSizeArrayType () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_staticArrayTypeAssignFunctionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mFixedSizeArrayType.printNonNullClassInstanceProperties ("mFixedSizeArrayType") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_staticArrayTypeAssignFunctionIR::objectCompare (const GALGAS_staticArrayTypeAssignFunctionIR & inOperand) const {
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

GALGAS_staticArrayTypeAssignFunctionIR::GALGAS_staticArrayTypeAssignFunctionIR (void) :
GALGAS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_staticArrayTypeAssignFunctionIR GALGAS_staticArrayTypeAssignFunctionIR::
init_21__21_isRequired_21_warnsIfUnused_21_ (const GALGAS_lstring & in_mRoutineMangledName,
                                             const GALGAS_bool & in_isRequired,
                                             const GALGAS_bool & in_warnsIfUnused,
                                             const GALGAS_omnibusType & in_mFixedSizeArrayType,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cPtr_staticArrayTypeAssignFunctionIR * object = nullptr ;
  macroMyNew (object, cPtr_staticArrayTypeAssignFunctionIR (inCompiler COMMA_THERE)) ;
  object->staticArrayTypeAssignFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mFixedSizeArrayType, inCompiler) ;
  const GALGAS_staticArrayTypeAssignFunctionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_staticArrayTypeAssignFunctionIR::
staticArrayTypeAssignFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21_ (const GALGAS_lstring & in_mRoutineMangledName,
                                                                             const GALGAS_bool & in_isRequired,
                                                                             const GALGAS_bool & in_warnsIfUnused,
                                                                             const GALGAS_omnibusType & in_mFixedSizeArrayType,
                                                                             Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mFixedSizeArrayType = in_mFixedSizeArrayType ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticArrayTypeAssignFunctionIR::GALGAS_staticArrayTypeAssignFunctionIR (const cPtr_staticArrayTypeAssignFunctionIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_staticArrayTypeAssignFunctionIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_staticArrayTypeAssignFunctionIR GALGAS_staticArrayTypeAssignFunctionIR::class_func_new (const GALGAS_lstring & in_mRoutineMangledName,
                                                                                               const GALGAS_bool & in_isRequired,
                                                                                               const GALGAS_bool & in_warnsIfUnused,
                                                                                               const GALGAS_omnibusType & in_mFixedSizeArrayType
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_staticArrayTypeAssignFunctionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_staticArrayTypeAssignFunctionIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mFixedSizeArrayType COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_staticArrayTypeAssignFunctionIR::readProperty_mFixedSizeArrayType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_staticArrayTypeAssignFunctionIR * p = (cPtr_staticArrayTypeAssignFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticArrayTypeAssignFunctionIR) ;
    return p->mProperty_mFixedSizeArrayType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticArrayTypeAssignFunctionIR::setProperty_mFixedSizeArrayType (const GALGAS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_staticArrayTypeAssignFunctionIR * p = (cPtr_staticArrayTypeAssignFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticArrayTypeAssignFunctionIR) ;
    p->mProperty_mFixedSizeArrayType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @staticArrayTypeAssignFunctionIR class
//--------------------------------------------------------------------------------------------------

cPtr_staticArrayTypeAssignFunctionIR::cPtr_staticArrayTypeAssignFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                                            const GALGAS_bool & in_isRequired,
                                                                            const GALGAS_bool & in_warnsIfUnused,
                                                                            const GALGAS_omnibusType & in_mFixedSizeArrayType
                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
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

acPtr_class * cPtr_staticArrayTypeAssignFunctionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_staticArrayTypeAssignFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mFixedSizeArrayType COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @staticArrayTypeAssignFunctionIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticArrayTypeAssignFunctionIR ("staticArrayTypeAssignFunctionIR",
                                                                                       & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_staticArrayTypeAssignFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticArrayTypeAssignFunctionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_staticArrayTypeAssignFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticArrayTypeAssignFunctionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticArrayTypeAssignFunctionIR GALGAS_staticArrayTypeAssignFunctionIR::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_staticArrayTypeAssignFunctionIR result ;
  const GALGAS_staticArrayTypeAssignFunctionIR * p = (const GALGAS_staticArrayTypeAssignFunctionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_staticArrayTypeAssignFunctionIR *> (p)) {
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

cPtr_typeDynamicArrayDeclarationAST::cPtr_typeDynamicArrayDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mDynamicArrayTypeName (),
mProperty_mElementTypeName () {
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

ComparisonResult GALGAS_typeDynamicArrayDeclarationAST::objectCompare (const GALGAS_typeDynamicArrayDeclarationAST & inOperand) const {
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

GALGAS_typeDynamicArrayDeclarationAST::GALGAS_typeDynamicArrayDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_typeDynamicArrayDeclarationAST GALGAS_typeDynamicArrayDeclarationAST::
init_21__21_ (const GALGAS_lstring & in_mDynamicArrayTypeName,
              const GALGAS_lstring & in_mElementTypeName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_typeDynamicArrayDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_typeDynamicArrayDeclarationAST (inCompiler COMMA_THERE)) ;
  object->typeDynamicArrayDeclarationAST_init_21__21_ (in_mDynamicArrayTypeName, in_mElementTypeName, inCompiler) ;
  const GALGAS_typeDynamicArrayDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_typeDynamicArrayDeclarationAST::
typeDynamicArrayDeclarationAST_init_21__21_ (const GALGAS_lstring & in_mDynamicArrayTypeName,
                                             const GALGAS_lstring & in_mElementTypeName,
                                             Compiler * /* inCompiler */) {
  mProperty_mDynamicArrayTypeName = in_mDynamicArrayTypeName ;
  mProperty_mElementTypeName = in_mElementTypeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeDynamicArrayDeclarationAST::GALGAS_typeDynamicArrayDeclarationAST (const cPtr_typeDynamicArrayDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typeDynamicArrayDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_typeDynamicArrayDeclarationAST GALGAS_typeDynamicArrayDeclarationAST::class_func_new (const GALGAS_lstring & in_mDynamicArrayTypeName,
                                                                                             const GALGAS_lstring & in_mElementTypeName
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_typeDynamicArrayDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_typeDynamicArrayDeclarationAST (in_mDynamicArrayTypeName, in_mElementTypeName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_typeDynamicArrayDeclarationAST::readProperty_mDynamicArrayTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_typeDynamicArrayDeclarationAST * p = (cPtr_typeDynamicArrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeDynamicArrayDeclarationAST) ;
    return p->mProperty_mDynamicArrayTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeDynamicArrayDeclarationAST::setProperty_mDynamicArrayTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_typeDynamicArrayDeclarationAST * p = (cPtr_typeDynamicArrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeDynamicArrayDeclarationAST) ;
    p->mProperty_mDynamicArrayTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_typeDynamicArrayDeclarationAST::readProperty_mElementTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_typeDynamicArrayDeclarationAST * p = (cPtr_typeDynamicArrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeDynamicArrayDeclarationAST) ;
    return p->mProperty_mElementTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeDynamicArrayDeclarationAST::setProperty_mElementTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_typeDynamicArrayDeclarationAST * p = (cPtr_typeDynamicArrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeDynamicArrayDeclarationAST) ;
    p->mProperty_mElementTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @typeDynamicArrayDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_typeDynamicArrayDeclarationAST::cPtr_typeDynamicArrayDeclarationAST (const GALGAS_lstring & in_mDynamicArrayTypeName,
                                                                          const GALGAS_lstring & in_mElementTypeName
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
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

acPtr_class * cPtr_typeDynamicArrayDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_typeDynamicArrayDeclarationAST (mProperty_mDynamicArrayTypeName, mProperty_mElementTypeName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @typeDynamicArrayDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST ("typeDynamicArrayDeclarationAST",
                                                                                      & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeDynamicArrayDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeDynamicArrayDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeDynamicArrayDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeDynamicArrayDeclarationAST GALGAS_typeDynamicArrayDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_typeDynamicArrayDeclarationAST result ;
  const GALGAS_typeDynamicArrayDeclarationAST * p = (const GALGAS_typeDynamicArrayDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typeDynamicArrayDeclarationAST *> (p)) {
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

cPtr_dynArrayRemoveAllFunctionIR::cPtr_dynArrayRemoveAllFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_dynArrayRemoveAllFunctionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_dynArrayRemoveAllFunctionIR::objectCompare (const GALGAS_dynArrayRemoveAllFunctionIR & inOperand) const {
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

GALGAS_dynArrayRemoveAllFunctionIR::GALGAS_dynArrayRemoveAllFunctionIR (void) :
GALGAS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_dynArrayRemoveAllFunctionIR GALGAS_dynArrayRemoveAllFunctionIR::
init_21__21_isRequired_21_warnsIfUnused (const GALGAS_lstring & in_mRoutineMangledName,
                                         const GALGAS_bool & in_isRequired,
                                         const GALGAS_bool & in_warnsIfUnused,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cPtr_dynArrayRemoveAllFunctionIR * object = nullptr ;
  macroMyNew (object, cPtr_dynArrayRemoveAllFunctionIR (inCompiler COMMA_THERE)) ;
  object->dynArrayRemoveAllFunctionIR_init_21__21_isRequired_21_warnsIfUnused (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler) ;
  const GALGAS_dynArrayRemoveAllFunctionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_dynArrayRemoveAllFunctionIR::
dynArrayRemoveAllFunctionIR_init_21__21_isRequired_21_warnsIfUnused (const GALGAS_lstring & in_mRoutineMangledName,
                                                                     const GALGAS_bool & in_isRequired,
                                                                     const GALGAS_bool & in_warnsIfUnused,
                                                                     Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dynArrayRemoveAllFunctionIR::GALGAS_dynArrayRemoveAllFunctionIR (const cPtr_dynArrayRemoveAllFunctionIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dynArrayRemoveAllFunctionIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_dynArrayRemoveAllFunctionIR GALGAS_dynArrayRemoveAllFunctionIR::class_func_new (const GALGAS_lstring & in_mRoutineMangledName,
                                                                                       const GALGAS_bool & in_isRequired,
                                                                                       const GALGAS_bool & in_warnsIfUnused
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_dynArrayRemoveAllFunctionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_dynArrayRemoveAllFunctionIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @dynArrayRemoveAllFunctionIR class
//--------------------------------------------------------------------------------------------------

cPtr_dynArrayRemoveAllFunctionIR::cPtr_dynArrayRemoveAllFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                                    const GALGAS_bool & in_isRequired,
                                                                    const GALGAS_bool & in_warnsIfUnused
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE) {
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

acPtr_class * cPtr_dynArrayRemoveAllFunctionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_dynArrayRemoveAllFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @dynArrayRemoveAllFunctionIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dynArrayRemoveAllFunctionIR ("dynArrayRemoveAllFunctionIR",
                                                                                   & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dynArrayRemoveAllFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayRemoveAllFunctionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dynArrayRemoveAllFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dynArrayRemoveAllFunctionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dynArrayRemoveAllFunctionIR GALGAS_dynArrayRemoveAllFunctionIR::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_dynArrayRemoveAllFunctionIR result ;
  const GALGAS_dynArrayRemoveAllFunctionIR * p = (const GALGAS_dynArrayRemoveAllFunctionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_dynArrayRemoveAllFunctionIR *> (p)) {
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

cPtr_dynArrayLengthFunctionIR::cPtr_dynArrayLengthFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_dynArrayLengthFunctionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_dynArrayLengthFunctionIR::objectCompare (const GALGAS_dynArrayLengthFunctionIR & inOperand) const {
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

GALGAS_dynArrayLengthFunctionIR::GALGAS_dynArrayLengthFunctionIR (void) :
GALGAS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_dynArrayLengthFunctionIR GALGAS_dynArrayLengthFunctionIR::
init_21__21_isRequired_21_warnsIfUnused (const GALGAS_lstring & in_mRoutineMangledName,
                                         const GALGAS_bool & in_isRequired,
                                         const GALGAS_bool & in_warnsIfUnused,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cPtr_dynArrayLengthFunctionIR * object = nullptr ;
  macroMyNew (object, cPtr_dynArrayLengthFunctionIR (inCompiler COMMA_THERE)) ;
  object->dynArrayLengthFunctionIR_init_21__21_isRequired_21_warnsIfUnused (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler) ;
  const GALGAS_dynArrayLengthFunctionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_dynArrayLengthFunctionIR::
dynArrayLengthFunctionIR_init_21__21_isRequired_21_warnsIfUnused (const GALGAS_lstring & in_mRoutineMangledName,
                                                                  const GALGAS_bool & in_isRequired,
                                                                  const GALGAS_bool & in_warnsIfUnused,
                                                                  Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dynArrayLengthFunctionIR::GALGAS_dynArrayLengthFunctionIR (const cPtr_dynArrayLengthFunctionIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dynArrayLengthFunctionIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_dynArrayLengthFunctionIR GALGAS_dynArrayLengthFunctionIR::class_func_new (const GALGAS_lstring & in_mRoutineMangledName,
                                                                                 const GALGAS_bool & in_isRequired,
                                                                                 const GALGAS_bool & in_warnsIfUnused
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_dynArrayLengthFunctionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_dynArrayLengthFunctionIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @dynArrayLengthFunctionIR class
//--------------------------------------------------------------------------------------------------

cPtr_dynArrayLengthFunctionIR::cPtr_dynArrayLengthFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                              const GALGAS_bool & in_isRequired,
                                                              const GALGAS_bool & in_warnsIfUnused
                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE) {
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

acPtr_class * cPtr_dynArrayLengthFunctionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_dynArrayLengthFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @dynArrayLengthFunctionIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dynArrayLengthFunctionIR ("dynArrayLengthFunctionIR",
                                                                                & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dynArrayLengthFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayLengthFunctionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dynArrayLengthFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dynArrayLengthFunctionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dynArrayLengthFunctionIR GALGAS_dynArrayLengthFunctionIR::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_dynArrayLengthFunctionIR result ;
  const GALGAS_dynArrayLengthFunctionIR * p = (const GALGAS_dynArrayLengthFunctionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_dynArrayLengthFunctionIR *> (p)) {
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

cPtr_dynArrayAppendFunctionIR::cPtr_dynArrayAppendFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mArrayTypeProxy (),
mProperty_mElementTypeProxy (),
mProperty_mInsertFunctionMangledName () {
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

ComparisonResult GALGAS_dynArrayAppendFunctionIR::objectCompare (const GALGAS_dynArrayAppendFunctionIR & inOperand) const {
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

GALGAS_dynArrayAppendFunctionIR::GALGAS_dynArrayAppendFunctionIR (void) :
GALGAS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_dynArrayAppendFunctionIR GALGAS_dynArrayAppendFunctionIR::
init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (const GALGAS_lstring & in_mRoutineMangledName,
                                                     const GALGAS_bool & in_isRequired,
                                                     const GALGAS_bool & in_warnsIfUnused,
                                                     const GALGAS_unifiedTypeMapEntry & in_mArrayTypeProxy,
                                                     const GALGAS_unifiedTypeMapEntry & in_mElementTypeProxy,
                                                     const GALGAS_string & in_mInsertFunctionMangledName,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cPtr_dynArrayAppendFunctionIR * object = nullptr ;
  macroMyNew (object, cPtr_dynArrayAppendFunctionIR (inCompiler COMMA_THERE)) ;
  object->dynArrayAppendFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mArrayTypeProxy, in_mElementTypeProxy, in_mInsertFunctionMangledName, inCompiler) ;
  const GALGAS_dynArrayAppendFunctionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_dynArrayAppendFunctionIR::
dynArrayAppendFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (const GALGAS_lstring & in_mRoutineMangledName,
                                                                              const GALGAS_bool & in_isRequired,
                                                                              const GALGAS_bool & in_warnsIfUnused,
                                                                              const GALGAS_unifiedTypeMapEntry & in_mArrayTypeProxy,
                                                                              const GALGAS_unifiedTypeMapEntry & in_mElementTypeProxy,
                                                                              const GALGAS_string & in_mInsertFunctionMangledName,
                                                                              Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mArrayTypeProxy = in_mArrayTypeProxy ;
  mProperty_mElementTypeProxy = in_mElementTypeProxy ;
  mProperty_mInsertFunctionMangledName = in_mInsertFunctionMangledName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dynArrayAppendFunctionIR::GALGAS_dynArrayAppendFunctionIR (const cPtr_dynArrayAppendFunctionIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dynArrayAppendFunctionIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_dynArrayAppendFunctionIR GALGAS_dynArrayAppendFunctionIR::class_func_new (const GALGAS_lstring & in_mRoutineMangledName,
                                                                                 const GALGAS_bool & in_isRequired,
                                                                                 const GALGAS_bool & in_warnsIfUnused,
                                                                                 const GALGAS_unifiedTypeMapEntry & in_mArrayTypeProxy,
                                                                                 const GALGAS_unifiedTypeMapEntry & in_mElementTypeProxy,
                                                                                 const GALGAS_string & in_mInsertFunctionMangledName
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_dynArrayAppendFunctionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_dynArrayAppendFunctionIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mArrayTypeProxy, in_mElementTypeProxy, in_mInsertFunctionMangledName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_dynArrayAppendFunctionIR::readProperty_mArrayTypeProxy (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_dynArrayAppendFunctionIR * p = (cPtr_dynArrayAppendFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynArrayAppendFunctionIR) ;
    return p->mProperty_mArrayTypeProxy ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_dynArrayAppendFunctionIR::setProperty_mArrayTypeProxy (const GALGAS_unifiedTypeMapEntry & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_dynArrayAppendFunctionIR * p = (cPtr_dynArrayAppendFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynArrayAppendFunctionIR) ;
    p->mProperty_mArrayTypeProxy = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_dynArrayAppendFunctionIR::readProperty_mElementTypeProxy (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_dynArrayAppendFunctionIR * p = (cPtr_dynArrayAppendFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynArrayAppendFunctionIR) ;
    return p->mProperty_mElementTypeProxy ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_dynArrayAppendFunctionIR::setProperty_mElementTypeProxy (const GALGAS_unifiedTypeMapEntry & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_dynArrayAppendFunctionIR * p = (cPtr_dynArrayAppendFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynArrayAppendFunctionIR) ;
    p->mProperty_mElementTypeProxy = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_dynArrayAppendFunctionIR::readProperty_mInsertFunctionMangledName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_dynArrayAppendFunctionIR * p = (cPtr_dynArrayAppendFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynArrayAppendFunctionIR) ;
    return p->mProperty_mInsertFunctionMangledName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_dynArrayAppendFunctionIR::setProperty_mInsertFunctionMangledName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_dynArrayAppendFunctionIR * p = (cPtr_dynArrayAppendFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynArrayAppendFunctionIR) ;
    p->mProperty_mInsertFunctionMangledName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @dynArrayAppendFunctionIR class
//--------------------------------------------------------------------------------------------------

cPtr_dynArrayAppendFunctionIR::cPtr_dynArrayAppendFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                              const GALGAS_bool & in_isRequired,
                                                              const GALGAS_bool & in_warnsIfUnused,
                                                              const GALGAS_unifiedTypeMapEntry & in_mArrayTypeProxy,
                                                              const GALGAS_unifiedTypeMapEntry & in_mElementTypeProxy,
                                                              const GALGAS_string & in_mInsertFunctionMangledName
                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
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

acPtr_class * cPtr_dynArrayAppendFunctionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_dynArrayAppendFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mArrayTypeProxy, mProperty_mElementTypeProxy, mProperty_mInsertFunctionMangledName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @dynArrayAppendFunctionIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dynArrayAppendFunctionIR ("dynArrayAppendFunctionIR",
                                                                                & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dynArrayAppendFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayAppendFunctionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dynArrayAppendFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dynArrayAppendFunctionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dynArrayAppendFunctionIR GALGAS_dynArrayAppendFunctionIR::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_dynArrayAppendFunctionIR result ;
  const GALGAS_dynArrayAppendFunctionIR * p = (const GALGAS_dynArrayAppendFunctionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_dynArrayAppendFunctionIR *> (p)) {
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

cPtr_dynArrayInsertFunctionIR::cPtr_dynArrayInsertFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mElementTypeProxy () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_dynArrayInsertFunctionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mElementTypeProxy.printNonNullClassInstanceProperties ("mElementTypeProxy") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_dynArrayInsertFunctionIR::objectCompare (const GALGAS_dynArrayInsertFunctionIR & inOperand) const {
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

GALGAS_dynArrayInsertFunctionIR::GALGAS_dynArrayInsertFunctionIR (void) :
GALGAS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_dynArrayInsertFunctionIR GALGAS_dynArrayInsertFunctionIR::
init_21__21_isRequired_21_warnsIfUnused_21_ (const GALGAS_lstring & in_mRoutineMangledName,
                                             const GALGAS_bool & in_isRequired,
                                             const GALGAS_bool & in_warnsIfUnused,
                                             const GALGAS_unifiedTypeMapEntry & in_mElementTypeProxy,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cPtr_dynArrayInsertFunctionIR * object = nullptr ;
  macroMyNew (object, cPtr_dynArrayInsertFunctionIR (inCompiler COMMA_THERE)) ;
  object->dynArrayInsertFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mElementTypeProxy, inCompiler) ;
  const GALGAS_dynArrayInsertFunctionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_dynArrayInsertFunctionIR::
dynArrayInsertFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21_ (const GALGAS_lstring & in_mRoutineMangledName,
                                                                      const GALGAS_bool & in_isRequired,
                                                                      const GALGAS_bool & in_warnsIfUnused,
                                                                      const GALGAS_unifiedTypeMapEntry & in_mElementTypeProxy,
                                                                      Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mElementTypeProxy = in_mElementTypeProxy ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dynArrayInsertFunctionIR::GALGAS_dynArrayInsertFunctionIR (const cPtr_dynArrayInsertFunctionIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dynArrayInsertFunctionIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_dynArrayInsertFunctionIR GALGAS_dynArrayInsertFunctionIR::class_func_new (const GALGAS_lstring & in_mRoutineMangledName,
                                                                                 const GALGAS_bool & in_isRequired,
                                                                                 const GALGAS_bool & in_warnsIfUnused,
                                                                                 const GALGAS_unifiedTypeMapEntry & in_mElementTypeProxy
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_dynArrayInsertFunctionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_dynArrayInsertFunctionIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mElementTypeProxy COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_dynArrayInsertFunctionIR::readProperty_mElementTypeProxy (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_dynArrayInsertFunctionIR * p = (cPtr_dynArrayInsertFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynArrayInsertFunctionIR) ;
    return p->mProperty_mElementTypeProxy ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_dynArrayInsertFunctionIR::setProperty_mElementTypeProxy (const GALGAS_unifiedTypeMapEntry & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_dynArrayInsertFunctionIR * p = (cPtr_dynArrayInsertFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynArrayInsertFunctionIR) ;
    p->mProperty_mElementTypeProxy = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @dynArrayInsertFunctionIR class
//--------------------------------------------------------------------------------------------------

cPtr_dynArrayInsertFunctionIR::cPtr_dynArrayInsertFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                              const GALGAS_bool & in_isRequired,
                                                              const GALGAS_bool & in_warnsIfUnused,
                                                              const GALGAS_unifiedTypeMapEntry & in_mElementTypeProxy
                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
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

acPtr_class * cPtr_dynArrayInsertFunctionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_dynArrayInsertFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mElementTypeProxy COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @dynArrayInsertFunctionIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dynArrayInsertFunctionIR ("dynArrayInsertFunctionIR",
                                                                                & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dynArrayInsertFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayInsertFunctionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dynArrayInsertFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dynArrayInsertFunctionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dynArrayInsertFunctionIR GALGAS_dynArrayInsertFunctionIR::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_dynArrayInsertFunctionIR result ;
  const GALGAS_dynArrayInsertFunctionIR * p = (const GALGAS_dynArrayInsertFunctionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_dynArrayInsertFunctionIR *> (p)) {
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

cPtr_dynamicArrayTypeAssignUsage::cPtr_dynamicArrayTypeAssignUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractAssignmentOperatorUsage (inCompiler COMMA_THERE),
mProperty_mDynamicArrayType (),
mProperty_mAssignFunctionName () {
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

ComparisonResult GALGAS_dynamicArrayTypeAssignUsage::objectCompare (const GALGAS_dynamicArrayTypeAssignUsage & inOperand) const {
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

GALGAS_dynamicArrayTypeAssignUsage::GALGAS_dynamicArrayTypeAssignUsage (void) :
GALGAS_abstractAssignmentOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignUsage GALGAS_dynamicArrayTypeAssignUsage::
init_21__21_ (const GALGAS_omnibusType & in_mDynamicArrayType,
              const GALGAS_string & in_mAssignFunctionName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_dynamicArrayTypeAssignUsage * object = nullptr ;
  macroMyNew (object, cPtr_dynamicArrayTypeAssignUsage (inCompiler COMMA_THERE)) ;
  object->dynamicArrayTypeAssignUsage_init_21__21_ (in_mDynamicArrayType, in_mAssignFunctionName, inCompiler) ;
  const GALGAS_dynamicArrayTypeAssignUsage result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_dynamicArrayTypeAssignUsage::
dynamicArrayTypeAssignUsage_init_21__21_ (const GALGAS_omnibusType & in_mDynamicArrayType,
                                          const GALGAS_string & in_mAssignFunctionName,
                                          Compiler * /* inCompiler */) {
  mProperty_mDynamicArrayType = in_mDynamicArrayType ;
  mProperty_mAssignFunctionName = in_mAssignFunctionName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignUsage::GALGAS_dynamicArrayTypeAssignUsage (const cPtr_dynamicArrayTypeAssignUsage * inSourcePtr) :
GALGAS_abstractAssignmentOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dynamicArrayTypeAssignUsage) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignUsage GALGAS_dynamicArrayTypeAssignUsage::class_func_new (const GALGAS_omnibusType & in_mDynamicArrayType,
                                                                                       const GALGAS_string & in_mAssignFunctionName
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_dynamicArrayTypeAssignUsage result ;
  macroMyNew (result.mObjectPtr, cPtr_dynamicArrayTypeAssignUsage (in_mDynamicArrayType, in_mAssignFunctionName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_dynamicArrayTypeAssignUsage::readProperty_mDynamicArrayType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_dynamicArrayTypeAssignUsage * p = (cPtr_dynamicArrayTypeAssignUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynamicArrayTypeAssignUsage) ;
    return p->mProperty_mDynamicArrayType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_dynamicArrayTypeAssignUsage::setProperty_mDynamicArrayType (const GALGAS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_dynamicArrayTypeAssignUsage * p = (cPtr_dynamicArrayTypeAssignUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynamicArrayTypeAssignUsage) ;
    p->mProperty_mDynamicArrayType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_dynamicArrayTypeAssignUsage::readProperty_mAssignFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_dynamicArrayTypeAssignUsage * p = (cPtr_dynamicArrayTypeAssignUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynamicArrayTypeAssignUsage) ;
    return p->mProperty_mAssignFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_dynamicArrayTypeAssignUsage::setProperty_mAssignFunctionName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_dynamicArrayTypeAssignUsage * p = (cPtr_dynamicArrayTypeAssignUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynamicArrayTypeAssignUsage) ;
    p->mProperty_mAssignFunctionName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @dynamicArrayTypeAssignUsage class
//--------------------------------------------------------------------------------------------------

cPtr_dynamicArrayTypeAssignUsage::cPtr_dynamicArrayTypeAssignUsage (const GALGAS_omnibusType & in_mDynamicArrayType,
                                                                    const GALGAS_string & in_mAssignFunctionName
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractAssignmentOperatorUsage (THERE),
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

acPtr_class * cPtr_dynamicArrayTypeAssignUsage::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_dynamicArrayTypeAssignUsage (mProperty_mDynamicArrayType, mProperty_mAssignFunctionName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @dynamicArrayTypeAssignUsage generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dynamicArrayTypeAssignUsage ("dynamicArrayTypeAssignUsage",
                                                                                   & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dynamicArrayTypeAssignUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynamicArrayTypeAssignUsage ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dynamicArrayTypeAssignUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dynamicArrayTypeAssignUsage (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignUsage GALGAS_dynamicArrayTypeAssignUsage::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_dynamicArrayTypeAssignUsage result ;
  const GALGAS_dynamicArrayTypeAssignUsage * p = (const GALGAS_dynamicArrayTypeAssignUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_dynamicArrayTypeAssignUsage *> (p)) {
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

cPtr_dynamicArrayTypeAssignGenericFunctionIR::cPtr_dynamicArrayTypeAssignGenericFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_dynamicArrayTypeAssignGenericFunctionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_dynamicArrayTypeAssignGenericFunctionIR::objectCompare (const GALGAS_dynamicArrayTypeAssignGenericFunctionIR & inOperand) const {
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

GALGAS_dynamicArrayTypeAssignGenericFunctionIR::GALGAS_dynamicArrayTypeAssignGenericFunctionIR (void) :
GALGAS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignGenericFunctionIR GALGAS_dynamicArrayTypeAssignGenericFunctionIR::
init_21__21_isRequired_21_warnsIfUnused (const GALGAS_lstring & in_mRoutineMangledName,
                                         const GALGAS_bool & in_isRequired,
                                         const GALGAS_bool & in_warnsIfUnused,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cPtr_dynamicArrayTypeAssignGenericFunctionIR * object = nullptr ;
  macroMyNew (object, cPtr_dynamicArrayTypeAssignGenericFunctionIR (inCompiler COMMA_THERE)) ;
  object->dynamicArrayTypeAssignGenericFunctionIR_init_21__21_isRequired_21_warnsIfUnused (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler) ;
  const GALGAS_dynamicArrayTypeAssignGenericFunctionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_dynamicArrayTypeAssignGenericFunctionIR::
dynamicArrayTypeAssignGenericFunctionIR_init_21__21_isRequired_21_warnsIfUnused (const GALGAS_lstring & in_mRoutineMangledName,
                                                                                 const GALGAS_bool & in_isRequired,
                                                                                 const GALGAS_bool & in_warnsIfUnused,
                                                                                 Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignGenericFunctionIR::GALGAS_dynamicArrayTypeAssignGenericFunctionIR (const cPtr_dynamicArrayTypeAssignGenericFunctionIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dynamicArrayTypeAssignGenericFunctionIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignGenericFunctionIR GALGAS_dynamicArrayTypeAssignGenericFunctionIR::class_func_new (const GALGAS_lstring & in_mRoutineMangledName,
                                                                                                               const GALGAS_bool & in_isRequired,
                                                                                                               const GALGAS_bool & in_warnsIfUnused
                                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_dynamicArrayTypeAssignGenericFunctionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_dynamicArrayTypeAssignGenericFunctionIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @dynamicArrayTypeAssignGenericFunctionIR class
//--------------------------------------------------------------------------------------------------

cPtr_dynamicArrayTypeAssignGenericFunctionIR::cPtr_dynamicArrayTypeAssignGenericFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                                                            const GALGAS_bool & in_isRequired,
                                                                                            const GALGAS_bool & in_warnsIfUnused
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE) {
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

acPtr_class * cPtr_dynamicArrayTypeAssignGenericFunctionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_dynamicArrayTypeAssignGenericFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @dynamicArrayTypeAssignGenericFunctionIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dynamicArrayTypeAssignGenericFunctionIR ("dynamicArrayTypeAssignGenericFunctionIR",
                                                                                               & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dynamicArrayTypeAssignGenericFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynamicArrayTypeAssignGenericFunctionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dynamicArrayTypeAssignGenericFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dynamicArrayTypeAssignGenericFunctionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignGenericFunctionIR GALGAS_dynamicArrayTypeAssignGenericFunctionIR::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_dynamicArrayTypeAssignGenericFunctionIR result ;
  const GALGAS_dynamicArrayTypeAssignGenericFunctionIR * p = (const GALGAS_dynamicArrayTypeAssignGenericFunctionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_dynamicArrayTypeAssignGenericFunctionIR *> (p)) {
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

cPtr_enumerationDeclarationAST::cPtr_enumerationDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mEnumerationName (),
mProperty_mCaseNameList () {
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

ComparisonResult GALGAS_enumerationDeclarationAST::objectCompare (const GALGAS_enumerationDeclarationAST & inOperand) const {
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

GALGAS_enumerationDeclarationAST::GALGAS_enumerationDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_enumerationDeclarationAST GALGAS_enumerationDeclarationAST::
init_21__21_ (const GALGAS_lstring & in_mEnumerationName,
              const GALGAS_enumerationConstantList & in_mCaseNameList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_enumerationDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_enumerationDeclarationAST (inCompiler COMMA_THERE)) ;
  object->enumerationDeclarationAST_init_21__21_ (in_mEnumerationName, in_mCaseNameList, inCompiler) ;
  const GALGAS_enumerationDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_enumerationDeclarationAST::
enumerationDeclarationAST_init_21__21_ (const GALGAS_lstring & in_mEnumerationName,
                                        const GALGAS_enumerationConstantList & in_mCaseNameList,
                                        Compiler * /* inCompiler */) {
  mProperty_mEnumerationName = in_mEnumerationName ;
  mProperty_mCaseNameList = in_mCaseNameList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumerationDeclarationAST::GALGAS_enumerationDeclarationAST (const cPtr_enumerationDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumerationDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_enumerationDeclarationAST GALGAS_enumerationDeclarationAST::class_func_new (const GALGAS_lstring & in_mEnumerationName,
                                                                                   const GALGAS_enumerationConstantList & in_mCaseNameList
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_enumerationDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_enumerationDeclarationAST (in_mEnumerationName, in_mCaseNameList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_enumerationDeclarationAST::readProperty_mEnumerationName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_enumerationDeclarationAST * p = (cPtr_enumerationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumerationDeclarationAST) ;
    return p->mProperty_mEnumerationName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumerationDeclarationAST::setProperty_mEnumerationName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_enumerationDeclarationAST * p = (cPtr_enumerationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumerationDeclarationAST) ;
    p->mProperty_mEnumerationName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumerationConstantList GALGAS_enumerationDeclarationAST::readProperty_mCaseNameList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_enumerationConstantList () ;
  }else{
    cPtr_enumerationDeclarationAST * p = (cPtr_enumerationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumerationDeclarationAST) ;
    return p->mProperty_mCaseNameList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumerationDeclarationAST::setProperty_mCaseNameList (const GALGAS_enumerationConstantList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_enumerationDeclarationAST * p = (cPtr_enumerationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumerationDeclarationAST) ;
    p->mProperty_mCaseNameList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @enumerationDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_enumerationDeclarationAST::cPtr_enumerationDeclarationAST (const GALGAS_lstring & in_mEnumerationName,
                                                                const GALGAS_enumerationConstantList & in_mCaseNameList
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
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

acPtr_class * cPtr_enumerationDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_enumerationDeclarationAST (mProperty_mEnumerationName, mProperty_mCaseNameList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @enumerationDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumerationDeclarationAST ("enumerationDeclarationAST",
                                                                                 & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumerationDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumerationDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumerationDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumerationDeclarationAST GALGAS_enumerationDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_enumerationDeclarationAST result ;
  const GALGAS_enumerationDeclarationAST * p = (const GALGAS_enumerationDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_enumerationDeclarationAST *> (p)) {
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

cPtr_enumToUintRoutineIR::cPtr_enumToUintRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mEnumerationLLVMTypeName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_enumToUintRoutineIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mEnumerationLLVMTypeName.printNonNullClassInstanceProperties ("mEnumerationLLVMTypeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_enumToUintRoutineIR::objectCompare (const GALGAS_enumToUintRoutineIR & inOperand) const {
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

GALGAS_enumToUintRoutineIR::GALGAS_enumToUintRoutineIR (void) :
GALGAS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_enumToUintRoutineIR GALGAS_enumToUintRoutineIR::
init_21__21_isRequired_21_warnsIfUnused_21_ (const GALGAS_lstring & in_mRoutineMangledName,
                                             const GALGAS_bool & in_isRequired,
                                             const GALGAS_bool & in_warnsIfUnused,
                                             const GALGAS_string & in_mEnumerationLLVMTypeName,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cPtr_enumToUintRoutineIR * object = nullptr ;
  macroMyNew (object, cPtr_enumToUintRoutineIR (inCompiler COMMA_THERE)) ;
  object->enumToUintRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mEnumerationLLVMTypeName, inCompiler) ;
  const GALGAS_enumToUintRoutineIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_enumToUintRoutineIR::
enumToUintRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21_ (const GALGAS_lstring & in_mRoutineMangledName,
                                                                 const GALGAS_bool & in_isRequired,
                                                                 const GALGAS_bool & in_warnsIfUnused,
                                                                 const GALGAS_string & in_mEnumerationLLVMTypeName,
                                                                 Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mEnumerationLLVMTypeName = in_mEnumerationLLVMTypeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumToUintRoutineIR::GALGAS_enumToUintRoutineIR (const cPtr_enumToUintRoutineIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumToUintRoutineIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_enumToUintRoutineIR GALGAS_enumToUintRoutineIR::class_func_new (const GALGAS_lstring & in_mRoutineMangledName,
                                                                       const GALGAS_bool & in_isRequired,
                                                                       const GALGAS_bool & in_warnsIfUnused,
                                                                       const GALGAS_string & in_mEnumerationLLVMTypeName
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_enumToUintRoutineIR result ;
  macroMyNew (result.mObjectPtr, cPtr_enumToUintRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mEnumerationLLVMTypeName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_enumToUintRoutineIR::readProperty_mEnumerationLLVMTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_enumToUintRoutineIR * p = (cPtr_enumToUintRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumToUintRoutineIR) ;
    return p->mProperty_mEnumerationLLVMTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumToUintRoutineIR::setProperty_mEnumerationLLVMTypeName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_enumToUintRoutineIR * p = (cPtr_enumToUintRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumToUintRoutineIR) ;
    p->mProperty_mEnumerationLLVMTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @enumToUintRoutineIR class
//--------------------------------------------------------------------------------------------------

cPtr_enumToUintRoutineIR::cPtr_enumToUintRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                    const GALGAS_bool & in_isRequired,
                                                    const GALGAS_bool & in_warnsIfUnused,
                                                    const GALGAS_string & in_mEnumerationLLVMTypeName
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
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

acPtr_class * cPtr_enumToUintRoutineIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_enumToUintRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mEnumerationLLVMTypeName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @enumToUintRoutineIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumToUintRoutineIR ("enumToUintRoutineIR",
                                                                           & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumToUintRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumToUintRoutineIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumToUintRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumToUintRoutineIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumToUintRoutineIR GALGAS_enumToUintRoutineIR::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_enumToUintRoutineIR result ;
  const GALGAS_enumToUintRoutineIR * p = (const GALGAS_enumToUintRoutineIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_enumToUintRoutineIR *> (p)) {
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

ComparisonResult GALGAS_structureDeclarationAST::objectCompare (const GALGAS_structureDeclarationAST & inOperand) const {
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

GALGAS_structureDeclarationAST::GALGAS_structureDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_structureDeclarationAST GALGAS_structureDeclarationAST::
init_21__21__21__21__21__21__21_ (const GALGAS_lstring & in_mReceiverTypeName,
                                  const GALGAS_lstring & in_mOmnibusTypeSpecificName,
                                  const GALGAS_lstring & in_mLLVMBaseTypeName,
                                  const GALGAS_lstringlist & in_mAttributeListAST,
                                  const GALGAS_bool & in_mGenerateAssignmentRoutine,
                                  const GALGAS_structurePropertyListAST & in_mStructurePropertyListAST,
                                  const GALGAS_bool & in_mMayImplementDeinit,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_structureDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_structureDeclarationAST (inCompiler COMMA_THERE)) ;
  object->structureDeclarationAST_init_21__21__21__21__21__21__21_ (in_mReceiverTypeName, in_mOmnibusTypeSpecificName, in_mLLVMBaseTypeName, in_mAttributeListAST, in_mGenerateAssignmentRoutine, in_mStructurePropertyListAST, in_mMayImplementDeinit, inCompiler) ;
  const GALGAS_structureDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_structureDeclarationAST::
structureDeclarationAST_init_21__21__21__21__21__21__21_ (const GALGAS_lstring & in_mReceiverTypeName,
                                                          const GALGAS_lstring & in_mOmnibusTypeSpecificName,
                                                          const GALGAS_lstring & in_mLLVMBaseTypeName,
                                                          const GALGAS_lstringlist & in_mAttributeListAST,
                                                          const GALGAS_bool & in_mGenerateAssignmentRoutine,
                                                          const GALGAS_structurePropertyListAST & in_mStructurePropertyListAST,
                                                          const GALGAS_bool & in_mMayImplementDeinit,
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

GALGAS_structureDeclarationAST::GALGAS_structureDeclarationAST (const cPtr_structureDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structureDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_structureDeclarationAST GALGAS_structureDeclarationAST::class_func_new (const GALGAS_lstring & in_mReceiverTypeName,
                                                                               const GALGAS_lstring & in_mOmnibusTypeSpecificName,
                                                                               const GALGAS_lstring & in_mLLVMBaseTypeName,
                                                                               const GALGAS_lstringlist & in_mAttributeListAST,
                                                                               const GALGAS_bool & in_mGenerateAssignmentRoutine,
                                                                               const GALGAS_structurePropertyListAST & in_mStructurePropertyListAST,
                                                                               const GALGAS_bool & in_mMayImplementDeinit
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_structureDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_structureDeclarationAST (in_mReceiverTypeName, in_mOmnibusTypeSpecificName, in_mLLVMBaseTypeName, in_mAttributeListAST, in_mGenerateAssignmentRoutine, in_mStructurePropertyListAST, in_mMayImplementDeinit COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_structureDeclarationAST::readProperty_mReceiverTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_structureDeclarationAST * p = (cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    return p->mProperty_mReceiverTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_structureDeclarationAST::setProperty_mReceiverTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_structureDeclarationAST * p = (cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    p->mProperty_mReceiverTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_structureDeclarationAST::readProperty_mOmnibusTypeSpecificName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_structureDeclarationAST * p = (cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    return p->mProperty_mOmnibusTypeSpecificName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_structureDeclarationAST::setProperty_mOmnibusTypeSpecificName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_structureDeclarationAST * p = (cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    p->mProperty_mOmnibusTypeSpecificName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_structureDeclarationAST::readProperty_mLLVMBaseTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_structureDeclarationAST * p = (cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    return p->mProperty_mLLVMBaseTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_structureDeclarationAST::setProperty_mLLVMBaseTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_structureDeclarationAST * p = (cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    p->mProperty_mLLVMBaseTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_structureDeclarationAST::readProperty_mAttributeListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_structureDeclarationAST * p = (cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    return p->mProperty_mAttributeListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_structureDeclarationAST::setProperty_mAttributeListAST (const GALGAS_lstringlist & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_structureDeclarationAST * p = (cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    p->mProperty_mAttributeListAST = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_structureDeclarationAST::readProperty_mGenerateAssignmentRoutine (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_structureDeclarationAST * p = (cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    return p->mProperty_mGenerateAssignmentRoutine ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_structureDeclarationAST::setProperty_mGenerateAssignmentRoutine (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_structureDeclarationAST * p = (cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    p->mProperty_mGenerateAssignmentRoutine = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_structurePropertyListAST GALGAS_structureDeclarationAST::readProperty_mStructurePropertyListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_structurePropertyListAST () ;
  }else{
    cPtr_structureDeclarationAST * p = (cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    return p->mProperty_mStructurePropertyListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_structureDeclarationAST::setProperty_mStructurePropertyListAST (const GALGAS_structurePropertyListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_structureDeclarationAST * p = (cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    p->mProperty_mStructurePropertyListAST = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_structureDeclarationAST::readProperty_mMayImplementDeinit (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_structureDeclarationAST * p = (cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    return p->mProperty_mMayImplementDeinit ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_structureDeclarationAST::setProperty_mMayImplementDeinit (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_structureDeclarationAST * p = (cPtr_structureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclarationAST) ;
    p->mProperty_mMayImplementDeinit = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @structureDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_structureDeclarationAST::cPtr_structureDeclarationAST (const GALGAS_lstring & in_mReceiverTypeName,
                                                            const GALGAS_lstring & in_mOmnibusTypeSpecificName,
                                                            const GALGAS_lstring & in_mLLVMBaseTypeName,
                                                            const GALGAS_lstringlist & in_mAttributeListAST,
                                                            const GALGAS_bool & in_mGenerateAssignmentRoutine,
                                                            const GALGAS_structurePropertyListAST & in_mStructurePropertyListAST,
                                                            const GALGAS_bool & in_mMayImplementDeinit
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
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

acPtr_class * cPtr_structureDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_structureDeclarationAST (mProperty_mReceiverTypeName, mProperty_mOmnibusTypeSpecificName, mProperty_mLLVMBaseTypeName, mProperty_mAttributeListAST, mProperty_mGenerateAssignmentRoutine, mProperty_mStructurePropertyListAST, mProperty_mMayImplementDeinit COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @structureDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structureDeclarationAST ("structureDeclarationAST",
                                                                               & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_structureDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structureDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_structureDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structureDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_structureDeclarationAST GALGAS_structureDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_structureDeclarationAST result ;
  const GALGAS_structureDeclarationAST * p = (const GALGAS_structureDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_structureDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structureDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_structurePropertyListAST_2D_element::GALGAS_structurePropertyListAST_2D_element (void) :
mProperty_mPropertyName (),
mProperty_mPropertyAttributeList (),
mProperty_mVisibility (),
mProperty_mPropertyTypeName (),
mProperty_mPropertyKind () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_structurePropertyListAST_2D_element::~ GALGAS_structurePropertyListAST_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_structurePropertyListAST_2D_element GALGAS_structurePropertyListAST_2D_element::init_21__21__21__21__21_ (const GALGAS_lstring & in_mPropertyName,
                                                                                                                 const GALGAS_propertyAttributeList & in_mPropertyAttributeList,
                                                                                                                 const GALGAS_propertyVisibility & in_mVisibility,
                                                                                                                 const GALGAS_lstring & in_mPropertyTypeName,
                                                                                                                 const GALGAS_propertyKindAST & in_mPropertyKind,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_structurePropertyListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mPropertyName = in_mPropertyName ;
  result.mProperty_mPropertyAttributeList = in_mPropertyAttributeList ;
  result.mProperty_mVisibility = in_mVisibility ;
  result.mProperty_mPropertyTypeName = in_mPropertyTypeName ;
  result.mProperty_mPropertyKind = in_mPropertyKind ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_structurePropertyListAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_structurePropertyListAST_2D_element GALGAS_structurePropertyListAST_2D_element::class_func_new (const GALGAS_lstring & in_mPropertyName,
                                                                                                       const GALGAS_propertyAttributeList & in_mPropertyAttributeList,
                                                                                                       const GALGAS_propertyVisibility & in_mVisibility,
                                                                                                       const GALGAS_lstring & in_mPropertyTypeName,
                                                                                                       const GALGAS_propertyKindAST & in_mPropertyKind,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_structurePropertyListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mPropertyName = in_mPropertyName ;
  result.mProperty_mPropertyAttributeList = in_mPropertyAttributeList ;
  result.mProperty_mVisibility = in_mVisibility ;
  result.mProperty_mPropertyTypeName = in_mPropertyTypeName ;
  result.mProperty_mPropertyKind = in_mPropertyKind ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_structurePropertyListAST_2D_element::isValid (void) const {
  return mProperty_mPropertyName.isValid () && mProperty_mPropertyAttributeList.isValid () && mProperty_mVisibility.isValid () && mProperty_mPropertyTypeName.isValid () && mProperty_mPropertyKind.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_structurePropertyListAST_2D_element::drop (void) {
  mProperty_mPropertyName.drop () ;
  mProperty_mPropertyAttributeList.drop () ;
  mProperty_mVisibility.drop () ;
  mProperty_mPropertyTypeName.drop () ;
  mProperty_mPropertyKind.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_structurePropertyListAST_2D_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @structurePropertyListAST-element:") ;
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
//     @structurePropertyListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structurePropertyListAST_2D_element ("structurePropertyListAST-element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_structurePropertyListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structurePropertyListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_structurePropertyListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structurePropertyListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_structurePropertyListAST_2D_element GALGAS_structurePropertyListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_structurePropertyListAST_2D_element result ;
  const GALGAS_structurePropertyListAST_2D_element * p = (const GALGAS_structurePropertyListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_structurePropertyListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structurePropertyListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @structureAssignmentOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

cPtr_structureAssignmentOperatorUsage::cPtr_structureAssignmentOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractAssignmentOperatorUsage (inCompiler COMMA_THERE),
mProperty_mStructureType () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_structureAssignmentOperatorUsage::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractAssignmentOperatorUsage::printNonNullClassInstanceProperties () ;
    mProperty_mStructureType.printNonNullClassInstanceProperties ("mStructureType") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_structureAssignmentOperatorUsage::objectCompare (const GALGAS_structureAssignmentOperatorUsage & inOperand) const {
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

GALGAS_structureAssignmentOperatorUsage::GALGAS_structureAssignmentOperatorUsage (void) :
GALGAS_abstractAssignmentOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_structureAssignmentOperatorUsage GALGAS_structureAssignmentOperatorUsage::
init_21_ (const GALGAS_omnibusType & in_mStructureType,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_structureAssignmentOperatorUsage * object = nullptr ;
  macroMyNew (object, cPtr_structureAssignmentOperatorUsage (inCompiler COMMA_THERE)) ;
  object->structureAssignmentOperatorUsage_init_21_ (in_mStructureType, inCompiler) ;
  const GALGAS_structureAssignmentOperatorUsage result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_structureAssignmentOperatorUsage::
structureAssignmentOperatorUsage_init_21_ (const GALGAS_omnibusType & in_mStructureType,
                                           Compiler * /* inCompiler */) {
  mProperty_mStructureType = in_mStructureType ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_structureAssignmentOperatorUsage::GALGAS_structureAssignmentOperatorUsage (const cPtr_structureAssignmentOperatorUsage * inSourcePtr) :
GALGAS_abstractAssignmentOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structureAssignmentOperatorUsage) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_structureAssignmentOperatorUsage GALGAS_structureAssignmentOperatorUsage::class_func_new (const GALGAS_omnibusType & in_mStructureType
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_structureAssignmentOperatorUsage result ;
  macroMyNew (result.mObjectPtr, cPtr_structureAssignmentOperatorUsage (in_mStructureType COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_structureAssignmentOperatorUsage::readProperty_mStructureType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_structureAssignmentOperatorUsage * p = (cPtr_structureAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureAssignmentOperatorUsage) ;
    return p->mProperty_mStructureType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_structureAssignmentOperatorUsage::setProperty_mStructureType (const GALGAS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_structureAssignmentOperatorUsage * p = (cPtr_structureAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureAssignmentOperatorUsage) ;
    p->mProperty_mStructureType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @structureAssignmentOperatorUsage class
//--------------------------------------------------------------------------------------------------

cPtr_structureAssignmentOperatorUsage::cPtr_structureAssignmentOperatorUsage (const GALGAS_omnibusType & in_mStructureType
                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractAssignmentOperatorUsage (THERE),
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

acPtr_class * cPtr_structureAssignmentOperatorUsage::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_structureAssignmentOperatorUsage (mProperty_mStructureType COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @structureAssignmentOperatorUsage generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structureAssignmentOperatorUsage ("structureAssignmentOperatorUsage",
                                                                                        & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_structureAssignmentOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structureAssignmentOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_structureAssignmentOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structureAssignmentOperatorUsage (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_structureAssignmentOperatorUsage GALGAS_structureAssignmentOperatorUsage::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_structureAssignmentOperatorUsage result ;
  const GALGAS_structureAssignmentOperatorUsage * p = (const GALGAS_structureAssignmentOperatorUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_structureAssignmentOperatorUsage *> (p)) {
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

cPtr_structureTypeAssignFunctionIR::cPtr_structureTypeAssignFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mStructureType () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_structureTypeAssignFunctionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mStructureType.printNonNullClassInstanceProperties ("mStructureType") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_structureTypeAssignFunctionIR::objectCompare (const GALGAS_structureTypeAssignFunctionIR & inOperand) const {
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

GALGAS_structureTypeAssignFunctionIR::GALGAS_structureTypeAssignFunctionIR (void) :
GALGAS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_structureTypeAssignFunctionIR GALGAS_structureTypeAssignFunctionIR::
init_21__21_isRequired_21_warnsIfUnused_21_ (const GALGAS_lstring & in_mRoutineMangledName,
                                             const GALGAS_bool & in_isRequired,
                                             const GALGAS_bool & in_warnsIfUnused,
                                             const GALGAS_omnibusType & in_mStructureType,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cPtr_structureTypeAssignFunctionIR * object = nullptr ;
  macroMyNew (object, cPtr_structureTypeAssignFunctionIR (inCompiler COMMA_THERE)) ;
  object->structureTypeAssignFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mStructureType, inCompiler) ;
  const GALGAS_structureTypeAssignFunctionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_structureTypeAssignFunctionIR::
structureTypeAssignFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21_ (const GALGAS_lstring & in_mRoutineMangledName,
                                                                           const GALGAS_bool & in_isRequired,
                                                                           const GALGAS_bool & in_warnsIfUnused,
                                                                           const GALGAS_omnibusType & in_mStructureType,
                                                                           Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mStructureType = in_mStructureType ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_structureTypeAssignFunctionIR::GALGAS_structureTypeAssignFunctionIR (const cPtr_structureTypeAssignFunctionIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structureTypeAssignFunctionIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_structureTypeAssignFunctionIR GALGAS_structureTypeAssignFunctionIR::class_func_new (const GALGAS_lstring & in_mRoutineMangledName,
                                                                                           const GALGAS_bool & in_isRequired,
                                                                                           const GALGAS_bool & in_warnsIfUnused,
                                                                                           const GALGAS_omnibusType & in_mStructureType
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_structureTypeAssignFunctionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_structureTypeAssignFunctionIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mStructureType COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_structureTypeAssignFunctionIR::readProperty_mStructureType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_structureTypeAssignFunctionIR * p = (cPtr_structureTypeAssignFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureTypeAssignFunctionIR) ;
    return p->mProperty_mStructureType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_structureTypeAssignFunctionIR::setProperty_mStructureType (const GALGAS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_structureTypeAssignFunctionIR * p = (cPtr_structureTypeAssignFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureTypeAssignFunctionIR) ;
    p->mProperty_mStructureType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @structureTypeAssignFunctionIR class
//--------------------------------------------------------------------------------------------------

cPtr_structureTypeAssignFunctionIR::cPtr_structureTypeAssignFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                                        const GALGAS_bool & in_isRequired,
                                                                        const GALGAS_bool & in_warnsIfUnused,
                                                                        const GALGAS_omnibusType & in_mStructureType
                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
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

acPtr_class * cPtr_structureTypeAssignFunctionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_structureTypeAssignFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mStructureType COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @structureTypeAssignFunctionIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structureTypeAssignFunctionIR ("structureTypeAssignFunctionIR",
                                                                                     & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_structureTypeAssignFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structureTypeAssignFunctionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_structureTypeAssignFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structureTypeAssignFunctionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_structureTypeAssignFunctionIR GALGAS_structureTypeAssignFunctionIR::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_structureTypeAssignFunctionIR result ;
  const GALGAS_structureTypeAssignFunctionIR * p = (const GALGAS_structureTypeAssignFunctionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_structureTypeAssignFunctionIR *> (p)) {
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

cPtr_syncDeclarationAST::cPtr_syncDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mSyncToolName (),
mProperty_mStructurePropertyListAST () {
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

ComparisonResult GALGAS_syncDeclarationAST::objectCompare (const GALGAS_syncDeclarationAST & inOperand) const {
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

GALGAS_syncDeclarationAST::GALGAS_syncDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_syncDeclarationAST GALGAS_syncDeclarationAST::
init_21__21_ (const GALGAS_lstring & in_mSyncToolName,
              const GALGAS_structurePropertyListAST & in_mStructurePropertyListAST,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_syncDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_syncDeclarationAST (inCompiler COMMA_THERE)) ;
  object->syncDeclarationAST_init_21__21_ (in_mSyncToolName, in_mStructurePropertyListAST, inCompiler) ;
  const GALGAS_syncDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_syncDeclarationAST::
syncDeclarationAST_init_21__21_ (const GALGAS_lstring & in_mSyncToolName,
                                 const GALGAS_structurePropertyListAST & in_mStructurePropertyListAST,
                                 Compiler * /* inCompiler */) {
  mProperty_mSyncToolName = in_mSyncToolName ;
  mProperty_mStructurePropertyListAST = in_mStructurePropertyListAST ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncDeclarationAST::GALGAS_syncDeclarationAST (const cPtr_syncDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syncDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_syncDeclarationAST GALGAS_syncDeclarationAST::class_func_new (const GALGAS_lstring & in_mSyncToolName,
                                                                     const GALGAS_structurePropertyListAST & in_mStructurePropertyListAST
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_syncDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_syncDeclarationAST (in_mSyncToolName, in_mStructurePropertyListAST COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_syncDeclarationAST::readProperty_mSyncToolName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_syncDeclarationAST * p = (cPtr_syncDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncDeclarationAST) ;
    return p->mProperty_mSyncToolName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncDeclarationAST::setProperty_mSyncToolName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_syncDeclarationAST * p = (cPtr_syncDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncDeclarationAST) ;
    p->mProperty_mSyncToolName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_structurePropertyListAST GALGAS_syncDeclarationAST::readProperty_mStructurePropertyListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_structurePropertyListAST () ;
  }else{
    cPtr_syncDeclarationAST * p = (cPtr_syncDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncDeclarationAST) ;
    return p->mProperty_mStructurePropertyListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncDeclarationAST::setProperty_mStructurePropertyListAST (const GALGAS_structurePropertyListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_syncDeclarationAST * p = (cPtr_syncDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncDeclarationAST) ;
    p->mProperty_mStructurePropertyListAST = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @syncDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_syncDeclarationAST::cPtr_syncDeclarationAST (const GALGAS_lstring & in_mSyncToolName,
                                                  const GALGAS_structurePropertyListAST & in_mStructurePropertyListAST
                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
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

acPtr_class * cPtr_syncDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_syncDeclarationAST (mProperty_mSyncToolName, mProperty_mStructurePropertyListAST COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @syncDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syncDeclarationAST ("syncDeclarationAST",
                                                                          & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syncDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syncDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syncDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncDeclarationAST GALGAS_syncDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_syncDeclarationAST result ;
  const GALGAS_syncDeclarationAST * p = (const GALGAS_syncDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_syncDeclarationAST *> (p)) {
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

cPtr_integerBuiltinFunctionIR::cPtr_integerBuiltinFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mLLVMTypeName (),
mProperty_mIntrinsicName () {
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

ComparisonResult GALGAS_integerBuiltinFunctionIR::objectCompare (const GALGAS_integerBuiltinFunctionIR & inOperand) const {
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

GALGAS_integerBuiltinFunctionIR::GALGAS_integerBuiltinFunctionIR (void) :
GALGAS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_integerBuiltinFunctionIR GALGAS_integerBuiltinFunctionIR::
init_21__21_isRequired_21_warnsIfUnused_21__21_ (const GALGAS_lstring & in_mRoutineMangledName,
                                                 const GALGAS_bool & in_isRequired,
                                                 const GALGAS_bool & in_warnsIfUnused,
                                                 const GALGAS_string & in_mLLVMTypeName,
                                                 const GALGAS_string & in_mIntrinsicName,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cPtr_integerBuiltinFunctionIR * object = nullptr ;
  macroMyNew (object, cPtr_integerBuiltinFunctionIR (inCompiler COMMA_THERE)) ;
  object->integerBuiltinFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21__21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mLLVMTypeName, in_mIntrinsicName, inCompiler) ;
  const GALGAS_integerBuiltinFunctionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_integerBuiltinFunctionIR::
integerBuiltinFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21__21_ (const GALGAS_lstring & in_mRoutineMangledName,
                                                                          const GALGAS_bool & in_isRequired,
                                                                          const GALGAS_bool & in_warnsIfUnused,
                                                                          const GALGAS_string & in_mLLVMTypeName,
                                                                          const GALGAS_string & in_mIntrinsicName,
                                                                          Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mLLVMTypeName = in_mLLVMTypeName ;
  mProperty_mIntrinsicName = in_mIntrinsicName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_integerBuiltinFunctionIR::GALGAS_integerBuiltinFunctionIR (const cPtr_integerBuiltinFunctionIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_integerBuiltinFunctionIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_integerBuiltinFunctionIR GALGAS_integerBuiltinFunctionIR::class_func_new (const GALGAS_lstring & in_mRoutineMangledName,
                                                                                 const GALGAS_bool & in_isRequired,
                                                                                 const GALGAS_bool & in_warnsIfUnused,
                                                                                 const GALGAS_string & in_mLLVMTypeName,
                                                                                 const GALGAS_string & in_mIntrinsicName
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_integerBuiltinFunctionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_integerBuiltinFunctionIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mLLVMTypeName, in_mIntrinsicName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_integerBuiltinFunctionIR::readProperty_mLLVMTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_integerBuiltinFunctionIR * p = (cPtr_integerBuiltinFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerBuiltinFunctionIR) ;
    return p->mProperty_mLLVMTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_integerBuiltinFunctionIR::setProperty_mLLVMTypeName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_integerBuiltinFunctionIR * p = (cPtr_integerBuiltinFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerBuiltinFunctionIR) ;
    p->mProperty_mLLVMTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_integerBuiltinFunctionIR::readProperty_mIntrinsicName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_integerBuiltinFunctionIR * p = (cPtr_integerBuiltinFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerBuiltinFunctionIR) ;
    return p->mProperty_mIntrinsicName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_integerBuiltinFunctionIR::setProperty_mIntrinsicName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_integerBuiltinFunctionIR * p = (cPtr_integerBuiltinFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerBuiltinFunctionIR) ;
    p->mProperty_mIntrinsicName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @integerBuiltinFunctionIR class
//--------------------------------------------------------------------------------------------------

cPtr_integerBuiltinFunctionIR::cPtr_integerBuiltinFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                              const GALGAS_bool & in_isRequired,
                                                              const GALGAS_bool & in_warnsIfUnused,
                                                              const GALGAS_string & in_mLLVMTypeName,
                                                              const GALGAS_string & in_mIntrinsicName
                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
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

acPtr_class * cPtr_integerBuiltinFunctionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_integerBuiltinFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mLLVMTypeName, mProperty_mIntrinsicName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @integerBuiltinFunctionIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_integerBuiltinFunctionIR ("integerBuiltinFunctionIR",
                                                                                & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_integerBuiltinFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerBuiltinFunctionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_integerBuiltinFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_integerBuiltinFunctionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_integerBuiltinFunctionIR GALGAS_integerBuiltinFunctionIR::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_integerBuiltinFunctionIR result ;
  const GALGAS_integerBuiltinFunctionIR * p = (const GALGAS_integerBuiltinFunctionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_integerBuiltinFunctionIR *> (p)) {
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

cPtr_typeOpaqueDeclarationAST::cPtr_typeOpaqueDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mOpaqueTypeName (),
mProperty_mSizeExpression (),
mProperty_mSizeExpressionLocation (),
mProperty_mAttributeList () {
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

ComparisonResult GALGAS_typeOpaqueDeclarationAST::objectCompare (const GALGAS_typeOpaqueDeclarationAST & inOperand) const {
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

GALGAS_typeOpaqueDeclarationAST::GALGAS_typeOpaqueDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_typeOpaqueDeclarationAST GALGAS_typeOpaqueDeclarationAST::
init_21__21__21__21_ (const GALGAS_lstring & in_mOpaqueTypeName,
                      const GALGAS_expressionAST & in_mSizeExpression,
                      const GALGAS_location & in_mSizeExpressionLocation,
                      const GALGAS_lstringlist & in_mAttributeList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_typeOpaqueDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_typeOpaqueDeclarationAST (inCompiler COMMA_THERE)) ;
  object->typeOpaqueDeclarationAST_init_21__21__21__21_ (in_mOpaqueTypeName, in_mSizeExpression, in_mSizeExpressionLocation, in_mAttributeList, inCompiler) ;
  const GALGAS_typeOpaqueDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_typeOpaqueDeclarationAST::
typeOpaqueDeclarationAST_init_21__21__21__21_ (const GALGAS_lstring & in_mOpaqueTypeName,
                                               const GALGAS_expressionAST & in_mSizeExpression,
                                               const GALGAS_location & in_mSizeExpressionLocation,
                                               const GALGAS_lstringlist & in_mAttributeList,
                                               Compiler * /* inCompiler */) {
  mProperty_mOpaqueTypeName = in_mOpaqueTypeName ;
  mProperty_mSizeExpression = in_mSizeExpression ;
  mProperty_mSizeExpressionLocation = in_mSizeExpressionLocation ;
  mProperty_mAttributeList = in_mAttributeList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeOpaqueDeclarationAST::GALGAS_typeOpaqueDeclarationAST (const cPtr_typeOpaqueDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typeOpaqueDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_typeOpaqueDeclarationAST GALGAS_typeOpaqueDeclarationAST::class_func_new (const GALGAS_lstring & in_mOpaqueTypeName,
                                                                                 const GALGAS_expressionAST & in_mSizeExpression,
                                                                                 const GALGAS_location & in_mSizeExpressionLocation,
                                                                                 const GALGAS_lstringlist & in_mAttributeList
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_typeOpaqueDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_typeOpaqueDeclarationAST (in_mOpaqueTypeName, in_mSizeExpression, in_mSizeExpressionLocation, in_mAttributeList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_typeOpaqueDeclarationAST::readProperty_mOpaqueTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_typeOpaqueDeclarationAST * p = (cPtr_typeOpaqueDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeOpaqueDeclarationAST) ;
    return p->mProperty_mOpaqueTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeOpaqueDeclarationAST::setProperty_mOpaqueTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_typeOpaqueDeclarationAST * p = (cPtr_typeOpaqueDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeOpaqueDeclarationAST) ;
    p->mProperty_mOpaqueTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_typeOpaqueDeclarationAST::readProperty_mSizeExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_typeOpaqueDeclarationAST * p = (cPtr_typeOpaqueDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeOpaqueDeclarationAST) ;
    return p->mProperty_mSizeExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeOpaqueDeclarationAST::setProperty_mSizeExpression (const GALGAS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_typeOpaqueDeclarationAST * p = (cPtr_typeOpaqueDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeOpaqueDeclarationAST) ;
    p->mProperty_mSizeExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_typeOpaqueDeclarationAST::readProperty_mSizeExpressionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_typeOpaqueDeclarationAST * p = (cPtr_typeOpaqueDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeOpaqueDeclarationAST) ;
    return p->mProperty_mSizeExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeOpaqueDeclarationAST::setProperty_mSizeExpressionLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_typeOpaqueDeclarationAST * p = (cPtr_typeOpaqueDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeOpaqueDeclarationAST) ;
    p->mProperty_mSizeExpressionLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_typeOpaqueDeclarationAST::readProperty_mAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_typeOpaqueDeclarationAST * p = (cPtr_typeOpaqueDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeOpaqueDeclarationAST) ;
    return p->mProperty_mAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeOpaqueDeclarationAST::setProperty_mAttributeList (const GALGAS_lstringlist & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_typeOpaqueDeclarationAST * p = (cPtr_typeOpaqueDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeOpaqueDeclarationAST) ;
    p->mProperty_mAttributeList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @typeOpaqueDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_typeOpaqueDeclarationAST::cPtr_typeOpaqueDeclarationAST (const GALGAS_lstring & in_mOpaqueTypeName,
                                                              const GALGAS_expressionAST & in_mSizeExpression,
                                                              const GALGAS_location & in_mSizeExpressionLocation,
                                                              const GALGAS_lstringlist & in_mAttributeList
                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
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

acPtr_class * cPtr_typeOpaqueDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_typeOpaqueDeclarationAST (mProperty_mOpaqueTypeName, mProperty_mSizeExpression, mProperty_mSizeExpressionLocation, mProperty_mAttributeList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @typeOpaqueDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeOpaqueDeclarationAST ("typeOpaqueDeclarationAST",
                                                                                & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeOpaqueDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeOpaqueDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeOpaqueDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeOpaqueDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeOpaqueDeclarationAST GALGAS_typeOpaqueDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_typeOpaqueDeclarationAST result ;
  const GALGAS_typeOpaqueDeclarationAST * p = (const GALGAS_typeOpaqueDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typeOpaqueDeclarationAST *> (p)) {
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

void cPtr_typeOpaqueDeclarationAST::method_noteTypesInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_typeOpaqueDeclarationAST temp_0 = this ;
  ioArgument_ioGraph.setter_noteNode (temp_0.readProperty_mOpaqueTypeName () COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 50)) ;
  }
  const GALGAS_typeOpaqueDeclarationAST temp_1 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_1.readProperty_mSizeExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 51)) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_noteTypesInPrecedenceGraph (cPtr_typeOpaqueDeclarationAST * inObject,
                                                     GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_typeOpaqueDeclarationAST) ;
    inObject->method_noteTypesInPrecedenceGraph  (io_ioGraph, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterDeclarationList_2D_element::GALGAS_controlRegisterDeclarationList_2D_element (void) :
mProperty_mRegisterArrayList (),
mProperty_mRegisterTypeName (),
mProperty_mRegisterBitSliceList (),
mProperty_mRegisterBitSliceListLocation () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterDeclarationList_2D_element::~ GALGAS_controlRegisterDeclarationList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_controlRegisterDeclarationList_2D_element GALGAS_controlRegisterDeclarationList_2D_element::init_21__21__21__21_ (const GALGAS_controlRegisterNameListAST & in_mRegisterArrayList,
                                                                                                                         const GALGAS_lstring & in_mRegisterTypeName,
                                                                                                                         const GALGAS_controlRegisterBitSliceList & in_mRegisterBitSliceList,
                                                                                                                         const GALGAS_location & in_mRegisterBitSliceListLocation,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterDeclarationList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRegisterArrayList = in_mRegisterArrayList ;
  result.mProperty_mRegisterTypeName = in_mRegisterTypeName ;
  result.mProperty_mRegisterBitSliceList = in_mRegisterBitSliceList ;
  result.mProperty_mRegisterBitSliceListLocation = in_mRegisterBitSliceListLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterDeclarationList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterDeclarationList_2D_element::GALGAS_controlRegisterDeclarationList_2D_element (const GALGAS_controlRegisterNameListAST & inOperand0,
                                                                                                    const GALGAS_lstring & inOperand1,
                                                                                                    const GALGAS_controlRegisterBitSliceList & inOperand2,
                                                                                                    const GALGAS_location & inOperand3) :
mProperty_mRegisterArrayList (inOperand0),
mProperty_mRegisterTypeName (inOperand1),
mProperty_mRegisterBitSliceList (inOperand2),
mProperty_mRegisterBitSliceListLocation (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterDeclarationList_2D_element GALGAS_controlRegisterDeclarationList_2D_element::class_func_new (const GALGAS_controlRegisterNameListAST & in_mRegisterArrayList,
                                                                                                                   const GALGAS_lstring & in_mRegisterTypeName,
                                                                                                                   const GALGAS_controlRegisterBitSliceList & in_mRegisterBitSliceList,
                                                                                                                   const GALGAS_location & in_mRegisterBitSliceListLocation,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterDeclarationList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRegisterArrayList = in_mRegisterArrayList ;
  result.mProperty_mRegisterTypeName = in_mRegisterTypeName ;
  result.mProperty_mRegisterBitSliceList = in_mRegisterBitSliceList ;
  result.mProperty_mRegisterBitSliceListLocation = in_mRegisterBitSliceListLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_controlRegisterDeclarationList_2D_element::isValid (void) const {
  return mProperty_mRegisterArrayList.isValid () && mProperty_mRegisterTypeName.isValid () && mProperty_mRegisterBitSliceList.isValid () && mProperty_mRegisterBitSliceListLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterDeclarationList_2D_element::drop (void) {
  mProperty_mRegisterArrayList.drop () ;
  mProperty_mRegisterTypeName.drop () ;
  mProperty_mRegisterBitSliceList.drop () ;
  mProperty_mRegisterBitSliceListLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterDeclarationList_2D_element::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @controlRegisterDeclarationList-element:") ;
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
//     @controlRegisterDeclarationList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterDeclarationList_2D_element ("controlRegisterDeclarationList-element",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterDeclarationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterDeclarationList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterDeclarationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterDeclarationList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterDeclarationList_2D_element GALGAS_controlRegisterDeclarationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterDeclarationList_2D_element result ;
  const GALGAS_controlRegisterDeclarationList_2D_element * p = (const GALGAS_controlRegisterDeclarationList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controlRegisterDeclarationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterDeclarationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @decoratedControlRegisterArrayGroupDeclaration reference class
//--------------------------------------------------------------------------------------------------

cPtr_decoratedControlRegisterArrayGroupDeclaration::cPtr_decoratedControlRegisterArrayGroupDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (inCompiler COMMA_THERE),
mProperty_mGroupName (),
mProperty_mBaseAddresses () {
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

ComparisonResult GALGAS_decoratedControlRegisterArrayGroupDeclaration::objectCompare (const GALGAS_decoratedControlRegisterArrayGroupDeclaration & inOperand) const {
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

GALGAS_decoratedControlRegisterArrayGroupDeclaration::GALGAS_decoratedControlRegisterArrayGroupDeclaration (void) :
GALGAS_abstractDecoratedDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_decoratedControlRegisterArrayGroupDeclaration GALGAS_decoratedControlRegisterArrayGroupDeclaration::
init_21__21_ (const GALGAS_lstring & in_mGroupName,
              const GALGAS_lbigintlist & in_mBaseAddresses,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_decoratedControlRegisterArrayGroupDeclaration * object = nullptr ;
  macroMyNew (object, cPtr_decoratedControlRegisterArrayGroupDeclaration (inCompiler COMMA_THERE)) ;
  object->decoratedControlRegisterArrayGroupDeclaration_init_21__21_ (in_mGroupName, in_mBaseAddresses, inCompiler) ;
  const GALGAS_decoratedControlRegisterArrayGroupDeclaration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_decoratedControlRegisterArrayGroupDeclaration::
decoratedControlRegisterArrayGroupDeclaration_init_21__21_ (const GALGAS_lstring & in_mGroupName,
                                                            const GALGAS_lbigintlist & in_mBaseAddresses,
                                                            Compiler * /* inCompiler */) {
  mProperty_mGroupName = in_mGroupName ;
  mProperty_mBaseAddresses = in_mBaseAddresses ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedControlRegisterArrayGroupDeclaration::GALGAS_decoratedControlRegisterArrayGroupDeclaration (const cPtr_decoratedControlRegisterArrayGroupDeclaration * inSourcePtr) :
GALGAS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedControlRegisterArrayGroupDeclaration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_decoratedControlRegisterArrayGroupDeclaration GALGAS_decoratedControlRegisterArrayGroupDeclaration::class_func_new (const GALGAS_lstring & in_mGroupName,
                                                                                                                           const GALGAS_lbigintlist & in_mBaseAddresses
                                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_decoratedControlRegisterArrayGroupDeclaration result ;
  macroMyNew (result.mObjectPtr, cPtr_decoratedControlRegisterArrayGroupDeclaration (in_mGroupName, in_mBaseAddresses COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_decoratedControlRegisterArrayGroupDeclaration::readProperty_mGroupName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_decoratedControlRegisterArrayGroupDeclaration * p = (cPtr_decoratedControlRegisterArrayGroupDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedControlRegisterArrayGroupDeclaration) ;
    return p->mProperty_mGroupName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedControlRegisterArrayGroupDeclaration::setProperty_mGroupName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedControlRegisterArrayGroupDeclaration * p = (cPtr_decoratedControlRegisterArrayGroupDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedControlRegisterArrayGroupDeclaration) ;
    p->mProperty_mGroupName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lbigintlist GALGAS_decoratedControlRegisterArrayGroupDeclaration::readProperty_mBaseAddresses (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lbigintlist () ;
  }else{
    cPtr_decoratedControlRegisterArrayGroupDeclaration * p = (cPtr_decoratedControlRegisterArrayGroupDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedControlRegisterArrayGroupDeclaration) ;
    return p->mProperty_mBaseAddresses ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedControlRegisterArrayGroupDeclaration::setProperty_mBaseAddresses (const GALGAS_lbigintlist & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedControlRegisterArrayGroupDeclaration * p = (cPtr_decoratedControlRegisterArrayGroupDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedControlRegisterArrayGroupDeclaration) ;
    p->mProperty_mBaseAddresses = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @decoratedControlRegisterArrayGroupDeclaration class
//--------------------------------------------------------------------------------------------------

cPtr_decoratedControlRegisterArrayGroupDeclaration::cPtr_decoratedControlRegisterArrayGroupDeclaration (const GALGAS_lstring & in_mGroupName,
                                                                                                        const GALGAS_lbigintlist & in_mBaseAddresses
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (THERE),
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

acPtr_class * cPtr_decoratedControlRegisterArrayGroupDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_decoratedControlRegisterArrayGroupDeclaration (mProperty_mGroupName, mProperty_mBaseAddresses COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @decoratedControlRegisterArrayGroupDeclaration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedControlRegisterArrayGroupDeclaration ("decoratedControlRegisterArrayGroupDeclaration",
                                                                                                     & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedControlRegisterArrayGroupDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedControlRegisterArrayGroupDeclaration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedControlRegisterArrayGroupDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedControlRegisterArrayGroupDeclaration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedControlRegisterArrayGroupDeclaration GALGAS_decoratedControlRegisterArrayGroupDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_decoratedControlRegisterArrayGroupDeclaration result ;
  const GALGAS_decoratedControlRegisterArrayGroupDeclaration * p = (const GALGAS_decoratedControlRegisterArrayGroupDeclaration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_decoratedControlRegisterArrayGroupDeclaration *> (p)) {
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

void extensionMethod_generateLLVMcode (const GALGAS_controlRegisterGroupArrayList inObject,
                                       GALGAS_string & ioArgument_ioLLVMcode,
                                       const GALGAS_uint constinArgument_inPointerSize,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_controlRegisterGroupArrayList temp_1 = inObject ;
    test_0 = GALGAS_bool (ComparisonKind::greaterThan, temp_1.getter_count (SOURCE_FILE ("declaration-control-register.galgas", 674)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Control Register Group Arraies"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 675)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 675)) ;
      GALGAS_string var_int_28177 = GALGAS_string ("i").add_operation (constinArgument_inPointerSize.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 676)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 676)) ;
      const GALGAS_controlRegisterGroupArrayList temp_2 = inObject ;
      cEnumerator_controlRegisterGroupArrayList enumerator_28222 (temp_2, EnumerationOrder::up) ;
      while (enumerator_28222.hasCurrentObject ()) {
        ioArgument_ioLLVMcode.plusAssign_operation(function_registerGroupAddressArrayLLVMname (enumerator_28222.current_mGroupName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 678)).add_operation (GALGAS_string (" = private unnamed_addr constant ["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 678)).add_operation (enumerator_28222.current_mBaseAddresses (HERE).getter_count (SOURCE_FILE ("declaration-control-register.galgas", 679)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 679)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 679)).add_operation (GALGAS_string (" x "), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 679)).add_operation (var_int_28177, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 679)).add_operation (GALGAS_string ("] ["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 679)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 678)) ;
        cEnumerator_lbigintlist enumerator_28428 (enumerator_28222.current_mBaseAddresses (HERE), EnumerationOrder::up) ;
        while (enumerator_28428.hasCurrentObject ()) {
          ioArgument_ioLLVMcode.plusAssign_operation(var_int_28177.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 682)).add_operation (enumerator_28428.current_mValue (HERE).readProperty_bigint ().getter_string (SOURCE_FILE ("declaration-control-register.galgas", 682)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 682)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 682)) ;
          if (enumerator_28428.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 684)) ;
          }
          enumerator_28428.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("] ; "), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 686)) ;
        cEnumerator_lbigintlist enumerator_28604 (enumerator_28222.current_mBaseAddresses (HERE), EnumerationOrder::up) ;
        while (enumerator_28604.hasCurrentObject ()) {
          ioArgument_ioLLVMcode.plusAssign_operation(enumerator_28604.current_mValue (HERE).readProperty_bigint ().getter_hexString (SOURCE_FILE ("declaration-control-register.galgas", 689)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 689)) ;
          if (enumerator_28604.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 691)) ;
          }
          enumerator_28604.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 693)) ;
        enumerator_28222.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 695)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
// @globalConstantDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_globalConstantDeclarationAST::cPtr_globalConstantDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mConstantName (),
mProperty_mAttributeList (),
mProperty_mConstantTypeName (),
mProperty_mSourceExpression () {
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

ComparisonResult GALGAS_globalConstantDeclarationAST::objectCompare (const GALGAS_globalConstantDeclarationAST & inOperand) const {
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

GALGAS_globalConstantDeclarationAST::GALGAS_globalConstantDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_globalConstantDeclarationAST GALGAS_globalConstantDeclarationAST::
init_21__21__21__21_ (const GALGAS_lstring & in_mConstantName,
                      const GALGAS_lstringlist & in_mAttributeList,
                      const GALGAS_lstring & in_mConstantTypeName,
                      const GALGAS_expressionAST & in_mSourceExpression,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_globalConstantDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_globalConstantDeclarationAST (inCompiler COMMA_THERE)) ;
  object->globalConstantDeclarationAST_init_21__21__21__21_ (in_mConstantName, in_mAttributeList, in_mConstantTypeName, in_mSourceExpression, inCompiler) ;
  const GALGAS_globalConstantDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_globalConstantDeclarationAST::
globalConstantDeclarationAST_init_21__21__21__21_ (const GALGAS_lstring & in_mConstantName,
                                                   const GALGAS_lstringlist & in_mAttributeList,
                                                   const GALGAS_lstring & in_mConstantTypeName,
                                                   const GALGAS_expressionAST & in_mSourceExpression,
                                                   Compiler * /* inCompiler */) {
  mProperty_mConstantName = in_mConstantName ;
  mProperty_mAttributeList = in_mAttributeList ;
  mProperty_mConstantTypeName = in_mConstantTypeName ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalConstantDeclarationAST::GALGAS_globalConstantDeclarationAST (const cPtr_globalConstantDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_globalConstantDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_globalConstantDeclarationAST GALGAS_globalConstantDeclarationAST::class_func_new (const GALGAS_lstring & in_mConstantName,
                                                                                         const GALGAS_lstringlist & in_mAttributeList,
                                                                                         const GALGAS_lstring & in_mConstantTypeName,
                                                                                         const GALGAS_expressionAST & in_mSourceExpression
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_globalConstantDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_globalConstantDeclarationAST (in_mConstantName, in_mAttributeList, in_mConstantTypeName, in_mSourceExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_globalConstantDeclarationAST::readProperty_mConstantName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_globalConstantDeclarationAST * p = (cPtr_globalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_globalConstantDeclarationAST) ;
    return p->mProperty_mConstantName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalConstantDeclarationAST::setProperty_mConstantName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_globalConstantDeclarationAST * p = (cPtr_globalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_globalConstantDeclarationAST) ;
    p->mProperty_mConstantName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_globalConstantDeclarationAST::readProperty_mAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_globalConstantDeclarationAST * p = (cPtr_globalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_globalConstantDeclarationAST) ;
    return p->mProperty_mAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalConstantDeclarationAST::setProperty_mAttributeList (const GALGAS_lstringlist & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_globalConstantDeclarationAST * p = (cPtr_globalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_globalConstantDeclarationAST) ;
    p->mProperty_mAttributeList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_globalConstantDeclarationAST::readProperty_mConstantTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_globalConstantDeclarationAST * p = (cPtr_globalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_globalConstantDeclarationAST) ;
    return p->mProperty_mConstantTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalConstantDeclarationAST::setProperty_mConstantTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_globalConstantDeclarationAST * p = (cPtr_globalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_globalConstantDeclarationAST) ;
    p->mProperty_mConstantTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_globalConstantDeclarationAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_globalConstantDeclarationAST * p = (cPtr_globalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_globalConstantDeclarationAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalConstantDeclarationAST::setProperty_mSourceExpression (const GALGAS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_globalConstantDeclarationAST * p = (cPtr_globalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_globalConstantDeclarationAST) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @globalConstantDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_globalConstantDeclarationAST::cPtr_globalConstantDeclarationAST (const GALGAS_lstring & in_mConstantName,
                                                                      const GALGAS_lstringlist & in_mAttributeList,
                                                                      const GALGAS_lstring & in_mConstantTypeName,
                                                                      const GALGAS_expressionAST & in_mSourceExpression
                                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
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

acPtr_class * cPtr_globalConstantDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_globalConstantDeclarationAST (mProperty_mConstantName, mProperty_mAttributeList, mProperty_mConstantTypeName, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @globalConstantDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalConstantDeclarationAST ("globalConstantDeclarationAST",
                                                                                    & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_globalConstantDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalConstantDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_globalConstantDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalConstantDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalConstantDeclarationAST GALGAS_globalConstantDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_globalConstantDeclarationAST result ;
  const GALGAS_globalConstantDeclarationAST * p = (const GALGAS_globalConstantDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_globalConstantDeclarationAST *> (p)) {
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

cPtr_syncToolInstanceDeclarationAST::cPtr_syncToolInstanceDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mSyncTypeName (),
mProperty_mSyncInstanceName (),
mProperty_mSourceExpression () {
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

ComparisonResult GALGAS_syncToolInstanceDeclarationAST::objectCompare (const GALGAS_syncToolInstanceDeclarationAST & inOperand) const {
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

GALGAS_syncToolInstanceDeclarationAST::GALGAS_syncToolInstanceDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_syncToolInstanceDeclarationAST GALGAS_syncToolInstanceDeclarationAST::
init_21__21__21_ (const GALGAS_lstring & in_mSyncTypeName,
                  const GALGAS_lstring & in_mSyncInstanceName,
                  const GALGAS_expressionAST & in_mSourceExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_syncToolInstanceDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_syncToolInstanceDeclarationAST (inCompiler COMMA_THERE)) ;
  object->syncToolInstanceDeclarationAST_init_21__21__21_ (in_mSyncTypeName, in_mSyncInstanceName, in_mSourceExpression, inCompiler) ;
  const GALGAS_syncToolInstanceDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_syncToolInstanceDeclarationAST::
syncToolInstanceDeclarationAST_init_21__21__21_ (const GALGAS_lstring & in_mSyncTypeName,
                                                 const GALGAS_lstring & in_mSyncInstanceName,
                                                 const GALGAS_expressionAST & in_mSourceExpression,
                                                 Compiler * /* inCompiler */) {
  mProperty_mSyncTypeName = in_mSyncTypeName ;
  mProperty_mSyncInstanceName = in_mSyncInstanceName ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncToolInstanceDeclarationAST::GALGAS_syncToolInstanceDeclarationAST (const cPtr_syncToolInstanceDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syncToolInstanceDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_syncToolInstanceDeclarationAST GALGAS_syncToolInstanceDeclarationAST::class_func_new (const GALGAS_lstring & in_mSyncTypeName,
                                                                                             const GALGAS_lstring & in_mSyncInstanceName,
                                                                                             const GALGAS_expressionAST & in_mSourceExpression
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_syncToolInstanceDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_syncToolInstanceDeclarationAST (in_mSyncTypeName, in_mSyncInstanceName, in_mSourceExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_syncToolInstanceDeclarationAST::readProperty_mSyncTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_syncToolInstanceDeclarationAST * p = (cPtr_syncToolInstanceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncToolInstanceDeclarationAST) ;
    return p->mProperty_mSyncTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncToolInstanceDeclarationAST::setProperty_mSyncTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_syncToolInstanceDeclarationAST * p = (cPtr_syncToolInstanceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncToolInstanceDeclarationAST) ;
    p->mProperty_mSyncTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_syncToolInstanceDeclarationAST::readProperty_mSyncInstanceName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_syncToolInstanceDeclarationAST * p = (cPtr_syncToolInstanceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncToolInstanceDeclarationAST) ;
    return p->mProperty_mSyncInstanceName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncToolInstanceDeclarationAST::setProperty_mSyncInstanceName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_syncToolInstanceDeclarationAST * p = (cPtr_syncToolInstanceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncToolInstanceDeclarationAST) ;
    p->mProperty_mSyncInstanceName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_syncToolInstanceDeclarationAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_syncToolInstanceDeclarationAST * p = (cPtr_syncToolInstanceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncToolInstanceDeclarationAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncToolInstanceDeclarationAST::setProperty_mSourceExpression (const GALGAS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_syncToolInstanceDeclarationAST * p = (cPtr_syncToolInstanceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncToolInstanceDeclarationAST) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @syncToolInstanceDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_syncToolInstanceDeclarationAST::cPtr_syncToolInstanceDeclarationAST (const GALGAS_lstring & in_mSyncTypeName,
                                                                          const GALGAS_lstring & in_mSyncInstanceName,
                                                                          const GALGAS_expressionAST & in_mSourceExpression
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
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

acPtr_class * cPtr_syncToolInstanceDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_syncToolInstanceDeclarationAST (mProperty_mSyncTypeName, mProperty_mSyncInstanceName, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @syncToolInstanceDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST ("syncToolInstanceDeclarationAST",
                                                                                      & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syncToolInstanceDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syncToolInstanceDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syncToolInstanceDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncToolInstanceDeclarationAST GALGAS_syncToolInstanceDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_syncToolInstanceDeclarationAST result ;
  const GALGAS_syncToolInstanceDeclarationAST * p = (const GALGAS_syncToolInstanceDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_syncToolInstanceDeclarationAST *> (p)) {
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

cPtr_decoratedSyncInstance::cPtr_decoratedSyncInstance (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (inCompiler COMMA_THERE),
mProperty_mSyncInstanceName (),
mProperty_mExpressionGeneratedCode () {
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

ComparisonResult GALGAS_decoratedSyncInstance::objectCompare (const GALGAS_decoratedSyncInstance & inOperand) const {
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

GALGAS_decoratedSyncInstance::GALGAS_decoratedSyncInstance (void) :
GALGAS_abstractDecoratedDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_decoratedSyncInstance GALGAS_decoratedSyncInstance::
init_21__21_ (const GALGAS_lstring & in_mSyncInstanceName,
              const GALGAS_objectIR & in_mExpressionGeneratedCode,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_decoratedSyncInstance * object = nullptr ;
  macroMyNew (object, cPtr_decoratedSyncInstance (inCompiler COMMA_THERE)) ;
  object->decoratedSyncInstance_init_21__21_ (in_mSyncInstanceName, in_mExpressionGeneratedCode, inCompiler) ;
  const GALGAS_decoratedSyncInstance result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_decoratedSyncInstance::
decoratedSyncInstance_init_21__21_ (const GALGAS_lstring & in_mSyncInstanceName,
                                    const GALGAS_objectIR & in_mExpressionGeneratedCode,
                                    Compiler * /* inCompiler */) {
  mProperty_mSyncInstanceName = in_mSyncInstanceName ;
  mProperty_mExpressionGeneratedCode = in_mExpressionGeneratedCode ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedSyncInstance::GALGAS_decoratedSyncInstance (const cPtr_decoratedSyncInstance * inSourcePtr) :
GALGAS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedSyncInstance) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_decoratedSyncInstance GALGAS_decoratedSyncInstance::class_func_new (const GALGAS_lstring & in_mSyncInstanceName,
                                                                           const GALGAS_objectIR & in_mExpressionGeneratedCode
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_decoratedSyncInstance result ;
  macroMyNew (result.mObjectPtr, cPtr_decoratedSyncInstance (in_mSyncInstanceName, in_mExpressionGeneratedCode COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_decoratedSyncInstance::readProperty_mSyncInstanceName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_decoratedSyncInstance * p = (cPtr_decoratedSyncInstance *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedSyncInstance) ;
    return p->mProperty_mSyncInstanceName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedSyncInstance::setProperty_mSyncInstanceName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedSyncInstance * p = (cPtr_decoratedSyncInstance *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedSyncInstance) ;
    p->mProperty_mSyncInstanceName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_decoratedSyncInstance::readProperty_mExpressionGeneratedCode (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_decoratedSyncInstance * p = (cPtr_decoratedSyncInstance *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedSyncInstance) ;
    return p->mProperty_mExpressionGeneratedCode ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedSyncInstance::setProperty_mExpressionGeneratedCode (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedSyncInstance * p = (cPtr_decoratedSyncInstance *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedSyncInstance) ;
    p->mProperty_mExpressionGeneratedCode = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @decoratedSyncInstance class
//--------------------------------------------------------------------------------------------------

cPtr_decoratedSyncInstance::cPtr_decoratedSyncInstance (const GALGAS_lstring & in_mSyncInstanceName,
                                                        const GALGAS_objectIR & in_mExpressionGeneratedCode
                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (THERE),
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

acPtr_class * cPtr_decoratedSyncInstance::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_decoratedSyncInstance (mProperty_mSyncInstanceName, mProperty_mExpressionGeneratedCode COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @decoratedSyncInstance generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedSyncInstance ("decoratedSyncInstance",
                                                                             & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedSyncInstance::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedSyncInstance ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedSyncInstance::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedSyncInstance (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedSyncInstance GALGAS_decoratedSyncInstance::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_decoratedSyncInstance result ;
  const GALGAS_decoratedSyncInstance * p = (const GALGAS_decoratedSyncInstance *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_decoratedSyncInstance *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedSyncInstance", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMapIR_2D_element::GALGAS_globalSyncInstanceMapIR_2D_element (void) :
mProperty_lkey (),
mProperty_mInitialValue () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMapIR_2D_element::~ GALGAS_globalSyncInstanceMapIR_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_globalSyncInstanceMapIR_2D_element GALGAS_globalSyncInstanceMapIR_2D_element::init_21__21_ (const GALGAS_lstring & in_lkey,
                                                                                                   const GALGAS_objectIR & in_mInitialValue,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_globalSyncInstanceMapIR_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mInitialValue = in_mInitialValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalSyncInstanceMapIR_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMapIR_2D_element::GALGAS_globalSyncInstanceMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_objectIR & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mInitialValue (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMapIR_2D_element GALGAS_globalSyncInstanceMapIR_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                     const GALGAS_objectIR & in_mInitialValue,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_globalSyncInstanceMapIR_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mInitialValue = in_mInitialValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_globalSyncInstanceMapIR_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInitialValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalSyncInstanceMapIR_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mInitialValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalSyncInstanceMapIR_2D_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @globalSyncInstanceMapIR-element:") ;
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
//     @globalSyncInstanceMapIR-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalSyncInstanceMapIR_2D_element ("globalSyncInstanceMapIR-element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_globalSyncInstanceMapIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalSyncInstanceMapIR_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_globalSyncInstanceMapIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalSyncInstanceMapIR_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMapIR_2D_element GALGAS_globalSyncInstanceMapIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_globalSyncInstanceMapIR_2D_element result ;
  const GALGAS_globalSyncInstanceMapIR_2D_element * p = (const GALGAS_globalSyncInstanceMapIR_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_globalSyncInstanceMapIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalSyncInstanceMapIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationAST::~ GALGAS_driverDeclarationAST (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_driverDeclarationAST GALGAS_driverDeclarationAST::init_21__21__21__21__21__21__21__21__21_ (const GALGAS_lstring & in_mDriverName,
                                                                                                   const GALGAS_lstringlist & in_mDriverDependanceList,
                                                                                                   const GALGAS_structurePropertyListAST & in_mPropertyListAST,
                                                                                                   const GALGAS_location & in_mBootLocation,
                                                                                                   const GALGAS_instructionListAST & in_mBootInstructionList,
                                                                                                   const GALGAS_location & in_mBootEndLocation,
                                                                                                   const GALGAS_location & in_mStartupLocation,
                                                                                                   const GALGAS_instructionListAST & in_mStartupInstructionList,
                                                                                                   const GALGAS_location & in_mStartupEndLocation,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_driverDeclarationAST result ;
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

void GALGAS_driverDeclarationAST::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationAST GALGAS_driverDeclarationAST::class_func_new (const GALGAS_lstring & in_mDriverName,
                                                                         const GALGAS_lstringlist & in_mDriverDependanceList,
                                                                         const GALGAS_structurePropertyListAST & in_mPropertyListAST,
                                                                         const GALGAS_location & in_mBootLocation,
                                                                         const GALGAS_instructionListAST & in_mBootInstructionList,
                                                                         const GALGAS_location & in_mBootEndLocation,
                                                                         const GALGAS_location & in_mStartupLocation,
                                                                         const GALGAS_instructionListAST & in_mStartupInstructionList,
                                                                         const GALGAS_location & in_mStartupEndLocation,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_driverDeclarationAST result ;
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

bool GALGAS_driverDeclarationAST::isValid (void) const {
  return mProperty_mDriverName.isValid () && mProperty_mDriverDependanceList.isValid () && mProperty_mPropertyListAST.isValid () && mProperty_mBootLocation.isValid () && mProperty_mBootInstructionList.isValid () && mProperty_mBootEndLocation.isValid () && mProperty_mStartupLocation.isValid () && mProperty_mStartupInstructionList.isValid () && mProperty_mStartupEndLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

void GALGAS_driverDeclarationAST::description (String & ioString,
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

const C_galgas_type_descriptor * GALGAS_driverDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_driverDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_driverDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationAST GALGAS_driverDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_driverDeclarationAST result ;
  const GALGAS_driverDeclarationAST * p = (const GALGAS_driverDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_driverDeclarationAST *> (p)) {
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

ComparisonResult GALGAS_implementedDriverAST::objectCompare (const GALGAS_implementedDriverAST & inOperand) const {
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

GALGAS_implementedDriverAST::GALGAS_implementedDriverAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_implementedDriverAST GALGAS_implementedDriverAST::
init_21__21__21__21__21__21__21__21__21_ (const GALGAS_lstring & in_mDriverName,
                                          const GALGAS_lstringlist & in_mDriverDependanceList,
                                          const GALGAS_bool & in_mIsInstancied,
                                          const GALGAS_location & in_mBootLocation,
                                          const GALGAS_instructionListAST & in_mBootInstructionList,
                                          const GALGAS_location & in_mBootEndLocation,
                                          const GALGAS_location & in_mStartupLocation,
                                          const GALGAS_instructionListAST & in_mStartupInstructionList,
                                          const GALGAS_location & in_mStartupEndLocation,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cPtr_implementedDriverAST * object = nullptr ;
  macroMyNew (object, cPtr_implementedDriverAST (inCompiler COMMA_THERE)) ;
  object->implementedDriverAST_init_21__21__21__21__21__21__21__21__21_ (in_mDriverName, in_mDriverDependanceList, in_mIsInstancied, in_mBootLocation, in_mBootInstructionList, in_mBootEndLocation, in_mStartupLocation, in_mStartupInstructionList, in_mStartupEndLocation, inCompiler) ;
  const GALGAS_implementedDriverAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_implementedDriverAST::
implementedDriverAST_init_21__21__21__21__21__21__21__21__21_ (const GALGAS_lstring & in_mDriverName,
                                                               const GALGAS_lstringlist & in_mDriverDependanceList,
                                                               const GALGAS_bool & in_mIsInstancied,
                                                               const GALGAS_location & in_mBootLocation,
                                                               const GALGAS_instructionListAST & in_mBootInstructionList,
                                                               const GALGAS_location & in_mBootEndLocation,
                                                               const GALGAS_location & in_mStartupLocation,
                                                               const GALGAS_instructionListAST & in_mStartupInstructionList,
                                                               const GALGAS_location & in_mStartupEndLocation,
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

GALGAS_implementedDriverAST::GALGAS_implementedDriverAST (const cPtr_implementedDriverAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_implementedDriverAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_implementedDriverAST GALGAS_implementedDriverAST::class_func_new (const GALGAS_lstring & in_mDriverName,
                                                                         const GALGAS_lstringlist & in_mDriverDependanceList,
                                                                         const GALGAS_bool & in_mIsInstancied,
                                                                         const GALGAS_location & in_mBootLocation,
                                                                         const GALGAS_instructionListAST & in_mBootInstructionList,
                                                                         const GALGAS_location & in_mBootEndLocation,
                                                                         const GALGAS_location & in_mStartupLocation,
                                                                         const GALGAS_instructionListAST & in_mStartupInstructionList,
                                                                         const GALGAS_location & in_mStartupEndLocation
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_implementedDriverAST result ;
  macroMyNew (result.mObjectPtr, cPtr_implementedDriverAST (in_mDriverName, in_mDriverDependanceList, in_mIsInstancied, in_mBootLocation, in_mBootInstructionList, in_mBootEndLocation, in_mStartupLocation, in_mStartupInstructionList, in_mStartupEndLocation COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_implementedDriverAST::readProperty_mDriverName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    return p->mProperty_mDriverName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_implementedDriverAST::setProperty_mDriverName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    p->mProperty_mDriverName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_implementedDriverAST::readProperty_mDriverDependanceList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    return p->mProperty_mDriverDependanceList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_implementedDriverAST::setProperty_mDriverDependanceList (const GALGAS_lstringlist & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    p->mProperty_mDriverDependanceList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_implementedDriverAST::readProperty_mIsInstancied (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    return p->mProperty_mIsInstancied ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_implementedDriverAST::setProperty_mIsInstancied (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    p->mProperty_mIsInstancied = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_implementedDriverAST::readProperty_mBootLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    return p->mProperty_mBootLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_implementedDriverAST::setProperty_mBootLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    p->mProperty_mBootLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListAST GALGAS_implementedDriverAST::readProperty_mBootInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListAST () ;
  }else{
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    return p->mProperty_mBootInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_implementedDriverAST::setProperty_mBootInstructionList (const GALGAS_instructionListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    p->mProperty_mBootInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_implementedDriverAST::readProperty_mBootEndLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    return p->mProperty_mBootEndLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_implementedDriverAST::setProperty_mBootEndLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    p->mProperty_mBootEndLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_implementedDriverAST::readProperty_mStartupLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    return p->mProperty_mStartupLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_implementedDriverAST::setProperty_mStartupLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    p->mProperty_mStartupLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListAST GALGAS_implementedDriverAST::readProperty_mStartupInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListAST () ;
  }else{
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    return p->mProperty_mStartupInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_implementedDriverAST::setProperty_mStartupInstructionList (const GALGAS_instructionListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    p->mProperty_mStartupInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_implementedDriverAST::readProperty_mStartupEndLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    return p->mProperty_mStartupEndLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_implementedDriverAST::setProperty_mStartupEndLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementedDriverAST) ;
    p->mProperty_mStartupEndLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @implementedDriverAST class
//--------------------------------------------------------------------------------------------------

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

acPtr_class * cPtr_implementedDriverAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_implementedDriverAST (mProperty_mDriverName, mProperty_mDriverDependanceList, mProperty_mIsInstancied, mProperty_mBootLocation, mProperty_mBootInstructionList, mProperty_mBootEndLocation, mProperty_mStartupLocation, mProperty_mStartupInstructionList, mProperty_mStartupEndLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @implementedDriverAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_implementedDriverAST ("implementedDriverAST",
                                                                            & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_implementedDriverAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implementedDriverAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_implementedDriverAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_implementedDriverAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_implementedDriverAST GALGAS_implementedDriverAST::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_implementedDriverAST result ;
  const GALGAS_implementedDriverAST * p = (const GALGAS_implementedDriverAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_implementedDriverAST *> (p)) {
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

cPtr_decoratedRequiredDriver::cPtr_decoratedRequiredDriver (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (inCompiler COMMA_THERE),
mProperty_mDriverName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_decoratedRequiredDriver::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDecoratedDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_mDriverName.printNonNullClassInstanceProperties ("mDriverName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_decoratedRequiredDriver::objectCompare (const GALGAS_decoratedRequiredDriver & inOperand) const {
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

GALGAS_decoratedRequiredDriver::GALGAS_decoratedRequiredDriver (void) :
GALGAS_abstractDecoratedDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_decoratedRequiredDriver GALGAS_decoratedRequiredDriver::
init_21_ (const GALGAS_lstring & in_mDriverName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_decoratedRequiredDriver * object = nullptr ;
  macroMyNew (object, cPtr_decoratedRequiredDriver (inCompiler COMMA_THERE)) ;
  object->decoratedRequiredDriver_init_21_ (in_mDriverName, inCompiler) ;
  const GALGAS_decoratedRequiredDriver result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_decoratedRequiredDriver::
decoratedRequiredDriver_init_21_ (const GALGAS_lstring & in_mDriverName,
                                  Compiler * /* inCompiler */) {
  mProperty_mDriverName = in_mDriverName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedRequiredDriver::GALGAS_decoratedRequiredDriver (const cPtr_decoratedRequiredDriver * inSourcePtr) :
GALGAS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedRequiredDriver) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_decoratedRequiredDriver GALGAS_decoratedRequiredDriver::class_func_new (const GALGAS_lstring & in_mDriverName
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_decoratedRequiredDriver result ;
  macroMyNew (result.mObjectPtr, cPtr_decoratedRequiredDriver (in_mDriverName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_decoratedRequiredDriver::readProperty_mDriverName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_decoratedRequiredDriver * p = (cPtr_decoratedRequiredDriver *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedRequiredDriver) ;
    return p->mProperty_mDriverName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedRequiredDriver::setProperty_mDriverName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedRequiredDriver * p = (cPtr_decoratedRequiredDriver *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedRequiredDriver) ;
    p->mProperty_mDriverName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @decoratedRequiredDriver class
//--------------------------------------------------------------------------------------------------

cPtr_decoratedRequiredDriver::cPtr_decoratedRequiredDriver (const GALGAS_lstring & in_mDriverName
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (THERE),
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

acPtr_class * cPtr_decoratedRequiredDriver::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_decoratedRequiredDriver (mProperty_mDriverName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @decoratedRequiredDriver generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedRequiredDriver ("decoratedRequiredDriver",
                                                                               & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedRequiredDriver::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedRequiredDriver ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedRequiredDriver::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedRequiredDriver (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedRequiredDriver GALGAS_decoratedRequiredDriver::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_decoratedRequiredDriver result ;
  const GALGAS_decoratedRequiredDriver * p = (const GALGAS_decoratedRequiredDriver *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_decoratedRequiredDriver *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedRequiredDriver", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverListIR_2D_element::GALGAS_driverListIR_2D_element (void) :
mProperty_mDriverName (),
mProperty_mType (),
mProperty_mInitialValueList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverListIR_2D_element::~ GALGAS_driverListIR_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_driverListIR_2D_element GALGAS_driverListIR_2D_element::init_21__21__21_ (const GALGAS_lstring & in_mDriverName,
                                                                                 const GALGAS_omnibusType & in_mType,
                                                                                 const GALGAS_operandIRList & in_mInitialValueList,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_driverListIR_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDriverName = in_mDriverName ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mInitialValueList = in_mInitialValueList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverListIR_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverListIR_2D_element::GALGAS_driverListIR_2D_element (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_omnibusType & inOperand1,
                                                                const GALGAS_operandIRList & inOperand2) :
mProperty_mDriverName (inOperand0),
mProperty_mType (inOperand1),
mProperty_mInitialValueList (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverListIR_2D_element GALGAS_driverListIR_2D_element::class_func_new (const GALGAS_lstring & in_mDriverName,
                                                                               const GALGAS_omnibusType & in_mType,
                                                                               const GALGAS_operandIRList & in_mInitialValueList,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_driverListIR_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDriverName = in_mDriverName ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mInitialValueList = in_mInitialValueList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_driverListIR_2D_element::isValid (void) const {
  return mProperty_mDriverName.isValid () && mProperty_mType.isValid () && mProperty_mInitialValueList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverListIR_2D_element::drop (void) {
  mProperty_mDriverName.drop () ;
  mProperty_mType.drop () ;
  mProperty_mInitialValueList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverListIR_2D_element::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @driverListIR-element:") ;
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
//     @driverListIR-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_driverListIR_2D_element ("driverListIR-element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_driverListIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverListIR_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_driverListIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_driverListIR_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverListIR_2D_element GALGAS_driverListIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_driverListIR_2D_element result ;
  const GALGAS_driverListIR_2D_element * p = (const GALGAS_driverListIR_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_driverListIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverListIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @staticListAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_staticListAST::cPtr_staticListAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mStaticListName (),
mProperty_mPropertyList (),
mProperty_mValueList () {
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

ComparisonResult GALGAS_staticListAST::objectCompare (const GALGAS_staticListAST & inOperand) const {
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

GALGAS_staticListAST::GALGAS_staticListAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_staticListAST GALGAS_staticListAST::
init_21__21__21_ (const GALGAS_lstring & in_mStaticListName,
                  const GALGAS_staticListPropertyListAST & in_mPropertyList,
                  const GALGAS_staticListValueListAST & in_mValueList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_staticListAST * object = nullptr ;
  macroMyNew (object, cPtr_staticListAST (inCompiler COMMA_THERE)) ;
  object->staticListAST_init_21__21__21_ (in_mStaticListName, in_mPropertyList, in_mValueList, inCompiler) ;
  const GALGAS_staticListAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_staticListAST::
staticListAST_init_21__21__21_ (const GALGAS_lstring & in_mStaticListName,
                                const GALGAS_staticListPropertyListAST & in_mPropertyList,
                                const GALGAS_staticListValueListAST & in_mValueList,
                                Compiler * /* inCompiler */) {
  mProperty_mStaticListName = in_mStaticListName ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_mValueList = in_mValueList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListAST::GALGAS_staticListAST (const cPtr_staticListAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_staticListAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_staticListAST GALGAS_staticListAST::class_func_new (const GALGAS_lstring & in_mStaticListName,
                                                           const GALGAS_staticListPropertyListAST & in_mPropertyList,
                                                           const GALGAS_staticListValueListAST & in_mValueList
                                                           COMMA_LOCATION_ARGS) {
  GALGAS_staticListAST result ;
  macroMyNew (result.mObjectPtr, cPtr_staticListAST (in_mStaticListName, in_mPropertyList, in_mValueList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_staticListAST::readProperty_mStaticListName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_staticListAST * p = (cPtr_staticListAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListAST) ;
    return p->mProperty_mStaticListName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListAST::setProperty_mStaticListName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_staticListAST * p = (cPtr_staticListAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListAST) ;
    p->mProperty_mStaticListName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyListAST GALGAS_staticListAST::readProperty_mPropertyList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_staticListPropertyListAST () ;
  }else{
    cPtr_staticListAST * p = (cPtr_staticListAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListAST) ;
    return p->mProperty_mPropertyList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListAST::setProperty_mPropertyList (const GALGAS_staticListPropertyListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_staticListAST * p = (cPtr_staticListAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListAST) ;
    p->mProperty_mPropertyList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListValueListAST GALGAS_staticListAST::readProperty_mValueList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_staticListValueListAST () ;
  }else{
    cPtr_staticListAST * p = (cPtr_staticListAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListAST) ;
    return p->mProperty_mValueList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListAST::setProperty_mValueList (const GALGAS_staticListValueListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_staticListAST * p = (cPtr_staticListAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListAST) ;
    p->mProperty_mValueList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @staticListAST class
//--------------------------------------------------------------------------------------------------

cPtr_staticListAST::cPtr_staticListAST (const GALGAS_lstring & in_mStaticListName,
                                        const GALGAS_staticListPropertyListAST & in_mPropertyList,
                                        const GALGAS_staticListValueListAST & in_mValueList
                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
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

acPtr_class * cPtr_staticListAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_staticListAST (mProperty_mStaticListName, mProperty_mPropertyList, mProperty_mValueList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @staticListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListAST ("staticListAST",
                                                                     & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_staticListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_staticListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListAST GALGAS_staticListAST::extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_staticListAST result ;
  const GALGAS_staticListAST * p = (const GALGAS_staticListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_staticListAST *> (p)) {
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

cPtr_decoratedStaticList::cPtr_decoratedStaticList (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (inCompiler COMMA_THERE),
mProperty_mStaticListName (),
mProperty_mValueList () {
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

ComparisonResult GALGAS_decoratedStaticList::objectCompare (const GALGAS_decoratedStaticList & inOperand) const {
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

GALGAS_decoratedStaticList::GALGAS_decoratedStaticList (void) :
GALGAS_abstractDecoratedDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_decoratedStaticList GALGAS_decoratedStaticList::
init_21__21_ (const GALGAS_lstring & in_mStaticListName,
              const GALGAS_staticListValueListAST & in_mValueList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_decoratedStaticList * object = nullptr ;
  macroMyNew (object, cPtr_decoratedStaticList (inCompiler COMMA_THERE)) ;
  object->decoratedStaticList_init_21__21_ (in_mStaticListName, in_mValueList, inCompiler) ;
  const GALGAS_decoratedStaticList result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_decoratedStaticList::
decoratedStaticList_init_21__21_ (const GALGAS_lstring & in_mStaticListName,
                                  const GALGAS_staticListValueListAST & in_mValueList,
                                  Compiler * /* inCompiler */) {
  mProperty_mStaticListName = in_mStaticListName ;
  mProperty_mValueList = in_mValueList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedStaticList::GALGAS_decoratedStaticList (const cPtr_decoratedStaticList * inSourcePtr) :
GALGAS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedStaticList) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_decoratedStaticList GALGAS_decoratedStaticList::class_func_new (const GALGAS_lstring & in_mStaticListName,
                                                                       const GALGAS_staticListValueListAST & in_mValueList
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_decoratedStaticList result ;
  macroMyNew (result.mObjectPtr, cPtr_decoratedStaticList (in_mStaticListName, in_mValueList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_decoratedStaticList::readProperty_mStaticListName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_decoratedStaticList * p = (cPtr_decoratedStaticList *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedStaticList) ;
    return p->mProperty_mStaticListName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedStaticList::setProperty_mStaticListName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedStaticList * p = (cPtr_decoratedStaticList *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedStaticList) ;
    p->mProperty_mStaticListName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListValueListAST GALGAS_decoratedStaticList::readProperty_mValueList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_staticListValueListAST () ;
  }else{
    cPtr_decoratedStaticList * p = (cPtr_decoratedStaticList *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedStaticList) ;
    return p->mProperty_mValueList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedStaticList::setProperty_mValueList (const GALGAS_staticListValueListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedStaticList * p = (cPtr_decoratedStaticList *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedStaticList) ;
    p->mProperty_mValueList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @decoratedStaticList class
//--------------------------------------------------------------------------------------------------

cPtr_decoratedStaticList::cPtr_decoratedStaticList (const GALGAS_lstring & in_mStaticListName,
                                                    const GALGAS_staticListValueListAST & in_mValueList
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (THERE),
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

acPtr_class * cPtr_decoratedStaticList::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_decoratedStaticList (mProperty_mStaticListName, mProperty_mValueList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @decoratedStaticList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedStaticList ("decoratedStaticList",
                                                                           & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedStaticList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedStaticList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedStaticList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedStaticList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedStaticList GALGAS_decoratedStaticList::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_decoratedStaticList result ;
  const GALGAS_decoratedStaticList * p = (const GALGAS_decoratedStaticList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_decoratedStaticList *> (p)) {
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

cPtr_staticListIndirectRoutineIR::cPtr_staticListIndirectRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mStaticListElementType (),
mProperty_mFormalArgumentListForGeneration (),
mProperty_mReturnTypeProxy (),
mProperty_mPropertyIndex () {
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

ComparisonResult GALGAS_staticListIndirectRoutineIR::objectCompare (const GALGAS_staticListIndirectRoutineIR & inOperand) const {
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

GALGAS_staticListIndirectRoutineIR::GALGAS_staticListIndirectRoutineIR (void) :
GALGAS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_staticListIndirectRoutineIR GALGAS_staticListIndirectRoutineIR::
init_21__21_isRequired_21_warnsIfUnused_21__21__21__21_ (const GALGAS_lstring & in_mRoutineMangledName,
                                                         const GALGAS_bool & in_isRequired,
                                                         const GALGAS_bool & in_warnsIfUnused,
                                                         const GALGAS_unifiedTypeMapEntry & in_mStaticListElementType,
                                                         const GALGAS_routineTypedSignature & in_mFormalArgumentListForGeneration,
                                                         const GALGAS_unifiedTypeMapEntry & in_mReturnTypeProxy,
                                                         const GALGAS_uint & in_mPropertyIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cPtr_staticListIndirectRoutineIR * object = nullptr ;
  macroMyNew (object, cPtr_staticListIndirectRoutineIR (inCompiler COMMA_THERE)) ;
  object->staticListIndirectRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mStaticListElementType, in_mFormalArgumentListForGeneration, in_mReturnTypeProxy, in_mPropertyIndex, inCompiler) ;
  const GALGAS_staticListIndirectRoutineIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_staticListIndirectRoutineIR::
staticListIndirectRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21_ (const GALGAS_lstring & in_mRoutineMangledName,
                                                                                     const GALGAS_bool & in_isRequired,
                                                                                     const GALGAS_bool & in_warnsIfUnused,
                                                                                     const GALGAS_unifiedTypeMapEntry & in_mStaticListElementType,
                                                                                     const GALGAS_routineTypedSignature & in_mFormalArgumentListForGeneration,
                                                                                     const GALGAS_unifiedTypeMapEntry & in_mReturnTypeProxy,
                                                                                     const GALGAS_uint & in_mPropertyIndex,
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

GALGAS_staticListIndirectRoutineIR::GALGAS_staticListIndirectRoutineIR (const cPtr_staticListIndirectRoutineIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_staticListIndirectRoutineIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_staticListIndirectRoutineIR GALGAS_staticListIndirectRoutineIR::class_func_new (const GALGAS_lstring & in_mRoutineMangledName,
                                                                                       const GALGAS_bool & in_isRequired,
                                                                                       const GALGAS_bool & in_warnsIfUnused,
                                                                                       const GALGAS_unifiedTypeMapEntry & in_mStaticListElementType,
                                                                                       const GALGAS_routineTypedSignature & in_mFormalArgumentListForGeneration,
                                                                                       const GALGAS_unifiedTypeMapEntry & in_mReturnTypeProxy,
                                                                                       const GALGAS_uint & in_mPropertyIndex
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_staticListIndirectRoutineIR result ;
  macroMyNew (result.mObjectPtr, cPtr_staticListIndirectRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mStaticListElementType, in_mFormalArgumentListForGeneration, in_mReturnTypeProxy, in_mPropertyIndex COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_staticListIndirectRoutineIR::readProperty_mStaticListElementType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_staticListIndirectRoutineIR * p = (cPtr_staticListIndirectRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListIndirectRoutineIR) ;
    return p->mProperty_mStaticListElementType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListIndirectRoutineIR::setProperty_mStaticListElementType (const GALGAS_unifiedTypeMapEntry & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_staticListIndirectRoutineIR * p = (cPtr_staticListIndirectRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListIndirectRoutineIR) ;
    p->mProperty_mStaticListElementType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineTypedSignature GALGAS_staticListIndirectRoutineIR::readProperty_mFormalArgumentListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_routineTypedSignature () ;
  }else{
    cPtr_staticListIndirectRoutineIR * p = (cPtr_staticListIndirectRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListIndirectRoutineIR) ;
    return p->mProperty_mFormalArgumentListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListIndirectRoutineIR::setProperty_mFormalArgumentListForGeneration (const GALGAS_routineTypedSignature & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_staticListIndirectRoutineIR * p = (cPtr_staticListIndirectRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListIndirectRoutineIR) ;
    p->mProperty_mFormalArgumentListForGeneration = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_staticListIndirectRoutineIR::readProperty_mReturnTypeProxy (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_staticListIndirectRoutineIR * p = (cPtr_staticListIndirectRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListIndirectRoutineIR) ;
    return p->mProperty_mReturnTypeProxy ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListIndirectRoutineIR::setProperty_mReturnTypeProxy (const GALGAS_unifiedTypeMapEntry & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_staticListIndirectRoutineIR * p = (cPtr_staticListIndirectRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListIndirectRoutineIR) ;
    p->mProperty_mReturnTypeProxy = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_staticListIndirectRoutineIR::readProperty_mPropertyIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_staticListIndirectRoutineIR * p = (cPtr_staticListIndirectRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListIndirectRoutineIR) ;
    return p->mProperty_mPropertyIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListIndirectRoutineIR::setProperty_mPropertyIndex (const GALGAS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_staticListIndirectRoutineIR * p = (cPtr_staticListIndirectRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticListIndirectRoutineIR) ;
    p->mProperty_mPropertyIndex = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @staticListIndirectRoutineIR class
//--------------------------------------------------------------------------------------------------

cPtr_staticListIndirectRoutineIR::cPtr_staticListIndirectRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                                    const GALGAS_bool & in_isRequired,
                                                                    const GALGAS_bool & in_warnsIfUnused,
                                                                    const GALGAS_unifiedTypeMapEntry & in_mStaticListElementType,
                                                                    const GALGAS_routineTypedSignature & in_mFormalArgumentListForGeneration,
                                                                    const GALGAS_unifiedTypeMapEntry & in_mReturnTypeProxy,
                                                                    const GALGAS_uint & in_mPropertyIndex
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
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

acPtr_class * cPtr_staticListIndirectRoutineIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_staticListIndirectRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mStaticListElementType, mProperty_mFormalArgumentListForGeneration, mProperty_mReturnTypeProxy, mProperty_mPropertyIndex COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @staticListIndirectRoutineIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListIndirectRoutineIR ("staticListIndirectRoutineIR",
                                                                                   & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_staticListIndirectRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListIndirectRoutineIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_staticListIndirectRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticListIndirectRoutineIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListIndirectRoutineIR GALGAS_staticListIndirectRoutineIR::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_staticListIndirectRoutineIR result ;
  const GALGAS_staticListIndirectRoutineIR * p = (const GALGAS_staticListIndirectRoutineIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_staticListIndirectRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListIndirectRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedTaskList_2D_element::GALGAS_decoratedTaskList_2D_element (void) :
mProperty_mTaskName (),
mProperty_mStackSize (),
mProperty_mTaskSetupListAST (),
mProperty_mTaskActivateListAST (),
mProperty_mTaskDeactivateListAST (),
mProperty_mEndOfTaskDeclaration (),
mProperty_mAutoStart () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedTaskList_2D_element::~ GALGAS_decoratedTaskList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_decoratedTaskList_2D_element GALGAS_decoratedTaskList_2D_element::init_21__21__21__21__21__21__21_ (const GALGAS_lstring & in_mTaskName,
                                                                                                           const GALGAS_lbigint & in_mStackSize,
                                                                                                           const GALGAS_taskSetupListAST & in_mTaskSetupListAST,
                                                                                                           const GALGAS_taskSetupListAST & in_mTaskActivateListAST,
                                                                                                           const GALGAS_taskSetupListAST & in_mTaskDeactivateListAST,
                                                                                                           const GALGAS_location & in_mEndOfTaskDeclaration,
                                                                                                           const GALGAS_bool & in_mAutoStart,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_decoratedTaskList_2D_element result ;
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

void GALGAS_decoratedTaskList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedTaskList_2D_element::GALGAS_decoratedTaskList_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_lbigint & inOperand1,
                                                                          const GALGAS_taskSetupListAST & inOperand2,
                                                                          const GALGAS_taskSetupListAST & inOperand3,
                                                                          const GALGAS_taskSetupListAST & inOperand4,
                                                                          const GALGAS_location & inOperand5,
                                                                          const GALGAS_bool & inOperand6) :
mProperty_mTaskName (inOperand0),
mProperty_mStackSize (inOperand1),
mProperty_mTaskSetupListAST (inOperand2),
mProperty_mTaskActivateListAST (inOperand3),
mProperty_mTaskDeactivateListAST (inOperand4),
mProperty_mEndOfTaskDeclaration (inOperand5),
mProperty_mAutoStart (inOperand6) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedTaskList_2D_element GALGAS_decoratedTaskList_2D_element::class_func_new (const GALGAS_lstring & in_mTaskName,
                                                                                         const GALGAS_lbigint & in_mStackSize,
                                                                                         const GALGAS_taskSetupListAST & in_mTaskSetupListAST,
                                                                                         const GALGAS_taskSetupListAST & in_mTaskActivateListAST,
                                                                                         const GALGAS_taskSetupListAST & in_mTaskDeactivateListAST,
                                                                                         const GALGAS_location & in_mEndOfTaskDeclaration,
                                                                                         const GALGAS_bool & in_mAutoStart,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_decoratedTaskList_2D_element result ;
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

bool GALGAS_decoratedTaskList_2D_element::isValid (void) const {
  return mProperty_mTaskName.isValid () && mProperty_mStackSize.isValid () && mProperty_mTaskSetupListAST.isValid () && mProperty_mTaskActivateListAST.isValid () && mProperty_mTaskDeactivateListAST.isValid () && mProperty_mEndOfTaskDeclaration.isValid () && mProperty_mAutoStart.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedTaskList_2D_element::drop (void) {
  mProperty_mTaskName.drop () ;
  mProperty_mStackSize.drop () ;
  mProperty_mTaskSetupListAST.drop () ;
  mProperty_mTaskActivateListAST.drop () ;
  mProperty_mTaskDeactivateListAST.drop () ;
  mProperty_mEndOfTaskDeclaration.drop () ;
  mProperty_mAutoStart.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedTaskList_2D_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @decoratedTaskList-element:") ;
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
//     @decoratedTaskList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedTaskList_2D_element ("decoratedTaskList-element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedTaskList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedTaskList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedTaskList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedTaskList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedTaskList_2D_element GALGAS_decoratedTaskList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_decoratedTaskList_2D_element result ;
  const GALGAS_decoratedTaskList_2D_element * p = (const GALGAS_decoratedTaskList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_decoratedTaskList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedTaskList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @taskActivateFunctionIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_taskActivateFunctionIR::cPtr_taskActivateFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mAssemblerTaskName (),
mProperty_mActivateServiceInvocationName (),
mProperty_mTaskIndex () {
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

ComparisonResult GALGAS_taskActivateFunctionIR::objectCompare (const GALGAS_taskActivateFunctionIR & inOperand) const {
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

GALGAS_taskActivateFunctionIR::GALGAS_taskActivateFunctionIR (void) :
GALGAS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_taskActivateFunctionIR GALGAS_taskActivateFunctionIR::
init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (const GALGAS_lstring & in_mRoutineMangledName,
                                                     const GALGAS_bool & in_isRequired,
                                                     const GALGAS_bool & in_warnsIfUnused,
                                                     const GALGAS_string & in_mAssemblerTaskName,
                                                     const GALGAS_string & in_mActivateServiceInvocationName,
                                                     const GALGAS_uint & in_mTaskIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cPtr_taskActivateFunctionIR * object = nullptr ;
  macroMyNew (object, cPtr_taskActivateFunctionIR (inCompiler COMMA_THERE)) ;
  object->taskActivateFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mAssemblerTaskName, in_mActivateServiceInvocationName, in_mTaskIndex, inCompiler) ;
  const GALGAS_taskActivateFunctionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_taskActivateFunctionIR::
taskActivateFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (const GALGAS_lstring & in_mRoutineMangledName,
                                                                            const GALGAS_bool & in_isRequired,
                                                                            const GALGAS_bool & in_warnsIfUnused,
                                                                            const GALGAS_string & in_mAssemblerTaskName,
                                                                            const GALGAS_string & in_mActivateServiceInvocationName,
                                                                            const GALGAS_uint & in_mTaskIndex,
                                                                            Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mAssemblerTaskName = in_mAssemblerTaskName ;
  mProperty_mActivateServiceInvocationName = in_mActivateServiceInvocationName ;
  mProperty_mTaskIndex = in_mTaskIndex ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskActivateFunctionIR::GALGAS_taskActivateFunctionIR (const cPtr_taskActivateFunctionIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_taskActivateFunctionIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_taskActivateFunctionIR GALGAS_taskActivateFunctionIR::class_func_new (const GALGAS_lstring & in_mRoutineMangledName,
                                                                             const GALGAS_bool & in_isRequired,
                                                                             const GALGAS_bool & in_warnsIfUnused,
                                                                             const GALGAS_string & in_mAssemblerTaskName,
                                                                             const GALGAS_string & in_mActivateServiceInvocationName,
                                                                             const GALGAS_uint & in_mTaskIndex
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_taskActivateFunctionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_taskActivateFunctionIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mAssemblerTaskName, in_mActivateServiceInvocationName, in_mTaskIndex COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_taskActivateFunctionIR::readProperty_mAssemblerTaskName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_taskActivateFunctionIR * p = (cPtr_taskActivateFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskActivateFunctionIR) ;
    return p->mProperty_mAssemblerTaskName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskActivateFunctionIR::setProperty_mAssemblerTaskName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_taskActivateFunctionIR * p = (cPtr_taskActivateFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskActivateFunctionIR) ;
    p->mProperty_mAssemblerTaskName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_taskActivateFunctionIR::readProperty_mActivateServiceInvocationName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_taskActivateFunctionIR * p = (cPtr_taskActivateFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskActivateFunctionIR) ;
    return p->mProperty_mActivateServiceInvocationName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskActivateFunctionIR::setProperty_mActivateServiceInvocationName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_taskActivateFunctionIR * p = (cPtr_taskActivateFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskActivateFunctionIR) ;
    p->mProperty_mActivateServiceInvocationName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_taskActivateFunctionIR::readProperty_mTaskIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_taskActivateFunctionIR * p = (cPtr_taskActivateFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskActivateFunctionIR) ;
    return p->mProperty_mTaskIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskActivateFunctionIR::setProperty_mTaskIndex (const GALGAS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_taskActivateFunctionIR * p = (cPtr_taskActivateFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskActivateFunctionIR) ;
    p->mProperty_mTaskIndex = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @taskActivateFunctionIR class
//--------------------------------------------------------------------------------------------------

cPtr_taskActivateFunctionIR::cPtr_taskActivateFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                          const GALGAS_bool & in_isRequired,
                                                          const GALGAS_bool & in_warnsIfUnused,
                                                          const GALGAS_string & in_mAssemblerTaskName,
                                                          const GALGAS_string & in_mActivateServiceInvocationName,
                                                          const GALGAS_uint & in_mTaskIndex
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
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

acPtr_class * cPtr_taskActivateFunctionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_taskActivateFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mAssemblerTaskName, mProperty_mActivateServiceInvocationName, mProperty_mTaskIndex COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @taskActivateFunctionIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskActivateFunctionIR ("taskActivateFunctionIR",
                                                                              & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_taskActivateFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskActivateFunctionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_taskActivateFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskActivateFunctionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskActivateFunctionIR GALGAS_taskActivateFunctionIR::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_taskActivateFunctionIR result ;
  const GALGAS_taskActivateFunctionIR * p = (const GALGAS_taskActivateFunctionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_taskActivateFunctionIR *> (p)) {
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

ComparisonResult GALGAS_taskSetupDeclarationAST::objectCompare (const GALGAS_taskSetupDeclarationAST & inOperand) const {
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

GALGAS_taskSetupDeclarationAST::GALGAS_taskSetupDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_taskSetupDeclarationAST GALGAS_taskSetupDeclarationAST::
init_21__21__21__21__21__21_ (const GALGAS_lstring & in_mTaskName,
                              const GALGAS_string & in_mQualifier,
                              const GALGAS_lstring & in_mSetupName,
                              const GALGAS_lstringlist & in_mDependanceList,
                              const GALGAS_instructionListAST & in_mTaskSetupInstructionList,
                              const GALGAS_location & in_mEndOfTaskSetupDeclaration,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_taskSetupDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_taskSetupDeclarationAST (inCompiler COMMA_THERE)) ;
  object->taskSetupDeclarationAST_init_21__21__21__21__21__21_ (in_mTaskName, in_mQualifier, in_mSetupName, in_mDependanceList, in_mTaskSetupInstructionList, in_mEndOfTaskSetupDeclaration, inCompiler) ;
  const GALGAS_taskSetupDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_taskSetupDeclarationAST::
taskSetupDeclarationAST_init_21__21__21__21__21__21_ (const GALGAS_lstring & in_mTaskName,
                                                      const GALGAS_string & in_mQualifier,
                                                      const GALGAS_lstring & in_mSetupName,
                                                      const GALGAS_lstringlist & in_mDependanceList,
                                                      const GALGAS_instructionListAST & in_mTaskSetupInstructionList,
                                                      const GALGAS_location & in_mEndOfTaskSetupDeclaration,
                                                      Compiler * /* inCompiler */) {
  mProperty_mTaskName = in_mTaskName ;
  mProperty_mQualifier = in_mQualifier ;
  mProperty_mSetupName = in_mSetupName ;
  mProperty_mDependanceList = in_mDependanceList ;
  mProperty_mTaskSetupInstructionList = in_mTaskSetupInstructionList ;
  mProperty_mEndOfTaskSetupDeclaration = in_mEndOfTaskSetupDeclaration ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskSetupDeclarationAST::GALGAS_taskSetupDeclarationAST (const cPtr_taskSetupDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_taskSetupDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_taskSetupDeclarationAST GALGAS_taskSetupDeclarationAST::class_func_new (const GALGAS_lstring & in_mTaskName,
                                                                               const GALGAS_string & in_mQualifier,
                                                                               const GALGAS_lstring & in_mSetupName,
                                                                               const GALGAS_lstringlist & in_mDependanceList,
                                                                               const GALGAS_instructionListAST & in_mTaskSetupInstructionList,
                                                                               const GALGAS_location & in_mEndOfTaskSetupDeclaration
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_taskSetupDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_taskSetupDeclarationAST (in_mTaskName, in_mQualifier, in_mSetupName, in_mDependanceList, in_mTaskSetupInstructionList, in_mEndOfTaskSetupDeclaration COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_taskSetupDeclarationAST::readProperty_mTaskName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_taskSetupDeclarationAST * p = (cPtr_taskSetupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskSetupDeclarationAST) ;
    return p->mProperty_mTaskName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskSetupDeclarationAST::setProperty_mTaskName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_taskSetupDeclarationAST * p = (cPtr_taskSetupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskSetupDeclarationAST) ;
    p->mProperty_mTaskName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_taskSetupDeclarationAST::readProperty_mQualifier (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_taskSetupDeclarationAST * p = (cPtr_taskSetupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskSetupDeclarationAST) ;
    return p->mProperty_mQualifier ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskSetupDeclarationAST::setProperty_mQualifier (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_taskSetupDeclarationAST * p = (cPtr_taskSetupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskSetupDeclarationAST) ;
    p->mProperty_mQualifier = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_taskSetupDeclarationAST::readProperty_mSetupName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_taskSetupDeclarationAST * p = (cPtr_taskSetupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskSetupDeclarationAST) ;
    return p->mProperty_mSetupName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskSetupDeclarationAST::setProperty_mSetupName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_taskSetupDeclarationAST * p = (cPtr_taskSetupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskSetupDeclarationAST) ;
    p->mProperty_mSetupName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_taskSetupDeclarationAST::readProperty_mDependanceList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_taskSetupDeclarationAST * p = (cPtr_taskSetupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskSetupDeclarationAST) ;
    return p->mProperty_mDependanceList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskSetupDeclarationAST::setProperty_mDependanceList (const GALGAS_lstringlist & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_taskSetupDeclarationAST * p = (cPtr_taskSetupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskSetupDeclarationAST) ;
    p->mProperty_mDependanceList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListAST GALGAS_taskSetupDeclarationAST::readProperty_mTaskSetupInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListAST () ;
  }else{
    cPtr_taskSetupDeclarationAST * p = (cPtr_taskSetupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskSetupDeclarationAST) ;
    return p->mProperty_mTaskSetupInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskSetupDeclarationAST::setProperty_mTaskSetupInstructionList (const GALGAS_instructionListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_taskSetupDeclarationAST * p = (cPtr_taskSetupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskSetupDeclarationAST) ;
    p->mProperty_mTaskSetupInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_taskSetupDeclarationAST::readProperty_mEndOfTaskSetupDeclaration (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_taskSetupDeclarationAST * p = (cPtr_taskSetupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskSetupDeclarationAST) ;
    return p->mProperty_mEndOfTaskSetupDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskSetupDeclarationAST::setProperty_mEndOfTaskSetupDeclaration (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_taskSetupDeclarationAST * p = (cPtr_taskSetupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskSetupDeclarationAST) ;
    p->mProperty_mEndOfTaskSetupDeclaration = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @taskSetupDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_taskSetupDeclarationAST::cPtr_taskSetupDeclarationAST (const GALGAS_lstring & in_mTaskName,
                                                            const GALGAS_string & in_mQualifier,
                                                            const GALGAS_lstring & in_mSetupName,
                                                            const GALGAS_lstringlist & in_mDependanceList,
                                                            const GALGAS_instructionListAST & in_mTaskSetupInstructionList,
                                                            const GALGAS_location & in_mEndOfTaskSetupDeclaration
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
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

acPtr_class * cPtr_taskSetupDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_taskSetupDeclarationAST (mProperty_mTaskName, mProperty_mQualifier, mProperty_mSetupName, mProperty_mDependanceList, mProperty_mTaskSetupInstructionList, mProperty_mEndOfTaskSetupDeclaration COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @taskSetupDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskSetupDeclarationAST ("taskSetupDeclarationAST",
                                                                               & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_taskSetupDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskSetupDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_taskSetupDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskSetupDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskSetupDeclarationAST GALGAS_taskSetupDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_taskSetupDeclarationAST result ;
  const GALGAS_taskSetupDeclarationAST * p = (const GALGAS_taskSetupDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_taskSetupDeclarationAST *> (p)) {
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

ComparisonResult GALGAS_functionDeclarationAST::objectCompare (const GALGAS_functionDeclarationAST & inOperand) const {
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

GALGAS_functionDeclarationAST::GALGAS_functionDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_functionDeclarationAST GALGAS_functionDeclarationAST::
init_21__21__21__21__21__21__21__21__21_ (const GALGAS_mode & in_mMode,
                                          const GALGAS_bool & in_mPublicFunction,
                                          const GALGAS_lstring & in_mReceiverTypeName,
                                          const GALGAS_lstring & in_mFunctionName,
                                          const GALGAS_lstringlist & in_mFunctionAttributeList,
                                          const GALGAS_routineFormalArgumentListAST & in_mFunctionFormalArgumentList,
                                          const GALGAS_lstring & in_mFunctionReturnTypeName,
                                          const GALGAS_instructionListAST & in_mFunctionInstructionList,
                                          const GALGAS_location & in_mEndOfFunctionDeclaration,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cPtr_functionDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_functionDeclarationAST (inCompiler COMMA_THERE)) ;
  object->functionDeclarationAST_init_21__21__21__21__21__21__21__21__21_ (in_mMode, in_mPublicFunction, in_mReceiverTypeName, in_mFunctionName, in_mFunctionAttributeList, in_mFunctionFormalArgumentList, in_mFunctionReturnTypeName, in_mFunctionInstructionList, in_mEndOfFunctionDeclaration, inCompiler) ;
  const GALGAS_functionDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_functionDeclarationAST::
functionDeclarationAST_init_21__21__21__21__21__21__21__21__21_ (const GALGAS_mode & in_mMode,
                                                                 const GALGAS_bool & in_mPublicFunction,
                                                                 const GALGAS_lstring & in_mReceiverTypeName,
                                                                 const GALGAS_lstring & in_mFunctionName,
                                                                 const GALGAS_lstringlist & in_mFunctionAttributeList,
                                                                 const GALGAS_routineFormalArgumentListAST & in_mFunctionFormalArgumentList,
                                                                 const GALGAS_lstring & in_mFunctionReturnTypeName,
                                                                 const GALGAS_instructionListAST & in_mFunctionInstructionList,
                                                                 const GALGAS_location & in_mEndOfFunctionDeclaration,
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

GALGAS_functionDeclarationAST::GALGAS_functionDeclarationAST (const cPtr_functionDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_functionDeclarationAST GALGAS_functionDeclarationAST::class_func_new (const GALGAS_mode & in_mMode,
                                                                             const GALGAS_bool & in_mPublicFunction,
                                                                             const GALGAS_lstring & in_mReceiverTypeName,
                                                                             const GALGAS_lstring & in_mFunctionName,
                                                                             const GALGAS_lstringlist & in_mFunctionAttributeList,
                                                                             const GALGAS_routineFormalArgumentListAST & in_mFunctionFormalArgumentList,
                                                                             const GALGAS_lstring & in_mFunctionReturnTypeName,
                                                                             const GALGAS_instructionListAST & in_mFunctionInstructionList,
                                                                             const GALGAS_location & in_mEndOfFunctionDeclaration
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_functionDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_functionDeclarationAST (in_mMode, in_mPublicFunction, in_mReceiverTypeName, in_mFunctionName, in_mFunctionAttributeList, in_mFunctionFormalArgumentList, in_mFunctionReturnTypeName, in_mFunctionInstructionList, in_mEndOfFunctionDeclaration COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mode GALGAS_functionDeclarationAST::readProperty_mMode (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_mode () ;
  }else{
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    return p->mProperty_mMode ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_functionDeclarationAST::setProperty_mMode (const GALGAS_mode & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    p->mProperty_mMode = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_functionDeclarationAST::readProperty_mPublicFunction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    return p->mProperty_mPublicFunction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_functionDeclarationAST::setProperty_mPublicFunction (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    p->mProperty_mPublicFunction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_functionDeclarationAST::readProperty_mReceiverTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    return p->mProperty_mReceiverTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_functionDeclarationAST::setProperty_mReceiverTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    p->mProperty_mReceiverTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_functionDeclarationAST::readProperty_mFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    return p->mProperty_mFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_functionDeclarationAST::setProperty_mFunctionName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    p->mProperty_mFunctionName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_functionDeclarationAST::readProperty_mFunctionAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    return p->mProperty_mFunctionAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_functionDeclarationAST::setProperty_mFunctionAttributeList (const GALGAS_lstringlist & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    p->mProperty_mFunctionAttributeList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListAST GALGAS_functionDeclarationAST::readProperty_mFunctionFormalArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_routineFormalArgumentListAST () ;
  }else{
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    return p->mProperty_mFunctionFormalArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_functionDeclarationAST::setProperty_mFunctionFormalArgumentList (const GALGAS_routineFormalArgumentListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    p->mProperty_mFunctionFormalArgumentList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_functionDeclarationAST::readProperty_mFunctionReturnTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    return p->mProperty_mFunctionReturnTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_functionDeclarationAST::setProperty_mFunctionReturnTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    p->mProperty_mFunctionReturnTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListAST GALGAS_functionDeclarationAST::readProperty_mFunctionInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListAST () ;
  }else{
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    return p->mProperty_mFunctionInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_functionDeclarationAST::setProperty_mFunctionInstructionList (const GALGAS_instructionListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    p->mProperty_mFunctionInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_functionDeclarationAST::readProperty_mEndOfFunctionDeclaration (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    return p->mProperty_mEndOfFunctionDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_functionDeclarationAST::setProperty_mEndOfFunctionDeclaration (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    p->mProperty_mEndOfFunctionDeclaration = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @functionDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_functionDeclarationAST::cPtr_functionDeclarationAST (const GALGAS_mode & in_mMode,
                                                          const GALGAS_bool & in_mPublicFunction,
                                                          const GALGAS_lstring & in_mReceiverTypeName,
                                                          const GALGAS_lstring & in_mFunctionName,
                                                          const GALGAS_lstringlist & in_mFunctionAttributeList,
                                                          const GALGAS_routineFormalArgumentListAST & in_mFunctionFormalArgumentList,
                                                          const GALGAS_lstring & in_mFunctionReturnTypeName,
                                                          const GALGAS_instructionListAST & in_mFunctionInstructionList,
                                                          const GALGAS_location & in_mEndOfFunctionDeclaration
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
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

acPtr_class * cPtr_functionDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_functionDeclarationAST (mProperty_mMode, mProperty_mPublicFunction, mProperty_mReceiverTypeName, mProperty_mFunctionName, mProperty_mFunctionAttributeList, mProperty_mFunctionFormalArgumentList, mProperty_mFunctionReturnTypeName, mProperty_mFunctionInstructionList, mProperty_mEndOfFunctionDeclaration COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @functionDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionDeclarationAST ("functionDeclarationAST",
                                                                              & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_functionDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_functionDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionDeclarationAST GALGAS_functionDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_functionDeclarationAST result ;
  const GALGAS_functionDeclarationAST * p = (const GALGAS_functionDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_functionDeclarationAST *> (p)) {
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

ComparisonResult GALGAS_systemRoutineDeclarationAST::objectCompare (const GALGAS_systemRoutineDeclarationAST & inOperand) const {
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

GALGAS_systemRoutineDeclarationAST::GALGAS_systemRoutineDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_systemRoutineDeclarationAST GALGAS_systemRoutineDeclarationAST::
init_21__21__21__21__21__21__21__21__21_ (const GALGAS_lstring & in_mReceiverTypeName,
                                          const GALGAS_lstring & in_mSystemRoutineName,
                                          const GALGAS_mode & in_mMode,
                                          const GALGAS_bool & in_mPublic,
                                          const GALGAS_lstringlist & in_mAttributeList,
                                          const GALGAS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                          const GALGAS_lstring & in_mReturnTypeName,
                                          const GALGAS_instructionListAST & in_mInstructionList,
                                          const GALGAS_location & in_mEndOfInstructionListLocation,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cPtr_systemRoutineDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_systemRoutineDeclarationAST (inCompiler COMMA_THERE)) ;
  object->systemRoutineDeclarationAST_init_21__21__21__21__21__21__21__21__21_ (in_mReceiverTypeName, in_mSystemRoutineName, in_mMode, in_mPublic, in_mAttributeList, in_mFormalArgumentList, in_mReturnTypeName, in_mInstructionList, in_mEndOfInstructionListLocation, inCompiler) ;
  const GALGAS_systemRoutineDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_systemRoutineDeclarationAST::
systemRoutineDeclarationAST_init_21__21__21__21__21__21__21__21__21_ (const GALGAS_lstring & in_mReceiverTypeName,
                                                                      const GALGAS_lstring & in_mSystemRoutineName,
                                                                      const GALGAS_mode & in_mMode,
                                                                      const GALGAS_bool & in_mPublic,
                                                                      const GALGAS_lstringlist & in_mAttributeList,
                                                                      const GALGAS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                                                      const GALGAS_lstring & in_mReturnTypeName,
                                                                      const GALGAS_instructionListAST & in_mInstructionList,
                                                                      const GALGAS_location & in_mEndOfInstructionListLocation,
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

GALGAS_systemRoutineDeclarationAST::GALGAS_systemRoutineDeclarationAST (const cPtr_systemRoutineDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_systemRoutineDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_systemRoutineDeclarationAST GALGAS_systemRoutineDeclarationAST::class_func_new (const GALGAS_lstring & in_mReceiverTypeName,
                                                                                       const GALGAS_lstring & in_mSystemRoutineName,
                                                                                       const GALGAS_mode & in_mMode,
                                                                                       const GALGAS_bool & in_mPublic,
                                                                                       const GALGAS_lstringlist & in_mAttributeList,
                                                                                       const GALGAS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                                                                       const GALGAS_lstring & in_mReturnTypeName,
                                                                                       const GALGAS_instructionListAST & in_mInstructionList,
                                                                                       const GALGAS_location & in_mEndOfInstructionListLocation
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_systemRoutineDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_systemRoutineDeclarationAST (in_mReceiverTypeName, in_mSystemRoutineName, in_mMode, in_mPublic, in_mAttributeList, in_mFormalArgumentList, in_mReturnTypeName, in_mInstructionList, in_mEndOfInstructionListLocation COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_systemRoutineDeclarationAST::readProperty_mReceiverTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    return p->mProperty_mReceiverTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_systemRoutineDeclarationAST::setProperty_mReceiverTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    p->mProperty_mReceiverTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_systemRoutineDeclarationAST::readProperty_mSystemRoutineName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    return p->mProperty_mSystemRoutineName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_systemRoutineDeclarationAST::setProperty_mSystemRoutineName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    p->mProperty_mSystemRoutineName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_mode GALGAS_systemRoutineDeclarationAST::readProperty_mMode (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_mode () ;
  }else{
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    return p->mProperty_mMode ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_systemRoutineDeclarationAST::setProperty_mMode (const GALGAS_mode & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    p->mProperty_mMode = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_systemRoutineDeclarationAST::readProperty_mPublic (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    return p->mProperty_mPublic ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_systemRoutineDeclarationAST::setProperty_mPublic (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    p->mProperty_mPublic = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_systemRoutineDeclarationAST::readProperty_mAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    return p->mProperty_mAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_systemRoutineDeclarationAST::setProperty_mAttributeList (const GALGAS_lstringlist & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    p->mProperty_mAttributeList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListAST GALGAS_systemRoutineDeclarationAST::readProperty_mFormalArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_routineFormalArgumentListAST () ;
  }else{
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    return p->mProperty_mFormalArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_systemRoutineDeclarationAST::setProperty_mFormalArgumentList (const GALGAS_routineFormalArgumentListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    p->mProperty_mFormalArgumentList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_systemRoutineDeclarationAST::readProperty_mReturnTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    return p->mProperty_mReturnTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_systemRoutineDeclarationAST::setProperty_mReturnTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    p->mProperty_mReturnTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListAST GALGAS_systemRoutineDeclarationAST::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListAST () ;
  }else{
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_systemRoutineDeclarationAST::setProperty_mInstructionList (const GALGAS_instructionListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_systemRoutineDeclarationAST::readProperty_mEndOfInstructionListLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    return p->mProperty_mEndOfInstructionListLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_systemRoutineDeclarationAST::setProperty_mEndOfInstructionListLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemRoutineDeclarationAST) ;
    p->mProperty_mEndOfInstructionListLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @systemRoutineDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_systemRoutineDeclarationAST::cPtr_systemRoutineDeclarationAST (const GALGAS_lstring & in_mReceiverTypeName,
                                                                    const GALGAS_lstring & in_mSystemRoutineName,
                                                                    const GALGAS_mode & in_mMode,
                                                                    const GALGAS_bool & in_mPublic,
                                                                    const GALGAS_lstringlist & in_mAttributeList,
                                                                    const GALGAS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                                                    const GALGAS_lstring & in_mReturnTypeName,
                                                                    const GALGAS_instructionListAST & in_mInstructionList,
                                                                    const GALGAS_location & in_mEndOfInstructionListLocation
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
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

acPtr_class * cPtr_systemRoutineDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_systemRoutineDeclarationAST (mProperty_mReceiverTypeName, mProperty_mSystemRoutineName, mProperty_mMode, mProperty_mPublic, mProperty_mAttributeList, mProperty_mFormalArgumentList, mProperty_mReturnTypeName, mProperty_mInstructionList, mProperty_mEndOfInstructionListLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @systemRoutineDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_systemRoutineDeclarationAST ("systemRoutineDeclarationAST",
                                                                                   & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_systemRoutineDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_systemRoutineDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_systemRoutineDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_systemRoutineDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_systemRoutineDeclarationAST GALGAS_systemRoutineDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_systemRoutineDeclarationAST result ;
  const GALGAS_systemRoutineDeclarationAST * p = (const GALGAS_systemRoutineDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_systemRoutineDeclarationAST *> (p)) {
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

cPtr_systemUserRoutineIR::cPtr_systemUserRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mMangledImplementationName (),
mProperty_mFormalArgumentList (),
mProperty_mReceiverTypeProxy (),
mProperty_mIsSection (),
mProperty_mReturnTypeProxy () {
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

ComparisonResult GALGAS_systemUserRoutineIR::objectCompare (const GALGAS_systemUserRoutineIR & inOperand) const {
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

GALGAS_systemUserRoutineIR::GALGAS_systemUserRoutineIR (void) :
GALGAS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_systemUserRoutineIR GALGAS_systemUserRoutineIR::
init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (const GALGAS_lstring & in_mRoutineMangledName,
                                                             const GALGAS_bool & in_isRequired,
                                                             const GALGAS_bool & in_warnsIfUnused,
                                                             const GALGAS_string & in_mMangledImplementationName,
                                                             const GALGAS_routineTypedSignature & in_mFormalArgumentList,
                                                             const GALGAS_unifiedTypeMapEntry & in_mReceiverTypeProxy,
                                                             const GALGAS_bool & in_mIsSection,
                                                             const GALGAS_unifiedTypeMapEntry & in_mReturnTypeProxy,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cPtr_systemUserRoutineIR * object = nullptr ;
  macroMyNew (object, cPtr_systemUserRoutineIR (inCompiler COMMA_THERE)) ;
  object->systemUserRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mMangledImplementationName, in_mFormalArgumentList, in_mReceiverTypeProxy, in_mIsSection, in_mReturnTypeProxy, inCompiler) ;
  const GALGAS_systemUserRoutineIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_systemUserRoutineIR::
systemUserRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (const GALGAS_lstring & in_mRoutineMangledName,
                                                                                 const GALGAS_bool & in_isRequired,
                                                                                 const GALGAS_bool & in_warnsIfUnused,
                                                                                 const GALGAS_string & in_mMangledImplementationName,
                                                                                 const GALGAS_routineTypedSignature & in_mFormalArgumentList,
                                                                                 const GALGAS_unifiedTypeMapEntry & in_mReceiverTypeProxy,
                                                                                 const GALGAS_bool & in_mIsSection,
                                                                                 const GALGAS_unifiedTypeMapEntry & in_mReturnTypeProxy,
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

GALGAS_systemUserRoutineIR::GALGAS_systemUserRoutineIR (const cPtr_systemUserRoutineIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_systemUserRoutineIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_systemUserRoutineIR GALGAS_systemUserRoutineIR::class_func_new (const GALGAS_lstring & in_mRoutineMangledName,
                                                                       const GALGAS_bool & in_isRequired,
                                                                       const GALGAS_bool & in_warnsIfUnused,
                                                                       const GALGAS_string & in_mMangledImplementationName,
                                                                       const GALGAS_routineTypedSignature & in_mFormalArgumentList,
                                                                       const GALGAS_unifiedTypeMapEntry & in_mReceiverTypeProxy,
                                                                       const GALGAS_bool & in_mIsSection,
                                                                       const GALGAS_unifiedTypeMapEntry & in_mReturnTypeProxy
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_systemUserRoutineIR result ;
  macroMyNew (result.mObjectPtr, cPtr_systemUserRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mMangledImplementationName, in_mFormalArgumentList, in_mReceiverTypeProxy, in_mIsSection, in_mReturnTypeProxy COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_systemUserRoutineIR::readProperty_mMangledImplementationName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_systemUserRoutineIR * p = (cPtr_systemUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemUserRoutineIR) ;
    return p->mProperty_mMangledImplementationName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_systemUserRoutineIR::setProperty_mMangledImplementationName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_systemUserRoutineIR * p = (cPtr_systemUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemUserRoutineIR) ;
    p->mProperty_mMangledImplementationName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineTypedSignature GALGAS_systemUserRoutineIR::readProperty_mFormalArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_routineTypedSignature () ;
  }else{
    cPtr_systemUserRoutineIR * p = (cPtr_systemUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemUserRoutineIR) ;
    return p->mProperty_mFormalArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_systemUserRoutineIR::setProperty_mFormalArgumentList (const GALGAS_routineTypedSignature & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_systemUserRoutineIR * p = (cPtr_systemUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemUserRoutineIR) ;
    p->mProperty_mFormalArgumentList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_systemUserRoutineIR::readProperty_mReceiverTypeProxy (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_systemUserRoutineIR * p = (cPtr_systemUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemUserRoutineIR) ;
    return p->mProperty_mReceiverTypeProxy ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_systemUserRoutineIR::setProperty_mReceiverTypeProxy (const GALGAS_unifiedTypeMapEntry & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_systemUserRoutineIR * p = (cPtr_systemUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemUserRoutineIR) ;
    p->mProperty_mReceiverTypeProxy = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_systemUserRoutineIR::readProperty_mIsSection (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_systemUserRoutineIR * p = (cPtr_systemUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemUserRoutineIR) ;
    return p->mProperty_mIsSection ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_systemUserRoutineIR::setProperty_mIsSection (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_systemUserRoutineIR * p = (cPtr_systemUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemUserRoutineIR) ;
    p->mProperty_mIsSection = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_systemUserRoutineIR::readProperty_mReturnTypeProxy (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_systemUserRoutineIR * p = (cPtr_systemUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemUserRoutineIR) ;
    return p->mProperty_mReturnTypeProxy ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_systemUserRoutineIR::setProperty_mReturnTypeProxy (const GALGAS_unifiedTypeMapEntry & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_systemUserRoutineIR * p = (cPtr_systemUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_systemUserRoutineIR) ;
    p->mProperty_mReturnTypeProxy = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @systemUserRoutineIR class
//--------------------------------------------------------------------------------------------------

cPtr_systemUserRoutineIR::cPtr_systemUserRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                    const GALGAS_bool & in_isRequired,
                                                    const GALGAS_bool & in_warnsIfUnused,
                                                    const GALGAS_string & in_mMangledImplementationName,
                                                    const GALGAS_routineTypedSignature & in_mFormalArgumentList,
                                                    const GALGAS_unifiedTypeMapEntry & in_mReceiverTypeProxy,
                                                    const GALGAS_bool & in_mIsSection,
                                                    const GALGAS_unifiedTypeMapEntry & in_mReturnTypeProxy
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
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

acPtr_class * cPtr_systemUserRoutineIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_systemUserRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mMangledImplementationName, mProperty_mFormalArgumentList, mProperty_mReceiverTypeProxy, mProperty_mIsSection, mProperty_mReturnTypeProxy COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @systemUserRoutineIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_systemUserRoutineIR ("systemUserRoutineIR",
                                                                           & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_systemUserRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_systemUserRoutineIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_systemUserRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_systemUserRoutineIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_systemUserRoutineIR GALGAS_systemUserRoutineIR::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_systemUserRoutineIR result ;
  const GALGAS_systemUserRoutineIR * p = (const GALGAS_systemUserRoutineIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_systemUserRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("systemUserRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externFunctionDeclarationListAST_2D_element::GALGAS_externFunctionDeclarationListAST_2D_element (void) :
mProperty_mExternProcedureName (),
mProperty_mMode (),
mProperty_mAttributeList (),
mProperty_mProcFormalArgumentList (),
mProperty_mReturnTypeName (),
mProperty_mRoutineNameForGeneration (),
mProperty_mEndOfProcLocation () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externFunctionDeclarationListAST_2D_element::~ GALGAS_externFunctionDeclarationListAST_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_externFunctionDeclarationListAST_2D_element GALGAS_externFunctionDeclarationListAST_2D_element::init_21__21__21__21__21__21__21_ (const GALGAS_lstring & in_mExternProcedureName,
                                                                                                                                         const GALGAS_mode & in_mMode,
                                                                                                                                         const GALGAS_lstringlist & in_mAttributeList,
                                                                                                                                         const GALGAS_routineFormalArgumentListAST & in_mProcFormalArgumentList,
                                                                                                                                         const GALGAS_lstring & in_mReturnTypeName,
                                                                                                                                         const GALGAS_lstring & in_mRoutineNameForGeneration,
                                                                                                                                         const GALGAS_location & in_mEndOfProcLocation,
                                                                                                                                         Compiler * inCompiler
                                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_externFunctionDeclarationListAST_2D_element result ;
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

void GALGAS_externFunctionDeclarationListAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_externFunctionDeclarationListAST_2D_element GALGAS_externFunctionDeclarationListAST_2D_element::class_func_new (const GALGAS_lstring & in_mExternProcedureName,
                                                                                                                       const GALGAS_mode & in_mMode,
                                                                                                                       const GALGAS_lstringlist & in_mAttributeList,
                                                                                                                       const GALGAS_routineFormalArgumentListAST & in_mProcFormalArgumentList,
                                                                                                                       const GALGAS_lstring & in_mReturnTypeName,
                                                                                                                       const GALGAS_lstring & in_mRoutineNameForGeneration,
                                                                                                                       const GALGAS_location & in_mEndOfProcLocation,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_externFunctionDeclarationListAST_2D_element result ;
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

bool GALGAS_externFunctionDeclarationListAST_2D_element::isValid (void) const {
  return mProperty_mExternProcedureName.isValid () && mProperty_mMode.isValid () && mProperty_mAttributeList.isValid () && mProperty_mProcFormalArgumentList.isValid () && mProperty_mReturnTypeName.isValid () && mProperty_mRoutineNameForGeneration.isValid () && mProperty_mEndOfProcLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externFunctionDeclarationListAST_2D_element::drop (void) {
  mProperty_mExternProcedureName.drop () ;
  mProperty_mMode.drop () ;
  mProperty_mAttributeList.drop () ;
  mProperty_mProcFormalArgumentList.drop () ;
  mProperty_mReturnTypeName.drop () ;
  mProperty_mRoutineNameForGeneration.drop () ;
  mProperty_mEndOfProcLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externFunctionDeclarationListAST_2D_element::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @externFunctionDeclarationListAST-element:") ;
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
//     @externFunctionDeclarationListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externFunctionDeclarationListAST_2D_element ("externFunctionDeclarationListAST-element",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externFunctionDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externFunctionDeclarationListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externFunctionDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externFunctionDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externFunctionDeclarationListAST_2D_element GALGAS_externFunctionDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_externFunctionDeclarationListAST_2D_element result ;
  const GALGAS_externFunctionDeclarationListAST_2D_element * p = (const GALGAS_externFunctionDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_externFunctionDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externFunctionDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@externFunctionDeclarationListAST-element externProcedureSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_externProcedureSemanticAnalysis (const GALGAS_externFunctionDeclarationListAST_2D_element inObject,
                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                      GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                      GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineFormalArgumentListIR temp_0 = GALGAS_routineFormalArgumentListIR::init (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 130)) ;
  GALGAS_routineFormalArgumentListIR var_formalArguments_5417 = temp_0 ;
  GALGAS_universalValuedObjectMap joker_5525 = GALGAS_universalValuedObjectMap::init (inCompiler COMMA_HERE) ;
  {
  const GALGAS_externFunctionDeclarationListAST_2D_element temp_1 = inObject ;
  routine_enterFormalArguments_3F_context_3F__26__26__3F_warningOnUnusedArgs (constinArgument_inContext, temp_1.readProperty_mProcFormalArgumentList (), joker_5525, var_formalArguments_5417, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 131)) ;
  }
  const GALGAS_externFunctionDeclarationListAST_2D_element temp_2 = inObject ;
  GALGAS_unifiedTypeMapEntry temp_3 ;
  const enumGalgasBool test_4 = GALGAS_bool (ComparisonKind::equal, temp_2.readProperty_mReturnTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    temp_3 = GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-extern-proc.galgas", 140)) ;
  }else if (kBoolFalse == test_4) {
    const GALGAS_externFunctionDeclarationListAST_2D_element temp_5 = inObject ;
    temp_3 = extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_5.readProperty_mReturnTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 142)) ;
  }
  GALGAS_unifiedTypeMapEntry var_returnType_5617 = temp_3 ;
  {
  const GALGAS_externFunctionDeclarationListAST_2D_element temp_6 = inObject ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mExternProcedureMapIR.setter_insertKey (temp_6.readProperty_mRoutineNameForGeneration (), var_formalArguments_5417, var_returnType_5617, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 145)) ;
  }
  const GALGAS_externFunctionDeclarationListAST_2D_element temp_7 = inObject ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssign_operation (GALGAS_externRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21__21_ (temp_7.readProperty_mRoutineNameForGeneration (), GALGAS_bool (false), GALGAS_bool (false), var_formalArguments_5417, var_returnType_5617, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 150)) ;
}


